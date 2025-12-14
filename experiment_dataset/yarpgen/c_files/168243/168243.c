/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = 3941727302279403668;
                    arr_9 [i_0] [i_1 - 2] [i_2] = 7056074010148531757;
                    arr_10 [i_0] [i_1] [i_1] = ((!(20 % var_3)));
                }
            }
        }
    }
    var_16 = (((var_7 % 20) ? 4503599627370240 : var_9));
    #pragma endscop
}
