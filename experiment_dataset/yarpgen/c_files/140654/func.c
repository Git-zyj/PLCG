/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140654
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)6)), ((unsigned short)65535)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 18446744073709551606ULL)))) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) 0LL)) : (7ULL)))));
            var_20 += ((/* implicit */int) var_19);
        }
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((-20LL), (-28LL))))));
    }
    for (short i_2 = 4; i_2 < 10; i_2 += 1) 
    {
        var_22 ^= ((/* implicit */short) ((min((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_14))))), (arr_3 [i_2 - 4] [i_2]))) % (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
        var_23 &= ((/* implicit */unsigned char) var_14);
        var_24 += ((/* implicit */signed char) var_1);
    }
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) max((((unsigned int) arr_9 [i_3] [i_3])), (((/* implicit */unsigned int) (_Bool)1)))))));
        var_26 = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_3]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_3]))) : (var_5)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_8 [i_3] [i_3]))))) : (((((/* implicit */_Bool) var_17)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
        arr_10 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (((/* implicit */int) arr_7 [i_3]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) 19LL)) ? (((/* implicit */int) arr_9 [i_3] [(unsigned char)1])) : (((/* implicit */int) var_8))))))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_7 [i_3])), (var_6)))) : (((((/* implicit */int) var_6)) - (((/* implicit */int) var_14))))));
        arr_11 [i_3] = ((/* implicit */int) arr_7 [i_3]);
    }
    var_27 = ((/* implicit */unsigned long long int) ((-1LL) | (-3LL)));
    var_28 = ((long long int) min((var_19), (var_14)));
}
