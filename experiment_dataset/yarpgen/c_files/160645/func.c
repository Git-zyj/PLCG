/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160645
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((((-4146019232238094934LL) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_0 [i_1] [i_0])) + (9441))) - (55))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [(short)2] [i_1])), (var_10)))))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 8; i_2 += 2) 
                {
                    var_19 = ((/* implicit */signed char) var_0);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((var_20), (arr_4 [i_0] [i_0] [i_0])));
                                arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_0] [i_3] [i_1] [i_4] = ((/* implicit */unsigned char) min(((-(((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) var_0)))))), (((((/* implicit */int) arr_7 [i_4] [i_4] [i_2 - 1] [i_2 - 1])) + (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_10 [i_0] [i_1])) >> (((((/* implicit */int) arr_1 [i_0 - 1])) - (26102))))), (min((((((/* implicit */int) arr_1 [i_2])) | (((/* implicit */int) arr_11 [i_0] [i_1] [i_2 + 2] [i_0] [i_2])))), (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned char)17))))))));
                }
                for (long long int i_5 = 1; i_5 < 8; i_5 += 3) 
                {
                    arr_15 [(signed char)6] [(signed char)6] [i_5] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */long long int) ((268431360) << (((((((/* implicit */_Bool) 242676121U)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (var_15))) - (24263)))))) + (min((((((/* implicit */_Bool) (unsigned short)2967)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65522))) : (9223372036854775784LL))), (((/* implicit */long long int) (unsigned char)245))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((268431360) << (((((((((/* implicit */_Bool) 242676121U)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (var_15))) - (24263))) + (6399)))))) + (min((((((/* implicit */_Bool) (unsigned short)2967)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65522))) : (9223372036854775784LL))), (((/* implicit */long long int) (unsigned char)245)))))));
                    arr_16 [i_0] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)12))))) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (arr_9 [i_0] [i_1] [i_0])));
                    arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
                    var_22 = (i_0 % 2 == 0) ? (((min((((/* implicit */long long int) ((((arr_9 [i_0 + 1] [(unsigned char)6] [i_0]) + (2147483647))) << (((((var_2) + (8779276566960058802LL))) - (4LL)))))), (min((var_17), (var_6))))) - (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)248)) % (((/* implicit */int) arr_11 [i_5 - 1] [i_0] [i_5 + 1] [i_1] [i_0]))))), (arr_2 [i_5 + 1] [i_0 + 1] [i_0]))))) : (((min((((/* implicit */long long int) ((((((arr_9 [i_0 + 1] [(unsigned char)6] [i_0]) - (2147483647))) + (2147483647))) << (((((var_2) + (8779276566960058802LL))) - (4LL)))))), (min((var_17), (var_6))))) - (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)248)) % (((/* implicit */int) arr_11 [i_5 - 1] [i_0] [i_5 + 1] [i_1] [i_0]))))), (arr_2 [i_5 + 1] [i_0 + 1] [i_0])))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */long long int) var_10)), (-4945242214449657708LL))) : (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) var_10)))))) : (((((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)0)), (var_10)))) - (var_6))))))));
}
