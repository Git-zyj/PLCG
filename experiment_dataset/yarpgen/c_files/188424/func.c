/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188424
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            {
                arr_8 [i_1] [i_0] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) arr_1 [i_1]))))) ? (((/* implicit */int) max((var_8), (((/* implicit */unsigned char) (signed char)-6))))) : (((/* implicit */int) (short)-32760))))), (min((((var_5) * (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (unsigned short)5))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    arr_11 [10LL] [i_1] [i_1] = ((/* implicit */long long int) ((_Bool) arr_5 [i_2] [i_0]));
                    arr_12 [i_1] [(signed char)10] [i_1] [i_1] = ((/* implicit */unsigned int) arr_6 [i_0]);
                }
                for (unsigned int i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    arr_16 [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_13 [i_1 + 2] [i_1 + 2] [i_3 + 1] [i_3]))))) ? ((~(((/* implicit */int) (unsigned short)50108)))) : (((/* implicit */int) min((arr_13 [i_1 + 1] [i_3 + 1] [i_3 - 1] [i_3]), (arr_13 [i_1 - 2] [i_1] [i_3 + 1] [i_3 + 1])))));
                    var_13 = max((((unsigned long long int) ((((/* implicit */_Bool) (short)13440)) ? (-2003977387) : (arr_14 [i_3] [i_1] [i_0])))), (max((14895920342833308933ULL), (281474439839744ULL))));
                    var_14 = ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (signed char)100)), (4027243326U))), (min((arr_15 [i_1]), (arr_15 [i_1])))))) ? (((((/* implicit */unsigned long long int) min((var_1), (var_10)))) | (min((281474439839744ULL), (var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_0]))));
                    var_15 ^= ((/* implicit */unsigned short) var_4);
                }
                for (unsigned char i_4 = 1; i_4 < 9; i_4 += 3) 
                {
                    var_16 -= ((/* implicit */unsigned short) (((-(18056976895669617000ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1 + 3] [(unsigned char)2] [i_4 + 4]))) + (-8LL))))));
                    arr_20 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2524727953442200375LL)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (unsigned short)35995))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4] [i_4 + 3] [i_4 + 2] [i_1 + 3])))))) : (var_9)));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_17 -= ((/* implicit */short) max((((/* implicit */long long int) var_0)), (644285796557310200LL)));
                                arr_27 [i_6] [4] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) (signed char)38)))));
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */int) ((((/* implicit */_Bool) 67100672)) ? (((unsigned long long int) (unsigned short)13938)) : (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) (short)-27237))))))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    arr_30 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((int) arr_18 [i_1 + 2] [i_1 - 1]));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [2] [i_1 + 1] [(signed char)4] [i_1 + 1])) ? (3824018610910685116LL) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [2]))))))));
                    var_20 -= ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) arr_24 [i_0] [i_1 - 2] [i_7] [i_7])))));
                    arr_31 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_1] [i_1 + 2] [i_1])) ? (((/* implicit */int) arr_9 [i_1] [i_1 + 3] [i_1])) : (((/* implicit */int) arr_9 [i_1] [i_1 - 1] [i_1]))));
                    var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0] [i_1 + 2]))));
                }
                arr_32 [i_0] [i_1] [(signed char)9] = ((/* implicit */int) ((min(((-(arr_0 [(_Bool)1] [i_1]))), (((/* implicit */unsigned int) arr_14 [i_1] [i_1] [i_1 - 4])))) / (((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned short)35995)))))))));
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) arr_0 [i_1 + 2] [i_1 + 2]))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_1 + 1] [i_1 - 1] [(short)6] [i_1])) ? (((/* implicit */int) arr_17 [i_1 - 3] [i_1 - 4] [(short)6] [(short)6])) : (((/* implicit */int) arr_17 [i_1 - 3] [i_1 - 2] [(signed char)2] [i_1]))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (6904045809073244474LL)))), (((((/* implicit */_Bool) (unsigned short)29519)) ? (7538241573279976704LL) : (((/* implicit */long long int) 4080U)))))));
    var_24 -= var_10;
}
