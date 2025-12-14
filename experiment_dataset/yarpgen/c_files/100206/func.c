/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100206
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [(unsigned char)4] [3U])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_4 [i_0] [i_1]))));
                var_19 = ((/* implicit */unsigned short) (~(8265264295071795605ULL)));
                var_20 -= ((/* implicit */unsigned short) arr_1 [i_1 - 2]);
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)33020)) ^ (((/* implicit */int) (unsigned char)39))))) != (((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_10))))) ? (((min((var_1), (((/* implicit */unsigned int) var_6)))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_0)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
}
