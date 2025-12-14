/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123154
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_16))));
    var_21 *= ((/* implicit */unsigned char) var_16);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (short)15350)))) ? (((((/* implicit */_Bool) 2706868976U)) ? (((/* implicit */unsigned long long int) var_12)) : (arr_4 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))))));
            arr_5 [i_1] = ((/* implicit */unsigned short) (~(arr_1 [i_1])));
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_1]))));
            arr_6 [(signed char)12] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0 + 1] [i_0 - 1])) ? (arr_4 [i_1] [i_1] [i_0 - 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-2504)) + (((/* implicit */int) arr_0 [i_1])))))));
        }
        var_24 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 3]))))));
    }
}
