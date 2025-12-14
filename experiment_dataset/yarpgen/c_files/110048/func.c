/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110048
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
    var_11 = (-(var_6));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))), (((unsigned int) var_4)))) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)106))) / (2341446666U))) : (((/* implicit */unsigned int) var_7))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((-1058823106) + (var_7)))) ? (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_1))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) < (18446744073709551613ULL)))))) : ((+((-(((/* implicit */int) var_2))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -935790812)) ? (6456337232797394271LL) : (((/* implicit */long long int) arr_0 [i_0])))) / (((/* implicit */long long int) arr_0 [i_0]))));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (~(((-29) - (((/* implicit */int) arr_1 [i_0])))))))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (~(-935790795))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) 4294967295U);
        arr_5 [2LL] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((935790811) - (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [(signed char)8] [i_1])) : (((/* implicit */int) arr_3 [i_1] [(signed char)13])))))) == (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? ((-(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [16] [(signed char)1])) : (((/* implicit */int) (signed char)84))))))));
    }
}
