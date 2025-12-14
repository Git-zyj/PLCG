/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180340
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
    var_17 = ((/* implicit */unsigned char) 491520ULL);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = min(((-(((/* implicit */int) var_4)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
        arr_4 [(unsigned short)20] = ((/* implicit */short) ((unsigned short) var_16));
        arr_5 [i_0] = ((/* implicit */unsigned char) (~(min((((/* implicit */int) arr_0 [i_0])), (arr_2 [i_0])))));
        var_18 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (unsigned char)6)))) : (((/* implicit */int) var_6)))) - (((/* implicit */int) (signed char)36))));
    }
    var_19 *= ((/* implicit */unsigned short) var_9);
}
