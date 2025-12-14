/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100409
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
    var_12 = min((var_6), (((/* implicit */int) var_1)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)32)) ? (max((((/* implicit */unsigned long long int) var_2)), (18096954212098382740ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))))));
        var_14 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (349789861611168876ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 1]))))));
        arr_2 [(unsigned short)1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)22)) ? (1183945226U) : (((/* implicit */unsigned int) arr_0 [i_0]))))))) + (min((((/* implicit */unsigned long long int) (unsigned char)145)), (((((/* implicit */_Bool) 28U)) ? (((/* implicit */unsigned long long int) 4152669816U)) : (349789861611168869ULL)))))));
    }
    var_15 = ((/* implicit */int) max((var_15), (max((((int) var_0)), ((~(((/* implicit */int) var_10))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)0))))), (max((var_5), (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) var_4))));
}
