/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (--615857994);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = (min((!var_15), (((!(arr_8 [i_0] [i_0] [i_2]))))));
                    var_19 = (((-(min(var_5, var_8)))));
                }
            }
        }
    }
    var_20 = ((min(127, (min(var_1, var_12)))));
    /* LoopNest 3 */
    for (int i_3 = 4; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                {
                    var_21 = ((min((arr_15 [i_3] [i_3 + 4] [i_5] [i_3]), (max((arr_9 [i_3]), (arr_14 [i_5]))))));
                    var_22 = ((~(min(var_13, var_8))));
                }
            }
        }
    }
    #pragma endscop
}
