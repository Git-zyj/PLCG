/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180697
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-12)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)60711))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))))) || (((/* implicit */_Bool) var_8)))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_11);
                    var_17 = ((/* implicit */short) max(((+(((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_4 [i_0])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-17550))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_12)))));
    var_19 *= ((/* implicit */signed char) var_13);
}
