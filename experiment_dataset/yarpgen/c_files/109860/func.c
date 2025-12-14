/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109860
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)32767))));
                    arr_8 [i_2 + 3] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? ((((!(arr_0 [i_0]))) ? (max((((/* implicit */unsigned long long int) (unsigned short)45202)), (arr_7 [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-123)) * (((/* implicit */int) arr_0 [i_2]))))))) : (((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned long long int) arr_4 [i_0])), (arr_7 [i_2]))) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_10 [i_3]))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3] [i_3])))))));
        var_18 = ((/* implicit */unsigned long long int) arr_9 [i_3] [i_3]);
        /* LoopSeq 2 */
        for (long long int i_4 = 2; i_4 < 24; i_4 += 4) 
        {
            var_19 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)13)) | (((/* implicit */int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (((/* implicit */int) (signed char)-18))))) && (((/* implicit */_Bool) arr_14 [i_3])))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_5 = 1; i_5 < 22; i_5 += 3) 
            {
                arr_18 [i_3] [17U] [i_3] = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) var_6))));
                arr_19 [i_3] [17U] [17U] [i_3] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_17 [i_5 - 1])) : (((/* implicit */int) arr_17 [i_3]))));
                arr_20 [(unsigned char)3] [(unsigned char)3] [5ULL] = ((/* implicit */signed char) (unsigned char)3);
            }
            /* vectorizable */
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_3] [i_4 + 1] [i_4] [i_6])) ? (2123376833U) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_22 [i_4] [i_6])) + (2147483647))) >> (((((/* implicit */int) arr_17 [i_4])) - (182)))))))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_6] [i_6] [i_6] [i_3]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_4 + 1] [i_3] [i_3]))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_22 -= ((/* implicit */unsigned char) var_12);
                arr_26 [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_16 [i_3] [i_3] [(unsigned char)7]))));
                arr_27 [i_7] [i_4] [i_3] [i_3] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65516)) != (((/* implicit */int) (signed char)-11)))))) : (((((/* implicit */_Bool) var_4)) ? (arr_24 [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207))))))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_23 [i_4 - 1] [i_4 - 1] [i_3]) + (2147483647))) >> (((arr_23 [i_3] [i_4] [i_7]) + (1243718712)))))) && (max((((_Bool) arr_22 [i_4] [i_4])), ((!(((/* implicit */_Bool) var_11))))))));
            }
        }
        for (unsigned char i_8 = 2; i_8 < 24; i_8 += 2) 
        {
            arr_30 [i_3] = ((/* implicit */_Bool) (signed char)-1);
            arr_31 [i_8] = ((/* implicit */unsigned char) (-(arr_23 [(_Bool)1] [(unsigned short)5] [(unsigned short)5])));
        }
        arr_32 [i_3] [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_13 [i_3] [i_3] [i_3]) : (arr_13 [i_3] [i_3] [i_3])))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)252)) - (((/* implicit */int) (_Bool)1))));
        var_25 = ((/* implicit */unsigned short) arr_12 [i_9] [i_9] [i_9]);
        arr_35 [i_9] [i_9] = (+(((((/* implicit */_Bool) arr_12 [i_9] [(unsigned short)23] [i_9])) ? (min((((/* implicit */unsigned int) arr_21 [(short)2] [i_9] [i_9] [i_9])), (arr_14 [i_9]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) arr_34 [i_9] [i_9])) : (((/* implicit */int) arr_9 [(short)8] [i_9]))))))));
        /* LoopSeq 2 */
        for (signed char i_10 = 0; i_10 < 25; i_10 += 2) 
        {
            arr_39 [i_9] [i_9] = ((/* implicit */_Bool) arr_38 [13LL] [i_9]);
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_9])) > (((/* implicit */int) arr_17 [i_9]))))), (((((/* implicit */_Bool) arr_13 [i_9] [i_9] [(signed char)21])) ? (arr_13 [i_9] [i_9] [i_10]) : (((/* implicit */unsigned long long int) var_10)))))))));
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_17 [i_9])) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (unsigned char)13)))), (((/* implicit */int) min((var_8), (((/* implicit */signed char) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [(_Bool)1] [i_10]))) : (min((arr_24 [i_9] [i_9] [i_10]), (arr_24 [i_9] [i_10] [i_10])))));
            arr_40 [i_9] [i_10] = ((/* implicit */unsigned long long int) var_3);
            arr_41 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7831))))) ^ (((int) arr_15 [i_9]))));
        }
        for (long long int i_11 = 1; i_11 < 22; i_11 += 4) 
        {
            var_28 = var_14;
            /* LoopSeq 4 */
            for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                arr_49 [i_9] [i_9] = ((/* implicit */_Bool) ((unsigned long long int) ((arr_16 [i_9] [(signed char)15] [12U]) ? (((/* implicit */int) arr_16 [i_9] [i_11 + 2] [i_11 + 2])) : (((/* implicit */int) (unsigned char)3)))));
                var_29 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_14 [i_11 + 2])) ? (((/* implicit */unsigned long long int) arr_14 [i_11 + 1])) : (var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)66)) ? (arr_14 [i_11 - 1]) : (arr_14 [i_11 - 1]))))));
                arr_50 [i_9] = ((/* implicit */short) (_Bool)1);
            }
            for (short i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 25; i_14 += 2) 
                {
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_36 [(_Bool)1] [i_9] [i_9])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_34 [i_9] [i_9]), (var_0))))) - (((unsigned long long int) arr_57 [(unsigned char)14] [(unsigned char)14] [(unsigned char)14] [i_9] [(unsigned char)14] [(signed char)24]))))));
                            var_31 *= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (~(arr_24 [i_9] [i_9] [i_9]))))) < ((-(((((/* implicit */_Bool) (unsigned short)65516)) ? (((/* implicit */int) arr_52 [i_13] [i_13])) : (((/* implicit */int) (signed char)76))))))));
                            arr_62 [i_9] = ((/* implicit */short) (-(max((((/* implicit */int) arr_9 [i_11 + 2] [16ULL])), ((+(((/* implicit */int) (_Bool)1))))))));
                            arr_63 [i_15] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned char) arr_56 [i_15] [i_15] [i_15 + 1] [i_15 + 1] [i_9] [i_15 + 1])), (arr_59 [i_15] [i_15] [i_15 + 1] [i_15 + 1] [i_15] [i_15 + 1] [i_9]))))));
                        }
                    } 
                } 
                var_32 = arr_9 [i_11 + 2] [i_11];
            }
            /* vectorizable */
            for (unsigned int i_16 = 0; i_16 < 25; i_16 += 3) 
            {
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_9] [i_9])) ? (((/* implicit */int) arr_16 [i_11] [i_11] [i_11 + 3])) : ((((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_42 [i_9]))))));
                /* LoopSeq 1 */
                for (short i_17 = 0; i_17 < 25; i_17 += 3) 
                {
                    var_34 = ((/* implicit */short) arr_17 [i_11 - 1]);
                    var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_9] [i_16] [i_11 + 3] [i_9]))));
                    var_36 = ((/* implicit */short) arr_13 [i_11 + 2] [i_11 + 2] [i_11 + 2]);
                    var_37 = ((/* implicit */short) ((arr_37 [i_9] [i_11] [i_11]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    arr_68 [i_9] [i_11] [i_11] [i_16] [i_9] [(short)12] = ((/* implicit */_Bool) (-(arr_37 [i_9] [i_11] [i_11 + 2])));
                }
                arr_69 [i_9] [(_Bool)1] [i_9] [i_9] = ((/* implicit */_Bool) var_9);
            }
            for (signed char i_18 = 2; i_18 < 22; i_18 += 3) 
            {
                var_38 |= ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (arr_37 [(unsigned short)24] [i_11] [i_18]))));
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 25; i_19 += 3) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)-9905)) : (((/* implicit */int) (unsigned short)44787)))))));
                            arr_77 [i_19] [i_9] = (!(((/* implicit */_Bool) arr_70 [i_18 + 2] [i_19] [i_19] [i_9])));
                        }
                    } 
                } 
                arr_78 [i_9] [(unsigned short)24] [i_18] = ((/* implicit */unsigned long long int) var_3);
            }
            arr_79 [i_9] = ((/* implicit */long long int) var_9);
        }
    }
    var_40 = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
    var_41 &= ((/* implicit */unsigned char) ((((var_12) % (((/* implicit */unsigned long long int) var_1)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_2))))))));
    /* LoopNest 3 */
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        for (signed char i_22 = 0; i_22 < 23; i_22 += 3) 
        {
            for (long long int i_23 = 4; i_23 < 20; i_23 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_24 = 1; i_24 < 21; i_24 += 2) 
                    {
                        arr_92 [i_21] [i_21] [i_23] [i_21] = ((/* implicit */unsigned char) var_8);
                        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) (!((_Bool)0)))), (((((/* implicit */int) var_7)) & (((/* implicit */int) arr_0 [i_21]))))))))))));
                        arr_93 [i_21] [i_21] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_5 [i_23 + 3] [i_24 - 1] [i_24 - 1]))) ? (min((((/* implicit */unsigned int) ((unsigned char) arr_61 [i_21] [i_22] [i_22] [0LL] [i_22]))), (arr_85 [i_24] [i_24] [i_21] [i_24 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_17 [i_23 + 1]), (arr_17 [i_23 - 4])))))));
                        var_43 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_10 [i_22]))) / (((/* implicit */int) var_16))))) / (arr_53 [i_22] [i_23] [i_23 - 3])));
                        var_44 = ((/* implicit */unsigned int) arr_47 [i_21] [i_21] [i_21] [i_21]);
                    }
                    var_45 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14993)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_21] [i_23 + 1] [i_23 + 2]))) : (arr_38 [i_21] [i_21]))))));
                }
            } 
        } 
    } 
}
