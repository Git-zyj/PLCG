/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_14 ^= ((min(var_10, var_2)));
                            var_15 = ((!((min(62, -2025949277)))));
                            var_16 = (((arr_8 [i_1] [i_2 + 2]) >= (((arr_10 [i_1 - 3] [i_2 - 1] [11]) / (arr_0 [i_1 - 1] [i_1 + 3])))));
                        }
                    }
                }
                var_17 = ((((((arr_3 [i_1 + 1]) ? 87 : (~32767)))) ? (min(((193 ? var_11 : (arr_5 [i_1 + 2]))), var_5)) : (~var_3)));
                var_18 = (max(var_18, (((((!(arr_10 [0] [i_1 - 3] [i_1 - 2]))) ? (((((4000644516 ? var_8 : (arr_1 [11])))) ? (arr_10 [i_0] [i_1] [i_1]) : (arr_6 [i_0]))) : (min(4026531840, (arr_5 [i_0]))))))));
                var_19 = ((~(((((~(arr_6 [i_0])))) ? ((var_2 ? (arr_7 [10]) : var_3)) : (~4294967294)))));
                var_20 += ((-(0 && 70)));
            }
        }
    }
    var_21 = ((((var_6 ? var_13 : -var_10)) >> (((~-21126) - 21115))));
    #pragma endscop
}
