/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107047
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
    var_18 *= ((/* implicit */signed char) ((((((((/* implicit */int) var_17)) <= (((/* implicit */int) var_12)))) ? (var_0) : (((var_9) + (((/* implicit */unsigned long long int) var_8)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    var_19 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned short)65529)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)54576)))) : (((/* implicit */int) var_5)))) <= (((/* implicit */int) max((((((/* implicit */int) (signed char)125)) < (((/* implicit */int) var_12)))), (((((/* implicit */int) var_12)) < (((/* implicit */int) (unsigned short)7964)))))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (min((((((/* implicit */_Bool) var_15)) ? (var_16) : (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-126))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)7964)) <= (((/* implicit */int) var_17))))) >> (((/* implicit */int) var_5)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)11])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))))) && (((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (signed char)125))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0] [(short)6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15304))) : (var_7))) + (var_10)));
        arr_3 [i_0] = ((((((/* implicit */long long int) arr_0 [i_0])) & (var_10))) | (((/* implicit */long long int) ((/* implicit */int) ((var_11) && (((/* implicit */_Bool) var_3)))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15304))) - (9223372036854775807LL)))) ? (((/* implicit */unsigned int) ((182384139) - (((/* implicit */int) (unsigned short)50246))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))) + (arr_5 [i_1])))))) ? (((/* implicit */unsigned long long int) ((((2147483647) & (((/* implicit */int) var_12)))) >> (((min((arr_5 [i_1]), (((/* implicit */unsigned int) var_12)))) - (2213U)))))) : (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : (654263241295847311ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
        arr_7 [i_1] = ((/* implicit */int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (var_1))) >> (((((var_0) << (((1155342541) - (1155342517))))) - (10066020919979016175ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 2]))) < (var_3)))))));
        arr_8 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (signed char)109)) << (((arr_5 [i_1]) - (3766855817U))))) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) >= (9223372036854775799LL)))))))) % (((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1 - 1] [i_1])) ^ (((/* implicit */int) var_17))))) | (((((/* implicit */long long int) ((/* implicit */int) var_4))) & (var_7)))))))) : (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (signed char)109)) << (((((arr_5 [i_1]) - (3766855817U))) - (1268109377U))))) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) >= (9223372036854775799LL)))))))) % (((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1 - 1] [i_1])) ^ (((/* implicit */int) var_17))))) | (((((/* implicit */long long int) ((/* implicit */int) var_4))) & (var_7))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))))) ? (-2147483647) : (((/* implicit */int) (signed char)109))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_14)) << (((var_16) - (5805399018387062420ULL)))))) ? (((((/* implicit */_Bool) arr_10 [i_2])) ? (17792480832413704304ULL) : (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) ((var_8) / (((/* implicit */long long int) -2011638877))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)15285)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_2])))) ^ (((2147483647) | (((/* implicit */int) (_Bool)1)))))))));
        arr_12 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (-7623440988130718250LL) : (7623440988130718250LL)))) ? (((((-7214349115773393338LL) + (9223372036854775807LL))) >> (((2147483647) - (2147483646))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_2])) >> (((-142589258) + (142589267)))))))) / (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_7)))));
        arr_13 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) >> (((/* implicit */int) arr_9 [i_2]))))) ? (((var_9) >> (((/* implicit */int) arr_9 [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (((/* implicit */signed char) arr_9 [i_2]))))))));
    }
}
