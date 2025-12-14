/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(-28, 606490376))) ? 2683044990 : 28));
    var_11 = -28;
    var_12 = min(4294967295, (((max(-45, -1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_1] = 260046848;
                var_13 -= (-72 >= 91);

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_10 [i_1] [i_1] = 41;
                    arr_11 [11] [i_1] = max((((22 ? 116 : 12))), ((-50 ? 3472714459 : 39)));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_14 |= ((((max(4294967276, 24) << (1671428458 - 1671428433)))));
                        arr_15 [22] [i_1] [i_2] [i_3] [4] [9] = (((((-48 ? 850731824 : 42))) < ((min(4248038269, 3204479385)))));
                        arr_16 [i_0] [i_1] [i_1] [9] [i_2] [i_3] = -39;
                        arr_17 [i_0] [i_0] [i_0] [i_0] = (((((-1 ? ((1312265977 ? 89877194 : 1733176589)) : ((-112 ? 19 : 2014599151))))) ? 19 : (max((((118 >> (-19 + 26)))), ((4034920447 ? 260046848 : -126))))));
                    }

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_15 &= ((3099386535 ? (((((min(27, -19))) ^ -77))) : 123));
                        arr_20 [i_4] [i_4] [i_4] [4] [i_0] [i_0] = min((max((((33 ? 109 : -63))), 24)), 95891380);
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            arr_27 [i_5] = 38;
                            var_16 &= 0;
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            var_17 = (+-63);
                            var_18 = (max((-127 - 1), (min(98, -63))));
                        }
                        var_19 = (min(var_19, 4282474713));
                        var_20 -= (-35 >= 38);
                        arr_30 [i_2] [i_2] [i_5] = (min((min(64, ((min(-74, 109))))), 114));
                        arr_31 [i_5] [i_2] [i_0] [i_0] [i_1] [i_0] &= ((((((121 ? 63 : 0)) ? ((min(0, 0))) : ((2013651774 ? -99 : -8))))));
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        var_21 &= (max((max(1048575, 465087107)), 109));
                        arr_34 [20] [i_1] [i_1] [8] = (max(802035360, (min(3492931936, -118))));
                        var_22 = ((-114 ? (+-1) : (((min(-47, -97))))));
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                        {
                            var_23 -= ((1 ? 33 : (110 == 148336326)));
                            arr_39 [i_1] [19] [i_1] [i_1] [i_1] [i_1] [i_1] = 83;
                            var_24 = -72;
                            var_25 = (min(var_25, (((268435455 ? 116 : (-127 - 1))))));
                        }
                        for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                        {
                            arr_42 [16] = min((-127 - 1), 115);
                            arr_43 [i_0] [i_0] [i_0] [i_9] [i_0] = ((-(((68 >> (-45 + 60))))));
                            var_26 &= (((-127 - 1) ? ((min((max(-1, -63)), -43))) : (min(-32, -114))));
                        }
                        var_27 = -1;
                    }
                }
                var_28 = (-1 ? (max(((-7 ? 0 : 1834489392)), -56)) : 5);
            }
        }
    }
    #pragma endscop
}
