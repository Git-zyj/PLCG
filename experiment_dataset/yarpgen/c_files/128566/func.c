/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128566
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
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_12)), (min((((((/* implicit */long long int) var_8)) - (var_13))), (((/* implicit */long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1)))))))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) < (((((/* implicit */_Bool) min((var_6), (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned int) var_8))))))));
    var_16 = ((/* implicit */unsigned long long int) var_3);
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((unsigned long long int) var_6)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) var_8)) * (0ULL))), (((/* implicit */unsigned long long int) ((var_8) < (((/* implicit */int) arr_0 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (~(min((min((((/* implicit */unsigned int) (short)-23906)), (arr_1 [i_0]))), (((/* implicit */unsigned int) var_11))))));
    }
}
