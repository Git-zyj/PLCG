/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169112
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (short i_4 = 4; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_15 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_10))) + (((/* implicit */int) (short)19565)))))));
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((min((arr_4 [i_0] [i_0] [i_4 - 1] [i_3]), (((/* implicit */long long int) (_Bool)0)))) - (min((arr_4 [i_3] [(unsigned char)1] [i_4 - 3] [i_3]), (((/* implicit */long long int) var_3)))))))));
                            }
                        } 
                    } 
                } 
                arr_11 [i_1] [i_1] = ((/* implicit */_Bool) ((short) (short)11555));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)176)) | (((/* implicit */int) var_11))))) ? (((max((var_7), (((/* implicit */unsigned long long int) var_12)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (signed char)41)))))))));
                /* LoopSeq 3 */
                for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    var_18 = ((/* implicit */unsigned char) ((((arr_4 [i_5] [i_5] [i_0] [i_0]) + (9223372036854775807LL))) << ((((((-(((/* implicit */int) arr_10 [(unsigned char)2] [i_1] [i_5] [i_5])))) + (30223))) - (50)))));
                    arr_15 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned short) min(((short)19309), (var_0))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_1 [i_0]))))) : ((-(((var_6) | (((/* implicit */int) var_10))))))));
                }
                for (long long int i_6 = 1; i_6 < 11; i_6 += 4) 
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_3 [i_0] [i_1] [i_6])), ((short)-19309))))) / (((unsigned int) (short)-8850))));
                    /* LoopSeq 1 */
                    for (int i_7 = 3; i_7 < 10; i_7 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) arr_17 [i_0] [i_0] [i_6] [i_7]);
                        arr_22 [i_0] [i_0] [i_7 - 1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 1815351708647473823LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_6 + 3] [i_6] [i_1] [i_6 + 3])))), (((/* implicit */int) arr_5 [i_6 + 2] [i_6 + 1] [i_1] [i_6]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) arr_16 [(signed char)8] [i_7 + 4] [i_7 + 2] [(signed char)8])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_16 [(short)12] [i_7 + 4] [i_7 + 2] [(short)12])))))))));
                            arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
                            var_22 |= arr_18 [(unsigned short)2] [i_1] [10ULL] [i_7];
                        }
                        var_23 += ((((/* implicit */int) (signed char)111)) ^ (((/* implicit */int) (signed char)-64)));
                    }
                    var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_18 [i_1] [i_6 + 3] [i_1] [i_6 + 3]), (((/* implicit */unsigned short) (short)-8588)))))));
                    arr_26 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((_Bool) (+(1143914305352105984ULL))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_30 [(unsigned short)7] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned short)7109)))) ? (max((((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))), (((/* implicit */int) (unsigned short)48868)))) : (((/* implicit */int) min((arr_23 [i_9] [i_1] [i_1]), (arr_23 [i_0] [i_1] [i_1]))))));
                    arr_31 [i_0] [(unsigned short)2] [(unsigned short)2] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_0] [8])) / (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [(unsigned short)8])), ((unsigned short)7109))))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 3; i_11 < 10; i_11 += 3) 
                        {
                            {
                                arr_38 [i_1] [i_0] [i_9] [i_1] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))));
                                arr_39 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) max((max((arr_7 [(unsigned char)1] [i_11 - 3] [i_1] [i_11 + 2] [(unsigned char)1]), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) ((short) var_4)))));
                            }
                        } 
                    } 
                    arr_40 [i_0] [i_1] [(_Bool)1] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)19309)) ? ((-(((int) var_9)))) : (((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) var_9)) - (6)))))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((unsigned long long int) var_5)) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 747287593)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (signed char)82)))))))));
    var_26 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (long long int i_12 = 0; i_12 < 23; i_12 += 4) 
    {
        for (unsigned char i_13 = 0; i_13 < 23; i_13 += 1) 
        {
            {
                arr_47 [i_12] [i_12] &= ((/* implicit */_Bool) min((((/* implicit */int) ((short) var_12))), ((+(1023681039)))));
                arr_48 [i_13] = ((/* implicit */_Bool) ((-2186622137340139981LL) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (arr_45 [i_12] [(unsigned short)12])))))));
                /* LoopNest 3 */
                for (int i_14 = 1; i_14 < 21; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (signed char i_16 = 0; i_16 < 23; i_16 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_53 [i_14 + 1] [i_14 + 1] [i_14 + 1])))))));
                                arr_57 [i_13] [i_13] [i_14] [i_14] [(unsigned short)22] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-98)) ? (arr_45 [3ULL] [i_14 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1023681039)) || (((/* implicit */_Bool) (-2147483647 - 1)))))) : (((((/* implicit */_Bool) min((arr_53 [i_12] [i_15] [i_15]), (((/* implicit */signed char) var_4))))) ? (((((/* implicit */_Bool) (unsigned short)20338)) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) var_14)))) : ((-2147483647 - 1))))));
                                arr_58 [i_12] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_46 [i_14 + 1] [i_13]), (((/* implicit */int) arr_51 [i_14 + 1]))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_11))))) : (var_12))) : (((/* implicit */long long int) ((((((/* implicit */int) var_10)) & (((/* implicit */int) arr_56 [i_12] [i_13] [(unsigned char)16])))) ^ (((/* implicit */int) (unsigned short)32584)))))));
                                var_28 = ((/* implicit */unsigned int) ((min((var_8), (((/* implicit */long long int) arr_55 [i_12] [i_13] [i_14 + 1] [(short)17] [i_16] [i_14 + 2])))) % (min((var_2), (((/* implicit */long long int) var_9))))));
                                arr_59 [i_12] [i_13] [i_16] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_14))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
