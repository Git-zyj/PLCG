/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125041
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
    var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */unsigned long long int) 305145837)) : (5528452800758534307ULL)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) arr_0 [i_0]);
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) var_7);
                var_20 = ((/* implicit */int) (~(max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16994))) % (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)16994)) && (((/* implicit */_Bool) var_2)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */int) min(((short)-16381), ((short)-16383)))) : (((/* implicit */int) var_1)))) - (((/* implicit */int) var_1))));
}
