/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148760
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
    var_10 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (~(arr_2 [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_7))))) : (((/* implicit */int) var_2))));
        arr_5 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))));
    }
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (var_8) : (var_1))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)1836)) : (((/* implicit */int) (signed char)6)))))))) ? ((+(max((var_6), (((/* implicit */unsigned long long int) var_1)))))) : (max(((~(var_6))), (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned short) var_2)))))))));
}
