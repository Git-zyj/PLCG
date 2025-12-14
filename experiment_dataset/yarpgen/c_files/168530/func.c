/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168530
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
    var_19 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (short)32767)))))) : ((-(3709447030383521985LL))))) * (((/* implicit */long long int) (+(min((((/* implicit */unsigned int) var_3)), (2322478266U))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (max((((/* implicit */unsigned long long int) 232147580)), (((((/* implicit */_Bool) var_1)) ? (1134907106097364992ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14636)))))))));
                var_21 = (unsigned short)62479;
                var_22 ^= ((/* implicit */short) arr_0 [i_0 - 1]);
                var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)204))))), (((((/* implicit */unsigned long long int) var_9)) ^ ((~(arr_1 [i_0] [i_1 + 1])))))));
                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_0 [i_0 + 1]))))) ? (arr_3 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7446))));
            }
        } 
    } 
}
