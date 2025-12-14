/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17057
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */long long int) min((arr_2 [i_2] [i_1 + 1]), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-9)) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) (short)8))))), (((unsigned long long int) -25868741))))));
                    var_16 = ((/* implicit */_Bool) min(((+(((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (short)5))))))), (((/* implicit */long long int) ((arr_3 [i_0] [0U] [i_2]) ^ (((((/* implicit */int) (unsigned char)80)) >> (((/* implicit */int) (_Bool)0)))))))));
                    arr_10 [(unsigned short)11] [i_1] [i_0] [(signed char)5] = ((/* implicit */_Bool) arr_7 [2U] [9LL] [i_2] [i_2]);
                    arr_11 [(signed char)6] [3LL] [(unsigned short)6] = ((/* implicit */short) ((long long int) min((2132214929U), (((/* implicit */unsigned int) arr_5 [(unsigned char)4] [7U] [i_1 + 1] [i_1 + 1])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) var_13);
}
