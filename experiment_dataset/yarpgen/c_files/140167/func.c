/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140167
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
    var_17 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 = (unsigned short)0;
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) var_6)), ((unsigned short)7))))))))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_2 [i_0] [i_0]))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((unsigned char) arr_5 [i_0]));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((int) var_2)))));
                        var_23 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) var_15)))) & (((/* implicit */int) arr_10 [i_0]))));
                        var_24 = ((/* implicit */_Bool) ((0LL) + (var_14)));
                    }
                    for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_2 [i_4] [3LL])), (((((/* implicit */_Bool) (unsigned short)65527)) ? (var_1) : (((/* implicit */int) arr_2 [(unsigned short)6] [i_0]))))))) - ((-(var_10)))));
                            arr_20 [i_2] [i_5] |= ((/* implicit */long long int) (+(min((((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) min((arr_6 [i_1] [i_1] [i_1]), (((/* implicit */long long int) arr_2 [i_0] [i_0])))))))));
                        }
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            var_26 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_2] [1LL] [i_6]))) : (var_8))));
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) arr_13 [i_6] [i_6] [i_6] [i_6] [(unsigned short)7] [i_6]))));
                            var_28 = ((/* implicit */int) ((long long int) var_6));
                            var_29 ^= ((/* implicit */unsigned char) -1307798314);
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (signed char)98))) / (((var_4) | (arr_7 [i_0] [i_0] [i_7]))))), (((min((var_3), (((/* implicit */long long int) arr_18 [i_0] [i_0] [i_2] [i_4] [i_7])))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (var_1))))))))))));
                            arr_26 [i_7] [(unsigned short)7] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [6])) ^ (((max((((/* implicit */unsigned long long int) var_2)), (var_8))) * (min((((/* implicit */unsigned long long int) (unsigned short)8)), (var_10)))))));
                            arr_27 [i_1] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((arr_1 [i_0]) & (arr_1 [i_7]))), (((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35019))) : (arr_1 [i_4])))));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_1] [i_0])), (min(((unsigned short)65535), ((unsigned short)17429))))))) : (var_8)));
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_31 [i_4] [3ULL] [i_0] [i_0] &= ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_30 [i_2] [i_1])))) | (((((/* implicit */int) var_12)) ^ (((/* implicit */int) (unsigned short)65525))))));
                            var_32 = ((/* implicit */_Bool) var_4);
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_1] [i_2] [i_4] [i_8] [i_8])) ? (var_1) : ((+(((/* implicit */int) (unsigned short)35033))))));
                            var_34 = ((/* implicit */unsigned long long int) (unsigned short)30540);
                        }
                    }
                    var_35 = ((/* implicit */long long int) min((var_35), (((long long int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) 2825367940050049317LL))))))))));
                    var_36 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)30519)))) : (var_3)))) || (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_1] [i_2])), (var_3)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_19 [i_0] [i_0] [i_2] [i_1] [i_0] [i_1] [(unsigned char)4])), ((unsigned short)30516)))))));
                }
                /* vectorizable */
                for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    var_37 = ((/* implicit */unsigned short) (_Bool)1);
                    var_38 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_1)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
                    arr_35 [i_0] [(_Bool)1] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_9] [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0]))));
                }
                for (int i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [2LL] [i_1]))) : (var_4)));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 3; i_11 < 12; i_11 += 2) 
                    {
                        for (signed char i_12 = 0; i_12 < 14; i_12 += 2) 
                        {
                            {
                                arr_44 [i_11] [i_12] [(unsigned char)0] [i_11] [i_10] [(_Bool)1] [i_11] = ((/* implicit */unsigned short) (((-(((((/* implicit */int) (unsigned short)14)) * (((/* implicit */int) (unsigned short)0)))))) < (((((/* implicit */int) (unsigned short)65522)) / (((/* implicit */int) (unsigned short)65535))))));
                                var_40 ^= var_4;
                                var_41 = ((/* implicit */long long int) ((((int) var_1)) / (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_17 [i_1] [i_10] [i_11] [i_12])))))))));
                                var_42 -= ((/* implicit */int) var_11);
                                var_43 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) ((var_7) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))) : (((/* implicit */int) arr_16 [1ULL] [i_1] [(_Bool)0] [i_12] [(_Bool)0] [i_11]))))), (8958768098878068745LL)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
