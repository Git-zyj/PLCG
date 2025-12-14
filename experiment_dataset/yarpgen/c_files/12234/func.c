/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12234
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
    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((var_16) <= (((/* implicit */long long int) var_13))))) : ((+(var_11)))))), (min((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */int) var_12))))), (max((var_14), (((/* implicit */unsigned long long int) var_13))))))));
    var_18 = ((/* implicit */unsigned char) max((min((((unsigned long long int) (unsigned short)65518)), (((/* implicit */unsigned long long int) ((var_0) <= (var_11)))))), (((/* implicit */unsigned long long int) var_8))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (-(min((min((((/* implicit */unsigned long long int) var_15)), (arr_2 [(unsigned char)6]))), ((+(arr_2 [12U]))))))))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(min((arr_0 [(short)0] [(short)0]), (((/* implicit */unsigned int) ((_Bool) arr_2 [4LL]))))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_1 [i_0]))))))) - (var_15)));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0]))))) % (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
    }
}
