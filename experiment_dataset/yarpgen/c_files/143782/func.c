/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143782
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_0)))) ? (max((((/* implicit */unsigned long long int) var_11)), ((-(11848686113716196118ULL))))) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    arr_10 [i_1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_1 + 1] [i_1 + 3]))) ? (max((127ULL), (8323654777607899654ULL))) : (((/* implicit */unsigned long long int) (+(arr_3 [i_1 + 1] [i_1 + 1]))))));
                    var_12 = ((/* implicit */unsigned int) max((arr_3 [i_0] [i_1]), (((/* implicit */long long int) arr_8 [i_2]))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 8; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_1] [2ULL] [i_3 - 1] [i_3 - 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) & (((/* implicit */int) arr_7 [i_4 - 1] [i_3 - 1] [i_1 + 3] [i_3 - 1]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (127ULL))) : (((/* implicit */unsigned long long int) arr_8 [i_4 - 1]))));
                                arr_18 [i_1 + 1] [i_2] [i_3] [i_4 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [1] [i_1 - 1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4])) : (((/* implicit */int) arr_7 [(unsigned short)1] [i_1 - 1] [(short)2] [3U]))))) : (max((127ULL), (6598057959993355497ULL))))))));
                                arr_19 [i_0] [(_Bool)1] [(short)9] [i_3] [0ULL] [i_4 - 2] = ((/* implicit */signed char) min((max((arr_13 [i_2] [i_3 - 1] [(_Bool)1]), (((/* implicit */long long int) min(((short)24033), (((/* implicit */short) arr_14 [i_0] [(unsigned char)9] [i_2] [i_3] [i_4]))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_4] [i_4 + 2] [i_4 + 2] [i_4] [i_4])) / (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_2 [i_1]) : (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_3 - 1])))))))));
                                arr_20 [(_Bool)1] [i_1] [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_7 [i_0] [i_1 + 1] [i_2] [i_3])), (165456649U)))), (6598057959993355498ULL))), (125ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 9; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 2) 
                        {
                            {
                                arr_25 [i_0] [i_1 + 1] [0U] [i_5] [i_5] [i_6] [i_6] = ((/* implicit */short) min(((unsigned char)128), (((/* implicit */unsigned char) (_Bool)1))));
                                arr_26 [i_0] [i_2] [i_0] [i_5 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (arr_13 [i_5] [i_2] [i_1 - 1])))));
                            }
                        } 
                    } 
                }
                for (int i_7 = 2; i_7 < 8; i_7 += 3) 
                {
                    arr_30 [i_0] [i_7 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3224124271226319914ULL)) ? (6598057959993355497ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_7])) ? (var_10) : (var_7))))))));
                    arr_31 [5LL] [i_1 - 1] = ((/* implicit */unsigned short) ((signed char) min((arr_16 [i_0] [i_1 - 1] [i_7 + 2] [i_7]), (arr_0 [i_0]))));
                    arr_32 [i_0] [i_0] [1U] = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_7 + 1]);
                }
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned short)7529)))));
                    arr_36 [i_0] [i_1 - 1] [i_8] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_9)) ? (2109002510U) : (var_10)))));
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_1 + 2] [i_8])) ? (((/* implicit */int) var_6)) : (arr_2 [i_0])))))));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (unsigned char)120);
    var_15 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)125)) << (((((/* implicit */int) (unsigned char)113)) - (112)))));
    /* LoopSeq 1 */
    for (long long int i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_38 [i_9] [i_9]), (arr_38 [i_9] [i_9]))))));
        var_17 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_9] [i_9]))) - (18446744073709551488ULL))))), (((/* implicit */unsigned long long int) (+((-(arr_37 [(short)15] [(short)15]))))))));
    }
}
