/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_0] = -6548463167022123731;

                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        var_17 = (max(var_17, ((min((((((arr_7 [i_3] [i_3 + 1] [i_2 - 2] [i_0]) + 9223372036854775807)) << (((((arr_7 [i_2 + 1] [i_3 - 1] [i_2 + 1] [i_1]) + 4299836864491677418)) - 61)))), (arr_2 [i_0] [i_2 - 1] [i_2]))))));
                        arr_9 [i_0] [i_0] [i_1 + 2] [i_0] [i_1] [i_1] = ((-(arr_3 [i_1] [i_2 + 2])));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_18 += ((18014394214514688 || (((var_8 ? ((54670 ? 3947795367 : 8275087622333279435)) : 17348271103270534020)))));
                        var_19 *= (!13891);
                        var_20 = ((((~(var_13 * 0))) <= (!-32584)));
                        var_21 += (max(((-(255 | 6138175297046747457))), ((min(((var_7 | (arr_1 [i_1]))), var_10)))));
                        var_22 = arr_5 [i_1 + 4];
                    }
                }
            }
        }
    }
    var_23 = var_4;
    var_24 = var_4;
    var_25 = var_9;
    #pragma endscop
}
