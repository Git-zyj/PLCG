/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127898
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_3);
        arr_4 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */int) (signed char)19)) / (min((1205242793), (((/* implicit */int) arr_1 [i_0]))))))));
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) / (-1205242793)))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_1) : (((/* implicit */int) ((unsigned char) var_16)))));
        var_18 = var_11;
    }
    var_19 -= ((/* implicit */unsigned long long int) var_11);
}
