/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100022
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
    var_16 = ((/* implicit */int) max((var_16), ((+(var_4)))));
    var_17 -= ((/* implicit */unsigned int) var_3);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_18 -= ((/* implicit */int) max((((/* implicit */unsigned long long int) var_7)), ((+(var_9)))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) 1459055760)) ? (-1130453186) : (((/* implicit */int) (unsigned short)4651)))))));
    }
    var_20 = ((/* implicit */unsigned char) ((((var_8) * (((/* implicit */unsigned long long int) (+(-1895912760)))))) - (((/* implicit */unsigned long long int) min((var_14), (var_12))))));
}
