/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0]) >> (((max(255, 536862720)) - 536862714))))) ? 262143 : ((((536862711 ? 1 : 14781761686789071949)) - 819441102))));
        var_15 = (~((max(0, (-66 == 3584)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] &= ((-((((arr_1 [i_1]) <= (arr_0 [i_1]))))));
            var_16 |= 0;

            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                var_17 = (min((((~(((!(arr_1 [2]))))))), (min(var_8, 4230916211))));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_15 [i_0] [i_0] [i_2 - 2] [13] [i_1] [i_2] = ((4294967295 ? (arr_9 [i_0] [i_0]) : (1550275903 == 65532)));
                    var_18 ^= (((((var_13 ? 4294705152 : (arr_0 [1])))) ? (-5966940501571202320 - 536862711) : (~3576)));

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_19 = (max(var_19, (8 && 9007199254740992)));
                        var_20 |= 6797966473927815608;
                    }
                    var_21 = ((((1 && (arr_4 [7] [i_1] [i_2]))) ? ((var_10 ? 4294967295 : 35184372088831)) : (arr_16 [i_2] [i_2] [i_2] [i_2 + 1] [i_2 - 2] [i_2])));
                    arr_18 [0] [i_1] [i_2 - 1] [i_1] = var_10;
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -5928662316468015040;
                    arr_22 [i_0] [i_0] = (max(((((((1 ? 5928662316468015039 : 114))) ? 10 : (~var_6)))), ((13658212719832404361 ? (arr_11 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2] [i_5]) : (arr_11 [i_2 - 1] [i_2 - 2] [i_2] [i_5] [i_5] [i_5])))));
                    arr_23 [i_1] [i_1] [i_2] [0] [4] = (((max(var_8, (arr_7 [i_0] [2] [i_0]))) > (546150626 | 0)));
                }
            }
        }
    }
    var_22 = ((((((~((var_7 ? 1 : var_0)))) + 2147483647)) << (((min(((1 ? var_11 : var_4)), ((min(7, var_6))))) - 7))));
    var_23 = var_1;
    var_24 = (9223372036854775802 % var_9);
    #pragma endscop
}
