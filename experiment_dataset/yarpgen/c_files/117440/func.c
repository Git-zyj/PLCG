/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117440
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
    var_14 = ((/* implicit */long long int) 1645802813);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) (unsigned short)17675);
        var_16 ^= ((/* implicit */long long int) (+(arr_0 [i_0] [i_0])));
        arr_3 [(_Bool)1] &= ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))));
        var_17 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
    }
    var_18 = ((/* implicit */signed char) min((((/* implicit */int) var_3)), ((+(((/* implicit */int) max((var_8), ((unsigned short)4170))))))));
}
