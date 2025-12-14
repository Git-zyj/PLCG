/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150213
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)65530), (((/* implicit */unsigned short) (_Bool)0))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (4515332146443237981ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))))) : (max((((((/* implicit */long long int) ((/* implicit */int) var_2))) / (-3383601952860664929LL))), (((/* implicit */long long int) (unsigned short)13258))))));
        var_14 *= ((/* implicit */_Bool) (unsigned char)37);
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (-(((arr_1 [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))))));
    }
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_6))));
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((var_3) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))))) : (((/* implicit */int) var_10)))))));
    var_18 |= ((/* implicit */int) var_1);
}
