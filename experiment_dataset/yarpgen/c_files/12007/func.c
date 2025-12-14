/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12007
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
    for (unsigned int i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 8395801359858039312ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (1169517295721756774ULL))))), (((unsigned long long int) (~(var_5))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    arr_7 [i_0] [i_0] [10ULL] = ((/* implicit */unsigned short) (~(var_5)));
                    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) ((short) (-(var_5)))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    var_11 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))), ((-(17277226777987794844ULL)))));
                    var_12 |= ((/* implicit */short) 17277226777987794860ULL);
                }
            }
        } 
    } 
    var_13 ^= ((/* implicit */unsigned long long int) var_3);
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)253)) << (((var_0) - (20170982095100397ULL)))))), (((((/* implicit */_Bool) 1169517295721756775ULL)) ? (var_6) : (var_6))))) ^ (var_7))))));
}
