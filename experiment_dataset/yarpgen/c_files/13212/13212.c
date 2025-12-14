/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = (~7347753322326563450);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = (min((min((arr_1 [i_0 - 2] [i_0 + 3]), var_1)), var_9));
                                var_13 = (max(var_13, (((var_4 || (arr_13 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 3]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = ((123 ? 236 : 123));
    #pragma endscop
}
