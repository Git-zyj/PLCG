/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        arr_10 [i_3] [i_3] [i_3] [i_3] = (arr_1 [23]);
                        arr_11 [i_3] [i_1] [i_1] [i_1] = (((((((arr_8 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0]) >> (((arr_2 [i_1] [i_2]) - 212)))) + var_1)) <= (arr_8 [1] [i_2] [i_1] [i_0 + 1] [1] [13])));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        var_13 = ((var_7 * (((var_6 >> (var_0 + 147184206))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_13 [i_0] [i_0] [i_2] [i_4]);
                    }
                    var_14 = (arr_5 [23] [i_1] [i_1] [i_0]);
                    var_15 = (arr_5 [i_0 - 2] [i_0] [i_0] [i_0]);
                }
                arr_16 [i_0] = (arr_5 [i_1] [i_0] [i_0] [i_0]);
            }
        }
    }
    var_16 = var_3;
    #pragma endscop
}
