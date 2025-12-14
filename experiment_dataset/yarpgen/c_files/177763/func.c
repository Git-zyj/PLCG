/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177763
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
    var_11 = var_8;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) var_2);
        var_13 = min((min((arr_2 [i_0 - 1]), (arr_2 [i_0 + 2]))), (((/* implicit */long long int) ((short) min((arr_2 [i_0]), (((/* implicit */long long int) var_0)))))));
        arr_4 [i_0] [11LL] = ((/* implicit */signed char) ((unsigned char) arr_3 [i_0] [i_0]));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        arr_7 [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [2LL])) ? (arr_1 [i_1 + 1] [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
        arr_8 [8LL] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1 + 3])) % (((/* implicit */int) (_Bool)1))));
        arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6649434769864436273LL)) ? (2015634690U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 3] [i_1])))))) ? (((/* implicit */int) arr_5 [i_1 + 1])) : (((/* implicit */int) (unsigned short)10912))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (unsigned short)10912))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (((((/* implicit */_Bool) var_1)) ? (arr_1 [(signed char)1] [(signed char)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1])))))));
        var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_7)) % (((((/* implicit */_Bool) -1539905463)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (4019436409U)))));
    }
    var_16 = ((/* implicit */signed char) max((min((var_4), (((((/* implicit */_Bool) 3908086250U)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-123))))))), (((/* implicit */long long int) var_7))));
}
