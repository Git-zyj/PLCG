/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177635
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
    var_13 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (-87627681) : (((/* implicit */int) var_11))))));
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                                arr_13 [21ULL] [i_1] [i_0] [18U] [(unsigned short)4] [(unsigned short)9] = ((/* implicit */int) max((min((arr_7 [i_1 + 3] [3U] [1] [i_1] [i_1]), (arr_7 [i_1 + 2] [i_0] [(unsigned short)19] [(_Bool)1] [(unsigned char)15]))), (arr_7 [i_1 + 1] [i_1] [(unsigned char)20] [(signed char)20] [i_0])));
                                arr_14 [(unsigned char)12] [16] [(signed char)6] [17U] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) (_Bool)1))))) ? (var_7) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)29115)) : (((/* implicit */int) var_4)))), ((~(((/* implicit */int) var_12)))))))));
                                arr_15 [i_0] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) arr_6 [(unsigned char)15] [(short)1] [(unsigned short)8]);
                                var_16 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [12U] [i_1 + 1] [i_2] [i_3] [i_0] [(unsigned short)18]))) <= (var_0))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) 2745094890288016701ULL))));
                    var_18 = ((/* implicit */unsigned char) (+(min((((/* implicit */int) (unsigned char)245)), (arr_11 [(signed char)9] [13U] [20ULL] [(signed char)12] [(signed char)9] [19LL] [16LL])))));
                    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_2] [i_1 + 4] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1 + 4] [i_2]))) : (var_0))) : (var_7)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 22; i_5 += 1) 
    {
        for (unsigned short i_6 = 2; i_6 < 24; i_6 += 1) 
        {
            {
                arr_20 [i_6] [(unsigned short)18] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)232)) ? (arr_18 [i_5] [i_6 + 1]) : (arr_18 [(unsigned char)18] [i_6 + 1])))));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_17 [i_5 + 3]), (arr_17 [i_5 + 2]))))) < (((((/* implicit */_Bool) arr_17 [i_5 + 2])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))))))))));
            }
        } 
    } 
}
