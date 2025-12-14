/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min(((-1 ? var_7 : var_3)), (~0))) ^ var_13));
    var_17 += (((max((var_12 && var_8), 255))) && (((139 ? (max(2995438737059683755, (-32767 - 1))) : (((var_13 ? var_14 : 32767)))))));

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] |= var_5;
        var_18 = ((((min((min((-127 - 1), var_8)), var_14))) ? (arr_2 [i_0]) : (-2147483647 - 1)));
        var_19 = (((min((~150), (min(-126, var_8)))) - ((((max(var_15, 1555250127))) ? (arr_2 [i_0 - 2]) : var_13))));
        arr_4 [i_0] = var_10;
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_20 = ((var_11 ? (!10197282005118744519) : (arr_6 [i_1 - 1] [i_1])));
        var_21 = (max(var_21, 32767));
        arr_7 [i_1] = var_8;

        for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_22 = var_14;
            var_23 = (max((max(9223372036854775807, 32767)), (var_10 | var_11)));
            var_24 = (min((!var_8), (((var_12 ? var_12 : (arr_6 [i_1 + 1] [i_2]))))));
            var_25 = ((((var_8 >> (((arr_5 [i_1]) + 60))))) ? (((min((arr_5 [i_1 - 1]), (arr_5 [3]))))) : (((arr_5 [i_2]) ? var_12 : var_7)));
        }
        for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_26 = (min((min(var_8, -1486695881)), (((((25474 >> (var_7 + 4275870304083986668))) / ((min(50, 124))))))));
            var_27 = ((-((max(var_1, (arr_11 [10] [i_1 - 2] [i_1]))))));
            var_28 = (arr_12 [i_1 + 1] [i_1 + 1] [i_3]);
            var_29 = (arr_10 [i_1 - 1] [i_1 - 1] [i_3 + 1]);
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 9;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 4; i_6 < 7;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_29 [i_4] [i_6] [i_4] = 54702;
                                var_30 = (min(((~((min(var_2, -89))))), (!-1956346259)));
                                arr_30 [i_5] [i_5] [1] [2] [i_4] = (min((-127 - 1), var_9));
                            }
                        }
                    }
                }
                arr_31 [i_4] [i_4] = (max((max((((-127 - 1) | (arr_20 [i_4] [i_4] [i_4]))), ((max(-115, -20566))))), (((0 || ((min(var_2, var_2))))))));
                var_31 = var_14;
                var_32 = (min(var_32, 6577302243369874456));
                arr_32 [i_4] = (min((((var_0 > ((((arr_9 [i_4] [i_4] [i_5]) % var_11)))))), (max(((20565 ? var_2 : var_0)), ((max(var_9, var_11)))))));
            }
        }
    }
    var_33 = ((-(max((22107 == -20566), ((var_12 ? var_8 : var_10))))));
    #pragma endscop
}
