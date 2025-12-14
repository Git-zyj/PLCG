/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174927
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
    var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 5913909888037083797ULL))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [(_Bool)1] [(_Bool)1] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_6)) ? ((~(1538009006))) : (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) (unsigned char)253))))))));
                var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(var_8))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) arr_0 [i_1]);
                    arr_10 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21384)) ? (((/* implicit */int) (unsigned short)58753)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_15 [(unsigned short)11] [(short)11] [(_Bool)1] [i_2] [(_Bool)0] [(short)11] = ((/* implicit */signed char) (((!((!((_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)28837))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_8 [i_0] [i_0] [(unsigned char)7])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_0] [i_0] [(unsigned short)3] [(unsigned short)3])))))) : (((((/* implicit */_Bool) (~(837970915U)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_1 [i_2])) : (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) (_Bool)1)))))))));
                                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (~(arr_3 [i_3]))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2] [i_0] [i_0] [i_0] [i_2])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)226)) && ((_Bool)0))))) : (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [(_Bool)1] [(_Bool)1] [(_Bool)1]))) & (var_8))), (((/* implicit */unsigned int) (~(var_0))))))));
                }
                /* LoopSeq 4 */
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    var_14 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_1 [i_0]) : (1445124539U))))));
                    arr_19 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(arr_12 [(_Bool)1] [i_0] [i_5] [i_5] [i_0] [i_0]))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) : ((+(((/* implicit */int) (unsigned short)6783))))));
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((unsigned int) arr_4 [i_0] [0U] [(unsigned char)4])))));
                    /* LoopSeq 1 */
                    for (short i_6 = 3; i_6 < 11; i_6 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_7 = 4; i_7 < 12; i_7 += 3) 
                        {
                            arr_27 [(_Bool)0] [(unsigned char)6] [10U] [(short)10] [10] &= ((/* implicit */_Bool) ((((var_3) << (((((/* implicit */int) arr_13 [6] [i_7 - 4] [i_7 - 4] [i_7 - 4] [6])) - (145))))) >> (0U)));
                            var_16 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_23 [i_6 + 2] [(unsigned char)8] [i_5] [i_6 + 2] [i_6 + 2] [(unsigned short)7])) ? (2147483647) : (var_7))), (((/* implicit */int) ((arr_23 [i_6 + 1] [i_6 + 1] [i_5] [i_6 + 1] [i_6 + 1] [i_6 + 1]) == (arr_23 [i_6 - 2] [(signed char)6] [i_5] [(unsigned short)5] [i_6 - 2] [i_6 - 2]))))));
                            var_17 = ((/* implicit */_Bool) (+((-((+(((/* implicit */int) (unsigned char)152))))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min(((~(((/* implicit */int) (unsigned short)44151)))), ((-(((((/* implicit */_Bool) (short)-23481)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-98)))))))))));
                            var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(var_1))))));
                            var_20 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [2ULL]))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_21 ^= ((/* implicit */unsigned short) (short)5165);
                            var_22 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((-49065259), (((/* implicit */int) arr_28 [12LL] [i_6 + 2])))))));
                        }
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_5] [i_6 + 2] [i_5] [1]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)5175))) % (((((/* implicit */_Bool) arr_21 [i_5])) ? (3456996366U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5] [9U] [i_5] [9U]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                }
                for (unsigned int i_10 = 4; i_10 < 11; i_10 += 1) 
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((unsigned int) var_6))) <= (arr_30 [10] [i_10 - 4] [(_Bool)1] [4U] [6] [(_Bool)1] [(short)6]))) ? (max(((~(arr_33 [i_1] [i_1]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_10]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17435)))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) max((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)6214))))), (max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (2067885234U)))), (((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)18))))))));
                                arr_40 [i_11] [7] [i_11] [6U] [7] [7] [7] = ((/* implicit */short) (((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_11] [(unsigned short)0] [10ULL] [(unsigned short)0] [10ULL] [(unsigned short)0] [i_11]))))))) <= (((/* implicit */int) (short)17441))));
                            }
                        } 
                    } 
                }
                for (signed char i_13 = 1; i_13 < 11; i_13 += 3) 
                {
                    arr_44 [i_0] [i_0] [i_13] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_43 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1])) ? (((/* implicit */int) arr_43 [4ULL] [4ULL] [4ULL] [i_13 + 2])) : (((/* implicit */int) arr_43 [(signed char)10] [i_13 + 2] [3] [i_13 + 2]))))));
                    /* LoopSeq 2 */
                    for (int i_14 = 0; i_14 < 13; i_14 += 4) /* same iter space */
                    {
                        var_26 *= ((/* implicit */short) (((-(((/* implicit */int) arr_6 [(signed char)10] [i_14] [i_13 - 1])))) == (((/* implicit */int) min((((_Bool) (short)28532)), (((((/* implicit */_Bool) -1858715946)) || (((/* implicit */_Bool) (unsigned short)33290)))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_49 [(_Bool)1] [(_Bool)1] [12U] [(_Bool)1] [i_13] = ((/* implicit */unsigned int) (unsigned char)39);
                            var_27 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)105)) ? (((((/* implicit */_Bool) arr_45 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_45 [i_0] [6])) : (((/* implicit */int) (short)0)))) : (((/* implicit */int) arr_14 [6] [i_14] [6] [i_13 + 2] [i_14]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(var_7)))) < ((+(var_5)))))) : (((/* implicit */int) arr_11 [i_14] [i_13 + 2] [i_14] [i_14]))));
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (-((-(-824154578))))))));
                        }
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_0] [i_14] [i_0] [i_14] [(_Bool)1] [8ULL] [i_13 + 1]))))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 0; i_16 < 13; i_16 += 2) 
                        {
                            arr_53 [i_13] = ((((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned short)0)))), ((+(((/* implicit */int) (unsigned char)8))))))) ? (((((/* implicit */_Bool) 1797671823)) ? ((~(278392151))) : (((((/* implicit */_Bool) arr_45 [0U] [0U])) ? (((/* implicit */int) (short)-25452)) : (arr_4 [(unsigned short)11] [(unsigned short)11] [9U]))))) : (((/* implicit */int) var_1)));
                            var_30 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) min((arr_23 [i_0] [(signed char)0] [i_14] [i_0] [(unsigned char)6] [i_14]), (var_3)))))));
                        }
                    }
                    for (int i_17 = 0; i_17 < 13; i_17 += 4) /* same iter space */
                    {
                        var_31 += ((/* implicit */unsigned char) ((int) (~(4294967284U))));
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_41 [2U] [2U] [i_13])))) ? (((unsigned int) (unsigned short)48545)) : (arr_25 [i_13] [i_0] [i_13])))) ? (((/* implicit */int) ((arr_29 [i_0] [i_0] [i_0] [4] [i_0] [0U]) && (((/* implicit */_Bool) 2484600287U))))) : (((/* implicit */int) (signed char)-58))));
                    }
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((-628080533), (((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (((_Bool)1) && (((/* implicit */_Bool) arr_17 [(short)9] [i_13] [(short)9]))))))) : ((~(((((/* implicit */_Bool) arr_11 [i_13] [(_Bool)1] [(_Bool)1] [1])) ? (837970919U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_0] [i_0] [(_Bool)1] [i_0])))))))));
                }
                for (int i_18 = 0; i_18 < 13; i_18 += 3) 
                {
                    arr_59 [6U] [5] [i_18] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_14 [7U] [i_18] [6ULL] [i_18] [(unsigned short)1])), (((var_1) ? ((+(278392151))) : (((/* implicit */int) arr_13 [i_0] [3LL] [8] [i_0] [i_18]))))));
                    var_34 = ((/* implicit */unsigned short) 60476312U);
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_19 = 0; i_19 < 17; i_19 += 4) 
    {
        for (unsigned char i_20 = 0; i_20 < 17; i_20 += 3) 
        {
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                {
                    var_35 = ((/* implicit */signed char) ((_Bool) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_61 [i_19])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(arr_64 [2U] [2U] [2U]))))));
                    arr_66 [12U] [(_Bool)1] = ((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_61 [i_21]), (arr_61 [(unsigned short)8]))))));
                }
            } 
        } 
    } 
}
