/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185502
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
    var_17 = ((/* implicit */int) var_7);
    var_18 = ((int) ((short) ((((/* implicit */_Bool) (short)-17373)) ? (((/* implicit */int) (short)-17373)) : (((/* implicit */int) (short)-17373)))));
    var_19 = min((((var_12) - (((/* implicit */int) var_5)))), (max((((/* implicit */int) min(((short)12728), ((short)63)))), (((var_10) - (var_1))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) (short)-3841);
                    arr_9 [i_1] = ((/* implicit */short) (((+((+(var_14))))) == ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8335))) >= (12181620348583626734ULL))))))));
                    var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1])) / (var_12)))) ? (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_6)) : (var_11)))) : (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */int) (signed char)-42)))))))));
                }
            } 
        } 
    } 
}
