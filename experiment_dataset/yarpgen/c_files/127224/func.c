/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127224
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_4 [(unsigned short)11] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) (((+(var_0))) >> (((var_3) - (4669951083367144881LL))))))));
        var_10 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]))) >> (((/* implicit */int) ((unsigned char) (_Bool)1)))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) var_9);
        var_11 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_4))))))), (max((max((var_0), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) (-(var_3))))))));
        var_12 -= ((/* implicit */signed char) (+(((var_9) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : ((+(((/* implicit */int) var_2))))))));
    }
    var_13 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(max((18446744073709551612ULL), (((/* implicit */unsigned long long int) -4972097427562503275LL)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        var_14 = ((/* implicit */_Bool) var_1);
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_6 [i_1] [i_1]))));
        arr_8 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))), ((-(((/* implicit */int) ((_Bool) var_0)))))));
    }
}
