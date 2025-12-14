/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114182
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
    var_10 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_0)) : (7083387969017915237ULL)))) ? (((/* implicit */unsigned long long int) (-(var_3)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_7)) : (var_6))))), (((/* implicit */unsigned long long int) min((610162537), (((/* implicit */int) (_Bool)1))))));
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) <= (((var_1) * (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    var_12 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))) > (var_9)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) (((~(var_9))) < (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)30560)) >> (((((/* implicit */int) var_5)) - (219))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_8);
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned long long int) (_Bool)1);
        var_15 *= ((/* implicit */short) ((var_6) & (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (short)-31252)) != (((/* implicit */int) arr_2 [(unsigned short)4] [i_1]))))))));
        arr_8 [(unsigned char)8] = ((/* implicit */int) min((((((/* implicit */long long int) var_7)) & (((long long int) arr_2 [i_1] [i_1])))), (((/* implicit */long long int) arr_6 [(unsigned short)2] [(_Bool)1]))));
    }
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (((long long int) min((((/* implicit */unsigned short) var_5)), (arr_12 [i_2] [i_2]))))));
        var_17 = ((/* implicit */unsigned char) arr_12 [i_2] [(short)2]);
        var_18 *= ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_0 [i_2] [i_2])) ^ (((/* implicit */int) arr_0 [i_2] [i_2]))))));
        arr_13 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : ((~(((/* implicit */int) arr_7 [i_2]))))));
        var_19 = ((/* implicit */unsigned short) max(((+((+(var_6))))), (((/* implicit */unsigned long long int) (unsigned short)45400))));
    }
}
