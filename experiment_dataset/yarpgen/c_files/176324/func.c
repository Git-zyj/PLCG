/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176324
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
    var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((13662728745459329682ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))))) ? (((var_4) << (((var_13) - (3216812528U))))) : ((-(318278111)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (var_5))))))) : ((-(((/* implicit */int) var_11))))));
    var_15 = ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = min((((unsigned char) max((((/* implicit */unsigned long long int) var_0)), (arr_0 [i_0])))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (arr_1 [i_0]))))))));
        var_16 *= ((/* implicit */short) ((signed char) (~(((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (13662728745459329682ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
    }
}
