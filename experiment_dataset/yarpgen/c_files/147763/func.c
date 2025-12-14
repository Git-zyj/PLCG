/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147763
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 4807831939048737433LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8031188958727717335LL))) : (((/* implicit */long long int) 1091973029))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (((-(((/* implicit */int) var_9)))) / (((/* implicit */int) ((unsigned char) var_3)))));
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_1 [(unsigned char)8])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))))))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((((/* implicit */long long int) (((!(((/* implicit */_Bool) 5461268117485814700LL)))) && ((_Bool)1)))), (5461268117485814703LL))))));
        var_15 = var_0;
    }
    for (int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) 1875101863U)) ? (max((((long long int) (unsigned char)170)), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (1929171828U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101)))))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
        var_17 *= ((/* implicit */unsigned char) arr_1 [i_2]);
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned char) ((unsigned int) 5461268117485814713LL));
        var_18 = ((/* implicit */unsigned char) arr_4 [i_2]);
    }
}
