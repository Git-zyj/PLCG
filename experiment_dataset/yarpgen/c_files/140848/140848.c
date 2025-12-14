/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    var_18 = (~var_3);
                    var_19 *= ((-1776552157 ? -1 : 16899289760748043723));
                }
                var_20 = var_7;
                var_21 ^= (((((var_7 ? 62 : 4095)) | -var_14)));
                var_22 = (max(var_22, (((((var_3 ? (var_10 | 0) : 8443869109504348490)) - (max((min(var_2, var_10)), (11405 - 1))))))));
            }
        }
    }
    var_23 = var_3;
    var_24 = var_0;
    #pragma endscop
}
