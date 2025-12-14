/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116990
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((/* implicit */int) min((var_8), (var_2)))) != (((/* implicit */int) max(((short)-13082), ((short)13074)))))))));
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) >> (((((/* implicit */int) (unsigned short)57344)) - (57334)))))) ? ((~(((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) (short)-13094)))))) : (max(((~(((/* implicit */int) (short)13082)))), (((/* implicit */int) max(((short)-13082), ((short)14211))))))));
    }
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (var_0)));
    var_13 -= ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-13082)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_1)) : (var_0)))))));
    var_14 = ((/* implicit */short) max((((/* implicit */int) (unsigned short)2016)), (15)));
}
