/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151585
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
    var_12 = ((/* implicit */_Bool) -3990519137321226407LL);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 *= ((((/* implicit */_Bool) -3348424487496192066LL)) ? (((/* implicit */int) ((signed char) arr_8 [0ULL] [0ULL] [i_2] [i_2] [i_1]))) : (((/* implicit */int) ((unsigned short) min((-3990519137321226407LL), (3990519137321226400LL))))));
                            arr_9 [i_0] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1574012734U)) ? (((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1] [i_2] [i_2] [i_3] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (3990519137321226406LL))) : (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0] [(_Bool)1] [i_0] [9ULL] [i_0])) : (((/* implicit */int) arr_5 [i_0] [(short)9] [i_2] [(short)9]))))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3990519137321226406LL)) ? (-1) : (((/* implicit */int) (short)511)))))))))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_1] = ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)8162))))), (max((((/* implicit */long long int) (signed char)103)), (-3990519137321226429LL)))))) ? (((arr_8 [i_1] [i_1] [(short)11] [(unsigned char)11] [i_0 - 1]) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (_Bool)1))));
}
