/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109412
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
    var_18 = ((/* implicit */unsigned int) (-(((var_5) - (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
    var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_14))) ? (((/* implicit */unsigned long long int) var_9)) : (min((max((((/* implicit */unsigned long long int) var_0)), (var_4))), (((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((long long int) (signed char)-93)) / (min((arr_7 [(signed char)6] [i_0] [i_1 + 3] [5LL] [i_2]), (arr_7 [i_0] [i_1 + 2] [i_1 + 4] [i_4] [i_4])))));
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_12))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_1 - 1]), (((/* implicit */long long int) (unsigned char)37))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_1] [i_1])))) : (((arr_3 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (signed char)93)))))))) ? (((/* implicit */unsigned long long int) ((int) arr_1 [i_1] [i_1 - 1]))) : (arr_4 [i_0] [i_1 + 2])));
                                var_23 ^= ((/* implicit */unsigned char) arr_6 [i_3]);
                                arr_11 [i_0] = ((/* implicit */long long int) var_14);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-1)) > (((/* implicit */int) arr_8 [i_1])))))))))))));
                    arr_12 [i_0] [(signed char)13] [i_1] [i_2] = ((/* implicit */unsigned char) 18446744073709551615ULL);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_2] [i_2] [i_2])), ((~(18446744073709551615ULL)))))) ? ((~(4294967294U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_1 - 2] [i_2] [i_5] [i_6] [i_6] [i_2])))))));
                                var_26 *= ((((/* implicit */_Bool) arr_14 [i_1 - 2] [i_1 + 1] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) 38005321)) : ((~(((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)219))) : (6717489892364786851ULL))))));
                                var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)7523))));
                                arr_18 [i_0] [i_1] [i_1] [i_1] [i_6] = ((/* implicit */unsigned long long int) ((((-4888535588917314914LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_17 [i_0] [(unsigned char)7] [i_1 - 2] [i_6] [i_6] [i_6])) - (26603)))));
                                arr_19 [i_0] [i_0] [i_2] [i_0] [i_0] [(signed char)9] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned char)15)), ((~(min((6173009213689660896ULL), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1 + 2] [i_1 + 3] [i_2] [i_5] [i_6]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
