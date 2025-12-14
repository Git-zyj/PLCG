/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((max(4503599627370240, 65510))), (min((246 * var_0), (min(var_8, (-32767 - 1)))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (396565205616266798 << 1);
        var_21 = ((-(arr_1 [i_0])));

        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            var_22 = (~54283);
            arr_6 [i_0] = (arr_2 [i_1 + 3] [i_0]);
            var_23 = (min(((var_17 ? (arr_5 [i_0] [i_0]) : 0)), ((((~1) < (max(2044, var_17)))))));
        }
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
            {
                var_24 = (max((((var_11 ^ (min(146215291, 1408243724))))), (max(var_15, (min(14162796724519730612, 29651))))));
                var_25 += (arr_1 [i_3]);
                arr_11 [i_2] = var_10;
            }
            for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_26 = (((-9223372036854775807 - 1) * 0));
                            var_27 += (arr_0 [i_0]);
                        }
                    }
                }
                var_28 *= (max((~55), (2044 * 32767)));
            }
            var_29 = var_12;
        }
    }
    #pragma endscop
}
