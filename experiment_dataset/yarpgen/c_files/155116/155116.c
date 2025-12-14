/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_6);
    var_21 = var_9;
    var_22 ^= var_17;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_23 = ((~(((((arr_0 [i_1] [i_0 + 2]) | (arr_1 [i_0] [i_0 + 2]))) << ((((var_12 ? (arr_1 [i_0 + 2] [i_1]) : var_3)) - 3189085071389194192))))));
                var_24 = max(((((arr_3 [i_0] [i_0 + 2] [i_1 + 1]) && 10444))), ((((((arr_3 [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [i_1] [i_0]) : var_18))) ? (((arr_2 [i_1 + 1] [i_0] [i_0]) - -1735813491)) : (var_6 - var_10))));

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    var_25 = (max(var_25, ((((3307103767 ? (((((arr_4 [i_1]) != 3943133792)))) : ((3969109876 ? var_19 : 2978324178681280303))))))));
                    var_26 = (max(var_26, (((((!(arr_3 [i_1 + 3] [i_1 + 3] [i_1 + 3]))) ? ((max((min((arr_2 [i_0] [i_1] [i_0]), (arr_2 [i_0] [i_1 + 1] [i_2]))), var_2))) : (((-2147483647 - 1) ? 24576 : 3307103747)))))));
                    arr_6 [i_0] = ((((((((0 ? 14461529905324663748 : 987863528))) ? ((15468419895028271337 ? 12121171428077925340 : -6758)) : (242 ^ 15468419895028271337)))) ? ((~(((arr_3 [i_0] [i_0] [i_0]) & var_8)))) : var_11));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_27 = ((((((arr_8 [i_0] [i_1 + 2] [i_2 + 1] [i_0 - 1]) ? var_16 : (arr_2 [i_2 - 1] [i_1 + 1] [i_0 + 1])))) ? (min((arr_10 [i_1 + 1] [i_1] [i_0 - 1] [i_1 + 1] [i_4] [i_0 + 2]), var_4)) : (-809415802 != var_19)));
                                var_28 = max((max((arr_7 [i_4] [i_2] [i_1]), (((arr_10 [i_0] [i_0] [i_2] [i_0] [i_0] [i_2]) ? -5152 : (arr_2 [i_0] [i_0 - 1] [i_0]))))), (((arr_1 [i_2 - 1] [i_2 + 1]) ? var_2 : var_12)));
                                arr_11 [i_2] [12] [6] [i_1 + 3] [12] = ((((arr_4 [i_0]) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_8 [i_0 + 1] [i_1 + 3] [i_0] [i_3]))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    arr_14 [i_0] = ((64303 ? (-3589 - 0) : (arr_9 [i_5])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] = (((min((arr_16 [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_6]), (arr_16 [i_1] [i_1] [i_1] [i_1 + 3] [i_1 + 3]))) == 0));
                                var_29 += 3307103733;
                                var_30 = (max(var_30, var_7));
                            }
                        }
                    }

                    for (int i_8 = 4; i_8 < 23;i_8 += 1)
                    {
                        var_31 = ((((min((((!(arr_12 [i_0 - 1] [i_1] [i_5] [i_8])))), (min((arr_13 [i_0] [i_1 + 1] [i_5] [i_8]), (arr_19 [i_1] [i_1] [i_5] [i_8] [i_0] [i_8])))))) ? ((-1710133990 ? (arr_17 [i_0] [i_5] [i_5]) : (arr_18 [i_0] [i_0]))) : (arr_12 [i_0] [i_1] [i_5] [i_8])));
                        arr_24 [i_0] [i_0] [i_5] [i_0] [i_8] = (min(((~(var_11 != 15468419895028271312))), (((((min(299810087, (arr_8 [i_0] [i_1] [i_5] [i_8])))) && ((min(var_14, (arr_22 [i_0])))))))));
                        var_32 = arr_7 [i_8] [i_5] [i_0];
                    }
                }
            }
        }
    }
    var_33 = var_3;
    #pragma endscop
}
