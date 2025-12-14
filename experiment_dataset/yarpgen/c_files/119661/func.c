/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119661
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
    var_17 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) min((max((arr_4 [i_0]), (arr_4 [i_0]))), (((/* implicit */unsigned char) ((arr_5 [(unsigned char)10] [i_3]) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_7 [i_0] [i_0] [i_0])))))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [i_3]))) ? (((/* implicit */int) max((((/* implicit */short) arr_3 [i_4] [i_4])), (arr_10 [i_0] [(unsigned short)1] [i_0])))) : (((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) arr_10 [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_4 [i_4])))))))));
                            var_20 &= ((/* implicit */unsigned int) (+(arr_12 [i_0] [i_0] [i_0])));
                            var_21 = ((/* implicit */unsigned int) ((unsigned short) min((((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned short) var_13))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))) >= (((/* implicit */int) max(((_Bool)1), (arr_0 [i_0]))))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_11 [i_1] [i_2] [i_1] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((arr_6 [i_0] [i_1] [i_3]) & (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [(unsigned short)6]))))))) ? (max((((/* implicit */long long int) arr_0 [i_0])), (((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)32767)))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 1; i_5 < 12; i_5 += 2) 
                        {
                            arr_16 [i_0] [(unsigned char)2] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) ((12011955940211750361ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
                            arr_17 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_5 - 1] [i_5 - 1])) != (((/* implicit */int) arr_14 [i_5 + 1] [i_5 - 1]))));
                        }
                        /* vectorizable */
                        for (short i_6 = 1; i_6 < 9; i_6 += 4) 
                        {
                            arr_20 [i_6] [i_0] [i_2] [8LL] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0]))));
                            var_25 = ((/* implicit */unsigned char) arr_0 [i_0]);
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_6] [i_6 + 1] [i_6 + 4] [i_6] [i_6 + 4])) << (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) var_4)))))))));
                        }
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((unsigned short) ((((/* implicit */_Bool) var_13)) ? (((arr_9 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_2] [i_2] [i_0]))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [(short)3] [i_2] [i_0] [i_0]))))))));
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) 12777024102591125436ULL)) ? (12687574951935744987ULL) : (((/* implicit */unsigned long long int) 9223372036854775806LL))));
                    }
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        var_29 += ((/* implicit */_Bool) arr_6 [i_7] [i_0] [i_2]);
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_2] [i_7])) ? (max((var_5), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_7])) << (((/* implicit */int) arr_9 [(unsigned short)8] [(unsigned short)8] [i_1] [i_1] [(unsigned short)8] [i_7]))))))))))));
                        var_31 *= ((/* implicit */_Bool) var_12);
                        arr_25 [i_7] [i_1] [i_1] [i_2] [i_7] &= ((/* implicit */unsigned long long int) (((~((~(((/* implicit */int) var_1)))))) - (((/* implicit */int) ((unsigned char) var_15)))));
                    }
                    for (int i_8 = 3; i_8 < 12; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            var_32 &= ((/* implicit */_Bool) (~(((((/* implicit */int) var_9)) | (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [(unsigned short)12] [i_0]))))));
                            var_33 += ((((/* implicit */unsigned long long int) ((arr_26 [i_0] [6ULL] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [(signed char)2] [i_8] [i_0] [6ULL])))))) & (((var_13) - (var_13))));
                        }
                        /* vectorizable */
                        for (short i_10 = 3; i_10 < 11; i_10 += 1) 
                        {
                            arr_32 [i_0] [i_2] [i_1] [i_0] = var_13;
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_0] [i_8] [(_Bool)1])) : (((/* implicit */int) var_8))))) && (arr_8 [i_8 - 2] [i_8] [i_10 + 1] [i_0] [i_8])));
                            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [i_2] [i_8 - 1] [i_10 + 1])) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_14))));
                            var_36 = ((/* implicit */short) var_16);
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)10] = ((/* implicit */_Bool) ((int) arr_1 [i_0]));
                        }
                        var_37 = ((/* implicit */short) (~(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        arr_34 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) (unsigned short)20042)))));
                        var_38 = ((max((arr_6 [i_0] [i_2] [(_Bool)1]), (min((((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_8])), (var_0))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_15)) >= (((/* implicit */int) arr_2 [i_1])))) && (((/* implicit */_Bool) max((-9223372036854775807LL), (((/* implicit */long long int) (_Bool)1))))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned short) var_11);
                        arr_37 [i_0] [i_0] [i_0] [(unsigned char)1] [i_0] [i_0] = ((/* implicit */unsigned short) ((int) ((unsigned char) var_4)));
                        var_40 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)51)) ? (1222750250U) : (((/* implicit */unsigned int) 2147483647))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))))));
                        arr_38 [i_1] [i_2] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))));
                        var_41 -= ((/* implicit */short) ((arr_11 [i_0] [i_1] [i_2] [(_Bool)1]) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)8]))))));
                    }
                    var_42 = ((/* implicit */_Bool) ((arr_36 [i_0]) * (max((((arr_36 [i_0]) + (var_13))), (((/* implicit */unsigned long long int) (+(arr_26 [i_0] [i_0] [i_0]))))))));
                    var_43 = ((/* implicit */_Bool) arr_7 [i_1] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (short i_13 = 0; i_13 < 13; i_13 += 3) 
                        {
                            {
                                var_44 = ((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) min((((/* implicit */short) arr_19 [i_0] [i_1] [i_1] [i_12] [i_0])), (var_14))))));
                                var_45 = arr_13 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0];
                                var_46 = ((/* implicit */unsigned long long int) ((unsigned int) (~(9223372036854775807LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_47 = ((/* implicit */unsigned int) (+((+((~(var_0)))))));
    var_48 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (var_16)));
}
