/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((1913700111410252823 / -var_5), (var_10 % var_4)));
    var_13 = (-10262328428090133366 == -var_9);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 -= min(((-(arr_1 [14]))), (((((((arr_1 [18]) < (arr_2 [i_0])))) > 225))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_15 = (max((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (arr_1 [i_0])));
            var_16 = ((-8184415645619418232 * (((-((-(arr_0 [i_0]))))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] = (((((1 ^ (arr_5 [i_0] [i_0] [i_2])))) != (-9223372036854775807 - 1)));
            var_17 = (max(var_17, ((min((min((arr_6 [i_2]), (((arr_0 [20]) | (arr_1 [8]))))), ((max((arr_6 [i_0]), (arr_5 [i_0] [i_2] [i_0])))))))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_0] [i_0] = (((8 / 9223372036854775795) | (min((arr_2 [i_0]), 8184415645619418234))));
            arr_12 [i_3] [i_0] [i_3] = -1620339532;
        }
        var_18 = ((-((((arr_1 [i_0]) < (arr_0 [i_0]))))));
    }
    var_19 = ((((-(10262328428090133366 >> var_8))) == ((min(var_10, ((max(var_9, var_9))))))));
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                var_20 = 201099623;

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_21 = (min(var_21, (((((max((arr_2 [i_5]), ((((arr_1 [i_5]) >= (arr_18 [i_4] [i_4] [i_4] [i_4]))))))) || ((min(-1201243853, (arr_19 [i_4] [i_4] [i_4 + 2])))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_22 = (((((!12208220722959218016) ? ((((arr_16 [i_4] [i_4] [i_4]) * (arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))) : -8184415645619418250))) && ((((((arr_6 [i_4]) ^ (arr_6 [i_4])))) || ((((arr_20 [i_4] [i_4] [i_4] [i_4] [i_4]) ? (arr_10 [i_5] [i_4]) : (arr_18 [i_4] [i_4] [i_4] [i_4])))))));
                                arr_26 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (~(max((arr_20 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]), (((arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) ? 8184415645619418249 : (arr_15 [i_8]))))));
                                arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] = (9100 % 10262328428090133384);
                            }
                        }
                    }
                    var_23 = (arr_13 [i_4]);
                    var_24 -= (((127 - (9 + 8637890657330643269))));
                }
            }
        }
    }
    #pragma endscop
}
