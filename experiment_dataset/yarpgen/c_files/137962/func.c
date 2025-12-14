/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137962
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? ((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) != (((/* implicit */long long int) ((/* implicit */int) (short)0))))))) : (((((/* implicit */_Bool) (unsigned short)9992)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) var_1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_1]) < (arr_1 [i_0] [i_1])))), (((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])) ^ (1368796405925104083ULL)))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_5 [i_1] [i_0] [i_0]) ? (max((15229319172623380642ULL), (((/* implicit */unsigned long long int) (unsigned short)25884)))) : (3217424901086170982ULL)))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))) > (9547519730215814169ULL))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((short) ((long long int) ((((/* implicit */int) (unsigned char)19)) | (((/* implicit */int) var_10))))));
}
