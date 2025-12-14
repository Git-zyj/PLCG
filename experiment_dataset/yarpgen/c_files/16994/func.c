/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16994
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
    var_11 = ((((/* implicit */_Bool) var_8)) ? (((((unsigned long long int) var_5)) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    var_12 = ((/* implicit */int) var_7);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) (+((-((+(((/* implicit */int) arr_1 [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_3 [(signed char)1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_1 [i_0]))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [1ULL]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))) : ((-(((/* implicit */int) (unsigned short)54058)))));
    }
    var_14 = ((/* implicit */unsigned char) (-(max(((-(var_6))), (((/* implicit */int) ((signed char) (unsigned short)11473)))))));
}
