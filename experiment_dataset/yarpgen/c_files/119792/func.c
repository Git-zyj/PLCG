/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119792
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_9)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) arr_1 [i_0]);
        var_19 ^= ((/* implicit */_Bool) (signed char)29);
        arr_2 [i_0] = ((/* implicit */unsigned short) var_11);
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8700)) >> (((((/* implicit */int) arr_3 [i_1])) - (38829)))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) -848847878280886218LL))));
        var_22 = ((/* implicit */short) ((((((/* implicit */int) arr_4 [i_1] [i_1])) - (((/* implicit */int) arr_4 [i_1] [i_1])))) % (((/* implicit */int) var_7))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) var_9);
    }
}
