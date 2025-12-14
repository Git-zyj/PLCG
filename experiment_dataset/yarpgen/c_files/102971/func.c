/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102971
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
    var_14 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (short)-1031)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */long long int) arr_3 [i_2]);
                    var_16 -= ((/* implicit */unsigned long long int) ((signed char) -709768861));
                    var_17 *= ((/* implicit */int) ((_Bool) ((short) min((10350724755618122385ULL), (((/* implicit */unsigned long long int) var_5))))));
                    var_18 = (signed char)127;
                    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) ((((long long int) var_6)) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)73))))))));
                }
            } 
        } 
    } 
}
