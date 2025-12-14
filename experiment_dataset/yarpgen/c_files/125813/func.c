/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125813
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (unsigned short)51725))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        var_15 += ((/* implicit */short) ((((((/* implicit */_Bool) (-(arr_1 [(short)7])))) ? (arr_1 [i_0 - 2]) : (arr_0 [i_0]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((537350486U) * (arr_1 [i_0 - 4]))))))));
        var_16 ^= ((/* implicit */short) max((537350486U), (((/* implicit */unsigned int) -44152335))));
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */signed char) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)1865)) ? (((/* implicit */long long int) max((var_11), (arr_0 [i_0 + 2])))) : ((+(-1644149338801177601LL))))) != (((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0 - 4]))))))));
    }
    var_17 |= ((/* implicit */unsigned short) var_5);
}
