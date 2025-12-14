/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129593
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) 2146800999U)) * (var_16))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    arr_11 [i_0] [(_Bool)1] [i_2] [i_0] = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2]);
                    arr_12 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */signed char) ((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))));
                }
                /* vectorizable */
                for (short i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_0 [i_3 + 4])) % (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 1; i_4 < 24; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((arr_1 [i_0]) * (arr_13 [i_1 - 3] [i_4] [i_3] [i_3]))) % ((-(4294967295U)))));
                        var_21 *= ((/* implicit */short) var_17);
                    }
                }
                arr_18 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (short)-4074);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) != (((/* implicit */int) var_6))));
    var_23 = ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) + (min((((/* implicit */unsigned int) var_12)), (var_4))));
    var_24 &= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30997))) * (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4061))))))) << (((((/* implicit */int) ((short) (((_Bool)1) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4073))))))) + (26212)))));
}
