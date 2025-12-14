/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 += (max(((!(((2918141048 ? -142976256 : 0))))), ((!((((arr_2 [4]) ? 9223372036854775807 : var_14)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = arr_5 [i_1];
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_4] = (((arr_1 [i_0]) != ((((((arr_12 [i_0] [i_0] [i_4] [i_3] [i_4] [i_0]) / -9152506771429874340))) ? var_13 : (((2918141056 ? 1601490036 : 4080)))))));
                            }
                        }
                    }
                    var_17 ^= ((((min((!1601490036), var_3))) || (((min(var_0, (arr_5 [i_0]))) > (arr_11 [i_0 + 1] [i_1] [i_1 + 1] [i_1] [i_0] [i_1 + 1])))));
                }
            }
        }
    }
    var_18 = (min((max((min(2900214703469792719, var_1)), ((var_4 ? var_10 : 33942)))), (((!((max(4080, var_4))))))));
    #pragma endscop
}
