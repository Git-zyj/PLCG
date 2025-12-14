/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_0 - 2] = ((-((0 ? var_7 : 1))));
            var_13 = var_0;
            var_14 &= ((-((var_8 ? var_5 : var_2))));
        }
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            arr_10 [i_2] [i_2] [i_2] = (max(32767, 22));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_15 = var_1;
                            arr_19 [i_0] [i_2] [i_2] [i_2] [i_5] = ((var_6 ? (!1) : ((4236375797 ? 255 : 139))));
                        }
                    }
                }
            }
            var_16 = (max(((-6460294960874464060 ? 0 : 1)), ((var_0 ? 1 : 0))));
        }
        arr_20 [i_0] = (max(((max(var_6, var_5))), var_12));
    }
    var_17 = ((!(max((min(0, 1)), 1))));
    var_18 += ((-((var_4 ? (min(var_9, var_1)) : -var_6))));

    for (int i_6 = 3; i_6 < 12;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_19 ^= (((((-(!64)))) ? var_6 : ((1 ? 0 : -67))));
            var_20 *= (min((max(var_6, var_5)), var_5));
            var_21 += ((((((max(102, -26))))) ? var_4 : (((min(32755, var_3))))));
        }
        var_22 *= 1;
        var_23 = 1;
    }
    for (int i_8 = 1; i_8 < 23;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                {
                    var_24 += (~var_4);
                    var_25 = (((((var_12 ? -var_9 : 45))) ? var_11 : var_2));
                    var_26 = (max(var_26, var_0));
                }
            }
        }
        var_27 ^= (!-var_7);
        var_28 |= (!((!(((var_7 ? var_12 : var_2))))));
        arr_34 [i_8] = (((((var_0 ? (~var_7) : var_1))) ? var_4 : (~var_5)));
    }
    #pragma endscop
}
