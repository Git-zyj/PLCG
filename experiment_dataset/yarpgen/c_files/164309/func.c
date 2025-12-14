/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164309
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
    var_15 = ((/* implicit */short) ((unsigned int) min((var_7), (((/* implicit */unsigned long long int) ((short) var_7))))));
    var_16 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (((var_5) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((var_6) ^ (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (4294967286U))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
                    var_18 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_2])), (var_7)))));
                    var_19 = ((/* implicit */unsigned int) var_12);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) 14825385881698569848ULL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_14)) / (((/* implicit */int) var_5))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_14)))))))));
}
