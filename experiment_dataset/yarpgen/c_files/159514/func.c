/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159514
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 2559081594U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (8650096894325173256ULL))))) ? ((+(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)119))) : (0U))))) : (((((/* implicit */_Bool) (unsigned char)187)) ? (1735885701U) : (((/* implicit */unsigned int) 1451464849))))));
                    arr_10 [i_1] [i_2] = ((/* implicit */short) ((unsigned short) min((var_1), (((/* implicit */int) arr_8 [i_0] [i_1])))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_6) << (((((/* implicit */int) var_14)) - (64550))))))));
    var_21 = ((/* implicit */unsigned long long int) var_17);
}
