/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115576
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)88)), ((~(8453209377797450112LL)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = max((arr_4 [i_1]), (((/* implicit */unsigned int) ((unsigned short) 7612404856240508122ULL))));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? (((/* implicit */unsigned long long int) min(((+(arr_4 [i_1]))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) arr_4 [i_1]))))) ? (((arr_5 [i_1]) << (((/* implicit */int) var_7)))) : (((/* implicit */unsigned long long int) arr_4 [(unsigned char)5]))))));
        var_19 -= ((/* implicit */signed char) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (arr_5 [i_1]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -11LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_13)))))), (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */long long int) var_15)), (-11LL)))))));
        var_20 -= ((/* implicit */long long int) (~(arr_4 [(short)11])));
        var_21 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)33210)), (arr_4 [i_1])))) ? (var_14) : (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) 2U))))), (((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))))));
    }
    var_22 = ((/* implicit */unsigned short) var_5);
    var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) var_8)))))), (var_3)));
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) != (((/* implicit */int) (unsigned short)32102)))))));
    var_25 = ((/* implicit */unsigned short) min((max((((/* implicit */short) (_Bool)0)), (((short) var_0)))), (((/* implicit */short) (unsigned char)226))));
}
