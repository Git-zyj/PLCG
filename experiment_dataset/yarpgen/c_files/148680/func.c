/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148680
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
    var_17 &= ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (var_3))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] &= ((unsigned long long int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */short) (_Bool)1)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) 1048575U)) : (-9223372036854775800LL)))) ? (var_5) : (((/* implicit */long long int) arr_2 [i_0 - 3]))))));
    }
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */int) ((max((var_12), (((/* implicit */long long int) 1434369581U)))) != (((/* implicit */long long int) ((/* implicit */int) max((var_1), (((/* implicit */short) var_2))))))))) : (max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)2742)))), (((/* implicit */int) max((var_1), (((/* implicit */short) var_2)))))))));
    var_19 &= 2860597715U;
}
