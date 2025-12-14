/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109359
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
    var_19 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_0)) : (var_9)))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_0)))) : (max((10970616251398204518ULL), (((/* implicit */unsigned long long int) var_9)))))), (((max((var_7), (((/* implicit */unsigned long long int) 2105366900U)))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
    var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) (~((~(((/* implicit */int) var_1))))))), (2189600404U)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (-715121982)))) ? ((~(805686534U))) : (var_16))));
        var_21 = ((/* implicit */unsigned char) 782008616543205800ULL);
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_0 [8U] [i_0]))))))), (max((((long long int) arr_1 [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_4)))))))));
    }
    var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) (unsigned char)85)), (var_13))))))) : (min((min((((/* implicit */unsigned long long int) var_12)), (var_7))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_13)) + (2147483647))) << (((18446744073709551615ULL) - (18446744073709551615ULL))))))))));
    var_23 |= ((/* implicit */short) (-(((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) var_9)), (12638178692832334482ULL)))))));
}
