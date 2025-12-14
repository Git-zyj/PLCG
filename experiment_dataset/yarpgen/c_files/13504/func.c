/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13504
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
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 - 1])) - (((/* implicit */int) arr_1 [i_0 - 1]))))), (((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (1556261001) : (((/* implicit */int) arr_1 [i_0])))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((long long int) arr_1 [i_0])) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */int) (unsigned short)60154)) : (((/* implicit */int) ((((int) arr_1 [22])) >= (((/* implicit */int) ((short) arr_0 [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))))) <= (((/* implicit */int) (unsigned short)43775))));
        var_18 = ((/* implicit */unsigned int) var_11);
    }
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_8))));
}
