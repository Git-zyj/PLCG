/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123761
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_1])), (arr_2 [(short)9] [i_1])))) ? (((((/* implicit */_Bool) 4167953174563403404LL)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)216))))) : (3788551784U))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_9 [i_2] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((681803606621891036ULL), (((/* implicit */unsigned long long int) (unsigned char)198))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)223)))))))), ((((!(((/* implicit */_Bool) -3299360401271516194LL)))) ? (((/* implicit */long long int) (+(780466328U)))) : (((long long int) arr_4 [i_2]))))));
                            arr_10 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_2])), (6071238783153766615LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)125)) ? (arr_2 [i_1] [i_1]) : (((/* implicit */long long int) 3982019395U))))) : (18446744073709551587ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((3955627527U), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_1] [i_1] [i_2] [(short)8]))))) ? (min((arr_5 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) 1269786344054367598LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_2] [i_0])))))))))));
                            arr_11 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 33554368U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (2639089734U)));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                            {
                                arr_16 [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) min(((~(arr_2 [i_0] [i_0]))), (max((((/* implicit */long long int) ((unsigned char) -2241045732768724947LL))), (262961980871518300LL)))));
                                arr_17 [1LL] [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned char)182);
                                arr_18 [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (+(-3299360401271516226LL)))) : (max((arr_6 [i_2] [(unsigned char)9] [i_2]), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) min(((-(arr_14 [(unsigned char)9] [i_2] [i_3] [i_2] [i_2] [(unsigned char)1]))), (min((((/* implicit */unsigned int) (short)30548)), (arr_1 [i_4]))))))));
                                arr_19 [i_2] [i_2] [i_3] = ((/* implicit */short) (~(((/* implicit */int) (short)-25893))));
                                arr_20 [i_2] [(unsigned char)4] [i_0] [i_3] [i_4] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-28060))) | (((unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (max((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_2] [5ULL] [(short)11])) ? (8742630693353773328LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-6573))))), (((/* implicit */long long int) (+(((/* implicit */int) (short)-27474))))))) : (((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (short)28921))) & (4018867779U))), (((/* implicit */unsigned int) (short)-1844)))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 &= ((/* implicit */short) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2927237452U)), (8677164526145625080ULL)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_3)) ? (4261412920U) : (var_1))), (max((var_3), (((/* implicit */unsigned int) (unsigned char)46))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)101)))) | (var_5)))));
}
