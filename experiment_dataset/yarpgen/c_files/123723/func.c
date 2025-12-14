/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123723
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
    var_12 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(0U)))) ? (((long long int) var_1)) : (((var_0) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [(signed char)2])))))))))))));
                var_14 = ((/* implicit */unsigned short) 4294967295U);
                var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [(signed char)10] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_1] [6] [i_0])) : (arr_1 [i_0 + 1])))) : (((((/* implicit */_Bool) arr_1 [i_0 + 4])) ? (arr_4 [(unsigned short)8] [(unsigned short)8]) : (arr_4 [0] [i_1])))));
                var_16 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)39046)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
            }
        } 
    } 
}
