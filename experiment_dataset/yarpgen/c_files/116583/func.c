/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116583
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) arr_0 [i_0] [i_0]);
        arr_4 [i_0] &= ((/* implicit */unsigned int) ((arr_0 [(_Bool)1] [(signed char)8]) << (((((/* implicit */int) var_2)) - (56)))));
        arr_5 [i_0] = max((((((/* implicit */int) var_5)) | (((/* implicit */int) (signed char)95)))), (((/* implicit */int) ((signed char) arr_1 [i_0] [i_0]))));
    }
    var_11 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */signed char) ((var_4) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) % (var_3)))) ? (min((arr_6 [i_1]), (((/* implicit */long long int) var_3)))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-88))) / (arr_6 [i_1])))));
        arr_9 [i_1] [i_1] = ((/* implicit */int) ((((((var_0) ? (((/* implicit */long long int) var_6)) : (arr_6 [i_1]))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-27885)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)862))) : (var_3)))))) ? (((((/* implicit */_Bool) min((arr_0 [i_1] [i_1]), (((/* implicit */long long int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-863))) : (var_6))) : (min((max((1482057080U), (((/* implicit */unsigned int) var_10)))), (((unsigned int) var_8))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 1) 
        {
            for (short i_3 = 1; i_3 < 9; i_3 += 3) 
            {
                {
                    arr_15 [i_2] = ((/* implicit */_Bool) var_4);
                    arr_16 [i_1] [i_2 - 3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))))) ? (((max((((/* implicit */unsigned int) var_2)), (var_6))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) max((arr_1 [i_1] [i_2 + 1]), (((/* implicit */int) var_7)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_4 = 1; i_4 < 9; i_4 += 2) 
                    {
                        arr_20 [i_2] [(short)6] [i_3] [i_4 + 1] = ((/* implicit */short) ((signed char) var_9));
                        arr_21 [i_1] [i_4] = ((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) (short)-862)))) : (((/* implicit */int) (signed char)-47)));
                        arr_22 [(short)4] [(short)4] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2 - 2] [i_2 + 2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))));
                    }
                    for (short i_5 = 3; i_5 < 9; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            arr_30 [i_1] [i_2] [i_2] [i_6] = arr_14 [i_1] [i_1] [i_6];
                            arr_31 [i_1] [i_1] [i_1] [4U] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_9)), (arr_25 [5U] [5U] [i_3 + 1] [i_5] [5U] [5U]))), (((((/* implicit */_Bool) arr_1 [i_2] [i_5 - 1])) ? (arr_29 [i_2] [i_2] [i_2] [i_5 - 3] [6ULL] [i_2]) : (var_3)))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) arr_13 [i_1] [i_1] [i_1])) + (((/* implicit */int) arr_26 [i_1] [i_1]))))));
                            arr_32 [i_1] [2LL] [2LL] [i_1] [i_1] = var_3;
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_35 [i_7] = ((/* implicit */short) arr_12 [i_3 + 1] [i_5 - 3] [i_3 + 1]);
                            arr_36 [i_3] [i_3] [i_3] [i_7] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) arr_13 [i_3] [i_3 - 1] [i_3]))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)862)))));
                            arr_37 [i_1] = ((/* implicit */unsigned int) arr_28 [i_1] [i_1] [i_1] [0LL]);
                        }
                        arr_38 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(1011360772878084599ULL)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_11 [i_3 + 1])) : (((/* implicit */int) (short)-862)))) : (((/* implicit */int) min((arr_11 [i_1]), (((/* implicit */short) var_0)))))));
                        arr_39 [i_1] [i_2] [i_3 - 1] [(short)4] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_3])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (4966170480214498685LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_5 - 2] [i_5 - 1] [i_5] [i_5] [i_5 - 2] [i_5]))))))));
                        arr_40 [i_5 + 1] = ((/* implicit */signed char) min((var_4), (min((((var_7) ? (arr_25 [8LL] [i_2] [(signed char)6] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned int) arr_1 [i_2] [i_3])))), (((/* implicit */unsigned int) ((1483368678) >> (((((/* implicit */int) (short)861)) - (844))))))))));
                        arr_41 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_10 [(short)6] [i_1]), (((/* implicit */short) arr_27 [i_1] [i_1] [i_2 + 2] [i_3 + 1] [i_5 - 2] [i_5]))))) ? (arr_29 [i_1] [i_2] [i_2] [(signed char)3] [i_5] [i_5]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) arr_34 [i_1] [i_1] [i_1] [i_1] [(_Bool)1] [i_3] [6U])))))))));
                    }
                    for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        arr_44 [i_8] [i_2] [(short)2] = (~(min((min((8425373947507050552LL), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (signed char)-96)))));
                        /* LoopSeq 2 */
                        for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            arr_48 [i_1] [i_1] [i_3] [i_8] [i_9] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_26 [i_2 - 2] [i_3 - 1])) ? (arr_6 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_7)), (var_5))))))), (((/* implicit */long long int) var_3))));
                            arr_49 [i_1] [i_2] [0U] [i_1] = ((/* implicit */short) max(((+(((/* implicit */int) (short)861)))), (((arr_45 [i_1] [i_2 + 1]) ? (((/* implicit */int) arr_45 [(short)7] [i_2 - 1])) : (((/* implicit */int) arr_46 [i_1] [i_3] [i_3 + 1] [i_3 + 1] [(signed char)6]))))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            arr_52 [i_8] [i_2] [i_3 + 1] [i_8] [i_2] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_1] [i_1] [i_1] [i_2 + 1] [i_3 - 1] [i_1] [i_10])) || (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) max((((/* implicit */short) var_8)), (var_5))))))) ? (((/* implicit */long long int) ((arr_43 [i_1] [i_3 - 1] [i_3 - 1] [i_10] [i_10] [i_10]) >> (((/* implicit */int) var_7))))) : (max((((/* implicit */long long int) (-(((/* implicit */int) (short)4315))))), (((((/* implicit */_Bool) var_6)) ? (arr_6 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
                            arr_53 [i_8] [i_8] [i_3] [i_8] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_8] [i_8]), (((/* implicit */short) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))) : (var_3)))) ? (((((/* implicit */int) arr_47 [i_1] [i_2 - 2] [i_10] [i_2 - 2] [i_10])) / (((/* implicit */int) (short)30159)))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3] [i_8])) || (((/* implicit */_Bool) arr_51 [i_1] [i_1] [i_1] [i_2 - 1] [i_3 + 1] [(signed char)2] [9ULL]))))))));
                            arr_54 [i_1] [i_2] [i_8] [i_8] [i_3] [i_8] = ((/* implicit */signed char) var_3);
                            arr_55 [i_8] [i_2] [i_3] = -1153085189;
                            arr_56 [i_1] [i_8] [i_1] &= (!(((/* implicit */_Bool) max((((/* implicit */int) var_10)), ((~(((/* implicit */int) var_1))))))));
                        }
                        arr_57 [i_1] [i_1] [i_3] [2ULL] [i_8] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (max((8425373947507050552LL), (((/* implicit */long long int) (short)-862)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_6)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max((((/* implicit */signed char) var_1)), ((signed char)-1)))))))));
                    }
                    arr_58 [i_2] = ((/* implicit */_Bool) var_5);
                    /* LoopSeq 2 */
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        arr_62 [i_1] [i_11] = ((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) var_9))))), (-8425373947507050544LL)));
                        arr_63 [i_2] [i_2 + 1] [i_3 + 1] [i_3 + 1] = ((/* implicit */short) (+(((/* implicit */int) ((signed char) arr_7 [i_1] [i_3 - 1])))));
                    }
                    for (unsigned long long int i_12 = 2; i_12 < 9; i_12 += 2) 
                    {
                        arr_66 [i_1] [i_1] [i_3 + 1] [i_1] = ((/* implicit */short) max((((/* implicit */int) ((short) arr_50 [i_2 + 1] [i_2 - 2] [i_2 - 2] [(_Bool)1] [(_Bool)1] [i_2 + 2]))), (((((/* implicit */int) var_0)) + (((/* implicit */int) var_10))))));
                        arr_67 [i_1] [i_1] [i_1] = ((/* implicit */signed char) -1554203008200187273LL);
                    }
                }
            } 
        } 
    }
    var_12 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_3)) : (((unsigned long long int) max((1554203008200187273LL), (((/* implicit */long long int) var_9)))))));
    var_13 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) (!(var_0)))))))));
}
