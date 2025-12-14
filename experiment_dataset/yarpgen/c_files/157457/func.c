/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157457
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
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-488)) ? (1283275226U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (3011692051U)))) ? (((/* implicit */int) arr_1 [i_2])) : (((((((/* implicit */_Bool) arr_4 [(_Bool)1])) || (((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((short) arr_7 [i_0]))) : ((-(((/* implicit */int) arr_7 [i_2]))))))));
                    arr_8 [(signed char)3] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [6])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) arr_5 [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2313242791170863436ULL)))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned char)10]))))), (((((/* implicit */_Bool) 6546269741228090046ULL)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0]))))) : (arr_0 [i_1])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) max((((/* implicit */long long int) arr_15 [i_0])), (var_10))))));
                                arr_16 [4U] [9] [i_2] [i_3] [9] [i_4] = ((/* implicit */unsigned int) min((11900474332481461558ULL), (((unsigned long long int) (short)-14712))));
                                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) (-(var_4)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            {
                arr_21 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) : (((((/* implicit */_Bool) arr_18 [i_5])) ? (arr_19 [i_6]) : ((~(11900474332481461578ULL)))))));
                arr_22 [i_5] [i_5] [i_6] = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_7)), (var_2)));
                var_23 -= ((/* implicit */signed char) (-(arr_19 [(unsigned char)9])));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1756696242U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -155804346))))) : (var_11)));
}
