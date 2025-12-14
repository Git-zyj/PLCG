/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] = (1 | (arr_6 [i_0] [i_3] [i_4]));
                                var_17 = (min((arr_7 [i_4]), ((((var_12 + 2147483647) >> (((arr_6 [i_1] [i_2] [i_4]) - 5742443428740517314)))))));
                                var_18 += (((max(((max(var_11, -12305))), ((~(arr_7 [i_3]))))) & (((~(~48669))))));
                            }
                        }
                    }
                }
                var_19 = (((((~(max(var_5, (arr_3 [i_0])))))) || (((~(arr_6 [i_0] [i_1] [i_0]))))));
                arr_12 [i_0] [i_0] = 12304;
            }
        }
    }
    var_20 = (max(var_20, -1985542060));
    var_21 = ((~(((((min(var_6, 255))) >= (var_11 | 53))))));
    var_22 = var_3;
    #pragma endscop
}
