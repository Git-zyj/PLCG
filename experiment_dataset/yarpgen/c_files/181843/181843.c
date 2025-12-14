/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_11 ? -30 : ((min(var_5, var_12)))))) ? (((28489 | var_6) | (((var_18 >> (var_12 - 77)))))) : ((((min(115, var_8))) ? (max(17355589489250951836, var_12)) : (((max(var_9, -83))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 -= (min((arr_4 [i_0 - 2] [i_1]), (((arr_1 [i_0 - 2]) ? ((min(var_18, (arr_0 [6])))) : (~2100802898191367702)))));
                var_22 = (min(var_22, -9875));
            }
        }
    }
    var_23 += 2100802898191367708;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    arr_15 [i_4] [i_4] [i_4] = arr_7 [i_4] [i_2];
                    var_24 = ((~(((arr_4 [i_2] [i_3]) ^ (arr_4 [i_2] [i_4])))));
                }
            }
        }
    }
    #pragma endscop
}
