/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133310
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (var_16))))) : (max((var_1), (((/* implicit */unsigned int) (_Bool)1))))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_12))))) : (((((/* implicit */int) var_5)) / (((/* implicit */int) var_6)))))) : (((((/* implicit */int) (signed char)-80)) / (2026195)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */short) (+((~(((var_17) | (((/* implicit */long long int) var_10))))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)513))) >= (arr_1 [i_0] [i_1 - 1])))) != (((/* implicit */int) (short)-1739)))))) < (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)40986)) + (1209495441)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_5))));
    var_24 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) + ((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))) < (((/* implicit */int) var_16))));
    var_25 = ((/* implicit */short) var_1);
}
