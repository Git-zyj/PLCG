/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182102
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_20 *= ((/* implicit */unsigned int) arr_0 [i_0]);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned short) max((((unsigned long long int) ((((/* implicit */_Bool) 1949901453U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (var_7)))), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)47984)))));
                                var_22 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 + 1] [i_2] [i_3 - 3] [i_3])))) ? (((2638839011U) >> (((34359738367ULL) - (34359738357ULL))))) : (((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) arr_7 [i_0] [i_1] [i_1] [i_3] [1]))), ((+(((/* implicit */int) var_17)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    arr_14 [20] [i_1] [(short)9] = arr_12 [(unsigned char)18] [i_0];
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 23; i_6 += 1) 
                    {
                        var_23 = ((((/* implicit */_Bool) max(((short)-25894), (((/* implicit */short) arr_3 [i_6 - 2]))))) || (((/* implicit */_Bool) max((arr_3 [i_6 - 2]), (arr_3 [i_6 + 1])))));
                        var_24 = ((/* implicit */long long int) (-(((/* implicit */int) min((arr_10 [2] [i_1] [i_6 - 2] [i_6 - 2] [i_6 - 2] [(signed char)2] [(_Bool)1]), (arr_10 [i_1] [i_1] [i_6 - 2] [i_6 - 1] [i_6] [12U] [(short)18]))))));
                        var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_6 + 1] [i_6 - 1] [i_6 - 2])) ? (((/* implicit */unsigned int) min((min((var_18), (((/* implicit */int) var_6)))), (((arr_10 [(unsigned char)4] [i_1] [i_1] [i_1] [16U] [i_1] [(_Bool)1]) ? (-1413257439) : (((/* implicit */int) arr_6 [i_0]))))))) : (((1656128285U) << (((((((/* implicit */_Bool) 34359738364ULL)) ? (((/* implicit */int) (unsigned short)17552)) : (((/* implicit */int) arr_5 [i_0] [i_0] [15ULL] [15ULL])))) - (17521)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0] [i_5] [i_5] [(_Bool)1]))));
                        var_27 += ((_Bool) (-(arr_8 [16U] [i_0] [(unsigned short)4] [i_7] [i_7])));
                    }
                    var_28 = ((/* implicit */long long int) min((var_28), (((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned short)11041)))), (((/* implicit */int) arr_5 [i_5] [i_1] [i_1] [i_0]))))) ? ((-(arr_4 [i_0] [i_0]))) : (((/* implicit */long long int) max((min((((/* implicit */unsigned int) 1413257431)), (1656128278U))), (((/* implicit */unsigned int) arr_2 [i_1] [i_5])))))))));
                }
                var_29 &= ((/* implicit */unsigned int) arr_0 [12LL]);
            }
        } 
    } 
    var_30 = max((min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) var_19)) ? (var_9) : (var_9))))), (((/* implicit */long long int) (~(min((var_18), (((/* implicit */int) var_12))))))));
}
