/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103752
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (-921638999) : (((/* implicit */int) ((unsigned short) 921638998)))))) | (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_7))))) ? (var_14) : (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) * (((/* implicit */int) (short)-16384)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_0] [(unsigned short)5] [(unsigned short)5] = ((/* implicit */short) ((((/* implicit */_Bool) ((921638998) / (((/* implicit */int) (short)16383))))) ? ((+((-(2477823967U))))) : (((/* implicit */unsigned int) max(((+(((/* implicit */int) var_7)))), (arr_2 [i_0] [i_1]))))));
                var_16 = min((((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2417)) ? (((/* implicit */int) (short)6690)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) min(((signed char)64), ((signed char)-40)))) : ((-(((/* implicit */int) (short)16383))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_9))));
    var_18 = ((/* implicit */unsigned int) var_9);
}
