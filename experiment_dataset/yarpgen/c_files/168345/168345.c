/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 21;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_15 [i_1] [i_1] = 3606447228;
                            arr_16 [i_2] [i_1] [i_2] [i_1] [i_0] = (((arr_14 [i_3 + 2]) > (arr_14 [i_3 + 1])));
                        }
                        arr_17 [i_0] [i_1] [i_2] [i_1] = ((arr_6 [i_3 + 3] [i_3 - 4] [i_1]) & (min((var_4 < 1), (min(var_3, 1)))));
                    }
                }
            }
        }
        arr_18 [i_0] = (max(((max(29089, 1))), ((var_4 ^ ((~(arr_13 [i_0] [5] [i_0] [i_0])))))));
        arr_19 [i_0] = (((((!1) ? (var_9 % 10044) : 10044)) - (((var_3 ? (var_5 ^ -2023) : (arr_11 [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_17 = (min(var_5, var_9));
    #pragma endscop
}
