/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16859
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((18446744073709551612ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (signed char)-87)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) && (((((/* implicit */int) arr_5 [i_1])) > (((/* implicit */int) arr_5 [i_1]))))))), ((-(((int) arr_5 [i_1]))))));
        var_13 = ((/* implicit */int) 2626142525U);
        var_14 = ((/* implicit */int) arr_5 [i_1]);
    }
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_4 [i_2]) : (arr_4 [i_2])))) || (((/* implicit */_Bool) arr_4 [i_2]))));
        var_16 = ((/* implicit */unsigned char) max(((unsigned short)24), (((/* implicit */unsigned short) (unsigned char)196))));
    }
    for (unsigned short i_3 = 4; i_3 < 16; i_3 += 3) 
    {
        arr_16 [i_3] [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) arr_14 [i_3 + 4] [i_3 + 3])) - (((/* implicit */int) arr_5 [i_3 - 1])))) + (((/* implicit */int) (unsigned short)65535))));
        var_17 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) (_Bool)1)))))) - (max((((/* implicit */unsigned long long int) (unsigned char)47)), (12045018340390952249ULL)))));
    }
    var_18 |= var_12;
}
