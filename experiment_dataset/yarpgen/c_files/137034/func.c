/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137034
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_5 [i_1] [i_0])))))))));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((-16LL), (((/* implicit */long long int) (unsigned short)16)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)42246)) : (var_8)))))) ? (((/* implicit */long long int) var_10)) : ((((((_Bool)1) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) >> (((int) var_15))))));
    var_19 = var_3;
}
