/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147223
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1121909117)) ? (-7728431473489190991LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))) : (((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */long long int) ((var_10) >> (((((/* implicit */int) (unsigned short)45480)) - (45474))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (9223372036854775807LL)));
        var_17 = ((/* implicit */long long int) var_1);
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) ((((var_5) >> (((((/* implicit */int) (unsigned short)31744)) - (31716))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1])))))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned short)8404)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62926))) : (6335012544041067819LL))), (max((7728431473489190990LL), (((/* implicit */long long int) -1121909117))))));
        /* LoopSeq 4 */
        for (signed char i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            arr_8 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((unsigned int) (unsigned short)21125))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1559316445)))))) ^ (arr_7 [i_2 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2 - 2])) && (((/* implicit */_Bool) 4294967295U)))))));
            var_19 = (~(((-8912181888083016207LL) | (((/* implicit */long long int) max((-1736109370), (((/* implicit */int) arr_1 [i_1]))))))));
            arr_9 [i_2] [i_2 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -8712434178656307192LL))));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-58)), (((unsigned short) -1121909122))))))))));
        }
        for (long long int i_3 = 2; i_3 < 11; i_3 += 1) 
        {
            var_21 = ((/* implicit */signed char) ((3319438197U) >> (((((/* implicit */int) ((unsigned char) (unsigned short)50269))) - (83)))));
            var_22 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)15292)) - (((/* implicit */int) (unsigned char)147))));
        }
        for (unsigned short i_4 = 1; i_4 < 9; i_4 += 4) 
        {
            arr_16 [i_1] [i_4] [(unsigned short)4] = ((/* implicit */unsigned char) (+(((2U) / (((/* implicit */unsigned int) arr_11 [i_1] [i_4 - 1] [i_4]))))));
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((((/* implicit */_Bool) -4944795509050785677LL)) ? (2422044232U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29738))))) : (((((/* implicit */_Bool) 2513969739U)) ? (2228742218U) : (((/* implicit */unsigned int) -1)))))))));
        }
        for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            arr_20 [i_1] [i_5] = ((/* implicit */int) (((+(7728431473489191003LL))) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
            var_24 = ((/* implicit */unsigned int) max((var_24), (2066225078U)));
            arr_21 [i_1] = ((/* implicit */signed char) ((long long int) (unsigned short)56749));
            var_25 ^= (((!(((/* implicit */_Bool) (unsigned char)5)))) ? (((/* implicit */unsigned int) min((-4), (((/* implicit */int) (signed char)64))))) : (((4U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))));
        }
        arr_22 [i_1] [(unsigned short)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(739425154U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)232)) / (1559316445)))) ? (100527681U) : (3U)))) : (((((/* implicit */_Bool) 5201795402483295783LL)) ? (-480550635142451602LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
    }
    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) (-(((unsigned int) arr_2 [i_6]))));
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) -308411822))));
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_6] [i_6])) && (((/* implicit */_Bool) arr_24 [8LL] [i_6]))))), (((-1390670629719853403LL) - (((/* implicit */long long int) var_5)))))))));
        arr_25 [i_6] [i_6] = ((/* implicit */unsigned char) arr_24 [i_6] [i_6]);
    }
}
