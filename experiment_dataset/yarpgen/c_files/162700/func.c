/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162700
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
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_3 [(unsigned short)5] [(unsigned short)10]))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))));
        arr_4 [i_0] = ((unsigned short) min((min((var_6), (var_8))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) arr_0 [i_0])))))));
    }
    for (unsigned short i_1 = 3; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)6))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1 + 2]))))), ((+(((/* implicit */int) (unsigned short)5))))));
    }
    for (unsigned short i_2 = 3; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_12 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min(((unsigned short)0), ((unsigned short)0)))) ? (((/* implicit */int) min((var_4), (var_9)))) : ((~(((/* implicit */int) (unsigned short)0)))))) <= ((-(((/* implicit */int) arr_3 [i_2 - 3] [i_2 + 1]))))));
        arr_11 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_2])) && (((/* implicit */_Bool) arr_10 [(unsigned short)8]))))))));
    }
    var_13 ^= ((unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (unsigned short)65535))))) <= (((/* implicit */int) min((var_2), (var_3))))));
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65535)))))));
}
