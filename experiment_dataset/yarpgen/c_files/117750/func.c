/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117750
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((((/* implicit */_Bool) (short)12)) ? (((/* implicit */int) (short)30)) : (((/* implicit */int) (short)-30)))) : (((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)24076)))) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) * (max((((/* implicit */long long int) 87054226)), (var_1))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (short)-3)))))))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((unsigned long long int) ((unsigned char) ((var_0) && (((/* implicit */_Bool) (unsigned char)228)))))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_0 [(signed char)13]))));
        arr_3 [2U] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned short)10223)))) != (((/* implicit */int) max((((/* implicit */short) (unsigned char)167)), ((short)1230))))));
    }
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)228)))));
}
