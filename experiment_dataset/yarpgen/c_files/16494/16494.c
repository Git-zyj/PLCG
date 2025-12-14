/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_0, 32764));
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((min(((0 ? var_6 : var_11)), var_6))) && ((((1280639837 > 1845821799204698676) ? ((min(35184372088831, var_8))) : (min(7994322416918279070, var_1))))));

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    arr_9 [i_2] [i_2] [i_1] [i_0] = (min(((max(((var_5 ? var_3 : var_0)), (6890097046802341012 <= 7994322416918279062)))), ((-2974764650881080538 ? var_11 : (min(1845821799204698676, var_9))))));
                    var_15 = min(-15622, ((max(-32764, 3732918240))));
                    var_16 = ((-794805328 ? (min(var_5, var_0)) : (var_12 && var_7)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2 + 1] [i_0] [i_4] [i_4] [i_0] = (min((7994322416918279070 & var_2), 1));
                                arr_15 [i_4] [i_3] [i_3] [1] [i_1] [20] = (2974764650881080546 & -537096719229656935);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_17 = ((var_8 ? (115943749833299388 << var_8) : ((var_0 ? 411710059349030840 : var_11))));
                    arr_18 [i_0] [i_0] [i_5] = ((1 ? (!62801) : 62789));
                    var_18 = (((((48135 ? 62801 : 255))) ? var_3 : var_7));
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {

        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            arr_26 [i_6] [i_6] = ((((-(var_4 & 4301776224212811559)))) ? (71 & var_1) : (min(var_0, ((var_8 ? -5098348877602000760 : 46)))));
            arr_27 [i_6] [i_6] [i_7] = (max(((((max(9223372036854775807, 1))) ? 244 : ((1 ? -5661387617040651544 : 3)))), ((((max(0, var_3))) ? (((16351504605560200606 ? var_2 : -1280639837))) : ((-1280639831 ? var_2 : -5661387617040651544))))));
            var_19 = (max(var_19, ((~((var_6 ? var_12 : 0))))));
            var_20 = (max(2894094722, 0));
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            var_21 = ((var_10 ? (min(((-56 ? var_7 : var_10)), var_11)) : ((((0 & -53) ? -53 : ((max(56048, 167))))))));
            arr_32 [i_6] = (min(46, -15110));
        }
        var_22 = ((((min(1280639836, 1))) & (min(16769240949815647345, 18446744073709551615))));
    }
    #pragma endscop
}
