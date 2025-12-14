/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147260
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
    var_19 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_20 -= ((/* implicit */short) (+((-(((/* implicit */int) (signed char)-34))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (692047639)))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : ((~(779015099)))));
        arr_2 [i_0] = ((((/* implicit */_Bool) (signed char)-43)) ? (((int) arr_0 [i_0] [i_0])) : ((~(((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0]))))));
        var_22 &= (signed char)-26;
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_23 -= ((/* implicit */_Bool) ((((long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */long long int) ((var_12) ? (((/* implicit */int) (unsigned short)50354)) : (((/* implicit */int) (_Bool)1)))))));
        var_24 += ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) var_16)) >= (arr_3 [(signed char)12])))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (var_1) : (arr_3 [i_1]))))));
        var_25 = ((/* implicit */signed char) arr_4 [i_1]);
        var_26 *= ((int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)65535))))) < (((/* implicit */int) (signed char)127))));
    }
    for (unsigned char i_2 = 1; i_2 < 8; i_2 += 3) 
    {
        var_27 = min((((((/* implicit */_Bool) ((var_17) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)29648))))) ? ((-(((/* implicit */int) var_16)))) : (((/* implicit */int) (unsigned short)15195)))), (((/* implicit */int) arr_1 [i_2] [i_2])));
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (+((-(((/* implicit */int) var_6)))))))));
    }
    var_29 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (var_1) : ((-(((((/* implicit */int) (unsigned char)251)) / (((/* implicit */int) (_Bool)1))))))));
    var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_17))));
}
