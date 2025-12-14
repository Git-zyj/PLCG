/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10954
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
    var_12 = (-(var_3));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_15 [i_3] [(short)14] [i_3] [i_2] [i_1] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_2] [i_4]))) != (arr_10 [i_0] [i_1] [i_1] [i_4]));
                                var_13 = ((/* implicit */int) (short)-13138);
                                var_14 = var_0;
                                arr_16 [i_3] [20LL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) || (((/* implicit */_Bool) arr_3 [i_0 + 1])))))) * (((((/* implicit */unsigned int) ((/* implicit */int) ((arr_14 [i_0] [i_1]) && (((/* implicit */_Bool) var_0)))))) & (var_6)))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) (unsigned short)3818);
                    arr_18 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((139611588448485376LL) | (((long long int) (_Bool)1))))) ? (var_1) : ((-(((/* implicit */int) (_Bool)1))))));
                    var_15 = ((/* implicit */long long int) (-(((var_1) * (((/* implicit */int) arr_5 [i_2] [i_0 + 1] [i_0 + 1]))))));
                }
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                {
                    arr_21 [(short)21] [i_1] [i_0] [i_5] = ((_Bool) ((((var_9) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)61748)))) - (var_5)));
                    arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)3776))));
                }
                for (short i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (int i_7 = 2; i_7 < 20; i_7 += 3) 
                    {
                        arr_28 [i_0] [i_7] [i_1] [i_0] [i_0] [i_7] = ((((/* implicit */_Bool) min((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1])))) || (((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)3786)), (arr_3 [i_0 + 1])))));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_5 [i_0 + 1] [i_0 + 1] [i_6]) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_6] [i_6])) : (((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_6]))))) ? (4001094111U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8))))));
                        var_17 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (4001094111U))));
                        var_18 = ((/* implicit */_Bool) (~(((unsigned long long int) var_5))));
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) -1043873294))));
                    }
                    for (unsigned short i_8 = 3; i_8 < 19; i_8 += 2) 
                    {
                        arr_31 [i_0] [i_8] [i_8] = ((/* implicit */int) (!((!(arr_14 [i_0 + 1] [i_0 + 1])))));
                        arr_32 [i_6] [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_8] [i_6] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0 + 1]))) : (min((((/* implicit */unsigned int) arr_23 [i_1])), (arr_29 [i_8] [i_0] [i_1] [i_0]))))) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0 + 1])) >> (((((/* implicit */int) arr_12 [i_0 + 1])) - (14849))))))));
                        var_20 = ((/* implicit */short) ((((arr_14 [i_6] [i_8 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_6]))) : (arr_10 [i_8] [i_6] [i_1] [i_0 + 1]))) >= (var_8)));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_36 [i_0] [i_1] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)19879)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)0)))))))) ? (((((((/* implicit */int) arr_24 [i_9] [i_0] [i_1] [i_0])) - (-1073741824))) - (((/* implicit */int) arr_14 [i_6] [i_0])))) : ((+(((/* implicit */int) arr_5 [i_0] [i_1] [i_0 + 1]))))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_6)) : (var_4))) > (((/* implicit */unsigned long long int) ((arr_14 [i_6] [i_9]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_6])))))))) <= (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_25 [i_1] [i_6] [i_1])) : (var_0))) >> (((/* implicit */int) arr_26 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_6] [19U]))))));
                        var_22 ^= ((((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6] [i_1]))))) ^ (((/* implicit */unsigned long long int) ((long long int) 0U))));
                        var_23 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)3786)) : (((((/* implicit */int) arr_23 [i_0 + 1])) ^ (((/* implicit */int) arr_5 [i_0 + 1] [6] [6]))))));
                    }
                    var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-3799409498822209931LL) != (-5725011654412925571LL))) ? (var_5) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (!((_Bool)1))))))) : (((((/* implicit */_Bool) 4421254453002516138ULL)) ? (((/* implicit */unsigned int) ((arr_7 [i_6] [i_6] [i_1] [i_0]) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_13 [i_1] [i_1]))))) : (4294967293U)))));
                }
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_0])))))))) ? (min((((unsigned long long int) 10LL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_14 [i_1] [i_0])) : (((/* implicit */int) (short)-32761))))))) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) (unsigned short)61749)) : (var_0)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_10 = 3; i_10 < 24; i_10 += 4) 
    {
        for (unsigned char i_11 = 0; i_11 < 25; i_11 += 4) 
        {
            {
                arr_42 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((1631931552U) * (134217216U)))) ? (((/* implicit */int) arr_40 [i_10] [i_10])) : (((/* implicit */int) ((_Bool) arr_40 [i_10] [i_10])))));
                var_26 = ((/* implicit */unsigned char) ((min((arr_38 [i_10 - 2]), (min((arr_38 [i_11]), (arr_38 [i_11]))))) ? (((unsigned int) (unsigned short)61774)) : (var_8)));
            }
        } 
    } 
}
