/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [10] = (arr_2 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_2] = (((max(var_14, ((3999058880860878135 + (arr_2 [i_0]))))) + (112 + 32065)));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_20 = (min(var_20, (arr_9 [i_3])));
                                var_21 = (max(var_21, (((((-(arr_1 [i_2 + 1]))) + (((((arr_1 [i_1]) == (arr_1 [i_1]))))))))));
                            }
                            var_22 = (min(var_22, (arr_7 [i_3])));
                        }
                    }
                }
            }
        }
    }
    var_23 = var_1;
    var_24 = (255 ? var_1 : var_13);
    var_25 = ((((~(~32767))) * var_18));
    #pragma endscop
}
