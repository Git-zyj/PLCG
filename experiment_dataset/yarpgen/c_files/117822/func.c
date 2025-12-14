/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117822
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((_Bool) ((max((((/* implicit */int) (unsigned short)65515)), (1286500389))) == (var_18))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) | (((arr_2 [i_0]) ? (((long long int) arr_1 [i_0] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65515))));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [(_Bool)1] [i_1]), (arr_1 [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)65515)) : (((/* implicit */int) arr_1 [i_1] [i_1])))) : (((/* implicit */int) ((unsigned short) arr_1 [i_1] [i_1])))));
    }
    var_20 = ((/* implicit */_Bool) -1208843908);
    var_21 = var_11;
}
