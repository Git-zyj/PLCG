/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((min((arr_0 [i_0]), ((108 ? -9189282100071630986 : 11149)))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_15 = (arr_3 [i_2] [i_1]);
                arr_6 [i_2] = (min((arr_4 [i_0] [i_0] [1]), (-11149 || 9987)));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            arr_14 [i_2] [18] [i_3] [i_3] [i_3] = (min(((11147 ? (arr_1 [i_4]) : ((var_2 ^ (arr_2 [i_0]))))), ((min(0, (arr_10 [1] [i_1] [i_2] [i_0] [i_3 + 1]))))));
                            arr_15 [i_2] = var_12;
                            arr_16 [i_2] [i_3 - 1] [i_0] [i_1] [i_2] = ((-(((-2147483647 - 1) ? -219 : (arr_9 [i_0] [i_0] [i_2] [i_3] [i_4])))));
                        }
                    }
                }
                var_16 = (min(var_16, (((+((24709 ? (((-2147483647 - 1) ? 115 : 11135)) : 372677174)))))));
            }
            arr_17 [8] = 1642149936;
            var_17 = 44;
            var_18 = ((((max((arr_5 [i_1] [i_1] [10] [i_0]), ((7620 ? var_7 : 1))))) ? var_5 : (max((((arr_11 [i_0] [16] [16] [4] [i_0]) ? 2147483632 : (arr_8 [i_1] [i_1] [i_1] [i_1] [8]))), (((arr_13 [16] [16]) ? (arr_11 [i_1] [18] [i_0] [18] [i_0]) : (arr_1 [i_1])))))));
            arr_18 [i_0] [i_0] [i_0] = 44;
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_22 [21] [2] = (arr_5 [i_0] [i_0] [i_0] [i_0]);
            arr_23 [i_0] = (((min((arr_5 [i_0] [i_0] [i_5] [i_5]), 0)) ? (((arr_5 [i_0] [i_0] [16] [i_5]) >> (var_7 - 73))) : ((min((arr_5 [i_0] [i_5] [i_0] [i_5]), (arr_5 [i_0] [i_5] [i_0] [i_0]))))));
            arr_24 [i_5] [i_5] [i_5] = 1;
        }
        arr_25 [i_0] = (arr_4 [3] [i_0] [i_0]);
    }
    var_19 = var_0;
    var_20 = 1;
    #pragma endscop
}
