/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (min(((((max(-116, 119))) ? var_16 : (min(var_15, 18446744073709551602)))), ((min(var_10, 127)))));
    var_20 += var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [10] [i_0] = var_2;
                var_21 = (((((var_5 / ((((arr_2 [i_0]) * (arr_5 [i_0] [i_0] [i_1]))))))) ? 130944 : -var_1));
                arr_7 [i_1] [i_1] [i_0] = ((((102 >= 119) < (arr_4 [i_0]))));
                arr_8 [i_0] [i_1] = ((((((((var_10 >= (arr_0 [i_0])))) >= (arr_2 [i_0])))) * ((-(min((arr_0 [i_0]), var_18))))));
            }
        }
    }
    var_22 = var_13;
    #pragma endscop
}
