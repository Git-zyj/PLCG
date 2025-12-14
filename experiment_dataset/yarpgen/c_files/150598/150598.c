/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_7));
    var_12 = 23108;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((((((((arr_6 [i_0]) && (arr_6 [i_0]))))) - (((arr_5 [i_0] [i_1] [i_0] [i_0]) / 1276130963)))))));
                    var_14 += ((203 ? 818916873 : ((988421786501132213 << (((arr_7 [i_0] [i_1]) - 193))))));
                    var_15 |= (3 != var_6);

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_16 = ((((((var_9 ? 151 : (arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1]))))) >= var_5));
                            var_17 |= ((((min(0, 2934558288))) ? 127 : (max((((-1590754742877863443 + 9223372036854775807) << (185 - 185))), (((1 ? 2458874135 : 4294967295)))))));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_18 |= var_4;
                            arr_18 [i_0] = (252 ? 3005168321 : 0);
                            arr_19 [i_0] [i_0] = ((((-11555 ? var_10 : 3047161928)) + ((min(var_5, (3480201451 & 65535))))));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_19 = (min(var_19, (max((((arr_5 [i_0] [i_1] [i_0] [i_0]) << (((min(8192, 4281933719)) - 8188)))), (((1016 ? (arr_13 [i_3] [i_2] [i_1] [i_0]) : (arr_13 [i_0] [i_2] [i_0] [i_2]))))))));
                            var_20 = (min((((arr_5 [i_0] [i_1] [i_2] [i_3]) + var_8)), (min((arr_14 [i_0]), (arr_5 [i_0] [i_0] [i_0] [i_0])))));
                        }
                        var_21 = (min(var_21, (((((65521 ? var_0 : var_10)) * (arr_4 [i_0] [i_3]))))));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        var_22 = max((min((((61195 >> (((arr_2 [i_0]) - 5327677725486258527))))), (arr_0 [i_0]))), ((min(((15696 ? 13 : 56383)), ((min(var_9, var_1)))))));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_23 = (min(var_23, ((((arr_1 [i_7]) ? (arr_22 [i_0] [i_1] [i_0] [9] [i_8]) : var_3)))));
                            arr_28 [i_7] [i_0] [i_2] [i_2] [i_2] [i_2] [i_7] = (((arr_0 [i_1]) ? (arr_26 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1] [i_8]) : (arr_1 [i_2])));
                        }
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_33 [i_0] [i_1] [i_2] [8] [i_1] |= (-((var_0 ? (max(70, (arr_0 [i_0]))) : (arr_7 [i_0] [i_0]))));
                            var_24 = ((1 ? (-9223372036854775807 - 1) : 2284511662));
                            var_25 = (max((((!((min(var_3, 37569)))))), (min(535822336, 1668453639))));
                        }
                        var_26 = ((((((9274 * 0) ? var_9 : 68))) & (((3 / 224) ? 1 : (min(3146093943, 32768))))));
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        var_27 ^= ((-32759 > (942281129311135526 + -32743)));
                        var_28 = (min((var_8 + 1), 2244471798));
                    }
                }
            }
        }
    }
    var_29 ^= var_7;
    #pragma endscop
}
