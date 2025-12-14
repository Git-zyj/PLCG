/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!(((-(!4015382288236395746))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_20 = 1237873910;
                            var_21 = 248;
                            var_22 = -450053942;
                            var_23 = -5344692726150471309;
                        }
                    }
                }
                var_24 = (min(var_24, 19));
            }
        }
    }
    var_25 = (~0);
    #pragma endscop
}
