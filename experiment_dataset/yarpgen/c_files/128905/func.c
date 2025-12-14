/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128905
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
    var_14 = ((/* implicit */unsigned long long int) ((int) var_3));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) >= (arr_2 [(unsigned char)6])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)16))))) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (var_12)))))));
        var_16 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_4)) : (var_5)))) ? (arr_2 [i_0]) : (arr_2 [i_0])))) - (((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((long long int) var_10)) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)33)))))))));
        var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255))))), (((((/* implicit */_Bool) -1086799786926305005LL)) ? (var_3) : (((/* implicit */long long int) arr_1 [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) ((((arr_0 [i_0]) % (((/* implicit */unsigned long long int) var_7)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))))))));
        var_18 = ((/* implicit */unsigned long long int) 0LL);
    }
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        var_19 |= ((signed char) ((((/* implicit */unsigned long long int) (-(arr_1 [i_1 + 1])))) <= (max((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_0 [i_1])))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7LL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) < (arr_0 [9U])))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) < (((/* implicit */int) arr_3 [i_1])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [(short)9])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)-7180)))))) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (((((/* implicit */_Bool) 0LL)) ? (var_6) : (((/* implicit */unsigned long long int) arr_2 [i_1])))))) : (((/* implicit */unsigned long long int) (~(min((((/* implicit */int) (unsigned char)44)), (arr_1 [i_1]))))))));
        var_21 = ((/* implicit */unsigned char) ((min((arr_0 [i_1 - 2]), (((/* implicit */unsigned long long int) arr_2 [i_1 - 1])))) << (min((((/* implicit */unsigned int) var_10)), (arr_2 [2ULL])))));
    }
}
