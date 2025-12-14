/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {
                        var_15 = var_10;
                        arr_12 [i_3] [i_3] [i_1] = ((((-588799631 / (max((arr_10 [i_0] [i_0] [i_1] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0]))))) < (((-(var_6 && -1040427679))))));
                        var_16 = ((~((((var_1 ? 1621754839 : var_8)) & ((((arr_8 [i_0] [i_0] [i_0]) ^ -121)))))));
                    }
                }
            }
        }
        arr_13 [i_0] = ((((~((~(arr_9 [i_0] [16] [i_0] [i_0]))))) - (min((115 | var_7), (var_0 + -106)))));

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                var_17 = arr_3 [i_0];
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_18 = 6638318866046329081;
                            arr_23 [i_6] [i_4] [i_5] [i_6] [i_7] = ((~(~40722)));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_8 = 1; i_8 < 16;i_8 += 1) /* same iter space */
            {
                var_19 += ((var_7 <= -85) << (-10 + 38));
                var_20 = ((2999011296 ? ((1 >> (((arr_2 [i_4]) - 55173)))) : (((arr_18 [i_4] [i_4]) - 1))));
                arr_28 [13] &= (((var_8 && 58) | ((((arr_14 [i_8]) != 1621754839)))));
            }
            for (int i_9 = 1; i_9 < 16;i_9 += 1) /* same iter space */
            {
                var_21 = (((max((~var_2), (((arr_10 [i_0] [8] [12] [i_9 + 2] [8]) ^ 115)))) & var_10));
                var_22 = 0;
            }
            for (int i_10 = 1; i_10 < 16;i_10 += 1) /* same iter space */
            {
                var_23 += ((var_1 < (arr_27 [i_0] [i_0] [i_10 + 2])));
                arr_35 [i_0] = (((((-(-3 / var_4)))) || (~2)));
                arr_36 [i_0] [i_4] [16] = (((arr_25 [i_0] [i_0] [1]) < (((var_11 / -1531876090) ? (~3491808975) : (((min(3, 0))))))));
            }
            var_24 = ((~(1 * 1)));
            var_25 = (max((((((~(arr_7 [i_0] [1] [9]))) & var_1))), ((((-1 ? 10315895932681453897 : 4393624277955230634)) ^ (var_11 | -70)))));
            var_26 = ((((+(((arr_27 [i_4] [5] [5]) ? var_3 : 2056468756))))) ? ((((((~(arr_19 [i_0] [14] [i_4] [i_4]))) == ((1116001184 + (arr_14 [i_4]))))))) : ((((min(2999011296, var_9))) ? var_8 : (min(12, 6096260861040084371)))));
            var_27 = (((arr_11 [i_0] [i_0] [i_0] [i_0]) == -var_8));
        }
        arr_37 [i_0] = (((min((max(var_3, 9166037901301246027)), ((((((arr_18 [i_0] [4]) + 2147483647)) << (((((arr_16 [i_0]) + 3214382475162766716)) - 10))))))) < (((~((var_13 ? (arr_17 [i_0] [i_0] [i_0] [i_0]) : (arr_32 [i_0] [i_0] [i_0] [i_0]))))))));
        var_28 = ((~(((!((max((arr_30 [i_0] [i_0] [i_0]), var_13))))))));
    }
    var_29 = ((~((((!var_14) != (var_12 ^ 1))))));
    var_30 ^= var_12;
    var_31 |= ((((((-59 ? var_6 : var_9)))) ? (((((~(-32767 - 1))) >= (var_3 * var_14)))) : ((max((var_2 < var_13), (7850246780977081250 != 1))))));
    var_32 = var_12;
    #pragma endscop
}
