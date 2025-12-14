/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = ((!((!((max(-32767, (arr_1 [i_0] [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_21 = (arr_8 [i_0] [i_1] [i_2] [i_3]);
                            var_22 = (min(var_22, 8922511945949323791));
                        }
                    }
                }
            }
        }
    }
    var_23 = var_15;
    var_24 = (max(var_24, 1));
    var_25 = var_17;
    #pragma endscop
}
