/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_2));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [13] [i_0] = ((((!(((arr_3 [12] [12]) || var_2)))) && (((!var_9) && (!var_9)))));
                                var_12 = (min(((var_8 >> (var_0 - 4359286817546496725))), var_7));
                            }
                        }
                    }
                    arr_12 [20] [i_2] [i_1] [17] = var_1;
                }
            }
        }
    }
    var_13 = var_6;
    #pragma endscop
}
