/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178971
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
    var_13 = ((/* implicit */unsigned short) var_11);
    var_14 |= ((/* implicit */unsigned long long int) var_12);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_0)) / (max((((/* implicit */unsigned long long int) 12LL)), (((((/* implicit */_Bool) var_10)) ? (18446744073709551615ULL) : (arr_0 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            var_16 = ((/* implicit */signed char) min((arr_1 [i_0]), (min((((/* implicit */int) arr_3 [i_1 + 2])), (var_11)))));
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_3 [i_1]))));
        }
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)240)) ? (min((((unsigned int) (unsigned short)65526)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)253))))))) : (((/* implicit */unsigned int) -1495164606))));
}
