/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139449
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
    var_18 = (((-((-(((/* implicit */int) var_10)))))) < (((/* implicit */int) var_6)));
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_0))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (((-(((/* implicit */int) arr_0 [i_0] [i_0])))) < ((-(((/* implicit */int) var_11)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)42)) - (((/* implicit */int) arr_1 [i_0] [i_0]))))))) - ((-(((7408907100696772154ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))));
    }
    var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37052))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) < ((-(var_3)))))) : (((/* implicit */int) ((signed char) var_9)))));
    /* LoopSeq 2 */
    for (unsigned char i_1 = 2; i_1 < 23; i_1 += 4) 
    {
        arr_6 [i_1 + 1] |= ((/* implicit */unsigned long long int) (((-((~(((/* implicit */int) arr_3 [i_1 + 2] [i_1 - 2])))))) < (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_4)))))));
        var_22 |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_3 [i_1 + 2] [(signed char)5])) : ((-(-2147483647)))))));
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        arr_10 [i_2] [(short)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)131)) < (min((((/* implicit */int) arr_8 [i_2])), (var_5)))))) : ((-(((/* implicit */int) var_2))))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) arr_5 [i_2] [i_2]))));
        arr_11 [i_2] = (-((-(((((/* implicit */_Bool) arr_4 [(unsigned short)15])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4)))))));
        var_24 = max((((/* implicit */int) arr_7 [i_2])), ((-((-(((/* implicit */int) arr_9 [i_2])))))));
    }
}
