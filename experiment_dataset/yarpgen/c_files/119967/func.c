/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119967
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 4; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) var_1);
                            var_15 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (13466483874229569803ULL))) & (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) var_5)))))));
                            var_16 = ((/* implicit */short) 8377274416672024107ULL);
                            var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 952980542U)) | (17442497397097506771ULL)));
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 2; i_4 < 7; i_4 += 3) 
                            {
                                var_18 = ((/* implicit */int) ((((((/* implicit */int) arr_11 [i_1 - 2])) < (((/* implicit */int) ((arr_6 [i_1] [i_1] [i_2 - 2]) < (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) ? (max(((+(4980260199479981791ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)24768))))))) : (min((((unsigned long long int) arr_1 [i_0] [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned short)34002)))))))));
                                arr_15 [i_0] [i_2] [10ULL] [i_4] = ((/* implicit */signed char) -905965218);
                                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_12 [i_2] [i_3] [i_3] [i_3 - 3])) & (((/* implicit */int) var_11)))) << (((/* implicit */int) ((3449910606674633281ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24765))))))));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
                            {
                                var_20 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)48788))));
                                var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) 215341075U)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (max((((/* implicit */unsigned int) var_4)), (arr_9 [1] [i_2] [i_2 - 2] [i_2] [1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (arr_7 [i_3 - 2] [i_1 - 1] [i_2 + 1]) : (arr_7 [i_3 - 2] [i_1 - 1] [i_2 + 1]))))));
                                arr_19 [i_0] [i_1] [i_2 - 4] [i_3] [i_5] = ((/* implicit */short) 952980543U);
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                            {
                                var_22 |= ((((((((/* implicit */int) (short)24764)) > (((/* implicit */int) arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 - 2] [i_1] [(unsigned char)1]))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_1))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) max((-847359668), (((/* implicit */int) (unsigned short)16748))))))))));
                                arr_22 [i_0] = arr_11 [i_0];
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (((+(((/* implicit */int) (short)-24751)))) - ((+((~(-964616132))))))))));
                            }
                        }
                    } 
                } 
                arr_23 [i_0] [(signed char)1] [i_0] |= min((((/* implicit */int) (short)-23308)), (((((/* implicit */_Bool) (unsigned short)48788)) ? (((((/* implicit */int) (short)-17573)) ^ (((/* implicit */int) (short)-1732)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)103)) || (((/* implicit */_Bool) arr_13 [i_1] [(short)2]))))))));
                var_24 ^= ((/* implicit */short) min((max((1534107129), (arr_16 [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1]))), (((((/* implicit */_Bool) arr_16 [i_0] [i_1 - 2] [i_0] [i_1 - 2] [i_1 + 1])) ? (((/* implicit */int) var_11)) : (arr_16 [i_0] [i_1 - 2] [i_1] [i_1 - 2] [i_1])))));
            }
        } 
    } 
    var_25 &= ((/* implicit */unsigned short) ((var_12) ? (((((/* implicit */_Bool) var_0)) ? (((int) var_10)) : ((-(((/* implicit */int) (unsigned short)6735)))))) : ((+((-(((/* implicit */int) var_8))))))));
    var_26 = (-(((/* implicit */int) var_7)));
}
