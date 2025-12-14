/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1410
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
    var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))) : ((+(((((/* implicit */long long int) ((/* implicit */int) var_2))) & (var_12)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_2 [i_0])))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (var_13))));
                var_20 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) var_12)) : (arr_4 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((var_16) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_2 [i_0]))))) & (arr_3 [i_0]))))));
                var_21 -= ((/* implicit */signed char) var_0);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_22 *= ((/* implicit */unsigned int) arr_6 [i_2]);
        var_23 = var_8;
    }
}
