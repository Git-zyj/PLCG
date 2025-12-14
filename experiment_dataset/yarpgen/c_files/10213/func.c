/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10213
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
    var_17 = ((/* implicit */int) max((max((var_10), (((/* implicit */long long int) var_14)))), (max((((/* implicit */long long int) var_2)), (max((var_6), (((/* implicit */long long int) var_5))))))));
    var_18 = ((/* implicit */int) (+(((((/* implicit */_Bool) (-(var_12)))) ? (((var_6) % (((/* implicit */long long int) var_15)))) : (max((var_4), (((/* implicit */long long int) var_7))))))));
    var_19 |= ((/* implicit */short) (((_Bool)1) ? (3) : (((/* implicit */int) var_13))));
    var_20 += ((/* implicit */unsigned char) ((long long int) var_5));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) var_8);
        arr_2 [i_0] [i_0] = (+(((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))));
    }
}
