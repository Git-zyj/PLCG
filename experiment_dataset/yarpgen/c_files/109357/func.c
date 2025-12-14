/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109357
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (max((arr_0 [i_0]), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))) : (((((/* implicit */_Bool) 2047)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))))))));
        arr_3 [i_0] [(unsigned char)16] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (arr_1 [0U])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) arr_0 [(signed char)22])) ? (arr_0 [(_Bool)1]) : (arr_0 [8])))))) ? (((((/* implicit */_Bool) ((int) 3913764572U))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)247)) * (((/* implicit */int) (short)28102))))) : (((((/* implicit */_Bool) arr_0 [10U])) ? (-8843363805118728686LL) : (((/* implicit */long long int) arr_1 [(_Bool)1])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [10LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)247)) >= (-548038785))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)25080))) + (3913764572U))))))));
        var_19 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : ((+(((arr_0 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
        var_20 = ((/* implicit */short) (+((-2147483647 - 1))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-25070))))) ? ((-(548038784))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) var_4))))));
        var_21 = ((/* implicit */long long int) (+(arr_1 [i_1])));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (-(3913764575U))))));
        arr_7 [i_1] [(signed char)6] = ((/* implicit */short) ((signed char) var_15));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_4 [(_Bool)1]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_4))))) : (arr_5 [i_1] [i_1]))))));
    }
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) max((((/* implicit */unsigned int) (_Bool)1)), (((((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) <= (3756161845U))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (751981486U))))))));
    var_25 = ((/* implicit */int) var_11);
    var_26 = ((/* implicit */long long int) var_7);
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                {
                    arr_14 [i_4] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) arr_10 [i_4] [i_2] [i_2])) : (((/* implicit */int) arr_11 [i_2] [i_2 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [11LL] [i_3 + 1]))) : (((((/* implicit */_Bool) -548038785)) ? (((/* implicit */unsigned int) arr_9 [i_3] [i_4])) : (arr_0 [i_4]))))));
                    var_27 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) 2443722U)) ? (((/* implicit */long long int) 1471471870)) : (-538835422650782212LL))), (((/* implicit */long long int) ((arr_13 [i_3 + 1] [i_3 + 1] [i_3 + 1]) & (((/* implicit */int) (short)-5250)))))));
                    var_28 = ((/* implicit */unsigned int) ((max((((((/* implicit */long long int) arr_4 [i_2 + 1])) | (var_2))), (((/* implicit */long long int) min((-669757640), (((/* implicit */int) var_0))))))) | (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */int) arr_11 [i_2] [i_4])) : ((-2147483647 - 1)))) & (max((arr_13 [i_2] [i_3] [i_4]), (((/* implicit */int) (signed char)-30)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 13; i_5 += 4) 
                    {
                        for (signed char i_6 = 3; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_20 [i_2] = ((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned char)215)))), (((/* implicit */int) (_Bool)1))));
                                arr_21 [i_2] [i_2] [i_4] [i_2] [i_6] |= ((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) arr_5 [i_2] [i_3 + 1])) ? (1810155282U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))), (((var_18) & (max((var_6), (((/* implicit */unsigned int) arr_8 [i_2] [i_2]))))))));
                                arr_22 [(short)14] &= ((/* implicit */_Bool) min((max((((arr_17 [i_2 + 1] [i_3] [i_3] [i_2 + 1]) >> (((((/* implicit */int) var_15)) + (107))))), (-7557515932319463815LL))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2])) ? (((/* implicit */int) var_9)) : (arr_4 [i_6])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
