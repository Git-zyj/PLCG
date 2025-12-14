/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (((((!9223372036854775807) >= (arr_4 [i_0 - 1]))) ? ((90 ? 694 : -90)) : 89));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [i_0] [i_1] [i_0 - 1] = (((arr_4 [i_3]) * (((arr_2 [i_0] [i_0]) >> (89 - 80)))));
                            arr_14 [i_0] [i_1] [14] [14] [i_1] = (((((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1]) == (((2097151 ? -73 : 71))))))) >= (((arr_4 [11]) ? (arr_1 [i_0]) : (arr_0 [i_0 - 1] [i_1])))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_13 = ((((-(arr_8 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3]))) >= 22));
                            arr_18 [i_5] = (arr_10 [i_0 + 1] [i_0 - 1] [i_0 + 1]);
                            arr_19 [i_0 + 1] [i_1] [i_2] [i_3] [i_5] [4] = (((arr_4 [i_0 - 1]) >= 89));
                            arr_20 [i_5] [i_5] [i_2] [i_3] = ((((((arr_8 [i_5] [10] [i_2] [i_0] [i_0] [i_0]) ? (arr_15 [i_5]) : var_6))) ? (232 - 55496) : (arr_12 [i_0] [i_0] [i_2] [i_2] [i_2] [i_3] [i_5])));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_23 [15] [15] [2] [i_3] [i_6] = ((!((((arr_21 [i_3] [i_6]) ? 73 : (arr_0 [18] [i_6]))))));
                            var_14 &= 65535;
                            var_15 = (max(var_15, (arr_8 [i_3] [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0])));
                            var_16 = (((arr_0 [i_0 - 1] [i_0 - 1]) != 10024));
                        }
                        var_17 -= ((-54 ? (arr_16 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]) : ((((arr_15 [i_3]) != (arr_1 [i_3]))))));
                    }
                    arr_24 [i_0] [5] = (-73 - 71);
                }
            }
        }
    }
    var_18 = (max(var_18, 10040));
    var_19 = 80485352896656799;
    var_20 = (min(((var_8 << (var_7 - 3906420455))), var_6));
    #pragma endscop
}
