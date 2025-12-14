/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154257
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_17 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_1 [(signed char)1] [i_0])), (((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */unsigned long long int) 4294967284U)) : (3228069779922201479ULL)))));
        arr_4 [i_0] |= ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_2 [(unsigned char)16]))))))), (((((/* implicit */_Bool) min(((short)(-32767 - 1)), ((short)-13909)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [(short)7]))) : (((/* implicit */int) (unsigned char)159))))));
    }
    for (signed char i_1 = 2; i_1 < 23; i_1 += 4) 
    {
        arr_7 [i_1] [22] = ((/* implicit */unsigned long long int) 4294967278U);
        arr_8 [1U] = ((/* implicit */unsigned long long int) arr_6 [(unsigned short)6]);
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)-23)))) % (((/* implicit */int) ((unsigned short) arr_5 [i_1 + 1] [i_1])))));
    }
    var_18 = ((/* implicit */long long int) var_15);
}
