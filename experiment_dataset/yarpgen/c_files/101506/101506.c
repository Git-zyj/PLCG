/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_9 [i_0 + 1] [8] [i_2] [i_0] = 727594622;
                        var_16 ^= -727594631;
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_17 = ((((-22050 + 2147483647) << (((249 ^ 198) - 63)))));
                        var_18 = (min(var_18, (arr_0 [i_1])));
                        var_19 = (arr_2 [i_1]);
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_20 = (max(var_20, (((((1112287910 ? -1079963717729486084 : (min(53, -1))))) ? ((((-127 - 1) == (-1 + -2046125765)))) : -1820504755))));

                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            arr_16 [i_6 - 2] [i_5] [i_0] [i_2] [i_0] [i_1] [i_0 - 1] = ((!((!(arr_12 [i_0] [i_1] [i_2])))));
                            var_21 = (max(var_21, ((((arr_0 [i_1]) * (arr_0 [i_2]))))));
                            var_22 &= -727594641;
                            var_23 += (((arr_5 [i_0 + 1] [i_6 - 3] [3]) & (arr_4 [i_1] [i_5] [i_6 - 3])));
                        }
                        var_24 += (-(((arr_7 [i_5] [i_1 - 2] [i_1] [i_1]) * (arr_12 [i_1] [i_1] [i_1]))));
                        var_25 = (arr_14 [i_0] [i_2] [2] [i_1 - 3] [i_0]);
                    }
                    var_26 = (((((((-727594615 ? (arr_4 [8] [i_1] [i_2]) : (arr_2 [4]))) == ((min((arr_7 [8] [i_0 + 2] [i_0 + 2] [1]), 198)))))) & 65534));
                    arr_17 [i_0 - 2] [i_0] [i_1] [i_2] = 230;
                    var_27 = ((+(((arr_6 [i_0] [i_1] [i_2]) ? (arr_1 [i_0 - 3] [i_1 - 4]) : (arr_13 [8] [i_1 - 3] [i_2] [i_1])))));
                }
            }
        }
    }
    var_28 = (var_2 == 2917692066);
    var_29 = 45585;
    #pragma endscop
}
