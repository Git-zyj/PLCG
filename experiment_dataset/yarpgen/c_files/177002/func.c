/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177002
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
    var_15 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (+(arr_2 [i_0]))))));
        arr_4 [i_0] [(unsigned char)4] = ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)-92)) ? (0LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)3594)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) var_5))))))), (((/* implicit */long long int) (short)1023))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) min((((/* implicit */unsigned short) (signed char)91)), (arr_0 [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_17 -= (-(((/* implicit */int) arr_6 [i_1] [i_1])));
        var_18 = max((((/* implicit */int) arr_7 [i_1])), (((((/* implicit */_Bool) min((1452844890U), (((/* implicit */unsigned int) (signed char)-91))))) ? (((/* implicit */int) min((arr_0 [i_1]), (((/* implicit */unsigned short) (short)-12904))))) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) var_2)))))));
        var_19 = ((/* implicit */unsigned int) (~(((arr_6 [i_1] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (arr_2 [i_1])))));
    }
    var_20 = ((/* implicit */short) min((((/* implicit */int) (short)19)), ((~((~(((/* implicit */int) (unsigned short)1920))))))));
}
