/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_9, var_10));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_19 += (((arr_8 [i_2]) ? (~var_16) : (arr_7 [i_0] [i_2 + 1] [i_1])));
                    var_20 = (max(var_20, (arr_3 [i_1])));
                    var_21 += (~var_2);
                }
            }
        }
    }
    var_22 = var_10;
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            {
                var_23 += ((~(((arr_13 [i_4 - 1] [2] [i_3 - 4]) | -18758))));
                var_24 = (((arr_11 [i_3]) && (((((((6617 < (arr_10 [i_3]))))) - (min((arr_13 [i_3] [i_3] [i_4 - 1]), (arr_12 [i_3]))))))));
            }
        }
    }
    var_25 = ((-var_5 ? (((((-1 ? var_15 : var_13))) ? (~32342) : (min(1, var_16)))) : -28));
    #pragma endscop
}
