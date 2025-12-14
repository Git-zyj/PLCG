/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109044
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
    var_18 = ((/* implicit */unsigned int) var_10);
    var_19 += ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_2)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) 1051585113U);
        var_20 *= ((/* implicit */unsigned char) max(((signed char)-18), (((signed char) arr_0 [i_0] [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = var_5;
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) arr_4 [4U]))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)48143)) || (((/* implicit */_Bool) var_16)))) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)32))))))) - ((~((+(430451663548403503ULL)))))));
    }
}
