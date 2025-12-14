/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123347
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
    var_20 = (signed char)-103;
    var_21 = (((+(((((/* implicit */int) var_11)) + (((/* implicit */int) var_14)))))) >> (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_2))))))) - (119))));
    var_22 -= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) >= (13056293959269077425ULL))))) / ((-(var_12))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_8))) < (((3512777666U) / (((/* implicit */unsigned int) var_10))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [(signed char)8] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (3512777666U) : (((782189630U) ^ (((/* implicit */unsigned int) arr_1 [8]))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */signed char) 782189634U);
                var_23 = ((/* implicit */unsigned short) min((var_23), (var_7)));
            }
        } 
    } 
}
