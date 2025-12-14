/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137957
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_0]))) | (((unsigned int) ((((/* implicit */int) arr_0 [i_1])) < (((/* implicit */int) arr_0 [(unsigned char)6])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */long long int) arr_3 [i_0] [i_0] [(short)6]);
                        var_15 = ((/* implicit */_Bool) arr_8 [i_0] [i_0]);
                        var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) ^ (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_3] [i_0] [i_2])))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [6ULL] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-29))) : (arr_9 [i_0] [i_3] [(unsigned char)4])))) ? (min((arr_9 [i_3] [i_3] [(unsigned char)0]), (((/* implicit */long long int) var_0)))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42824))) : (arr_9 [8ULL] [i_3] [i_3]))))))));
                        arr_11 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_10 [i_0])) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0])) ? (-2361885776424896896LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [0LL] [i_0] [i_0])))))))), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_2]))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((unsigned int) var_0))))) ^ (min((min((((/* implicit */unsigned long long int) var_10)), (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_5))))))))))));
    /* LoopSeq 3 */
    for (int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                {
                    arr_19 [i_5] [(short)4] [i_6] [i_6] = ((/* implicit */short) arr_15 [i_4] [i_5] [i_5]);
                    arr_20 [i_6] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_6])) | (((/* implicit */int) ((_Bool) ((unsigned char) 2361885776424896895LL))))));
                    arr_21 [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((2361885776424896879LL) == (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_6]))))))) != (((long long int) arr_18 [i_4] [(short)18] [i_6]))));
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_15 [i_4] [i_5 + 1] [i_4])))), (((/* implicit */int) ((unsigned short) -1LL)))))) ? (((((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4]))) | (3LL))) << (((((((((/* implicit */int) arr_12 [i_4])) + (2147483647))) >> (((1623509404U) - (1623509385U))))) - (4059))))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6]))))))));
                }
            } 
        } 
        arr_22 [i_4] [i_4] = var_10;
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_4])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_16 [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [(signed char)8] [i_4])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)124)))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115))) : (arr_18 [(unsigned char)18] [(unsigned char)18] [4LL]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) arr_17 [i_4])) : (((/* implicit */int) var_9))))))))));
    }
    for (short i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                {
                    arr_32 [i_7] [8U] &= ((/* implicit */int) ((((_Bool) arr_17 [(_Bool)1])) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_8])) ? (arr_18 [i_9] [i_8] [1]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [8U])))))), (arr_16 [i_7] [i_8] [i_8] [i_8]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_17 [i_9])), (arr_28 [i_7]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 3; i_10 < 20; i_10 += 4) 
                    {
                        for (unsigned short i_11 = 2; i_11 < 18; i_11 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_7] [i_11] [i_7] [i_7] [i_11] [i_10 - 1] [i_11 + 1]))) != (((((/* implicit */_Bool) 2361885776424896896LL)) ? (arr_28 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_11 + 3])))))));
                                arr_38 [i_8] [i_10] = ((/* implicit */short) ((((arr_18 [i_10 - 3] [i_11 + 3] [i_11]) - (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_10] [i_10 - 2] [i_10] [i_10 - 3] [i_10 - 3]))))) - (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_30 [i_7]))));
                                arr_39 [(unsigned char)17] [i_10] [16U] [i_10] [(unsigned short)4] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_10] [(unsigned char)19] [i_10 + 1] [i_10] [(_Bool)1]))) - (((((((/* implicit */long long int) -317256691)) != (9223372036854775807LL))) ? (((/* implicit */long long int) ((317256696) % (((/* implicit */int) arr_14 [i_10] [i_10] [i_10]))))) : (max((((/* implicit */long long int) 3161206257U)), (arr_18 [i_11] [(_Bool)1] [i_7])))))));
                                arr_40 [i_10] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_37 [i_10 - 3] [i_11 + 1] [i_11] [(unsigned char)18] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_11 + 2] [i_10 + 1] [i_10 - 2] [(signed char)10] [(signed char)10])) ^ (((/* implicit */int) (unsigned short)54270))))) : (max((arr_16 [i_10 - 1] [i_11] [i_10] [23ULL]), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_28 [i_7]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_41 [i_7] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) arr_15 [i_7] [i_7] [i_7])), (((2361885776424896896LL) / (((/* implicit */long long int) ((/* implicit */int) var_4))))))), (((/* implicit */long long int) arr_12 [i_7]))));
    }
    for (int i_12 = 2; i_12 < 23; i_12 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_23 = ((/* implicit */unsigned int) max((((4062212004222407430LL) / (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_12 + 2]))))), (arr_18 [(unsigned short)20] [i_12] [i_12])));
                arr_49 [6LL] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)7)), ((short)-6054)))) ? (((arr_16 [i_12 + 2] [i_12 - 1] [i_12] [i_12 - 1]) + (arr_16 [i_12 - 2] [i_12 - 2] [i_12] [i_12 - 1]))) : (arr_16 [i_12 + 1] [i_12 + 1] [i_12] [i_12 + 2])));
                var_24 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_12] [i_12 - 1])) && (((/* implicit */_Bool) arr_48 [i_12] [i_12 - 1]))))), (2361885776424896871LL)));
                arr_50 [i_14] [i_13] = ((/* implicit */signed char) var_10);
                var_25 = ((/* implicit */short) arr_44 [i_13]);
            }
            arr_51 [i_12 + 2] = ((/* implicit */signed char) ((((unsigned long long int) arr_42 [i_12 - 2])) != (((/* implicit */unsigned long long int) arr_46 [i_13] [i_13] [i_13]))));
            arr_52 [i_12] [(unsigned char)14] [i_13] = ((/* implicit */signed char) var_12);
        }
        for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 1) /* same iter space */
        {
            var_26 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_53 [i_12] [(_Bool)1])) ? (max((((/* implicit */long long int) (unsigned short)42463)), (-2361885776424896846LL))) : (((/* implicit */long long int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned char) (signed char)-15)))))))) << (((-710700785) + (710700830)))));
            arr_56 [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_47 [i_12 - 1] [i_12 + 2] [i_12 - 1]) * (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_55 [i_15] [i_15])), (arr_18 [i_12] [i_12] [i_15]))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_17 [i_12])) <= (((/* implicit */int) var_7)))))) : (((/* implicit */int) arr_15 [i_12] [i_12] [i_15]))));
        }
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_53 [i_12 - 1] [i_12 + 2])), (arr_44 [i_12 - 1])))) ? (((8683913746183849543LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)48))))) : (((/* implicit */long long int) max((((/* implicit */int) arr_53 [i_12 + 2] [i_12 + 2])), (var_3))))));
        var_28 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)65535)) && (((317256690) < (((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_12 - 2] [i_12]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_12 + 2]))) / (((long long int) 72057591890444288ULL))))));
    }
}
