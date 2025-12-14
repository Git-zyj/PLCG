/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (!((max(((((arr_1 [i_0]) && (arr_0 [i_0])))), var_7))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_10 *= (((((~((var_6 ? var_1 : (arr_1 [i_2])))))) ? var_0 : (((!((max(var_6, var_4))))))));
                                arr_13 [i_4] [i_4] = ((+(((var_1 < ((var_2 ? (arr_1 [i_4]) : (arr_2 [i_2]))))))));
                            }
                        }
                    }
                    var_11 = (max(var_11, ((min((((!((min(127, 16)))))), 240)))));
                    arr_14 [i_0] [i_1] = (((arr_9 [i_1] [i_1]) <= ((min((arr_9 [i_2] [i_0]), (arr_9 [i_0] [i_0]))))));
                }
            }
        }
    }
    var_12 = (max((((((min(var_0, var_8))) ? var_0 : (max(var_2, var_0))))), var_6));
    #pragma endscop
}
