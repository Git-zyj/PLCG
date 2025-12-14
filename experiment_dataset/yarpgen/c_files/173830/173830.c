/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    var_21 ^= var_10;
    var_22 = 14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 + 1] [12] = ((-((var_6 ? (1 < var_1) : -2651779393061478465))));
                arr_5 [i_0] |= ((4294967281 >> (((~var_2) + 1068456944))));
                var_23 = (min(var_23, ((max((((-(var_5 == 4294967281)))), ((var_6 << (((arr_2 [i_0] [i_1 + 2]) - 3959074827)))))))));
            }
        }
    }
    #pragma endscop
}
