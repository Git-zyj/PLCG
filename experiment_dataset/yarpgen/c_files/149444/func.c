/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149444
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
    var_16 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_17 ^= ((/* implicit */unsigned long long int) (unsigned short)38614);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_18 = ((/* implicit */unsigned short) arr_0 [1LL]);
                    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((arr_1 [i_1 - 1]), (((/* implicit */short) var_6))))), (((1933237400U) + ((-(2361729887U)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1933237370U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)115))) : (5126217436525962014LL))))))), (((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [(short)5]) : (arr_6 [i_2])))));
                        var_21 = ((/* implicit */_Bool) var_13);
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_7))));
                    }
                }
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 - 1]))));
                arr_10 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)61);
            }
        } 
    } 
    var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) + (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (1933237370U)))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
}
