/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14545
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
    var_15 = ((/* implicit */signed char) min((((long long int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) (signed char)-6)) + (6)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) && (var_10))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_1 [i_0]))) == (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-4)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_5))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_17 = ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1])))));
        var_18 = ((/* implicit */int) var_1);
        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (8935141660703064064LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [8]))))) + (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)25919)) : (arr_4 [i_1])))), (var_9)))));
        var_20 = ((/* implicit */unsigned char) ((-8935141660703064057LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-6)))));
    }
}
