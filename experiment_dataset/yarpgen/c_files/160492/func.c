/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160492
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) != (((/* implicit */int) ((short) var_10)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [(short)0] &= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_9)) ? (arr_2 [(_Bool)1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [10LL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 15; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) * (((/* implicit */int) ((arr_5 [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))))))));
        var_14 = arr_0 [i_1 + 1];
        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_1 + 3] [i_1 + 1]))));
    }
    var_16 = ((/* implicit */unsigned char) (signed char)-1);
    var_17 = ((/* implicit */signed char) var_5);
}
