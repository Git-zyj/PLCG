/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102530
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
    var_12 = ((/* implicit */unsigned int) var_1);
    var_13 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (max((((/* implicit */unsigned long long int) var_1)), (var_6)))))), (max((max((var_8), (var_8))), (((/* implicit */long long int) var_5))))));
    var_14 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 + 4]);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((int) (short)-22666)) : ((+(((/* implicit */int) arr_1 [i_0 + 2]))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1 - 1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)22667)) && (arr_5 [i_1])))), (var_11)));
        var_16 *= ((/* implicit */int) ((min((max((var_6), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) || (arr_6 [i_1] [i_1])))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (var_8) : (((/* implicit */long long int) var_11)))))))));
    }
}
