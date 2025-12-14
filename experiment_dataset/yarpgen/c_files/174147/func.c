/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174147
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
    for (short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_17 += ((/* implicit */long long int) max((arr_1 [(short)16]), (((/* implicit */unsigned short) ((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_1 [i_0]))))))))));
        arr_3 [i_0] = ((/* implicit */signed char) min((0), (((/* implicit */int) (unsigned char)90))));
    }
    var_18 = ((/* implicit */int) (~((~(min((((/* implicit */unsigned long long int) (unsigned short)6367)), (var_13)))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    var_20 = ((/* implicit */short) (((~(((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_14)))))) >= (((/* implicit */int) var_1))));
}
