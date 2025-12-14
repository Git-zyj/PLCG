/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_9 ? var_7 : var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_17 = 33;
                                var_18 = (max(((((var_8 == var_0) ? 216 : -29392))), ((3373741864660914890 / (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            }
                        }
                    }
                    arr_14 [i_1] [i_0] [13] = var_1;
                }
            }
        }
    }
    var_19 = var_10;
    var_20 = (min((((1 < (~40)))), var_6));
    #pragma endscop
}
