/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168607
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
    var_20 += ((/* implicit */int) var_4);
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((360264573U), (((/* implicit */unsigned int) (unsigned short)0))))))))) : (((unsigned long long int) min((((/* implicit */unsigned long long int) var_9)), (var_19))))));
    var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_13) % (var_17)))) ? (((/* implicit */unsigned int) var_15)) : (max((((/* implicit */unsigned int) var_9)), (var_1)))))), (max((((/* implicit */unsigned long long int) max((360264570U), (((/* implicit */unsigned int) var_10))))), (((((/* implicit */_Bool) var_2)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117)))))))));
    var_23 = ((/* implicit */signed char) ((unsigned int) var_10));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) min((var_17), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35578))) & (1004464821U))) < (min((360264594U), (3934702723U))))))));
        var_25 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (~(3934702705U)))), (max((var_13), (((/* implicit */unsigned long long int) 4294967288U)))))) | (((unsigned long long int) ((3290502463U) << (((((/* implicit */int) var_12)) - (106))))))));
        arr_2 [i_0] [(signed char)12] = ((/* implicit */unsigned short) ((((3934702723U) >> (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [22ULL])) : (var_14))) - (49042))))) >= (((((3934702703U) - (360264573U))) - (((/* implicit */unsigned int) (-(1208345891))))))));
        var_26 = ((/* implicit */unsigned short) 1004464821U);
    }
    for (unsigned short i_1 = 2; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) (unsigned char)110)))));
        arr_7 [i_1 - 2] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((127), (((/* implicit */int) (unsigned char)139))))), (max((var_7), (((/* implicit */long long int) 360264573U))))))), (((unsigned long long int) min((((/* implicit */unsigned short) (short)24808)), (arr_0 [i_1]))))));
        arr_8 [8U] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (short)-1))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) (short)-15450)))));
    }
    for (unsigned short i_2 = 2; i_2 < 22; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */short) min((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11306))) : (var_7))) + (((/* implicit */long long int) ((360264573U) + (3934702702U)))))), (var_7)));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_2 + 1]))));
    }
}
