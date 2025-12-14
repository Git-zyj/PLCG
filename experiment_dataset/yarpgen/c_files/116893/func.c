/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116893
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
    var_11 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)27968)) ^ (((/* implicit */int) (unsigned short)33770))))) ? (((/* implicit */int) min((((/* implicit */short) var_9)), (var_1)))) : (((/* implicit */int) var_3)))));
    var_12 *= ((signed char) max((((/* implicit */long long int) max(((unsigned short)33770), (((/* implicit */unsigned short) var_3))))), (((((/* implicit */_Bool) 13356492948841578581ULL)) ? (-2369787576233963508LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) (short)22407)), (2369787576233963507LL))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)112)))))) ? (((/* implicit */unsigned long long int) ((((_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : ((-(var_8)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) -1962566946)) : (min((arr_0 [i_0]), (5772054239337289834ULL)))))));
        var_14 *= var_10;
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 17; i_1 += 1) 
    {
        arr_5 [i_1 - 2] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1 + 1]);
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (unsigned short)39560)) ? (((/* implicit */int) var_3)) : (arr_1 [i_1]))))))));
        arr_6 [i_1 + 4] = ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_1 - 3]))));
        var_16 = ((/* implicit */int) min((var_16), (arr_1 [i_1 + 2])));
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */long long int) ((unsigned int) (unsigned short)45201))) : (((arr_4 [17] [i_1]) & (arr_4 [(signed char)3] [i_1])))));
    }
    var_17 = ((/* implicit */long long int) var_5);
}
