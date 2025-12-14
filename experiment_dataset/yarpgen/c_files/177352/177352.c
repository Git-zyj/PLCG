/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_13 = ((((((-9223372036854775785 == ((max(-1264198858, 262143))))))) | (min((var_8 < 11635477089203544183), (((arr_1 [i_0]) * 262138))))));
        var_14 &= ((((((-9223372036854775786 / var_2) - var_3))) ? -9223372036854775791 : 55));
        var_15 &= ((!((max(var_0, 24786651)))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = var_4;
        arr_7 [i_1] = ((1264198867 ? -86 : -58));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_10 [i_2] = var_11;

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_16 = (min(var_16, ((((((4294705154 >> (262141 - 262135)))) && ((((-32760 ? 39 : -53)))))))));
            var_17 = (max(var_17, -var_9));
            arr_14 [i_2] = 1264198883;
            var_18 = (((var_4 << (-1155445923 + 1155445938))));
            var_19 = arr_3 [i_2];
        }
        var_20 = (((262137 ^ 13705354072344734981) | 56));
        arr_15 [i_2] = (1 >= -2001385914);
    }
    var_21 = (-1264198858 | var_8);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        {
                            arr_25 [i_4] [i_4] = (arr_24 [9] [i_4] [i_7 + 1] [i_4]);
                            var_22 = -9223372036854775773;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 24;i_10 += 1)
                        {
                            {
                                arr_36 [i_4] [i_4] [i_4] [i_9] [i_10] = ((var_1 - (var_6 > 1264198867)));
                                arr_37 [i_4] = 1;
                                arr_38 [5] [22] [5] [i_4] = (((66 ? var_6 : 4294705154)));
                                var_23 = ((((221847065 & var_0) ? (var_2 & 65535) : (85 <= 1))));
                            }
                        }
                    }
                }
                var_24 = 65517;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            arr_45 [1] [i_4] [2] [i_12] = (((4294705147 ? -1905839350 : -5403266769282114219)) ^ 2693448580281217181);
                            var_25 = 1497388917;
                            arr_46 [i_4] [i_4] [i_4] = var_9;
                            var_26 = 4294705170;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
