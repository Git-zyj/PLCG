/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155730
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
    var_18 = ((/* implicit */_Bool) var_14);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        arr_2 [18] = ((/* implicit */signed char) ((long long int) var_0));
        var_19 = ((/* implicit */long long int) (~(min((((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */unsigned long long int) var_10)) : (11961772117079185709ULL))), (((/* implicit */unsigned long long int) 1356914335))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((signed char) ((arr_4 [19LL]) ? (((/* implicit */int) ((_Bool) 1087360891))) : (var_10)));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            arr_15 [(signed char)18] [i_2] [5] [i_3] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_2] [14LL] [i_4 + 2] [i_4] [i_4]))));
                            var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_4] [i_3] [3] [i_1] [i_0 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] [1LL])) : (203915042)))) : (-6002416547944349999LL)));
                            arr_16 [i_2] [i_2] [i_2] [(_Bool)0] [i_2] = ((/* implicit */unsigned long long int) ((3002280725632719037LL) ^ (((/* implicit */long long int) 230010840))));
                            arr_17 [i_0] [i_0] [i_2] [i_1] [(_Bool)1] [18U] [2LL] = ((/* implicit */unsigned int) arr_7 [i_0 - 1] [i_0 + 1]);
                            arr_18 [i_0] [6LL] [i_2] [14LL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((arr_13 [i_4] [i_2] [i_2] [i_2] [i_0]) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-81)) + (142))) - (61))))))));
                        }
                        for (signed char i_5 = 1; i_5 < 21; i_5 += 1) /* same iter space */
                        {
                            arr_23 [i_2] = ((/* implicit */short) 9509041700193821431ULL);
                            var_21 = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) (signed char)-12)))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_12 [(signed char)14] [6U] [1U] [i_0 - 1] [(_Bool)1])) ? (-8042877749994220212LL) : (-3043971288962709983LL))) == (((/* implicit */long long int) ((int) min((1723023990690565195LL), (((/* implicit */long long int) (signed char)3)))))))))));
                            arr_24 [i_0] [i_0] [i_0] [i_2] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15))) ^ (3149215085230245017ULL)));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 1; i_6 < 21; i_6 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_20 [3U] [(signed char)20] [i_1] [i_1] [i_2] [i_6])))) ? (arr_28 [i_0 - 1]) : (arr_28 [i_0 + 1])));
                            arr_30 [(signed char)18] [i_1] [i_2] [(signed char)4] [4ULL] [1U] = ((/* implicit */signed char) ((7323602372412905418ULL) ^ (((/* implicit */unsigned long long int) -8438884310056239938LL))));
                        }
                        arr_31 [i_2] = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 1]))))));
                        arr_32 [i_0] [i_1] [(signed char)19] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [4U] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1])) + (((/* implicit */int) arr_26 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]))))) ? (((/* implicit */int) ((_Bool) arr_26 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (((((/* implicit */int) arr_26 [(short)21] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1])) - (((/* implicit */int) (signed char)24))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_7 = 3; i_7 < 21; i_7 += 1) 
                        {
                            arr_35 [(short)14] [(signed char)12] [(unsigned char)18] [(short)2] [i_1] |= ((/* implicit */long long int) ((3980712921249551562ULL) | (((/* implicit */unsigned long long int) 596296891322081341LL))));
                            var_23 |= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) -648166160448090314LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1801))) : (3668072870U)))) ^ (9223372036854775807LL)));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) -230010841)) ? (8118039675983635537LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1814591624)))))))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 19; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */_Bool) (+(arr_11 [i_0 - 1] [17U] [i_0] [17U])));
                        arr_38 [i_2] [i_1] [20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_2] [i_8] [i_8] [(_Bool)1]))))) : ((+(-2070284592765634738LL)))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            for (int i_10 = 2; i_10 < 21; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    {
                        arr_50 [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) min((((arr_48 [i_0 - 1] [i_10 - 2] [i_10] [i_10] [i_10 + 1] [i_11]) | (var_8))), (((/* implicit */unsigned int) ((signed char) (signed char)-61)))));
                        /* LoopSeq 2 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */long long int) min((var_26), (((((/* implicit */_Bool) (signed char)-127)) ? (min((3002280725632719044LL), (((/* implicit */long long int) (+(2147483647)))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((((((/* implicit */int) (signed char)-38)) + (2147483647))) << (((var_14) - (1844851762U))))))))))));
                            arr_53 [i_9] [i_9] [i_10] [(signed char)13] = ((/* implicit */long long int) max((((((/* implicit */_Bool) -6884197168095766268LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [i_10 + 1] [i_0 - 1] [(signed char)21] [i_10])))), (((/* implicit */int) max((max((var_9), ((signed char)63))), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-53)) >= (((/* implicit */int) (signed char)32))))))))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) (signed char)106))))))))));
                            arr_57 [i_0] [i_9] [i_9] [i_9] [i_11] [i_11] [i_10] = ((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_10]);
                        }
                        var_28 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned short)63297)) << (((/* implicit */int) ((arr_43 [i_10] [i_10] [(unsigned char)2] [1U]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63506))))))))));
                        arr_58 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+((((_Bool)1) ? (((/* implicit */int) arr_5 [i_10 - 2] [i_0] [i_10])) : (((/* implicit */int) (_Bool)1))))))) - (3726693725U)));
                        arr_59 [i_10] [i_9] [i_10] [i_11] = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_41 [i_0] [i_10 + 1]))))))));
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) var_7))));
    var_30 = ((/* implicit */int) ((signed char) ((((_Bool) 8192642081770596107LL)) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)85)) + (((/* implicit */int) (signed char)59))))))));
}
