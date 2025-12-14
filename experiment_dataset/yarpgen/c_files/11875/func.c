/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11875
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22158)) ? ((+(var_9))) : ((~(var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((var_5) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) max((((((/* implicit */int) (short)-22158)) & (-1363760602))), (((((/* implicit */_Bool) -7255234567022918561LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))));
        var_13 = ((/* implicit */unsigned char) -112558480);
        arr_3 [1U] [i_0] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 2]))) != (-7255234567022918544LL))) ? (((((/* implicit */int) arr_2 [i_0 + 4])) >> (((/* implicit */int) arr_2 [i_0 + 2])))) : (((((/* implicit */_Bool) 3762105810U)) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) var_3))))));
        var_14 = ((/* implicit */short) 25LL);
    }
    var_15 = ((/* implicit */short) ((var_5) ? (((((/* implicit */_Bool) var_10)) ? (17055398321003195441ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (-7255234567022918561LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_7)))) ? (((/* implicit */long long int) ((int) var_3))) : ((-(var_7))))))));
}
