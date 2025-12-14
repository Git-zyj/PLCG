/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181781
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)30828)) ? (((/* implicit */int) arr_1 [i_0])) : (arr_2 [i_0]))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)18794))))) ? (((arr_2 [i_0]) / (((/* implicit */int) (unsigned short)34707)))) : (((var_3) ? (((((/* implicit */_Bool) (unsigned short)18561)) ? (((/* implicit */int) (unsigned short)30829)) : (((/* implicit */int) (unsigned short)34697)))) : (((((/* implicit */_Bool) (unsigned short)30828)) ? (arr_3 [i_0]) : (2147483637)))))));
    }
    var_11 = ((/* implicit */unsigned char) var_4);
}
