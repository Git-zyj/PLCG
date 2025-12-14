/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123361
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
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_0]) * (arr_0 [0U]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0 + 4]);
        arr_4 [i_0 + 2] [8ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37008))) == (arr_0 [i_0 + 4])));
    }
    for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
    {
        var_17 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1])))))) | (((778215800884467810ULL) * (((((/* implicit */unsigned long long int) 1952544481U)) + (17668528272825083806ULL)))))));
        var_18 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1])) - (((/* implicit */int) arr_5 [i_1]))))))))) + (min(((+(8023605942561424598ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1 - 1])) % (((/* implicit */int) var_11)))))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) arr_6 [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)54075)) : (((/* implicit */int) arr_6 [i_1])))))))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_20 -= ((/* implicit */unsigned long long int) ((2727910678U) >= (((/* implicit */unsigned int) arr_7 [i_2]))));
        arr_9 [15ULL] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))) / (15103685480758666263ULL)));
        var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_8 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-97)))));
        arr_10 [i_2] [9ULL] = ((/* implicit */unsigned long long int) ((4503599627370492LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2])))));
        var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2])) ? (7115123588732069100ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 1) 
    {
        var_23 += ((/* implicit */signed char) (unsigned short)65535);
        arr_13 [i_3] = ((/* implicit */signed char) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-74)) ? (2727910695U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3])))))), (min((((/* implicit */long long int) (signed char)-2)), (var_2))))) - (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)40131)) << (((((((/* implicit */_Bool) arr_11 [i_3] [10ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3]))) : (778215800884467810ULL))) - (18446744073709551590ULL))))))));
        var_24 += ((max((((/* implicit */unsigned long long int) (unsigned short)65518)), (((((/* implicit */_Bool) 1199583005)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_11 [4ULL] [4ULL]))))) % (var_16));
    }
    var_25 = ((/* implicit */unsigned short) var_14);
}
