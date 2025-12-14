/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16638
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
    var_17 = ((/* implicit */long long int) ((_Bool) max((7838139013993050711LL), (((/* implicit */long long int) ((_Bool) var_16))))));
    var_18 = ((/* implicit */long long int) var_14);
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((signed char) (short)3103)))));
    var_20 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (+(((/* implicit */int) ((short) arr_6 [i_0] [i_0] [i_0] [i_0]))))))));
                    arr_7 [(short)13] [i_2] [(short)1] [i_0] = ((/* implicit */unsigned long long int) ((short) ((unsigned char) max((((/* implicit */unsigned long long int) (short)3109)), (18446744073709551615ULL)))));
                }
            } 
        } 
    } 
}
