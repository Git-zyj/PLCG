/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    var_20 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = 15;
                    arr_7 [i_0] [i_0] = (((12328 && 3001078120) ? ((((((11633 ? 1 : 1))) || (!53208)))) : 1));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = (((~1) ? (~4294967295) : (37322 & 3120672466)));
                    arr_9 [i_0] [i_0] [i_2] = -0;
                    arr_10 [i_0] [i_0] [i_0] = (((((max(20821, 0)))) == (((4294967292 ? 1 : 12328)))));
                }
            }
        }
    }
    var_21 = ((((var_14 * (~0))) % -var_7));
    var_22 = var_6;
    #pragma endscop
}
