/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120452
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
    var_19 *= ((/* implicit */unsigned char) var_9);
    var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 14588518480543211293ULL)))))));
    var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), ((+(((/* implicit */int) (unsigned short)0))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((var_9) * (((/* implicit */int) var_6))))) + (max((var_7), (var_7)))))) ? (min((max((var_10), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) 26)))) : (((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_1)))))))));
                            arr_12 [i_3] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                            var_23 = ((/* implicit */signed char) ((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-16800))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) var_11);
            }
        } 
    } 
}
