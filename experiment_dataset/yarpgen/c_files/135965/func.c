/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135965
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_20 = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(2147483647)))), (max(((((_Bool)0) ? (arr_1 [i_0] [0]) : (var_17))), (9223372036854775787LL)))));
        arr_3 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) var_13)))))) >= (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) 1161331854)) : (0LL)))))), (min((((/* implicit */long long int) arr_2 [i_0] [i_0])), (arr_1 [i_0] [6U])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) arr_0 [i_1] [(short)8])) : (arr_5 [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1])))) : (((((/* implicit */_Bool) (-(-1161331870)))) ? (max((((/* implicit */long long int) 3338988830U)), (arr_1 [5ULL] [i_1]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_2 [i_1] [i_1])) : (arr_1 [i_1] [i_1])))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) 221974430)) | (6688077772121682942ULL))) >= (((/* implicit */unsigned long long int) 955978473U))));
    }
    /* LoopSeq 1 */
    for (signed char i_2 = 3; i_2 < 20; i_2 += 4) 
    {
        var_21 ^= ((/* implicit */int) ((((((((/* implicit */int) arr_11 [i_2] [i_2])) != (((/* implicit */int) (unsigned char)3)))) || ((!(((/* implicit */_Bool) var_3)))))) ? (((/* implicit */long long int) var_15)) : (((min((((/* implicit */long long int) arr_11 [i_2] [i_2 - 3])), (arr_9 [i_2]))) | (((/* implicit */long long int) ((/* implicit */int) ((var_14) == (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2])))))))))));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -10LL)) ? (((/* implicit */int) arr_11 [i_2] [i_2 - 2])) : (((/* implicit */int) var_19))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2])) && (((/* implicit */_Bool) -10LL))))) : (((((/* implicit */_Bool) arr_9 [i_2])) ? (var_15) : (((/* implicit */int) (unsigned char)101)))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2 - 1])) && (((/* implicit */_Bool) arr_11 [i_2 - 3] [i_2 - 1]))))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            {
                arr_17 [i_3] [i_3] [i_3] = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) arr_13 [i_3] [i_3 - 2])), (((arr_15 [i_3] [i_3] [i_3]) ? (15112215579760045316ULL) : (((/* implicit */unsigned long long int) var_18))))))));
                /* LoopSeq 4 */
                for (int i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 3; i_6 < 14; i_6 += 4) 
                    {
                        for (long long int i_7 = 4; i_7 < 16; i_7 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_12 [i_3 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3 + 2] [i_6 - 3]))) : (18446744073709551589ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 32767U)) ^ (arr_9 [i_7 - 1]))))));
                                arr_26 [i_3] = ((/* implicit */unsigned int) max((min((arr_12 [i_6 + 2]), (((/* implicit */unsigned long long int) arr_13 [i_3] [i_4])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)75)))))));
                            }
                        } 
                    } 
                    var_24 *= ((/* implicit */signed char) ((((arr_21 [14LL] [i_4] [i_3 - 2]) && (((/* implicit */_Bool) -9188995439446574823LL)))) ? (((/* implicit */int) arr_21 [i_3] [i_4] [i_3 + 1])) : (((/* implicit */int) (_Bool)1))));
                    arr_27 [i_3] [i_3] [i_3] [8ULL] = ((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-1)), (max((-221974426), (((/* implicit */int) (signed char)0))))));
                    var_25 -= ((/* implicit */_Bool) ((unsigned int) ((arr_14 [i_3 + 2]) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3 + 2]))))));
                    var_26 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3]))) : (0LL)))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_25 [i_3] [i_3] [16U] [i_5] [i_3]))) : (((((/* implicit */_Bool) 0)) ? (arr_12 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                }
                for (int i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
                {
                    arr_31 [i_3] [i_3] [(short)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((15112215579760045316ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_4])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((1161331854) / (var_2)))) ? (((/* implicit */int) (short)19683)) : (((((/* implicit */_Bool) 1076550438U)) ? (((/* implicit */int) (unsigned char)44)) : (565522586)))))) : (var_14)));
                    var_27 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((unsigned int) (short)0))) ^ (min((((/* implicit */unsigned long long int) -1LL)), (arr_12 [i_4])))))));
                    arr_32 [i_3] [i_4] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) arr_16 [i_8]))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (var_2) : (((/* implicit */int) (unsigned char)239))))) ? (((/* implicit */unsigned long long int) 1161331854)) : (((((/* implicit */_Bool) arr_22 [i_3 + 1] [i_4] [i_8] [i_8] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) var_2)) : (arr_12 [i_3])))))));
                    var_28 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (unsigned short)12426)) - (12400)))));
                }
                for (int i_9 = 0; i_9 < 17; i_9 += 2) /* same iter space */
                {
                    arr_35 [i_4] [i_3] [i_3 - 1] [i_4] = ((/* implicit */unsigned char) (~(4294934528U)));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (int i_11 = 1; i_11 < 14; i_11 += 3) 
                        {
                            {
                                var_29 = var_15;
                                var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (short)0))));
                                arr_43 [i_3] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_3 - 2] [i_4] [i_9] [i_9] [i_3 - 1])) || (((/* implicit */_Bool) arr_25 [4] [4] [4] [i_10] [i_3 - 2])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 4) 
                        {
                            {
                                var_31 ^= ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)251)))) : (((arr_16 [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))))))) > (((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) var_7)), (2147483647U))))))));
                                var_32 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((_Bool) (unsigned char)17))), ((unsigned char)172)));
                                arr_49 [i_3] [i_3] [i_3] [i_3] [10ULL] = (~(max((min((2LL), (arr_44 [i_3] [i_3]))), (min((arr_20 [(_Bool)1] [i_4] [7LL] [i_4]), (((/* implicit */long long int) arr_42 [2U] [11] [i_3] [i_12] [i_13])))))));
                                arr_50 [i_3] [i_3] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 1076550445U)) ? (((long long int) 10974582504867457331ULL)) : (((/* implicit */long long int) var_6))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 17; i_14 += 4) 
                {
                    var_33 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-29829))));
                    arr_53 [i_3] [i_4] = ((/* implicit */short) (!((_Bool)1)));
                    var_34 += ((/* implicit */_Bool) ((0LL) ^ (arr_52 [i_3] [i_3 - 3] [i_3 - 1])));
                }
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (int i_16 = 3; i_16 < 16; i_16 += 2) 
                    {
                        {
                            arr_59 [i_3] [i_4] [i_3] = ((/* implicit */int) arr_33 [i_3] [i_3] [i_3]);
                            var_35 = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)23)) == (((/* implicit */int) arr_56 [i_3] [i_3] [i_3] [i_3]))))) - (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) max((2147483637), (((/* implicit */int) (signed char)64))))));
                            var_36 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (max((((/* implicit */unsigned long long int) 4294967295U)), (5035727660851722313ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (1076550438U)))))) % (((/* implicit */unsigned long long int) ((var_10) * (((/* implicit */unsigned int) -1758144847)))))));
                        }
                    } 
                } 
                arr_60 [i_3] = ((((/* implicit */_Bool) (+(arr_16 [i_3 - 2])))) || (((/* implicit */_Bool) min((((/* implicit */long long int) max((547435312U), (((/* implicit */unsigned int) (signed char)-24))))), (max((((/* implicit */long long int) arr_30 [i_3])), (arr_44 [(_Bool)1] [i_4])))))));
            }
        } 
    } 
}
