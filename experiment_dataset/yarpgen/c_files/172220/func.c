/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172220
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
    var_13 = var_6;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = min((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (((/* implicit */long long int) min((var_1), ((signed char)5)))));
                var_14 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)127)), (-6464879846176581972LL)));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_2] = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [i_1] [i_1] [(unsigned char)1] [i_1]))))) == (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [5U] [(unsigned char)6]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)124))) == (1044834187U))))) : (var_11))));
                    var_15 = ((/* implicit */_Bool) var_4);
                    arr_9 [i_0] [i_0] = ((var_12) | (((/* implicit */long long int) ((/* implicit */int) max((((var_12) <= (var_12))), (((((/* implicit */long long int) ((/* implicit */int) var_2))) == (var_12))))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))) >= (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))));
                    arr_14 [(signed char)16] [(signed char)16] &= ((/* implicit */short) -1790769768);
                }
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_18 [i_0] [i_0] = max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_3)), (arr_12 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((arr_0 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : (((/* implicit */int) var_2))))), (((((/* implicit */long long int) ((/* implicit */int) var_2))) | (((var_8) ? (arr_5 [i_4] [i_1] [i_4] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [(short)6] [(short)6]))))))));
                    var_17 &= ((min((((/* implicit */long long int) arr_3 [i_0])), (var_12))) <= (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_4]), (arr_3 [i_0]))))));
                    var_18 |= ((/* implicit */int) (-(((arr_0 [(_Bool)1]) + (arr_0 [(short)4])))));
                    arr_19 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) max(((unsigned char)12), (((/* implicit */unsigned char) (signed char)-24))))), (min((((/* implicit */unsigned short) var_3)), (arr_3 [i_1])))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        var_19 = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_3 [i_5]))))));
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) arr_13 [i_0]));
                            var_20 += ((/* implicit */unsigned long long int) (signed char)26);
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [(_Bool)1])) ? (arr_16 [i_6]) : (((/* implicit */int) var_6))))) >= (arr_26 [i_7] [i_1] [i_6] [i_6] [i_1]))))));
                        }
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            arr_34 [(signed char)20] [i_1] [12] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_21 [i_0] [i_0]);
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) var_2)) == (((((/* implicit */int) (short)138)) | (((/* implicit */int) (unsigned char)0)))))))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+(arr_16 [i_6]))))));
                            arr_35 [18U] [i_8] [i_0] [(signed char)6] [i_0] [i_1] [i_0] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)9281)) : (((/* implicit */int) (signed char)69))));
                            arr_36 [i_0] [(short)10] [i_5] [i_5] [i_5] = ((/* implicit */short) ((var_2) ? (arr_22 [i_0] [i_0] [i_5] [i_0]) : (((/* implicit */int) var_6))));
                        }
                        for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_3))));
                            var_25 = ((/* implicit */unsigned short) var_5);
                            var_26 = ((/* implicit */signed char) ((12639215922612751592ULL) | (((/* implicit */unsigned long long int) arr_16 [i_0]))));
                            arr_39 [i_0] [i_0] [i_1] [i_1] [i_5] [i_6] [(signed char)16] = ((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_1 [i_0] [i_0]))));
                            arr_40 [i_6] [i_1] [(_Bool)1] [i_6] [i_9] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_9])) ? (((/* implicit */int) arr_33 [i_9] [(unsigned char)17] [(unsigned char)17] [i_5] [i_1] [i_0] [i_0])) : (((/* implicit */int) var_2))));
                        }
                        var_27 = ((/* implicit */unsigned char) var_11);
                        var_28 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_6])) == (((/* implicit */int) arr_11 [i_1] [i_5]))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) (signed char)5)) : (((var_2) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))));
                            arr_45 [i_11] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_4);
                        }
                        for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 1) 
                        {
                            var_30 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_17 [i_0])) || (((/* implicit */_Bool) var_12)))) || (((/* implicit */_Bool) arr_47 [i_10] [i_12] [(unsigned char)20] [(_Bool)1] [i_12 + 3] [i_12 + 3] [i_12]))));
                            var_31 ^= ((/* implicit */unsigned char) ((var_0) == (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                            arr_49 [20ULL] [i_0] [i_5] [i_0] [i_0] = arr_17 [i_0];
                            var_32 = ((/* implicit */long long int) ((((/* implicit */int) arr_47 [(short)3] [i_12 + 3] [(short)3] [i_12] [i_12 + 2] [i_12] [i_12])) | (((/* implicit */int) arr_47 [i_12 - 1] [i_12] [i_12] [i_12 + 2] [i_12 + 4] [i_12] [i_10]))));
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0] [i_1]))));
                        }
                        var_34 -= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (arr_43 [i_0] [i_0] [i_0] [(unsigned short)13] [i_0] [i_0] [19]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                    }
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)55)) ? (1627525604U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)123)))));
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3948527673U)) ? (1627525604U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) ? (arr_38 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) >= (var_12)))))));
                }
            }
        } 
    } 
}
