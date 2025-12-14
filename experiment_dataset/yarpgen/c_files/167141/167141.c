/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((var_5 - ((-2030040498 ? -2009350235 : 0)))), var_2));
    var_11 = (min(var_11, var_0));
    var_12 |= ((-(((42 && 0) ? -4611686018427387904 : 185))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (min((min(((min(182, 129))), (min(var_6, 201)))), ((max((((arr_0 [i_0]) > var_6)), (!115))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        var_13 = (max(var_13, var_3));
                        var_14 = (((((201326592 ? 201 : -4))) - (min((((arr_1 [i_0]) / 71)), 8160))));
                    }
                    for (int i_4 = 3; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_1] [i_1] = (arr_1 [i_0]);
                        arr_15 [i_0] [i_1] [i_2] [i_1] = (((arr_1 [i_1]) / (((min((arr_3 [i_0] [18] [i_4 - 2]), 112))))));
                    }
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        var_15 = (max(var_15, (((-2092373288298191482 ? (((arr_1 [i_0]) - ((((arr_0 [i_0]) ? 131 : (arr_13 [i_0])))))) : (((((min((arr_16 [i_0] [i_0] [i_0] [i_0] [7]), var_8))) + 28597))))))));
                        var_16 *= (((((-4611686018427387904 + 9223372036854775807) << (((-127 - 1) - 65408)))) | ((min((((((arr_3 [i_0] [i_1] [6]) + 2147483647)) << (((var_8 + 11339) - 23)))), (((((-127 - 1) + 2147483647)) >> (((arr_10 [i_0] [i_0] [i_0] [i_5]) + 87)))))))));
                    }
                    var_17 = (((arr_4 [i_1]) ? (!var_6) : -var_6));
                    var_18 = ((((((91 | 4028) ? (min(32755, (arr_8 [i_0] [i_1] [i_1] [i_1] [i_1]))) : (min(10453359645482845211, (arr_17 [i_2] [i_1])))))) && (((max((arr_0 [12]), (arr_17 [i_1] [i_1]))) != (((var_3 ? 64 : (arr_3 [i_0] [i_0] [i_0]))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 20;i_7 += 1)
            {
                {
                    arr_22 [i_0] [i_6] [i_0] [i_0] = (min((arr_3 [i_7] [11] [i_7 - 2]), ((var_3 ? (arr_4 [i_6]) : (-9223372036854775807 - 1)))));
                    var_19 = (((min(var_2, (min(4194048, (arr_3 [19] [19] [i_7]))))) / 214));
                }
            }
        }
        arr_23 [i_0] = 247;
        var_20 = (arr_18 [i_0] [i_0] [i_0]);
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
    {
        arr_27 [i_8] = (((min(var_4, -64))) + (((arr_17 [12] [i_8]) + var_6)));
        var_21 = ((!(522240 <= 7975347867357909530)));
    }
    for (int i_9 = 4; i_9 < 21;i_9 += 1)
    {
        arr_31 [i_9 - 3] = (~-13180);
        var_22 = ((((min(var_5, (arr_29 [i_9 - 2] [i_9 - 2])))) == (((!28597) & (arr_30 [i_9])))));
        var_23 = ((((((arr_29 [i_9 - 1] [i_9 - 2]) % (arr_29 [i_9 - 4] [i_9 + 1])))) ? (arr_29 [i_9 - 1] [i_9 - 4]) : 110));
        var_24 = (min(182, 25));
        var_25 = (((arr_30 [i_9 - 1]) ? (arr_30 [i_9]) : ((((max((arr_28 [i_9]), 7983128456246191461))) ? (arr_30 [i_9 - 1]) : (arr_30 [i_9 + 1])))));
    }
    #pragma endscop
}
