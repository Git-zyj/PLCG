/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (((min(1073709056, 32767)) == var_0));
    var_13 = (~var_7);

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_14 += var_1;
        var_15 |= 65535;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] = (arr_5 [i_1]);
        var_16 = 1097118482295410027;
        var_17 = ((var_0 != (202 != 13)));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_18 += ((((((~149) & ((31172 ? (-9223372036854775807 - 1) : 29))))) | ((65535 ? (~430458007) : 18446744073709551600))));

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_19 += var_5;
            var_20 += 65530;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    {
                        var_21 = ((((((((10126 ? 2194250577811259580 : 1452896701))) ? (var_4 + var_0) : ((max(var_7, var_8)))))) ? (min(((-(arr_5 [i_2]))), (((arr_4 [i_2]) ? (arr_4 [1]) : (arr_5 [i_5]))))) : var_1));
                        arr_15 [i_4] [i_3] [i_3] [i_5] = (((((arr_3 [i_3] [i_4]) & (arr_3 [i_2] [i_2])))) ? (arr_4 [i_2]) : ((min((1449128007467215135 <= 1113413856), (min((arr_5 [i_2]), 1374588166))))));
                        var_22 = var_2;
                    }
                }
            }
        }
    }
    var_23 = var_5;
    #pragma endscop
}
