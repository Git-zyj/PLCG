/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178697
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((unsigned int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (unsigned char)246);
        arr_5 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((min((arr_8 [i_0] [i_0 - 1] [i_2 - 3]), (arr_8 [i_1] [i_0 - 1] [i_2 + 1]))) - (max((arr_8 [6U] [i_0 - 1] [i_2 - 2]), (arr_8 [i_0] [i_0 - 1] [i_2 - 4])))));
                    arr_12 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_3 [i_2 - 2])) ? (((long long int) var_10)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)9)))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((0), (((/* implicit */int) var_5))))))))));
                    arr_13 [11U] [11U] [i_0] [11U] = ((/* implicit */signed char) var_5);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_3 = 2; i_3 < 11; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_6 = 1; i_6 < 11; i_6 += 1) 
                        {
                            var_14 -= ((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */unsigned short) (short)-26284)), (max((arr_3 [i_0]), (((/* implicit */unsigned short) var_2)))))))));
                            arr_23 [i_0] [11U] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)240)) ? ((-(((/* implicit */int) var_12)))) : ((+(((/* implicit */int) arr_21 [i_0] [i_0])))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_15 = ((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) ((unsigned char) (unsigned char)7))))));
                            arr_27 [i_0 + 1] [i_3 - 1] [i_0] [i_5] = ((/* implicit */int) arr_1 [i_0]);
                            var_16 *= ((/* implicit */unsigned long long int) ((unsigned char) ((long long int) max((arr_10 [i_5] [i_3] [8] [i_5]), (arr_10 [i_0 - 1] [i_3 + 1] [(unsigned char)0] [i_0 - 1])))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            var_17 = ((/* implicit */long long int) arr_26 [i_0] [i_0] [i_0] [i_0] [(unsigned char)6]);
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_4 - 1] [i_4 - 1] [2U] [(signed char)8])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_4])))), (((/* implicit */int) arr_14 [i_4 - 2] [i_3 - 1]))))), (((((/* implicit */_Bool) ((unsigned int) (short)0))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_2 [i_0] [i_3 - 2])), (var_11))))) : (var_1))))))));
                            var_19 = ((/* implicit */unsigned char) arr_19 [i_0] [(_Bool)1]);
                        }
                    }
                } 
            } 
            var_20 = ((/* implicit */int) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [i_0] [i_3 + 1] [i_3 + 1]))))) ? (arr_31 [i_0] [i_0 + 1] [i_0 + 1] [5LL] [i_0 + 1] [i_0 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3 - 2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (2015734350) : (((/* implicit */int) (signed char)9)))))));
        }
        for (unsigned char i_9 = 2; i_9 < 11; i_9 += 1) 
        {
            arr_35 [6] [8LL] [i_0] = (~(arr_17 [i_0] [i_0] [i_0] [i_0 + 1]));
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (((~(0U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_0] [i_0] [i_0 + 1])) != (((/* implicit */int) (unsigned char)12)))))))))));
            arr_36 [i_0] [i_0] = ((/* implicit */unsigned short) max((((-9223372036854775792LL) / (((/* implicit */long long int) -2050324688)))), (((/* implicit */long long int) min((arr_3 [i_0 + 1]), (((/* implicit */unsigned short) arr_33 [i_0])))))));
        }
        var_22 = ((/* implicit */signed char) (+(((/* implicit */int) max(((unsigned char)131), ((unsigned char)181))))));
    }
    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
    {
        arr_40 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >= (((((/* implicit */int) ((signed char) arr_14 [i_10] [i_10]))) - ((-(((/* implicit */int) arr_29 [i_10] [i_10] [i_10] [i_10] [i_10]))))))));
        var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((signed char) arr_20 [i_10] [i_10] [i_10] [i_10] [i_10]))), (arr_22 [i_10] [1U] [i_10] [i_10] [i_10] [i_10])));
        var_24 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [0]))));
        var_25 *= ((/* implicit */_Bool) arr_24 [i_10] [i_10] [i_10] [(signed char)8] [i_10]);
    }
    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) 
    {
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_43 [i_11] [i_11]), (arr_43 [i_11] [i_11])))) ? (((/* implicit */unsigned long long int) arr_43 [i_11] [i_11])) : (((unsigned long long int) var_12))));
        /* LoopNest 2 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            for (signed char i_13 = 3; i_13 < 20; i_13 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)246)) & (((/* implicit */int) ((arr_45 [i_13 + 2]) < (((((/* implicit */_Bool) arr_45 [i_11])) ? (arr_46 [i_11] [i_12] [i_13 - 1] [(short)14]) : (((/* implicit */int) arr_41 [i_11]))))))))))));
                    var_28 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) 0ULL)))) ? (arr_43 [i_12 - 1] [i_12 - 1]) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) arr_44 [i_11])))))) | (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-11))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 14280510222830247151ULL)) || (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) arr_48 [i_11] [i_11] [i_11] [i_11]))))));
                }
            } 
        } 
        arr_50 [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_41 [i_11])), (arr_49 [i_11] [15ULL] [i_11] [i_11])))) - (((/* implicit */int) arr_41 [i_11]))));
        /* LoopNest 3 */
        for (int i_14 = 3; i_14 < 20; i_14 += 1) 
        {
            for (short i_15 = 0; i_15 < 22; i_15 += 1) 
            {
                for (unsigned char i_16 = 0; i_16 < 22; i_16 += 1) 
                {
                    {
                        arr_59 [i_11] [i_14] = min((((arr_47 [i_11]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_14 - 1]))))), (min((((/* implicit */unsigned int) arr_52 [i_11] [i_11])), (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_11]))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_63 [i_11] [i_11] [i_11] [i_11] [i_16] [i_11] [i_11] = (~(((/* implicit */int) max(((signed char)-1), (((/* implicit */signed char) (_Bool)1))))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_55 [i_11] [i_14] [i_14 - 1] [i_11]) >= (((((/* implicit */_Bool) arr_52 [i_11] [i_11])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_41 [i_11]))))))) | (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (signed char)19))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_11] [i_11]))) % (3011045593U)))))))));
                            var_30 = arr_49 [i_11] [9] [i_11] [i_11];
                        }
                        var_31 = ((/* implicit */unsigned char) arr_47 [1LL]);
                        arr_64 [i_11] [i_11] [18ULL] [i_16] [i_15] [i_11] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_51 [i_11] [i_11]))))) : (((2576761298U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_11] [i_16] [i_15] [i_16] [i_15] [i_11]))))))), (((/* implicit */unsigned int) max((arr_42 [i_11]), (((((/* implicit */_Bool) arr_55 [i_11] [i_14] [i_14 - 1] [i_11])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))))))));
                        arr_65 [(unsigned char)8] [(unsigned char)8] [i_11] [i_15] = ((/* implicit */short) ((unsigned char) (~(var_7))));
                    }
                } 
            } 
        } 
    }
}
