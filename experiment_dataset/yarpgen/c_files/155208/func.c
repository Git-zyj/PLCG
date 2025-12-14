/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155208
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_11 += ((/* implicit */unsigned long long int) ((((long long int) (signed char)121)) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [8ULL])))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)246))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_12 |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_6 [i_1]) : (arr_2 [i_1] [(unsigned short)9])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (var_6))))) : (((var_3) + (((/* implicit */long long int) ((/* implicit */int) (signed char)107))))))), (((/* implicit */long long int) arr_2 [i_1] [i_1]))));
        var_13 += ((/* implicit */long long int) min((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((arr_1 [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)81)))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) != (((/* implicit */int) arr_0 [i_1])))))))), (((((/* implicit */_Bool) (signed char)107)) ? (arr_1 [i_1]) : (arr_1 [i_1])))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)107))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)5]))) / (var_3)))) ? (((/* implicit */int) ((var_5) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121)))))) : (((/* implicit */int) (signed char)-121))))) : (((((/* implicit */long long int) (-(((/* implicit */int) var_4))))) * (((((/* implicit */long long int) var_8)) % (arr_8 [i_1])))))));
    }
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? ((((~(((/* implicit */int) (unsigned short)56619)))) ^ (((((/* implicit */int) var_1)) | (((/* implicit */int) (unsigned char)238)))))) : ((~(((/* implicit */int) (signed char)107))))));
}
