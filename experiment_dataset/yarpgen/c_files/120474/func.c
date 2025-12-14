/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120474
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12172453429628749222ULL)) ? (var_11) : (((/* implicit */long long int) 761964202))))) ? (((/* implicit */int) (unsigned char)97)) : ((((!(((/* implicit */_Bool) var_11)))) ? ((-(((/* implicit */int) var_15)))) : (((/* implicit */int) var_1))))));
    var_18 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) (unsigned char)81);
                                arr_13 [i_0] [(unsigned char)5] [i_2] [i_3] [i_2] = ((/* implicit */long long int) ((arr_4 [i_4]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [(unsigned short)5] [i_3] [(unsigned short)5] [(signed char)6])))));
                                var_20 = ((/* implicit */unsigned int) arr_2 [i_2] [15U]);
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? ((~(((/* implicit */int) arr_5 [i_0] [i_2] [i_0])))) : (((/* implicit */int) max((arr_5 [i_0] [i_0] [6]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])))))))))))));
                                var_22 *= ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_9 [i_2] [i_1] [i_2] [i_2 - 2]), (arr_9 [i_2 - 1] [i_1] [i_2 - 1] [i_2 + 1])))) * (((/* implicit */int) ((signed char) arr_9 [i_2 - 1] [i_4] [i_4] [i_2 - 2])))));
                            }
                        } 
                    } 
                    var_23 = arr_9 [(signed char)15] [i_2] [(signed char)15] [i_0];
                }
            } 
        } 
    } 
}
