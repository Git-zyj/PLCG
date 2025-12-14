/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187906
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
    var_10 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [18LL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)0)), (arr_0 [i_0])))), (arr_2 [i_0] [i_1 - 1])))) ? (max((((/* implicit */int) max((arr_3 [i_0] [i_1 - 1]), (((/* implicit */unsigned char) (signed char)0))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) var_0)))))) : ((-(((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 2]))))));
                var_11 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [(short)7])) ? (var_3) : (var_7)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65533))))) : (max((arr_2 [i_0] [i_0]), (arr_2 [i_1] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (int i_4 = 4; i_4 < 20; i_4 += 1) 
                            {
                                arr_15 [i_4] [i_3] [i_2] [(short)15] [i_3] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_1 - 1] [i_0]))));
                                arr_16 [i_0] [(unsigned short)21] [i_2] [i_3] [i_3 + 1] [i_1] [i_3] = ((/* implicit */signed char) (~(max(((~(arr_6 [i_2] [i_1] [i_2] [i_2]))), (((/* implicit */int) min((((/* implicit */signed char) var_6)), (arr_14 [i_4] [i_1] [i_0] [(short)15] [i_4] [i_1 - 1] [i_0]))))))));
                            }
                            for (signed char i_5 = 2; i_5 < 18; i_5 += 2) 
                            {
                                arr_21 [i_2] [i_1] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (min((((/* implicit */int) arr_20 [i_0] [i_0] [15] [i_0] [i_0])), (((((/* implicit */int) var_4)) * (arr_12 [i_0] [i_0] [12LL] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_2 - 1] [i_3 - 1] [i_3 + 1])) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) arr_9 [i_1 - 1] [i_2 - 1] [i_3] [i_5 + 4]))))));
                                arr_22 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) min(((unsigned short)65510), (((/* implicit */unsigned short) var_2)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 983603670)) ? (3952119219U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-8))))))))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (arr_20 [i_3 - 1] [i_3] [i_3 + 1] [i_3 + 1] [i_3]))))));
                                var_12 = ((/* implicit */unsigned int) ((((arr_2 [i_0] [i_1 + 1]) * (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1 + 1] [i_2] [i_0] [i_5])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -6984140535577088739LL))))))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                            {
                                arr_26 [i_3] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) -1LL))))));
                                var_13 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (4611123068473966592ULL))));
                            }
                            /* vectorizable */
                            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                            {
                                arr_29 [(_Bool)0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) (+(arr_8 [i_3] [i_3 - 1] [i_3] [i_3 - 1])));
                                arr_30 [i_0] [i_2] [i_3] [i_3] [13U] = ((/* implicit */unsigned char) arr_11 [i_0] [i_7 - 1] [i_2] [i_3 - 1] [i_3 + 1]);
                            }
                            arr_31 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_9))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((arr_34 [i_0] [i_0] [i_0]) == (((/* implicit */int) var_8)))))))) && (((/* implicit */_Bool) var_5)))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                        {
                            {
                                arr_44 [i_8] [i_8] [i_8] = ((((/* implicit */unsigned long long int) (~(((long long int) 19ULL))))) > (max((((((/* implicit */_Bool) (signed char)-8)) ? (arr_2 [i_1] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */unsigned long long int) max((arr_17 [i_0] [i_1] [i_8] [i_1 + 1]), ((_Bool)0)))))));
                                var_15 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(unsigned char)2])) ? (((/* implicit */int) arr_41 [i_8] [i_9] [i_8] [(short)6] [i_1] [0LL])) : (((/* implicit */int) arr_14 [i_0] [(unsigned short)4] [6LL] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((-55826933) != (arr_1 [i_0])))) : (min((((/* implicit */int) (unsigned short)11)), (arr_0 [i_0]))))) * (2147483618)));
                                arr_45 [i_0] = ((((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned char)182)))), (((/* implicit */int) max((arr_41 [i_0] [i_1 - 1] [i_1] [i_8] [i_9] [i_10]), (((/* implicit */unsigned short) var_1)))))))) ? (((((/* implicit */_Bool) min((arr_42 [i_0] [i_0] [i_1] [i_8] [i_0] [i_1]), (arr_42 [(unsigned char)10] [i_1 - 1] [i_8] [i_8] [i_10] [i_8])))) ? ((+(((/* implicit */int) (unsigned char)5)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_24 [i_9])) : (((/* implicit */int) arr_28 [i_0] [i_1 - 2] [i_8] [i_9] [(signed char)5])))))) : (var_3));
                            }
                        } 
                    } 
                    arr_46 [i_8] [i_1] = arr_19 [i_1 + 1] [i_1] [(_Bool)1] [i_1 - 2] [i_1] [i_1 - 2] [14LL];
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        arr_50 [i_0] [i_1 - 1] [i_1] [1U] [(signed char)11] [i_11] |= ((/* implicit */unsigned int) arr_48 [i_1] [20U] [20U]);
                        arr_51 [i_0] [i_0] [i_0] [i_0] [15ULL] = ((/* implicit */unsigned short) arr_25 [i_11] [i_11] [i_11] [i_8] [i_1] [i_0] [(signed char)9]);
                    }
                }
                for (int i_12 = 4; i_12 < 19; i_12 += 4) 
                {
                    arr_55 [(signed char)12] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_12] [i_12] [(_Bool)1] [i_0])) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_0))))) >= (((long long int) arr_34 [i_0] [(unsigned short)2] [i_12 - 2]))))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_42 [i_12] [i_1] [i_1] [i_0] [i_0] [9])), (arr_9 [i_0] [i_1] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        for (signed char i_14 = 0; i_14 < 22; i_14 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((_Bool) 3434097911951812406ULL)))));
                                var_17 -= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)59512))));
                            }
                        } 
                    } 
                    var_18 = (((~(((int) arr_54 [i_0] [i_0] [i_0] [i_0])))) | (((/* implicit */int) ((_Bool) arr_12 [i_0] [i_1] [i_12] [i_12] [i_12 + 1]))));
                }
            }
        } 
    } 
}
