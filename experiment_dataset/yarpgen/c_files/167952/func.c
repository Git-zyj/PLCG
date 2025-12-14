/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167952
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
    var_15 = max((((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_14)))) >> (((min((((/* implicit */unsigned int) var_11)), (var_1))) - (27251U)))))), (((((/* implicit */_Bool) ((unsigned int) 3103145974U))) ? (max((var_10), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [(signed char)14] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) <= (((/* implicit */int) arr_0 [i_0] [i_0]))))) >= (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_0 [i_0] [i_0])))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((arr_1 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [22U]))))))))));
    }
    var_16 = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14)))))) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) (signed char)122)), (((((/* implicit */_Bool) 3536455275U)) ? (17242091434217396312ULL) : (((/* implicit */unsigned long long int) 758512013U)))))) - (17242091434217396289ULL)))));
    var_17 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_7 [(short)6] &= ((/* implicit */int) ((unsigned int) ((((/* implicit */int) arr_4 [i_1])) == (((/* implicit */int) arr_4 [i_1])))));
        arr_8 [6U] = ((/* implicit */signed char) var_6);
        arr_9 [10ULL] [3U] = ((/* implicit */short) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) arr_0 [(unsigned char)7] [i_1]))));
    }
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 2; i_3 < 15; i_3 += 1) 
        {
            arr_16 [(short)3] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned char) max((arr_0 [i_3] [i_3 + 2]), (arr_0 [21] [i_3 - 1]))));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    for (short i_6 = 3; i_6 < 13; i_6 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */int) var_14);
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3 - 1] [i_3 - 2] [i_3 + 2])) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) arr_13 [i_2]))))) ? (arr_17 [i_2] [i_2] [(unsigned char)8]) : (((/* implicit */int) arr_10 [i_2]))));
                            var_20 = ((/* implicit */short) ((unsigned long long int) ((4010698915U) - (((/* implicit */unsigned int) -1785541688)))));
                        }
                    } 
                } 
            } 
            arr_25 [i_2] [i_3] = ((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2]))) & (arr_21 [i_3 - 1] [1ULL] [i_2] [i_2] [i_3] [i_3])))));
            arr_26 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((short) arr_12 [i_2]))) == (((/* implicit */int) ((signed char) max((var_1), (((/* implicit */unsigned int) var_9))))))));
            arr_27 [i_2] = ((/* implicit */short) ((((arr_12 [i_2]) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3536455254U)) ? (1785541687) : (((/* implicit */int) var_0))))))) < (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1292825329)) ? (4010698888U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_3 + 2]))))))));
        }
        var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4166354038352549676ULL))))), (arr_23 [i_2] [1U] [i_2] [i_2] [(short)9])));
    }
}
