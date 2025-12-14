/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13156
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
    var_16 = (+(((/* implicit */int) ((((((/* implicit */_Bool) -6559936410504721159LL)) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) (unsigned short)0)))) <= (max((((/* implicit */int) (unsigned short)40578)), (var_3)))))));
    var_17 = ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) -2147483630)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_3 [7LL] = ((/* implicit */unsigned int) min(((-(8388096))), (((/* implicit */int) (signed char)81))));
        var_18 = ((/* implicit */unsigned int) (+(arr_1 [i_0])));
        var_19 = (!(((((unsigned int) arr_0 [i_0] [i_0])) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
    }
    for (signed char i_1 = 3; i_1 < 12; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) (((+(-897786499))) / (((/* implicit */int) ((signed char) var_10)))));
        arr_7 [(signed char)4] &= ((/* implicit */short) min((((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1 + 2]))))), (((((/* implicit */_Bool) arr_5 [6])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 2])))))));
        var_20 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -8388097)) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1]))))))) ? (((131071LL) >> (((arr_5 [i_1]) - (445928246U))))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_21 = min(((!((_Bool)1))), ((_Bool)1));
        var_22 = ((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_2] [i_2])), (arr_10 [i_2])));
        var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) arr_8 [i_2] [13LL]))));
        arr_11 [i_2] = ((/* implicit */_Bool) var_4);
    }
}
