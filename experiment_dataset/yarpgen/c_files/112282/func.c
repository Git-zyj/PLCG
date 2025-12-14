/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112282
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
    var_19 = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) max((13929945300224402136ULL), (((/* implicit */unsigned long long int) (short)-8443))))))));
    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_7)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (min((var_7), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [(unsigned char)3])))) : (((var_15) ? (var_3) : (var_4)))))) || (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_10))))))))));
                var_22 = ((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((int) var_10))))) || (((min((var_3), (((/* implicit */unsigned long long int) var_5)))) < ((+(var_7)))))));
    var_24 = ((/* implicit */_Bool) ((short) var_2));
}
