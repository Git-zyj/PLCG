/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157385
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
    var_19 = ((unsigned short) ((((/* implicit */_Bool) (signed char)23)) ? (((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (0) : (((/* implicit */int) var_10))))) ? (var_11) : (((/* implicit */unsigned int) -1483039557))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (-1483039544) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_14))))) : (var_14)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */short) ((unsigned long long int) 3U));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [(short)0] [i_0]) : (var_15)))) ? (max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (-2147483630))), (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) ((((/* implicit */_Bool) (short)24287)) || (((/* implicit */_Bool) (short)-16351))))) / (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (arr_1 [i_0])))))));
    }
    for (unsigned short i_1 = 3; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_22 = arr_0 [2U];
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -5)) ? (((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) (_Bool)1)) : (-2))) : (((arr_1 [(short)4]) * (((/* implicit */int) (unsigned short)0))))));
    }
    var_24 = ((/* implicit */long long int) var_0);
}
