/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_14 -= (0 >> (65535 - 65506));
                            var_15 = 18446744073709551606;
                            var_16 = ((!((((((138538465099776 ? 32759 : (arr_8 [i_0] [0] [i_2] [i_3])))) ? (~1) : ((3684 ? 32767 : -1683281385)))))));
                            arr_12 [i_0 - 1] [i_1] [i_0] = (min((~var_11), ((((((~(arr_7 [i_3] [i_2] [i_0 - 1])))) >= (max(6, 10)))))));
                            arr_13 [7] [i_1] [i_0] [i_3] [i_0] = (((((810563702384171439 ? -55 : (arr_6 [i_0 + 1] [i_1 + 1])))) ? ((~(arr_10 [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 2]))) : (((((arr_1 [i_0 + 1] [i_0 - 1]) >= (arr_1 [i_0 + 1] [i_0 + 1])))))));
                        }
                    }
                }
                arr_14 [1] [i_1] [i_0] = ((((var_12 >> (((arr_10 [i_1 + 2] [i_0 + 1] [i_0] [5] [4]) - 11264330136055814962))))));
                var_17 = ((((max(((max(var_12, var_6))), (~-3945115093015931288)))) ? (((((((arr_11 [i_0]) >> (102 - 71)))) | var_0))) : ((107 ? 6 : 32759))));
            }
        }
    }
    var_18 = (~var_2);
    var_19 = (((max((((57371 ? -1683281385 : 78))), ((var_2 ? var_10 : 15425006407849235377)))) + var_5));
    var_20 |= (max((((~var_2) % var_6)), var_4));
    var_21 = (min(var_21, var_1));
    #pragma endscop
}
