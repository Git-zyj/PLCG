/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16361
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */int) min((((unsigned int) var_7)), (((/* implicit */unsigned int) var_9))));
                            arr_11 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */short) ((min((((((/* implicit */_Bool) (signed char)41)) ? (11079469772891409096ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-111))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))))) & (var_11)));
                            var_15 = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_2] [i_3]);
                        }
                    } 
                } 
                arr_12 [i_0] |= ((/* implicit */unsigned int) 11079469772891409077ULL);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) (short)32765);
    var_17 = ((/* implicit */signed char) ((((var_1) + (9223372036854775807LL))) << (((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) & (((var_11) | (((/* implicit */unsigned long long int) -6694337797213104468LL)))))) - (21956ULL)))));
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_20 [i_4] = var_5;
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        var_18 |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (((/* implicit */int) arr_3 [i_4] [i_7])) : (((/* implicit */int) ((((/* implicit */int) var_0)) > (var_9)))))), ((~(((/* implicit */int) arr_4 [i_6] [i_5] [i_4]))))));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -738045789)) ? (((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [i_4] [i_4]))) : (((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */long long int) var_9)) : (5LL))))) : (((/* implicit */long long int) arr_14 [i_4]))));
                    }
                    for (short i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        arr_29 [i_4] [i_4] [i_6] [i_8] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_21 [i_4] [i_5] [i_6] [i_8])) ? (-4339664529457561432LL) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_4] [i_5] [i_6] [i_4]))))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)(-127 - 1)))))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned int) ((((var_9) * (((/* implicit */int) (unsigned char)0)))) % (((((/* implicit */_Bool) arr_15 [i_8] [i_6] [i_5])) ? (var_8) : (arr_8 [i_6] [i_6] [i_6] [i_6])))))))));
                    }
                    arr_30 [i_4] [i_4] [(short)7] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_14 [(unsigned short)3]), (arr_14 [i_6]))))));
                    arr_31 [i_4] [i_5] [i_6] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_26 [i_4] [i_4] [i_6] [5ULL] [i_6] [i_6]) : (((/* implicit */int) (unsigned short)21524))))) ? ((+(arr_15 [i_4] [i_5] [i_6]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_6] [i_5] [i_4] [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) var_10)))))))) > (min((((arr_17 [i_4] [i_5] [i_6]) - (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((unsigned char) -660352913))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    arr_35 [i_9] [1] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4] [(_Bool)1]))) : (((((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)41))) - (arr_17 [i_4] [i_5] [i_5])))));
                    var_21 = ((/* implicit */long long int) var_2);
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        var_22 *= ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) arr_27 [i_4] [(unsigned short)1] [i_4] [i_4] [i_4])) ? (1856230067712520037LL) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [(signed char)3] [i_5] [i_9]))))), (((/* implicit */long long int) (+(var_8))))))));
                        var_23 = ((/* implicit */_Bool) 608131426);
                        var_24 = ((/* implicit */short) var_2);
                    }
                    arr_39 [i_4] [i_5] [8ULL] = ((/* implicit */unsigned int) var_4);
                    arr_40 [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8444))) : (var_1))))) ? ((+(var_9))) : (((((((/* implicit */_Bool) (short)22531)) ? (((/* implicit */int) arr_13 [i_5] [i_5])) : (((/* implicit */int) (signed char)127)))) ^ (((/* implicit */int) arr_32 [i_4] [i_4] [i_4] [i_4]))))));
                }
                for (signed char i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    arr_43 [i_5] [i_11] = ((/* implicit */long long int) arr_6 [i_5] [i_5] [i_11]);
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 11; i_13 += 3) 
                        {
                            {
                                arr_48 [i_4] [i_5] [i_5] [i_11] [i_12] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_44 [i_4])), (((((/* implicit */_Bool) arr_10 [i_13] [i_12] [i_4] [i_5] [i_4])) ? (((6694337797213104467LL) >> (((17826969076044370752ULL) - (17826969076044370735ULL))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-102)), (arr_22 [i_4] [i_5] [i_11] [i_4] [i_4])))))))));
                                arr_49 [(short)4] = ((/* implicit */unsigned char) var_12);
                                arr_50 [i_4] [i_4] [i_5] [i_4] [(unsigned char)4] [(_Bool)1] [i_4] = ((/* implicit */short) arr_5 [i_4]);
                                var_25 = ((/* implicit */int) (((~((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-6694337797213104468LL))))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49793)))));
                            }
                        } 
                    } 
                    arr_51 [i_4] [i_5] [0U] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 6694337797213104467LL)))))))) ? (((max((arr_8 [i_4] [i_5] [i_4] [i_11]), (((/* implicit */int) var_0)))) << (((((/* implicit */int) (unsigned short)43987)) - (43974))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                }
                var_26 = ((/* implicit */signed char) max((((/* implicit */long long int) (~(max((1008458193), (((/* implicit */int) var_10))))))), (arr_19 [i_4] [i_4] [7LL] [i_5])));
            }
        } 
    } 
    var_27 = ((/* implicit */int) ((unsigned short) ((unsigned long long int) var_3)));
}
