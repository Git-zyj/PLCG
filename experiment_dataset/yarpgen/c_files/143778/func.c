/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143778
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
    for (long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_14 &= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [i_0 + 2]))));
                    var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 3]))) : (((1307932188U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33554)))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) min((var_6), (((/* implicit */int) (signed char)87))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (241307925U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16631)))))) : (var_1)))));
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) (unsigned char)41))))) ? (((/* implicit */int) var_5)) : (((int) var_5))))))));
    var_18 = ((/* implicit */short) (unsigned short)48904);
}
