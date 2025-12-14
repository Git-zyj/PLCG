/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_10 &= ((~(((arr_6 [8] [i_1] [i_1 - 2]) << (((arr_6 [i_0] [i_1] [i_1 - 2]) - 30849))))));
                    var_11 = (min(var_11, ((max((((26057 - (arr_7 [i_0] [i_1 - 2])))), (((-8 && (arr_7 [i_1 - 1] [i_1 - 1])))))))));
                    var_12 += (((-((-3125880147041000331 ? var_8 : (arr_7 [i_2] [i_0]))))));
                }
            }
        }
    }
    var_13 = ((var_1 ? (((min(var_1, var_9)))) : ((var_0 ? ((-4096 ? 6592651323477980499 : 89)) : (!-4096)))));
    var_14 = (((((-(~-4080)))) ? 16822 : (((min(var_8, var_2)) ^ var_6))));
    #pragma endscop
}
