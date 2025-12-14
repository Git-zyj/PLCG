/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161113
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((long long int) ((unsigned char) ((var_1) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)137))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) arr_3 [i_0])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)1391))))) : (arr_1 [i_0] [i_0]))) & (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0] [(unsigned short)19]) : (arr_1 [(unsigned char)14] [i_0])))));
        var_13 *= ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) arr_2 [i_0])))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))) != (((((/* implicit */_Bool) 116159733)) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) (signed char)72)))) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) + (arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [16ULL] [i_1] [16])) || (((/* implicit */_Bool) arr_4 [(_Bool)1] [i_1 + 2] [i_2 + 1])))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_1 + 2])) ? (((/* implicit */int) arr_0 [i_2 + 1] [i_1 + 1])) : (((/* implicit */int) arr_0 [i_2 - 1] [i_1 - 1]))));
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)231)) ? (2147483647) : (((/* implicit */int) (signed char)72)))))));
                        arr_14 [i_0] [i_1] [i_2 - 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2 + 1] [i_2])) ? (arr_4 [i_0] [i_2 + 1] [i_0]) : (arr_4 [i_0] [i_2 - 1] [i_2 - 1])));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_11 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_3] [i_1])) > (arr_3 [i_0])));
                        var_17 &= ((/* implicit */signed char) (((((_Bool)1) ? (arr_11 [i_0] [i_1 + 2] [14U] [16U] [(signed char)0]) : (((/* implicit */long long int) arr_4 [i_2] [i_0] [i_0])))) << (((((arr_12 [i_2 + 1] [i_2 + 1] [i_1]) + (1706171936581777101LL))) - (19LL)))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_2 + 1])) ? (((/* implicit */int) arr_13 [i_2 + 1])) : (((/* implicit */int) arr_13 [i_2 - 1]))));
                            var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_2 - 1] [(unsigned char)12])) ? (arr_1 [i_2 + 1] [i_2 - 1]) : (arr_1 [i_2 - 1] [i_2 - 1])));
                            var_20 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))));
                            var_21 = arr_8 [i_0];
                        }
                        for (int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned int) ((_Bool) (-2147483647 - 1)));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_17 [i_2 - 1] [i_2 + 1] [i_1 + 1] [i_1] [i_1 + 1])) >= (496623199268096246ULL)));
                        }
                        /* LoopSeq 3 */
                        for (int i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
                        {
                            var_24 += ((/* implicit */unsigned short) ((_Bool) arr_12 [i_2 - 1] [i_2 + 1] [i_1 + 2]));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_23 [1ULL] [i_0] [i_7] [i_7] [i_7] [1ULL])) * (((/* implicit */int) arr_20 [i_7] [i_0] [i_4] [i_4] [i_2 - 1] [i_1] [i_0]))));
                        }
                        for (int i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
                        {
                            arr_30 [i_0] [i_1] = (~(arr_17 [(signed char)5] [i_1 + 1] [i_2 + 1] [i_0] [i_8]));
                            arr_31 [i_0] [(unsigned short)16] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) arr_1 [i_2 + 1] [i_1 - 1]));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                            var_27 = ((/* implicit */int) min((var_27), (((((/* implicit */_Bool) arr_17 [i_2 + 1] [i_2 + 1] [(short)9] [i_1 + 1] [(signed char)1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 50311534U))))) : (((/* implicit */int) arr_21 [i_1 + 2] [0ULL] [i_2 - 1] [7ULL] [i_2 + 1]))))));
                        }
                        var_28 *= ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) (_Bool)1)))));
                        arr_34 [(short)4] [i_1 - 1] [i_2] &= ((/* implicit */long long int) arr_6 [(signed char)18] [(unsigned short)2] [i_2]);
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_0] [i_1 + 2] [i_2] [i_10] [i_2 + 1])) ? (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_18 [i_0] [i_1 + 1])))))) : (((int) min((((/* implicit */unsigned char) (signed char)-73)), (arr_23 [i_0] [(_Bool)0] [i_0] [i_10] [i_0] [i_1]))))));
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))), (((((/* implicit */_Bool) arr_23 [i_0] [1] [i_2] [i_0] [i_1 + 2] [i_0])) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_33 [i_1 + 1] [i_1] [(signed char)6] [i_1 + 1] [i_2 - 1])))))))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        arr_39 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)83)) | (((/* implicit */int) arr_22 [i_11] [i_2 - 1] [i_1] [i_2] [i_1] [i_0] [i_0]))));
                        arr_40 [i_1] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((arr_13 [i_0]), (((/* implicit */short) arr_29 [i_0] [(signed char)11] [i_2] [i_11] [(_Bool)1] [i_1] [i_2 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9068607369998692277LL)))))) : (arr_16 [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((int) arr_27 [(_Bool)1] [i_1] [i_1] [i_1] [i_1 - 1] [i_2 + 1] [(short)5])))));
                    }
                    arr_41 [i_1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_23 [i_2 + 1] [i_1 - 1] [i_2 + 1] [i_2 - 1] [i_1 - 1] [i_0]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) arr_11 [i_0] [i_2 - 1] [i_0] [i_12 + 1] [(unsigned char)16])) | (arr_8 [i_12]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_36 [i_12 + 1] [(_Bool)1] [(_Bool)1] [i_0]), (((/* implicit */unsigned short) arr_9 [i_12] [i_0] [i_0]))))))))))))));
                        var_32 = ((/* implicit */int) max(((+(11611676993081367472ULL))), (((/* implicit */unsigned long long int) arr_21 [i_1 - 1] [i_1 + 2] [i_2 - 1] [i_2 + 1] [i_1 + 2]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 0; i_13 < 20; i_13 += 3) 
                        {
                            arr_46 [14] [i_1 + 1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */long long int) -1407435669)) : (-1545445496156059634LL)));
                            var_33 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_36 [i_0] [i_12 + 1] [(signed char)6] [i_1 + 2])) ? (((/* implicit */int) arr_36 [i_0] [i_12 + 1] [(unsigned short)4] [i_1 - 1])) : (((/* implicit */int) arr_36 [i_0] [i_12 + 1] [(unsigned short)8] [i_1 - 1]))))));
                            var_34 = ((/* implicit */int) arr_19 [i_1] [i_2]);
                        }
                        var_35 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_0] [(unsigned short)0])) ? (((/* implicit */int) arr_37 [i_0] [i_1 - 1] [i_2 + 1] [i_12 + 1] [i_1 + 1] [i_12 + 1])) : (((/* implicit */int) (unsigned char)63))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_2] [i_12] [i_12] [i_12] [(unsigned short)16])) || (((/* implicit */_Bool) arr_2 [i_0]))))), (max((((/* implicit */unsigned short) arr_20 [i_12] [i_2] [i_2] [i_0] [i_2] [i_0] [i_0])), (arr_26 [12] [i_0] [i_0] [(unsigned short)10] [i_0] [i_0] [(signed char)10])))))) : (((/* implicit */int) (!((_Bool)1))))));
                    }
                }
            } 
        } 
    }
    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)29075))))))) ? (((/* implicit */unsigned int) -2147483643)) : ((((_Bool)0) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)6))))) : (50311534U)))));
    var_37 = ((/* implicit */long long int) var_7);
    var_38 = ((/* implicit */unsigned char) var_7);
}
