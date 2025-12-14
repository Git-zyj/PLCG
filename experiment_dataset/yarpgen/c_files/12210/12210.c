/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (max(var_19, var_17));
                var_20 = -var_9;

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_21 = (!1);
                        arr_9 [i_0] [i_1] [i_1] [i_1] = ((~((~((max(1, 29)))))));
                    }
                    var_22 -= ((-((var_5 ? var_18 : var_15))));
                }
                arr_10 [i_0] |= (((-(var_18 > var_12))));
            }
        }
    }
    var_23 = ((~((((!1) > (!-1))))));

    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_24 -= ((-(0 ^ var_17)));
        var_25 = ((~(var_7 / -29)));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_26 = (((((-9223372036854775807 - 1) ^ var_13))) ? var_17 : (~var_5));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_27 = (!var_5);
            var_28 &= ((-(((-var_8 > (max(var_5, -1)))))));
            arr_21 [i_6] [i_6] [i_6] = ((~(((((var_18 ? var_1 : var_6)) == ((var_13 ? var_4 : (-9223372036854775807 - 1))))))));
            var_29 = (max(var_29, 12));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            arr_25 [i_5] = (var_4 == 9223372036854775807);
            arr_26 [i_5] [i_5] [i_5] = (min(var_3, (((max(0, var_8))))));
            var_30 = 1;
            arr_27 [5] [5] [5] = (((max((var_18 || var_8), 1048575)) * 61));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_31 &= var_10;
            var_32 = (max(var_32, var_8));
            arr_31 [i_8] [i_8] = (((~-0) ? var_9 : 576425567931334656));
        }
        arr_32 [i_5] [i_5] = (~(-var_4 - -var_6));
    }
    var_33 = ((((var_1 ? -var_4 : (var_8 - var_2)))) ? var_4 : 1);
    #pragma endscop
}
