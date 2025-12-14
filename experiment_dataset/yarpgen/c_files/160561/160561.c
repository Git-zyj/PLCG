/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += 470976122817277481;
    var_20 = (((((min(79, var_10)) ? var_12 : var_12))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = (arr_2 [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (min(((((arr_5 [i_4 + 1] [i_4 + 1] [i_2] [i_2]) >= (arr_5 [i_4 + 1] [i_4 + 1] [i_4] [i_2])))), ((~(arr_5 [i_4 + 1] [i_4 + 1] [i_4] [i_2])))));
                                var_22 = 1;
                                arr_12 [12] [i_1] [12] [i_1] [12] = ((min((arr_10 [i_0] [i_4 + 1] [i_2] [i_2] [i_4]), (arr_6 [4] [i_4 + 1]))));
                            }
                        }
                    }
                    arr_13 [i_2] [i_1] [i_0] = ((~(~144)));
                }
            }
        }
    }
    #pragma endscop
}
