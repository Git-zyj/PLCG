/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_1;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [22] |= ((((min((arr_1 [20] [20]), var_1))) || ((max((arr_0 [i_0 - 1]), (arr_1 [i_0 - 1] [i_0 - 1]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_3] = (((max(var_8, (arr_0 [i_1]))) < (!var_6)));
                        arr_11 [i_0 - 2] [i_1] [20] [i_3] [i_0] = ((3289532925 >> (4294967291 - 4294967269)));
                        var_11 = var_2;
                        var_12 = (max(var_12, var_3));
                    }
                    for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] = (~4);
                        arr_15 [1] [i_1] [i_0] [i_4] = var_2;
                    }
                    for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_13 = (((3289532921 << (65535 - 65514))));
                            var_14 = (((((min(1005434371, var_7)) * (((var_8 - (arr_20 [i_0] [i_1] [i_0] [i_0] [i_5 - 1] [1])))))) - ((4 - (var_4 / var_8)))));
                            var_15 = (max(var_15, ((((arr_4 [21] [i_5] [14]) ? 1 : (((!(var_0 | 4294967291)))))))));
                            var_16 |= -26120;
                            arr_21 [i_0] [8] [i_2] [i_1] [i_0] [i_0] [i_6] = (((((max(var_2, 65533)))) | ((var_0 ? (arr_16 [i_5 - 1] [15] [i_5] [i_5 - 1]) : (arr_9 [i_0] [21] [i_5] [i_5 + 1] [i_5 - 1])))));
                        }
                        for (int i_7 = 3; i_7 < 22;i_7 += 1)
                        {
                            var_17 = (max(var_17, (((!(~16))))));
                            var_18 = 203;
                            var_19 = (min(var_19, (((3 ? var_0 : 65523)))));
                        }
                        var_20 = (min(var_20, (((((var_8 ? 150 : (var_8 <= var_6))) * (((!((((arr_1 [7] [i_0]) << (var_1 + 61))))))))))));
                    }
                    var_21 = (min(((15 - ((max(var_6, 2147483647))))), 244));
                    var_22 = var_8;
                    arr_24 [i_2] [i_2] [i_1] [i_2] |= var_4;
                }
            }
        }
        var_23 = (min(var_23, (min(var_8, ((((-25 ? -81 : var_1))))))));
    }
    #pragma endscop
}
