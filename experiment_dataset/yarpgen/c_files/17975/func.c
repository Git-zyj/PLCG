/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17975
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) arr_0 [(_Bool)1] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (var_2)));
        var_19 = (~(((unsigned long long int) arr_7 [i_1])));
        var_20 = ((/* implicit */int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)511))))) / (((long long int) 36028797018701824ULL))));
        var_21 = ((/* implicit */unsigned char) arr_4 [i_1]);
    }
    var_22 += ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned short)65025)) : (((/* implicit */int) (short)0))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)13138), (var_7))))) : (max((-5815950576573411371LL), (((/* implicit */long long int) var_10))))))));
    var_23 = ((/* implicit */unsigned char) (((_Bool)0) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 889637613)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19941))) : (2779946518U))))));
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)4412))))), ((+(((unsigned long long int) (unsigned char)15)))))))));
    var_25 = (!((_Bool)1));
}
