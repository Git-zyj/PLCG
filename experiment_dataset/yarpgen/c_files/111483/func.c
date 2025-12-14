/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111483
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
    var_17 = ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)6557))))) ? (min((((/* implicit */unsigned long long int) var_12)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)58979)) && ((_Bool)1))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = (-(max((((/* implicit */unsigned int) arr_2 [i_0] [i_1])), (min((4129049027U), (((/* implicit */unsigned int) (_Bool)1)))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    arr_8 [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_6 [i_1] [i_2 - 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 1]))) : (arr_6 [i_1] [i_2 + 1] [i_1]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        arr_11 [i_0] [(unsigned char)7] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_2 + 1])) ? (arr_4 [i_0] [i_2 - 1]) : (arr_4 [i_0] [i_2 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((/* implicit */int) ((short) arr_10 [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_2])))))))) : (8730414194066169456ULL)));
                        arr_12 [i_0] [i_3] [i_1] [i_3] [i_3] [(unsigned short)1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_3 [i_2] [i_2 + 2] [i_2])))) ? (min((8730414194066169456ULL), (arr_3 [i_0] [i_2 + 1] [i_2]))) : (min((arr_3 [i_0] [i_2 - 1] [i_0]), (8730414194066169472ULL)))));
                    }
                    /* vectorizable */
                    for (short i_4 = 1; i_4 < 13; i_4 += 4) 
                    {
                        arr_15 [i_1] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)65535))));
                        arr_16 [(signed char)8] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_2 - 1] [9ULL] [i_4 + 1])) ? (((((/* implicit */_Bool) 9716329879643382159ULL)) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) (unsigned short)6566)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1])))))));
                        arr_17 [i_0] [(unsigned short)10] [i_0] [i_0] [i_1] |= ((/* implicit */short) (-(arr_3 [i_2] [i_2] [i_4 + 2])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 1) 
                        {
                            arr_20 [i_5] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((arr_9 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4]))) : (arr_10 [i_1]))) % ((-(var_9)))));
                            arr_21 [i_0] [i_0] [i_0] [i_1] [i_2] [i_4] [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) arr_9 [i_4]))))) ? ((-(var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))));
                        }
                    }
                    arr_22 [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((arr_6 [i_0] [i_0] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)6566))))))))));
                    arr_23 [i_0] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-17740))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                arr_29 [i_1] [i_1] [i_1] [i_2] [i_0] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_2])), (arr_13 [i_0] [i_0])))) || (((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_2] [i_6] [i_7]))))) >> ((((-(((/* implicit */int) arr_14 [14U] [14LL] [i_2] [i_6] [i_6] [i_7])))) + (3814)))));
                                arr_30 [i_7] [i_6] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_18 [i_6] [i_2 + 2] [(short)7] [i_6] [i_7])) - (((/* implicit */int) arr_1 [i_2 + 1])))));
                                arr_31 [i_0] [i_1] [i_1] [i_6] [i_1] [i_7] = ((/* implicit */unsigned char) arr_13 [i_0] [i_0]);
                                arr_32 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((signed char) var_8)), (((/* implicit */signed char) (!(arr_9 [i_2]))))))) >> ((((~(min((arr_7 [i_0] [i_2]), (((/* implicit */unsigned long long int) arr_27 [i_0] [i_0] [i_2] [i_0])))))) - (14605618447246828563ULL)))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    arr_35 [i_0] [i_1] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)14476))));
                    arr_36 [i_1] [1U] [i_1] = arr_34 [i_1];
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_41 [i_0] [i_1] [i_8] [i_9] [i_10] = ((/* implicit */unsigned char) max((((((((/* implicit */int) ((short) arr_40 [i_10] [i_9] [i_8] [i_8] [i_1] [i_0]))) + (2147483647))) << (((((((/* implicit */_Bool) (short)9709)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_8] [i_8] [i_10]))) : (var_3))) - (51086U))))), (((/* implicit */int) (unsigned char)194))));
                                arr_42 [i_0] [i_1] [i_8] [i_8] [i_9] [i_10] = ((/* implicit */_Bool) 8730414194066169472ULL);
                                arr_43 [i_10] [i_9] [i_9] [i_0] = max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_25 [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) (short)-25804)) ? (6220321104525257872ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))));
                                arr_44 [i_1] = ((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0] [i_10] [i_1]);
                            }
                        } 
                    } 
                    arr_45 [i_8] [i_0] [i_0] [i_0] = ((arr_7 [i_1] [i_1]) % (((unsigned long long int) ((((/* implicit */int) (unsigned char)237)) << (((199084660578745265ULL) - (199084660578745253ULL)))))));
                }
            }
        } 
    } 
}
