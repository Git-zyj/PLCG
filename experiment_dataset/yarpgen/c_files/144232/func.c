/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144232
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
    var_15 *= ((/* implicit */unsigned char) var_13);
    var_16 += ((/* implicit */_Bool) var_9);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) (((-9223372036854775807LL - 1LL)) > (((min((3978944572174398758LL), (((/* implicit */long long int) var_8)))) * (((/* implicit */long long int) ((/* implicit */int) ((short) var_11))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_18 *= ((/* implicit */signed char) (-(((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) << ((((~(((/* implicit */int) var_1)))) + (244)))))));
                                var_19 ^= ((/* implicit */short) (-(((unsigned int) (short)-3783))));
                                var_20 ^= ((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_1] [i_0]);
                                var_21 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
