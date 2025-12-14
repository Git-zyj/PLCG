/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_0 ? var_1 : (max(var_2, -793647644)));
    var_13 = ((-var_8 ? var_7 : (((var_2 > (min(-1, var_5)))))));
    var_14 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = (((((-12965 ^ ((var_3 ? 54103 : var_6))))) ? (((((var_0 ? var_7 : (arr_0 [i_0])))) ? (((11432 ? var_7 : 1936920770))) : (max(3357734842, 65536)))) : ((((arr_2 [i_0] [4]) << (var_0 - 5089230860535783755))))));
                    var_16 *= (((((arr_3 [i_1]) ? 1936920770 : 9223372036854775787)) | (arr_5 [i_0] [i_1] [i_1] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
