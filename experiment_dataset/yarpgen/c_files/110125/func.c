/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110125
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        var_11 -= var_4;
                        var_12 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) min(((unsigned char)30), (((/* implicit */unsigned char) arr_9 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1]))))) ? ((~(arr_5 [i_0] [i_0] [i_0] [i_0]))) : (((int) var_5)))));
                        arr_11 [i_0] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_8)) ? (((long long int) 2434156739U)) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                        arr_12 [i_2] = (+(((arr_3 [i_1] [i_2] [i_1]) - (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (signed char)78))));
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) min(((+(((/* implicit */int) (unsigned short)24031)))), (((/* implicit */int) (signed char)78)))))));
                        }
                    }
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) var_1);
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_2 - 2] [i_2 - 3] [i_2] [i_2 + 2] [i_2 + 1])) ? (arr_6 [i_2 + 2] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) < (((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned char)216)))), (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_5] [i_5])) < (((/* implicit */int) arr_18 [i_5] [i_2] [i_1] [i_0] [i_0])))))))))))));
                        /* LoopSeq 1 */
                        for (int i_6 = 1; i_6 < 17; i_6 += 1) 
                        {
                            arr_22 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_4 [i_2 + 2] [i_2 - 1] [i_6 - 1])), (((((/* implicit */unsigned long long int) var_6)) % (var_8)))));
                            arr_23 [i_0] |= ((/* implicit */long long int) max(((unsigned short)21095), (((/* implicit */unsigned short) ((_Bool) arr_1 [i_1])))));
                            var_16 = ((/* implicit */short) arr_20 [i_0] [i_1] [i_2] [i_2] [i_5] [i_6]);
                            var_17 = ((/* implicit */long long int) max((var_17), (((((/* implicit */_Bool) (unsigned short)23767)) ? (-2089269271685245406LL) : (((/* implicit */long long int) ((/* implicit */int) (short)12742)))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            {
                                var_18 += ((/* implicit */unsigned int) (~((~(8092361381505826467LL)))));
                                arr_31 [i_0] [i_2] [i_2] [i_7] [i_7] [i_0] = ((/* implicit */unsigned short) (short)-3964);
                                var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (arr_18 [i_0] [i_1] [i_2] [i_7] [i_8]))))) & (((((/* implicit */_Bool) 11083253642990402168ULL)) ? (((/* implicit */unsigned int) 2018943846)) : (1281480469U)))))));
                            }
                        } 
                    } 
                    var_20 -= max((((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) (signed char)84)) == (((/* implicit */int) arr_14 [i_2] [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */int) var_10))))))), ((+(arr_6 [i_0] [i_0] [i_0]))));
                    var_21 = ((/* implicit */long long int) min(((+(arr_30 [i_2] [i_0] [i_1] [i_0] [i_0]))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (arr_30 [i_2] [i_1] [i_2] [i_0] [i_1])))))));
                    var_22 += ((/* implicit */unsigned short) max((max(((~(-1584883319204909990LL))), (((arr_20 [i_2] [i_1] [i_1] [i_0] [i_1] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_2))))))), (((/* implicit */long long int) var_0))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)10391)) ? ((~(min((((/* implicit */unsigned long long int) -1623711080)), (var_3))))) : (min((((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (max((arr_30 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (_Bool)1)))))))))));
        var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (max((15843433928202635499ULL), (((/* implicit */unsigned long long int) 1623711067)))) : (((/* implicit */unsigned long long int) ((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
    }
    for (signed char i_9 = 3; i_9 < 10; i_9 += 4) 
    {
        var_25 ^= ((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : ((~(arr_32 [i_9 - 1]))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80))) : ((+(7803979996345932392ULL))))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
    {
        arr_36 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_35 [i_10])) : (((/* implicit */int) min((arr_35 [i_10]), (arr_35 [i_10]))))));
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) arr_35 [i_10])) : (((/* implicit */int) arr_35 [i_10]))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_10]))))) ? ((~(((/* implicit */int) arr_34 [i_10])))) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_34 [i_10]))));
    }
    var_28 = ((/* implicit */long long int) min((var_9), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1762224149)) ? (5987960798748128750LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
}
