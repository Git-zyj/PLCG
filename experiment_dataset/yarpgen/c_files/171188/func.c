/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171188
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
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [2LL] = ((/* implicit */signed char) ((unsigned int) ((_Bool) -85389120)));
                var_18 &= ((/* implicit */unsigned char) min(((+(((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((-1360935985583454252LL) + (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10623523640619431361ULL)) ? (((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1]))))) ? (((/* implicit */int) ((_Bool) arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1]))) : (((/* implicit */int) (!(arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1]))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    var_20 = ((/* implicit */int) ((long long int) var_9));
                    var_21 -= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                    arr_14 [i_3] [i_3] [i_3] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_3 + 1] [i_3]))));
                    arr_15 [(unsigned char)0] [i_4] [i_3] [i_4] = ((/* implicit */signed char) arr_7 [i_4]);
                }
                for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    arr_20 [i_2] [i_3] [i_5] = ((/* implicit */unsigned long long int) (signed char)-100);
                    var_22 += ((/* implicit */signed char) ((unsigned char) (+(max((10623523640619431385ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))));
                    var_23 *= ((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (max((arr_13 [i_2] [i_3] [i_5] [i_2]), ((unsigned short)65522)))))), ((-(((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            {
                                var_24 |= ((/* implicit */_Bool) ((short) max((((((/* implicit */int) var_13)) > (((/* implicit */int) var_7)))), (((((/* implicit */int) var_12)) < (((/* implicit */int) arr_13 [i_7] [i_6] [i_5] [i_2])))))));
                                arr_27 [i_2] [i_3] [i_2] [i_3] [i_3] = ((_Bool) ((_Bool) arr_16 [i_2] [i_3 + 1] [i_7]));
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) ((_Bool) (signed char)-5)))));
                                var_26 -= ((/* implicit */unsigned char) var_12);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_8 = 1; i_8 < 17; i_8 += 1) 
                    {
                        arr_30 [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((0LL) > (0LL))))));
                        var_27 |= ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_13 [i_2] [i_2] [i_3] [i_2]))) > (((/* implicit */int) ((_Bool) ((int) arr_12 [8ULL] [8ULL] [i_5] [i_8]))))));
                    }
                    for (int i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        arr_35 [14] [14] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14)) ? (((/* implicit */int) (unsigned short)58399)) : (((/* implicit */int) (signed char)-95))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-25799)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((short) 7823220433090120254ULL))))))));
                        var_28 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_16 [i_3 + 1] [i_3 + 1] [i_3 + 1])), (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_8 [i_2]))))) >> (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_32 [i_5] [i_3] [i_9]))))))));
                    }
                    for (long long int i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((((int) ((((/* implicit */_Bool) (short)-27198)) ? (((/* implicit */int) (short)-20235)) : (((/* implicit */int) (signed char)-100))))) + (((/* implicit */int) var_9))));
                        var_30 = ((/* implicit */signed char) arr_33 [i_2] [i_2]);
                        arr_38 [i_10] [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) ((arr_33 [10U] [i_3]) ? ((+(arr_23 [i_3 + 1]))) : (arr_8 [i_3 + 1])));
                    }
                }
                for (unsigned char i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    var_31 *= ((/* implicit */unsigned short) -85389120);
                    var_32 = max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)-20296)));
                }
                var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 0LL)) == (((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_2] [9ULL] [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */long long int) arr_19 [i_2] [i_3] [i_2])) : (0LL)))) : (min((7823220433090120254ULL), (((/* implicit */unsigned long long int) (signed char)-26))))))));
                /* LoopSeq 4 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        for (short i_14 = 0; i_14 < 18; i_14 += 4) 
                        {
                            {
                                arr_48 [i_2] [i_3] [i_12] [i_3] [i_14] = (!(((/* implicit */_Bool) (unsigned short)11578)));
                                arr_49 [4U] [i_3] [i_14] [8] [i_3 + 1] [i_3] &= ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_26 [i_13] [i_13] [i_12] [i_3] [i_2] [i_3] [i_2])), (arr_7 [i_3 + 1])))) ? ((-(var_6))) : (max((arr_7 [i_2]), (((/* implicit */long long int) var_11)))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 11085022028761352513ULL))))) : (((((/* implicit */_Bool) arr_16 [i_12] [i_3] [i_2])) ? (2147483647) : (((/* implicit */int) (short)-27218))))))));
                    arr_50 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))) >= (((unsigned int) ((((/* implicit */_Bool) arr_44 [i_12] [i_3] [i_3] [i_3] [(unsigned short)0] [i_2])) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) var_7)))))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 1) /* same iter space */
                {
                    arr_54 [(_Bool)1] &= ((/* implicit */int) max((((((/* implicit */_Bool) arr_24 [i_15] [i_15] [i_15] [i_15] [(_Bool)1] [i_2] [(unsigned short)17])) ? (arr_26 [i_2] [i_2] [i_2] [i_3] [i_3] [i_2] [i_15]) : (arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))), (((/* implicit */unsigned int) ((int) arr_26 [i_2] [i_2] [i_2] [i_2] [6ULL] [i_2] [i_15])))));
                    var_35 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_36 [i_15] [i_15] [i_15])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)-20297))))))) ? (arr_34 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_21 [i_2] [i_3] [i_3] [i_15]), (((unsigned char) arr_45 [i_2] [i_3] [i_3] [i_15]))))))));
                    arr_55 [i_3] [i_3] = ((/* implicit */int) (((!((!(((/* implicit */_Bool) var_2)))))) ? (var_2) : (((/* implicit */unsigned long long int) var_6))));
                }
                for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 1) /* same iter space */
                {
                    arr_59 [i_3] [i_3] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (short)-27198))));
                    var_36 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_12 [i_3] [i_3 + 1] [i_3 + 1] [(signed char)11])))), (((((/* implicit */_Bool) arr_40 [i_2] [i_3])) ? (arr_9 [i_16] [i_16] [i_16]) : (((/* implicit */int) var_9))))));
                    var_37 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_12 [i_3] [i_3 + 1] [i_2] [i_3])), (((((/* implicit */_Bool) arr_23 [i_3])) ? (var_2) : (((/* implicit */unsigned long long int) arr_51 [i_3] [i_3] [10ULL])))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_31 [i_16] [i_3] [i_3] [i_2])))) || (((/* implicit */_Bool) (-(arr_43 [i_16] [i_3] [i_2]))))))))));
                    arr_60 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) (~(-7308629888155781256LL)));
                    arr_61 [4LL] [i_16] |= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (arr_7 [i_2]) : (arr_7 [i_3 + 1]))));
                }
                for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 1) /* same iter space */
                {
                    arr_64 [i_3] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned short)65432)) << (((((/* implicit */int) (unsigned short)54736)) - (54722))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [i_2] [(short)4]))))) ? (((/* implicit */int) (short)27197)) : (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) var_13)))))))));
                    arr_65 [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(var_15)))) != (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-8))) : (arr_57 [i_2] [(signed char)6] [i_2] [i_17])))) : ((-(18446744073709551615ULL)))))));
                }
                var_38 |= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_31 [i_3 + 1] [i_3] [i_2] [i_2])))) ? (((/* implicit */int) ((((1848862802U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13))))) > (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (var_14))))))) : ((+(((int) arr_37 [i_3] [(unsigned short)2] [(unsigned short)2] [i_2]))))));
            }
        } 
    } 
}
