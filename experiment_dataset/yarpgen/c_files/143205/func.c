/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143205
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) << ((((+(var_5))) - (17777964730164668441ULL)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_11 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */_Bool) arr_0 [0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_1))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [0ULL]))))) : (((/* implicit */unsigned int) max((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) arr_0 [(unsigned short)0]))))), (((((/* implicit */_Bool) 19975948U)) ? (((/* implicit */int) (unsigned short)25192)) : (((/* implicit */int) arr_1 [(signed char)2])))))))));
        var_12 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) max(((unsigned char)167), (((/* implicit */unsigned char) arr_1 [i_0])))))))));
        var_13 = 18446744073709551615ULL;
    }
    for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) /* same iter space */
    {
        arr_4 [i_1] [i_1] = ((/* implicit */int) arr_3 [i_1] [i_1 - 1]);
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [4ULL])) : (((/* implicit */int) arr_2 [i_1]))))))) == (-7350392431760402710LL)));
    }
    var_15 *= ((/* implicit */unsigned long long int) (-(7350392431760402682LL)));
    var_16 = ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (18446744073709551615ULL)))) ? (var_5) : (11136829900928349533ULL))) - (((/* implicit */unsigned long long int) var_1)));
}
