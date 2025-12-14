/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((88 / var_9) * (!var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = (!-9223372036854775807);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_13 |= (((((-(arr_10 [i_0] [i_0] [i_0] [i_0])) % var_8))));
                            var_14 = max(((min(var_3, ((var_1 ? 20182 : 88))))), ((-var_9 ? var_4 : (2534363897985148164 * 0))));
                        }
                    }
                }
                var_15 += 83;
                var_16 -= ((((!(~var_5))) ? -81 : (((((var_6 ? -26274 : var_1))) ^ (28714 * 10954960035228819673)))));
            }
        }
    }
    #pragma endscop
}
