/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140430
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
    for (short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) (~(((int) ((((/* implicit */int) arr_0 [(unsigned char)2])) % (((/* implicit */int) arr_0 [(unsigned char)4]))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) arr_1 [i_0]));
    }
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (~(var_8))))) ? (((((((/* implicit */_Bool) var_7)) ? (var_8) : (var_8))) >> (((max((((/* implicit */long long int) var_9)), (var_2))) - (6342743308518697368LL))))) : (((/* implicit */unsigned long long int) ((unsigned int) max((var_7), (var_8)))))));
    var_12 += (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_9)) : (var_3)))) ? (((/* implicit */unsigned int) (+(var_9)))) : (((unsigned int) var_2)))));
    var_13 += ((/* implicit */signed char) var_4);
}
