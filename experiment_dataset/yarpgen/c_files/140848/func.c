/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140848
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    var_18 = ((/* implicit */unsigned char) ((short) (~(((/* implicit */int) var_3)))));
                    var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1776552157)) ? (((/* implicit */unsigned long long int) -1)) : (16899289760748043723ULL)));
                }
                var_20 = ((/* implicit */unsigned long long int) var_7);
                var_21 ^= ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62))) : (4095ULL))) | ((-(var_14))))));
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((var_3) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) | (0)))) : ((+(8443869109504348490ULL))))) - (max((min((var_2), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)11405)) - (((/* implicit */int) (_Bool)1))))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_3);
    var_24 = var_0;
}
