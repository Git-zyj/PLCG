/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181064
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_11)) - (80)))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))));
    var_14 = ((/* implicit */int) max((((/* implicit */unsigned int) var_5)), (1842556907U)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) ((((((/* implicit */int) ((short) arr_1 [i_0]))) ^ (((/* implicit */int) var_10)))) >= ((-(((/* implicit */int) (_Bool)0))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
            /* LoopSeq 1 */
            for (short i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    var_17 += max((((/* implicit */int) ((short) max((((/* implicit */unsigned int) arr_4 [i_0] [(unsigned char)4] [i_0])), (var_3))))), (((((/* implicit */_Bool) ((int) var_11))) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) (signed char)10)))))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        var_18 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)156)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 935769944U))))) ? ((+(3016775930U))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-14), (arr_2 [i_1])))))))));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (3016775930U)))) ^ (min((((/* implicit */unsigned long long int) (unsigned char)2)), (arr_5 [i_3] [i_1] [2ULL] [i_1]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-29227))))))))));
                        arr_11 [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_1] [i_3] [i_2 - 1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) var_9))))))));
                        arr_12 [i_0] [i_0] [3LL] [i_3] [i_1] [i_1] = 3359197352U;
                        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_3])) >> (((/* implicit */int) var_0))));
                    }
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) (unsigned char)9);
                        var_22 += ((/* implicit */unsigned long long int) var_3);
                    }
                    var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (min((arr_14 [i_0]), (arr_14 [i_0])))));
                }
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    var_24 = ((/* implicit */unsigned long long int) var_5);
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((arr_16 [i_1] [i_1] [i_1] [(short)2] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_6] [i_6] [i_2 + 1])) && (((/* implicit */_Bool) (~(3096647305U))))))) : (((/* implicit */int) var_9)))))));
                    var_26 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16988600021420205113ULL)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (_Bool)1))))));
                }
                for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_25 [i_1] [i_1] [(short)4] [i_0] [(short)4] [i_1] [i_1] = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_2] [i_2 + 1] [i_7] [i_8])) : (((/* implicit */int) arr_9 [(_Bool)1] [i_1] [(short)6] [i_1] [i_0])))), (((/* implicit */int) arr_7 [(signed char)9] [i_1] [(signed char)9])))), (((/* implicit */int) (!(((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_11)))))))));
                        arr_26 [i_0] [i_0] [i_1] [i_2 - 1] [i_0] [i_8] |= ((/* implicit */short) max((((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7] [i_7] [i_7]))) | (2514507393U))) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), ((signed char)10)));
                        var_27 |= ((/* implicit */short) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) arr_22 [i_7])))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_28 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1231178134U)) ? ((-(((/* implicit */int) arr_10 [i_0] [i_7] [i_2 - 1] [i_1] [i_0] [i_0])))) : ((+(((/* implicit */int) var_10)))))))));
                        arr_30 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)9))))) : (arr_20 [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */int) (!(var_10)))) >> ((((+(var_4))) - (5951030081653220568ULL))))))));
                    }
                    for (unsigned int i_10 = 1; i_10 < 10; i_10 += 2) 
                    {
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-13485)) : (((/* implicit */int) var_8))))))) ? ((+(((/* implicit */int) var_7)))) : ((-(((/* implicit */int) var_9)))))))));
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) arr_22 [i_0]))));
                        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((long long int) (+(arr_17 [i_0])))))));
                        var_32 |= ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (arr_5 [i_0] [i_7] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_10]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-111)))))))) ? (((/* implicit */int) ((arr_4 [i_2 + 1] [i_2 - 1] [i_7]) || (arr_4 [i_2 + 1] [i_2 - 1] [i_7])))) : (((((/* implicit */_Bool) arr_31 [i_1] [i_2 - 1] [i_2 - 1] [i_7] [i_7] [i_10 + 2])) ? (((/* implicit */int) arr_4 [i_1] [i_2 + 1] [i_7])) : (((/* implicit */int) var_8)))));
                    }
                    arr_33 [i_1] [i_1] = ((/* implicit */int) arr_13 [i_1]);
                    /* LoopSeq 3 */
                    for (short i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (arr_5 [i_7] [i_7] [i_7] [i_7])))))))));
                        var_34 = ((/* implicit */unsigned char) max((var_34), (var_9)));
                    }
                    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        arr_39 [i_1] [i_1] [i_1] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_18 [i_2 - 1] [i_0] [i_0]), (arr_18 [i_2 - 1] [i_1] [i_1])))) != (arr_19 [i_2 - 1] [i_1] [i_1] [i_0])));
                        var_35 ^= ((/* implicit */_Bool) max((arr_7 [i_12] [i_1] [i_2 - 1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_12] [i_12] [i_2 - 1])))))));
                    }
                    for (int i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) min(((((-(var_3))) / (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), (arr_7 [i_7] [i_7] [i_7]))))))), (((/* implicit */unsigned int) (((+(arr_8 [i_0] [(short)6]))) <= (((/* implicit */int) ((arr_5 [i_7] [i_7] [i_7] [i_7]) <= (((/* implicit */unsigned long long int) 1248964831U)))))))))))));
                        var_37 = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_9 [i_0] [i_1] [i_2 + 1] [(short)10] [(short)10]) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_41 [i_0] [i_1] [i_2 + 1] [i_1] [8U]))))))));
                    }
                    var_38 = ((/* implicit */unsigned int) arr_40 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1]);
                    var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) : (arr_5 [i_0] [i_1] [6LL] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_7] [i_7] [i_0] [i_2 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0])), (arr_36 [i_0]))))))))));
                }
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 935769944U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))))))) ? ((-(((((/* implicit */_Bool) -1245845802)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))))) : (((((/* implicit */int) var_11)) | (((/* implicit */int) (!(var_0)))))))))));
                    var_41 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66))))))));
                    var_42 += ((/* implicit */unsigned char) ((var_4) ^ (min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2]))) : (3432614979440471990ULL)))))));
                    var_43 |= ((/* implicit */short) ((((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0])) == (((/* implicit */int) (_Bool)0)))) || (((/* implicit */_Bool) -1245845787))));
                }
                var_44 += ((/* implicit */short) (+(((((/* implicit */_Bool) (short)0)) ? (((((/* implicit */int) arr_23 [i_2 + 1] [i_1] [i_2 + 1] [(unsigned short)2])) / (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2 + 1])))) : ((+(((/* implicit */int) (short)26323))))))));
            }
            var_45 = ((/* implicit */short) (-(((/* implicit */int) (short)29221))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_46 = (-(((/* implicit */int) (unsigned char)226)));
            arr_50 [i_0] [i_15] = (-(var_12));
            var_47 -= ((/* implicit */signed char) ((((/* implicit */int) arr_40 [i_0] [i_0] [4ULL] [4] [i_0])) ^ (((((/* implicit */int) var_11)) | (-1260522063)))));
        }
        /* LoopNest 3 */
        for (long long int i_16 = 0; i_16 < 12; i_16 += 2) 
        {
            for (unsigned long long int i_17 = 1; i_17 < 10; i_17 += 4) 
            {
                for (long long int i_18 = 2; i_18 < 11; i_18 += 4) 
                {
                    {
                        var_48 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)31407)) * (((/* implicit */int) (signed char)0)))) >> ((((+((~(((/* implicit */int) (short)-32766)))))) - (32747)))));
                        var_49 -= ((/* implicit */short) var_12);
                    }
                } 
            } 
        } 
    }
}
