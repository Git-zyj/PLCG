/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_2 ^ var_6) % var_7)));
    var_11 = (var_5 & 31);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (arr_6 [i_1 - 1] [i_2 - 3]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 = ((11807138655345077081 * 5865918749740076424) - ((((arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2 + 1] [i_2 + 2] [i_3 - 1]) / (arr_10 [i_0] [i_3 - 1] [i_4] [i_0] [i_1 + 1] [i_0])))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_4] = (((((((var_7 ? 17901072908983983122 : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) / (arr_6 [i_1] [i_1])))) ? ((max((arr_3 [i_1 - 1]), (arr_3 [i_2 - 4])))) : var_8));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = var_0;
    var_15 = ((((17901072908983983095 == 0) << (var_8 <= 50))));
    #pragma endscop
}
