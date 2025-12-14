/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_0] [i_1] [13] = (((arr_5 [i_1]) ^ ((max(var_8, (arr_5 [i_1]))))));
                                var_18 = (max(((((arr_8 [i_2] [i_3] [i_3 + 3] [i_4 + 2]) && (arr_7 [i_1] [i_0] [i_3 + 2] [i_4 - 1])))), (arr_7 [i_1] [i_3] [i_3 - 2] [i_4 + 1])));
                                var_19 = ((-((-var_8 ? (!var_15) : (arr_6 [i_0] [i_3 + 1])))));
                            }
                        }
                    }
                    var_20 ^= ((((min(121, 1)))));
                    arr_13 [i_0] [i_1] [i_1] [i_2] = (arr_6 [i_2] [i_2]);
                    arr_14 [i_1] [i_2] = ((-(min(-var_16, var_15))));
                    var_21 = (~17371027722559411379);
                }
            }
        }
    }
    var_22 = ((((1878785280 ? var_10 : -17371027722559411379)) <= (((((var_8 ? var_17 : (-9223372036854775807 - 1)))) ? var_7 : (((min(-27238, 0))))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            {
                var_23 &= ((-(((arr_15 [i_5]) ? (arr_15 [i_5]) : (arr_15 [i_6 + 2])))));
                arr_21 [i_6] [i_5] [i_5] = (~-1340069088);
                arr_22 [16] [i_5] [i_5] = ((((min(((-(arr_15 [7]))), (~-26304)))) ? ((-9162835409866650259 ? 3585725171348166837 : 1)) : ((((arr_17 [i_5]) ? ((((arr_20 [i_5]) == 26294))) : (min((arr_16 [i_5]), var_15)))))));
            }
        }
    }
    #pragma endscop
}
