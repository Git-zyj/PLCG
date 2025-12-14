/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104558
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((short) min((((/* implicit */unsigned int) arr_1 [i_0 + 3] [i_0 + 3])), (2063206406U))));
                arr_6 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) ((unsigned int) arr_4 [i_0] [i_1 - 1] [i_0]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */long long int) -315177065)) & (1090048829547113028LL))) : (-1341531544252367656LL))) ^ (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 13; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_14 [i_2] [i_4] [3ULL] = ((/* implicit */unsigned int) 315177065);
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(2231760890U)))) ? ((-(arr_8 [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (arr_10 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    arr_15 [i_2] [i_4] [i_2] = ((/* implicit */signed char) (+(arr_4 [i_4] [i_3] [i_2 + 1])));
                    var_23 = ((/* implicit */_Bool) arr_2 [10ULL] [10ULL]);
                }
                for (short i_5 = 1; i_5 < 13; i_5 += 4) /* same iter space */
                {
                    var_24 = ((((/* implicit */_Bool) (~(2063206397U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 2063206397U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_3])))) > (min((((/* implicit */int) (signed char)-124)), (-315177066))))))) : (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_2 + 1]))))), (min((arr_11 [i_5]), (((/* implicit */unsigned int) arr_0 [i_2 + 1])))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 10; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 4; i_7 < 12; i_7 += 1) 
                        {
                            {
                                arr_22 [(_Bool)1] [i_2] [i_5 + 1] [i_2] [i_2] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((934462140) >= (((/* implicit */int) (unsigned short)23151)))))))) | (((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2] [(unsigned short)4] [10U] [i_6] [(unsigned short)10] [i_7]))) : (((arr_9 [i_6]) % (1341531544252367655LL)))))));
                                arr_23 [i_2 - 1] [i_3] [i_5] [i_3] [i_6] [i_5] = ((/* implicit */short) arr_20 [i_7 + 2] [i_6] [i_6] [i_6] [i_2] [i_2]);
                                arr_24 [6U] [i_3] [(unsigned short)5] [i_6] [i_6] [i_2] = ((/* implicit */unsigned long long int) arr_2 [i_6] [7LL]);
                                var_25 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2] [(unsigned char)2])) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */long long int) 1043072773)) - (6644246638575715807LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((2231760899U), (((/* implicit */unsigned int) arr_12 [i_6] [i_3] [i_5] [i_6]))))) ? (((unsigned int) -315177066)) : (((/* implicit */unsigned int) ((/* implicit */int) ((95349829U) != (((/* implicit */unsigned int) -315177065)))))))))));
                            }
                        } 
                    } 
                    arr_25 [7U] = ((/* implicit */int) ((_Bool) min((arr_2 [i_5 + 1] [i_2 + 1]), (arr_2 [i_5 - 1] [i_2 + 1]))));
                }
                /* vectorizable */
                for (short i_8 = 1; i_8 < 13; i_8 += 4) /* same iter space */
                {
                    arr_30 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] = ((/* implicit */long long int) arr_10 [i_2 + 1]);
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [(signed char)4] [(_Bool)1] [i_8 - 1] [i_8 - 1])) ? (((/* implicit */long long int) 2231760899U)) : (arr_13 [(_Bool)1] [i_3] [i_3] [i_8 - 1])));
                    var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [i_8 - 1] [i_2 - 1]))));
                }
                for (short i_9 = 1; i_9 < 13; i_9 += 4) /* same iter space */
                {
                    var_28 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)960))) <= (2231760918U)));
                    var_29 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_2 - 1])) && (((/* implicit */_Bool) arr_0 [(unsigned short)4])))) ? (arr_3 [i_2]) : (((min((4294967285U), (var_2))) << (((arr_27 [i_2]) - (733421521)))))));
                    arr_35 [i_2] [i_2] [i_9] [i_9] = ((/* implicit */signed char) ((unsigned short) ((2063206396U) >> (((95349829U) - (95349801U))))));
                    arr_36 [i_9] [i_9] = min((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_9] [i_3] [i_2 + 1])))))) | (((((/* implicit */_Bool) (unsigned char)135)) ? (arr_9 [2U]) : (((/* implicit */long long int) 315177065)))))), (((((/* implicit */_Bool) min((arr_16 [i_2] [i_2] [i_2]), (((/* implicit */long long int) 1913479919))))) ? (((long long int) (_Bool)0)) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_29 [i_9 - 1] [i_9] [i_9] [i_9])))))));
                }
                arr_37 [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((((((-7171532456381628373LL) >= (((/* implicit */long long int) 4020775821U)))) ? (((((/* implicit */unsigned int) arr_21 [i_2 + 1] [i_2] [i_2 + 1] [i_2] [(signed char)12] [(unsigned short)4])) ^ (876182267U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [i_2] [i_3]), (((/* implicit */unsigned short) (signed char)73)))))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2])))));
            }
        } 
    } 
}
