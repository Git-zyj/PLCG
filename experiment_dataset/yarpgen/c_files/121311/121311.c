/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(0, ((((var_3 ? var_2 : var_8))))));
    var_14 = (max((((-9223372036854775807 - 1) ? -31808 : -808903098)), 63050));
    var_15 = (((var_2 ? var_12 : var_2)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = var_4;
        arr_3 [i_0] = var_2;
        arr_4 [i_0] = -1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = 0;
                    var_18 = ((31482 ? (arr_8 [i_0] [i_1] [i_2] [i_0]) : 346778319));
                }
            }
        }

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_19 = ((var_0 ? (arr_2 [i_0]) : -1672670075));
                            var_20 += (((((188 ? 0 : (arr_14 [i_4])))) ? 1245227257 : 0));
                        }
                    }
                }
            }
            var_21 += (arr_5 [16]);
            var_22 *= 1880026954173590137;
            var_23 &= ((((arr_8 [i_0] [i_3] [i_0] [i_3]) ? var_1 : (arr_19 [i_0] [i_3]))));
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            arr_24 [i_0] [i_7] = 1;
            arr_25 [i_0] [i_7] = (arr_12 [i_0]);
            var_24 *= ((-1622671831 ? 1622671831 : 1));
        }
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_25 -= (((min(-1, 1622671830))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    {
                        var_26 *= ((((32763 ? (arr_18 [i_8] [i_9] [i_10] [i_11] [i_8] [i_10]) : var_10))));
                        var_27 = (min(65535, 9223372036854775807));
                        arr_38 [i_9] [i_10] [i_10] [i_9] [i_8] [i_9] = (min((arr_30 [i_9] [i_10] [i_11]), (arr_28 [i_8] [i_8])));
                    }
                }
            }
        }
        var_28 = (((((((min(-633422318, -20619))) ? ((-1622671831 ? 123 : -526213695)) : ((1820225004852649363 ? -1243946691 : 1243946668))))) ? ((max((-2147483647 - 1), (max(3804421236, (-2147483647 - 1)))))) : (min((arr_22 [i_8] [i_8] [i_8]), (arr_27 [i_8])))));
        var_29 -= ((((max(1142107939, 526213694))) ? -1 : (arr_11 [i_8] [i_8] [i_8])));
        var_30 = (((min((arr_16 [i_8]), var_2))));
    }
    var_31 &= ((((max(var_11, var_3))) ? ((((4716 ? 62450 : 2147483647)))) : (((max(-1243946669, var_2))))));
    #pragma endscop
}
