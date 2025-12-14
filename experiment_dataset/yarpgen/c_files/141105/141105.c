/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (~(max(2353217424, 1941749893)));
    var_18 &= var_13;
    var_19 = (min(var_19, (((2424274345071103830 ? ((16022469728638447763 ? var_3 : var_7)) : (var_13 - var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_20 = var_1;
                            var_21 = (min(var_21, ((((((-(arr_8 [i_1] [i_3 + 1])))) ? var_11 : var_8)))));
                        }
                    }
                }
                var_22 = (min(var_22, ((((max(var_3, (arr_8 [i_0] [i_0]))) / (((((!(arr_0 [i_1]))) ? ((max(var_5, 56378))) : var_10))))))));
                var_23 = (max(var_23, (((!((max(var_5, (max((arr_0 [1]), 65533))))))))));
                arr_9 [i_0] [i_0] [i_0] = (max((9168 ^ var_16), (max((var_7 || var_14), (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? var_4 : var_14))))));
                var_24 = (3144155133 ? (arr_0 [i_1]) : var_4);
            }
        }
    }
    #pragma endscop
}
