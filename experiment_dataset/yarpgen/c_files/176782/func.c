/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176782
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
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(1077906393))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [i_0]))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */_Bool) arr_10 [i_0] [i_2 + 1] [3U] [i_4 - 1]);
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min((((/* implicit */unsigned long long int) (~(((long long int) 18202034649799361782ULL))))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_0] [i_1] [i_3] [i_4]))))) ^ (arr_3 [i_0]))))))));
                            }
                        } 
                    } 
                    arr_13 [11U] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (arr_6 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19683))) : (((((/* implicit */_Bool) arr_11 [4LL] [i_1] [4LL] [(unsigned char)17] [i_2 - 3])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))))) > (((/* implicit */unsigned int) ((arr_0 [i_0 + 2] [i_0 - 1]) ? (((((/* implicit */_Bool) arr_11 [i_2 - 2] [i_1] [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_2 + 4])) : (((/* implicit */int) arr_7 [i_2] [i_1] [i_2])))) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_2 - 2])))))));
                    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_5 [i_1] [i_2 - 3])), (arr_6 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_2] [i_1] [i_2])), (arr_6 [i_0]))))) : (max((arr_11 [i_0 + 2] [i_0 + 2] [(unsigned char)1] [i_0] [i_0]), (((/* implicit */unsigned long long int) 1590964602826479018LL)))))), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                }
            } 
        } 
    } 
}
