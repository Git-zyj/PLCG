/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170454
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
    var_15 = ((/* implicit */signed char) 7582954418091609342LL);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0 + 2] [i_0 + 2] [i_0 + 2] [(unsigned char)13] [i_1] [(unsigned char)0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (2387485423U) : (1907481873U))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [i_1] [i_1])) : (((/* implicit */int) var_8)))))))), (max((((/* implicit */unsigned int) (_Bool)1)), (arr_5 [i_2 - 2])))));
                                arr_15 [i_1] [i_1] [i_3] = ((/* implicit */long long int) (!(arr_9 [i_2 - 1])));
                                arr_16 [i_0] [i_0] [i_2] [i_2 - 2] [i_1] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255))))), (((long long int) max((arr_7 [i_3]), (((/* implicit */long long int) (unsigned char)255)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    arr_20 [i_0 + 2] [i_1] [i_1] = ((/* implicit */unsigned int) ((signed char) ((((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned short)127)))) && (((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */int) var_3))))))));
                    arr_21 [i_1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((long long int) (!(((/* implicit */_Bool) arr_5 [i_5])))))));
                    arr_22 [i_1] = ((/* implicit */unsigned short) (unsigned char)255);
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 14; i_7 += 2) 
                        {
                            {
                                arr_27 [(unsigned short)4] [(unsigned short)4] [i_1] [i_1] [i_6] [(signed char)2] = arr_8 [i_0] [15U] [15U];
                                arr_28 [(_Bool)1] [i_1] [(_Bool)1] [i_7] [i_1] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) 2047LL)) ? (var_14) : (min((((/* implicit */unsigned int) var_9)), (3241841343U))))));
                                arr_29 [i_0] [i_0] [i_0] [i_1] [i_7 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_1] [i_1] [i_7 + 3] [4U] [i_0 - 1]))))) ? (max((var_14), (((/* implicit */unsigned int) arr_0 [i_0 + 1])))) : (((arr_5 [i_7 - 1]) / (arr_5 [i_7 + 1])))));
                                arr_30 [0LL] [11LL] [i_1] [(unsigned char)13] [i_1] [i_7] [i_7 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (unsigned short)142))) && (((/* implicit */_Bool) ((unsigned short) arr_26 [i_0 + 3])))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    arr_33 [(signed char)12] [i_1] [i_8] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
                    arr_34 [i_0] [(signed char)0] [i_8] [(unsigned char)10] = ((/* implicit */short) (!(((/* implicit */_Bool) 2097151U))));
                }
                for (unsigned char i_9 = 3; i_9 < 14; i_9 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        arr_41 [i_1] = ((/* implicit */_Bool) ((max((arr_5 [i_9 - 3]), (((/* implicit */unsigned int) min((var_6), (65535)))))) >> (((((((arr_9 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_19 [i_0] [i_1] [(unsigned char)8] [i_1]))) << (((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)28638)))) - (28623))))) - (3962011644U)))));
                        arr_42 [i_0 + 1] [i_1] [(signed char)2] [(signed char)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (-65510)))) ? (max(((((_Bool)1) ? (arr_31 [i_1] [(signed char)3] [i_9] [(signed char)3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)136))))), (((/* implicit */unsigned long long int) (unsigned short)65419)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_0 + 2] [(signed char)4] [i_10] [i_10])) ? (arr_19 [i_0 - 1] [i_9] [i_9] [i_9 + 2]) : (1130718879U))))));
                    }
                    for (signed char i_11 = 1; i_11 < 16; i_11 += 1) 
                    {
                        arr_45 [8LL] [i_9 - 1] [i_11 - 1] = ((/* implicit */signed char) ((((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_0] [i_1])) && ((_Bool)1))))))) % (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))))));
                        arr_46 [(unsigned char)14] [i_1] [(unsigned char)14] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) min((((unsigned char) var_7)), (((/* implicit */unsigned char) ((_Bool) (unsigned short)65401))))))));
                    }
                    arr_47 [(signed char)5] [i_1] [(signed char)5] = max((((/* implicit */unsigned int) var_3)), (min((arr_19 [13U] [6U] [13U] [6U]), (((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)0)))))));
                    arr_48 [(signed char)14] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [14U] [14U]))))))), (((/* implicit */int) ((unsigned char) arr_6 [i_0] [(unsigned char)10] [i_0])))));
                    arr_49 [i_0 + 3] [i_1] = ((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_10))) && (((/* implicit */_Bool) ((unsigned char) (signed char)-73)))))), (((signed char) ((int) var_7)))));
                    arr_50 [i_1] = ((signed char) (unsigned short)65393);
                }
                for (unsigned int i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    arr_53 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */unsigned char) arr_51 [(signed char)7] [i_0 + 1])), (var_1)))), (min((((((/* implicit */int) var_5)) | (var_4))), (((int) (unsigned short)142))))));
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 17; i_13 += 2) 
                    {
                        for (signed char i_14 = 0; i_14 < 17; i_14 += 3) 
                        {
                            {
                                arr_58 [i_0] [0ULL] [i_12] [i_13] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3241841343U)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-122)) > (((/* implicit */int) ((short) (signed char)-83)))))) : (((((/* implicit */_Bool) 65533)) ? (((((/* implicit */_Bool) 224903416804980101LL)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_12])))) : ((~(((/* implicit */int) (signed char)-6))))))));
                                arr_59 [i_1] [(signed char)10] [i_14] = ((/* implicit */unsigned char) ((long long int) ((int) 11450878065000314947ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                arr_64 [i_12] [i_1] [i_16] = ((/* implicit */int) var_11);
                                arr_65 [7] [i_1] [7] = ((/* implicit */unsigned char) (signed char)18);
                            }
                        } 
                    } 
                }
                arr_66 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (-(21)));
            }
        } 
    } 
}
