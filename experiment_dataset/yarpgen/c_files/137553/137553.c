/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = ((67 << (16726711592112769762 - 16726711592112769746)));
        var_21 = ((var_13 << (((arr_1 [i_0]) + 20729))));
        arr_2 [i_0] = ((4294967272 < (var_16 && var_15)));
        var_22 |= (((var_16 ? var_10 : var_16)));
    }

    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_23 = (var_18 - -26);
        var_24 = (arr_3 [i_1]);
    }
    for (int i_2 = 4; i_2 < 12;i_2 += 1)
    {
        var_25 = (((((((var_8 ? -2 : var_9)) * ((-1 ? var_1 : var_7))))) ? (((min((arr_4 [i_2] [i_2]), var_16)))) : var_9));
        arr_9 [i_2] = var_14;
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                var_26 = (((arr_12 [i_3]) >> (var_13 == var_10)));
                var_27 = var_11;
                var_28 = ((664707000 ? 3630260296 : 114));
                var_29 = (max(var_29, var_12));

                for (int i_5 = 4; i_5 < 21;i_5 += 1)
                {
                    arr_17 [i_3] [i_3] [1] = var_17;
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_30 *= var_18;
                                var_31 = (min(var_31, ((((((-71 / (3630260296 / 664706984)))) ? var_0 : ((-(arr_11 [i_5 + 3]))))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    var_32 = (min(var_32, 1));
                    var_33 *= (var_6 < var_5);
                    arr_26 [i_3] [i_4] [i_4] [i_3] = (((arr_21 [i_3] [i_3] [i_4] [i_4] [i_4] [i_4] [i_8]) + 1));
                    arr_27 [8] [i_4] [i_8] = ((-6 ? var_14 : (arr_24 [i_3] [i_4] [i_4] [i_8])));
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    var_34 = ((((((var_0 == (-26 < var_16))))) != 2961997736));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_35 -= -664706984;
                                var_36 = (max(var_36, ((((((min(var_8, var_8)))) == var_15)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_37 += var_15;
    var_38 = var_7;
    #pragma endscop
}
