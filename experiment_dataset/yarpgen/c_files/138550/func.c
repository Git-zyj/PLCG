/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138550
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */int) var_13)) * (((/* implicit */int) var_2)))) : (((/* implicit */int) ((short) var_10))))))))));
    var_16 = ((/* implicit */unsigned short) var_12);
    var_17 = var_12;
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [i_0 - 2] &= ((/* implicit */unsigned short) max((((((var_1) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) arr_0 [i_0 + 1])))), (((((/* implicit */_Bool) min((arr_0 [i_0]), (var_13)))) ? (((((/* implicit */_Bool) arr_0 [9U])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_0 [i_0]))))));
        var_18 &= ((/* implicit */signed char) arr_0 [i_0]);
    }
    for (signed char i_1 = 3; i_1 < 22; i_1 += 1) 
    {
        arr_5 [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) 1))));
        var_19 ^= ((/* implicit */unsigned char) var_12);
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        var_20 ^= max((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) max((var_3), (arr_6 [i_2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1LL)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) arr_6 [i_2])))))));
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) ((_Bool) -1));
        arr_9 [(short)16] = ((/* implicit */signed char) arr_3 [(unsigned short)2]);
        var_21 |= arr_3 [i_2];
        arr_10 [(unsigned char)9] [i_2] = min((((/* implicit */int) (unsigned short)6)), (((((/* implicit */int) arr_7 [i_2 + 1])) / (((/* implicit */int) (unsigned char)238)))));
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = ((/* implicit */long long int) ((arr_12 [i_3 + 1]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [i_3 + 1])) : (((/* implicit */int) var_13))))) : (min((((arr_14 [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3]))) : (arr_13 [13] [13]))), (((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (arr_13 [i_3] [i_3]) : (var_12)))))));
        arr_16 [i_3] [i_3] = ((/* implicit */signed char) arr_14 [i_3]);
    }
}
