/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117600
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (signed char)-89))));
        var_12 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))) * (72053195991416832LL)));
        arr_5 [i_1] [(unsigned char)10] = ((/* implicit */unsigned char) min((min((arr_3 [i_1]), (arr_3 [i_1]))), (((/* implicit */unsigned int) ((int) (signed char)89)))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)48946)), (arr_1 [i_1] [2U])))), (arr_3 [i_1])))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) var_3));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)54116)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89))) : (17367902357734332488ULL)));
    }
    for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 2) 
    {
        var_14 *= ((/* implicit */short) min((((unsigned long long int) ((((/* implicit */int) arr_9 [i_2] [i_2])) - (((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) var_6))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2 + 2])) ? (((/* implicit */int) (unsigned short)65535)) : ((+(((/* implicit */int) (unsigned short)55555))))));
        arr_13 [i_2] [i_2] = ((/* implicit */long long int) arr_12 [i_2]);
        var_16 = ((/* implicit */unsigned long long int) arr_3 [i_2]);
        var_17 *= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_9))))))), (((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) (signed char)89))))) * ((+(var_6)))))));
    }
    var_18 = ((/* implicit */short) (+(18446744073709551614ULL)));
    var_19 = ((/* implicit */_Bool) var_6);
    var_20 = ((/* implicit */unsigned long long int) min((var_4), (((((/* implicit */int) var_7)) > (((var_0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-89))))))));
}
