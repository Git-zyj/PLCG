/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118980
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
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [(short)12] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
                arr_5 [i_0] [(_Bool)1] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)215)) < (((/* implicit */int) (short)32764))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)4]))) : (arr_2 [11U] [i_0])))) ? (((/* implicit */int) ((arr_2 [(_Bool)1] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (var_3)))));
                arr_6 [i_0 + 2] [i_0] = ((/* implicit */long long int) (-((+(arr_2 [i_0 - 1] [i_1])))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    var_11 -= ((((/* implicit */_Bool) (-(var_10)))) ? (((((/* implicit */int) (unsigned short)57618)) * (((/* implicit */int) arr_9 [(unsigned short)12] [i_0 + 1] [i_0])))) : ((-(((/* implicit */int) arr_9 [i_0 - 2] [i_0 - 1] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) arr_12 [i_3 + 2] [i_3] [i_1] [i_3 - 1] [(short)8] [i_3 + 2]))));
                                arr_14 [(_Bool)1] [(_Bool)1] [i_2] [i_3] = ((/* implicit */int) (+(((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */unsigned int) -7)) : (4294967295U)))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [(short)13] [(unsigned short)7] [i_4] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (unsigned short)57618)) && (((/* implicit */_Bool) var_6)))) ? (arr_7 [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((3417370145443617884LL) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2])))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (((/* implicit */short) ((_Bool) arr_12 [i_0] [0] [i_3] [i_3] [i_4 - 1] [i_3 + 2])))))))));
                                arr_16 [i_0] [(short)6] [i_0] [i_3] [i_3] [i_4] [(short)6] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 2])))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32764))))) : (((((/* implicit */unsigned long long int) ((662711477) / (((/* implicit */int) arr_9 [(unsigned short)10] [i_1] [i_1]))))) + (((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7917))) : (17780137153224818443ULL)))))));
                            }
                        } 
                    } 
                    var_13 += ((int) (!(((/* implicit */_Bool) (-(arr_7 [i_2] [(signed char)9]))))));
                }
                for (short i_5 = 2; i_5 < 10; i_5 += 2) 
                {
                    var_14 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) (signed char)-122))))) ? (arr_12 [i_0 + 3] [i_1] [i_1] [i_1] [i_5 + 3] [i_5 + 1]) : (((((/* implicit */_Bool) 662711477)) ? (-1467658144) : (((/* implicit */int) (_Bool)0))))))));
                    var_15 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_1] [i_5 + 2])) ? (17647826238796869860ULL) : ((~(arr_3 [i_0] [i_0] [i_0])))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 1; i_7 < 12; i_7 += 4) 
                    {
                        for (long long int i_8 = 1; i_8 < 12; i_8 += 2) 
                        {
                            {
                                arr_27 [i_7] [i_7] [i_6] [i_7] [8ULL] [i_6] [1ULL] = ((/* implicit */_Bool) ((unsigned long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(unsigned char)1] [i_0] [i_6] [i_0] [i_0]))) : (arr_7 [i_6] [i_7]))) <= (((/* implicit */unsigned long long int) ((int) 0U))))));
                                var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((var_3) + (2147483647))) << (((2081336574) - (2081336574)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_6] [i_1] [i_6] [i_1] [(short)11])) - (((/* implicit */int) arr_21 [i_7] [i_1] [i_7] [i_7 - 1] [(_Bool)1] [i_6]))))) : (((unsigned int) -1))))));
                            }
                        } 
                    } 
                    arr_28 [i_0] [i_0] [8LL] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [10LL] [10LL] [10LL] [i_6]))))) | (((((/* implicit */_Bool) arr_26 [7ULL] [i_1] [i_1] [i_6])) ? (arr_24 [(unsigned short)2] [i_1] [i_0 - 1] [0LL] [i_0 - 1]) : (arr_24 [11U] [i_0 - 1] [11U] [i_6] [i_6])))));
                    var_17 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_0 + 1] [i_1] [i_6]))))), ((+(((0ULL) + (arr_2 [i_0] [i_1])))))));
                }
                arr_29 [i_1] = (!(((/* implicit */_Bool) var_3)));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((long long int) (+(((/* implicit */int) (signed char)25))))))));
}
