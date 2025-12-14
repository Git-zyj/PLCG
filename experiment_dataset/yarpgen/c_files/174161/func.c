/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174161
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
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_20 ^= ((/* implicit */signed char) ((short) ((arr_1 [i_1 + 1]) + (arr_1 [i_1 + 1]))));
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_6 [i_2] [i_1 - 2] [i_0]) + (arr_4 [i_0] [i_1] [i_1]))) * ((((_Bool)1) ? (((/* implicit */int) (signed char)-7)) : (var_17)))))) ? (min(((-(arr_7 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) arr_4 [i_1 - 2] [i_1 - 2] [i_1 - 1])))) : (((unsigned int) var_3))));
                }
                arr_10 [i_1] = ((/* implicit */signed char) (-(((min((arr_7 [12U] [i_1 + 1] [i_1 + 1]), (arr_1 [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-35)))))));
                var_21 = ((17U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)128))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
                {
                    var_22 = (+(((/* implicit */int) arr_12 [2U] [i_1] [2U] [i_1 - 1])));
                    var_23 ^= (-((-(((/* implicit */int) (_Bool)1)))));
                }
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (short i_5 = 1; i_5 < 10; i_5 += 2) 
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_4] [i_4] |= ((/* implicit */int) arr_17 [i_0] [i_0] [i_1]);
                        var_24 += ((/* implicit */unsigned int) ((int) (-(((((/* implicit */_Bool) (short)-14)) ? (var_1) : (((/* implicit */unsigned long long int) arr_13 [i_4])))))));
                    }
                    for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        arr_24 [(short)1] [i_1] [(short)1] [2] = (((_Bool)0) ? (-699947663) : (((/* implicit */int) (short)9034)));
                        arr_25 [i_1] [i_0] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1 - 3] [i_1]))));
                    }
                    for (unsigned int i_7 = 3; i_7 < 9; i_7 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned char) (((~(0))) == (((int) arr_17 [i_1 - 3] [i_1 - 3] [i_7 - 1]))));
                        arr_28 [i_1] [i_1] = ((/* implicit */int) ((((int) arr_20 [i_1] [i_7 - 1] [i_1])) >= (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [i_0])))))))));
                        arr_29 [i_0] [i_0] [(short)0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_1] [i_4]))))) * (0U)));
                        arr_30 [i_0] [9ULL] [i_4] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_17 [i_1 - 1] [i_7 + 4] [2]) ? (((/* implicit */int) arr_17 [i_1 + 1] [i_7 + 4] [i_7])) : (((/* implicit */int) var_13)))))));
                    }
                    for (signed char i_8 = 1; i_8 < 12; i_8 += 3) 
                    {
                        var_26 = ((/* implicit */short) arr_19 [i_0] [i_1 - 1] [i_8 - 1] [i_8] [i_0]);
                        arr_33 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)6)) || (((/* implicit */_Bool) 0U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1])))))) : (((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_0] [i_1])) ? (var_2) : (((/* implicit */unsigned long long int) arr_3 [0])))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) + (var_7))))));
                            arr_36 [i_4] [i_1] [i_8] [i_4] [i_1] [i_0] = ((/* implicit */int) arr_22 [i_1] [i_8 - 1] [i_8] [i_8 - 1]);
                            arr_37 [i_1] [i_1] [i_4] [i_4] [i_4] [i_4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_1] [i_9] [i_9])) ? (12991422100988051270ULL) : (((((/* implicit */_Bool) arr_20 [i_1] [i_8 + 1] [i_1])) ? (var_2) : (((/* implicit */unsigned long long int) arr_14 [i_1]))))));
                            var_28 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_8)) ? (arr_34 [i_4] [i_9]) : (arr_27 [i_1] [i_1] [i_1])))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_40 [i_0] [i_0] [i_0] [i_0] [12] [i_0] |= var_8;
                            var_29 = (~(((/* implicit */int) ((min((((/* implicit */unsigned int) (_Bool)1)), (arr_11 [i_1 + 2] [i_4] [i_1] [i_10]))) < (((/* implicit */unsigned int) ((/* implicit */int) (short)13)))))));
                        }
                        var_30 = ((/* implicit */int) (!(((arr_13 [i_1]) == (arr_13 [i_1])))));
                        arr_41 [i_0] [i_1] [i_1] [i_1] [i_8 + 1] = ((/* implicit */int) 5455321972721500355ULL);
                    }
                    var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */int) var_16)))), (((/* implicit */int) ((unsigned char) arr_3 [i_4])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_4])) && (((/* implicit */_Bool) arr_1 [i_1])))))) : ((-((+(var_11)))))));
                }
                for (int i_11 = 3; i_11 < 11; i_11 += 1) 
                {
                    var_32 = ((/* implicit */int) max((var_32), (((((/* implicit */_Bool) var_6)) ? (arr_6 [i_0] [i_1] [i_11]) : ((~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 6697189311104398819ULL)))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 1) 
                        {
                            {
                                var_33 -= ((/* implicit */int) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_42 [i_11] [i_11])))) & (((/* implicit */int) ((arr_51 [i_0]) >= (((/* implicit */int) (_Bool)1)))))))) ? (((0ULL) >> (((((arr_44 [i_1] [i_13]) % (((/* implicit */unsigned int) var_17)))) - (125095281U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_2))))));
                                var_34 = ((/* implicit */unsigned int) 0);
                            }
                        } 
                    } 
                    arr_52 [i_1] = (-(((((/* implicit */unsigned long long int) arr_44 [i_11 + 2] [i_1 - 1])) ^ (min((arr_8 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) 11U)))))));
                    var_35 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_35 [i_11] [i_1] [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) (~(arr_2 [i_0]))))))) ? (((/* implicit */unsigned long long int) 2456415533U)) : (((((/* implicit */unsigned long long int) var_14)) ^ (arr_8 [i_1] [i_1 + 2] [i_11 - 3])))));
                    /* LoopSeq 2 */
                    for (int i_14 = 0; i_14 < 13; i_14 += 4) /* same iter space */
                    {
                        arr_55 [i_1] [i_1] [i_1] = (-((~(0U))));
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 2545659390U)))) ? (((/* implicit */int) var_12)) : ((-(15))))))));
                    }
                    for (int i_15 = 0; i_15 < 13; i_15 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                        {
                            arr_62 [i_0] [i_1] [i_11] [i_15] = ((unsigned int) (-(((/* implicit */int) var_12))));
                            arr_63 [i_1] [i_1] [9ULL] [i_15] [7] = ((/* implicit */unsigned short) var_4);
                            var_37 = ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_1] [(unsigned char)6] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_16 + 1] [i_16 + 1] [i_11] [i_15]))) : (arr_53 [i_0] [i_0] [i_11] [i_11 - 2] [i_15] [i_15])));
                        }
                        arr_64 [i_1] [i_11 - 1] [i_1] [i_1 - 3] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0] [i_0] [i_1] [i_11 + 1] [i_0] [i_0]))) + (arr_61 [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [i_1] [i_15] [i_1] [i_11] [i_1] [i_0])))))) : (((unsigned int) var_19)))) / (((/* implicit */unsigned int) arr_4 [(_Bool)1] [i_11] [i_11]))));
                        var_38 += ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1] [7])) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)254)) - (-13)))), (((((/* implicit */_Bool) var_7)) ? (arr_8 [i_0] [i_1 - 1] [0U]) : (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_0] [(_Bool)1] [i_11])))))));
                    }
                }
                for (int i_17 = 1; i_17 < 9; i_17 += 4) 
                {
                    var_39 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                    var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_56 [i_0] [i_0] [i_17 + 3]) : (((/* implicit */int) var_12))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_59 [i_0] [i_0])) + (arr_14 [i_0]))))))), (((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_65 [i_0])))) & (var_14))))))));
                    var_41 = ((/* implicit */unsigned long long int) (~(((arr_17 [i_1 - 3] [i_17 + 3] [i_17 + 2]) ? (((/* implicit */int) arr_67 [i_1 + 2] [i_1 + 1])) : (((/* implicit */int) arr_20 [i_1] [i_17 + 2] [i_17 + 4]))))));
                }
            }
        } 
    } 
    var_42 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_4)))));
    var_43 = ((/* implicit */int) min((var_43), ((-((~(var_7)))))));
}
