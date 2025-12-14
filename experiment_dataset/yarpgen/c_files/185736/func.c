/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185736
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
    var_19 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((var_16) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)4625))))) ^ ((~(0LL)))))) > (((((arr_3 [i_1] [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (-6227733329212909050LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15301))))))))));
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_21 = max((((((/* implicit */unsigned long long int) (~(-1229517207)))) / (6752467957619776802ULL))), (((/* implicit */unsigned long long int) (short)9082)));
                    arr_6 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((short) (~(arr_2 [i_2]))));
                }
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((min((arr_5 [i_4] [i_4] [i_3] [i_0]), ((~(((/* implicit */int) (_Bool)1)))))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_4 [i_0] [i_4] [i_1])) ? (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) arr_7 [i_4] [i_3] [i_1] [i_0])))) - (4333634805221424536LL))))))));
                                var_23 = (+((((-(((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) (_Bool)0)))));
                                arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1107673470292339394ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_0)))) : (1107673470292339394ULL)))) ? (((/* implicit */int) min(((_Bool)0), (((((/* implicit */unsigned int) 1842147885)) >= (1523028813U)))))) : (((/* implicit */int) (short)(-32767 - 1)))));
                            }
                        } 
                    } 
                    var_24 = var_3;
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_7 = 2; i_7 < 15; i_7 += 3) 
                    {
                        var_25 = ((((((/* implicit */_Bool) ((unsigned long long int) 6200506507573823308LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-44))))) : ((((_Bool)0) ? (17339070603417212222ULL) : (11147866084980112224ULL))))) / (((/* implicit */unsigned long long int) ((-1536949173) ^ (((/* implicit */int) (unsigned char)144))))));
                        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) arr_18 [(_Bool)1] [(_Bool)1] [i_1] [i_0])) % (var_14))))))));
                        arr_20 [i_0] [i_0] [(short)13] [i_0] = (~(((((/* implicit */_Bool) (-(1107673470292339394ULL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) 0)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        var_27 *= (((_Bool)1) ? (299037270U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                        arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)8)) ^ (arr_5 [i_8] [i_6] [i_1] [i_0])));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_17 [i_0] [i_1] [i_6] [i_6]))) - (((/* implicit */int) var_1))));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        arr_27 [i_0] [i_0] [i_9] [i_9] = ((/* implicit */unsigned int) var_4);
                        var_29 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (0U)))));
                        arr_28 [i_9] [i_9] [i_9] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [3U])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)111)))))));
                        arr_29 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_9])) : (((/* implicit */int) (_Bool)1))));
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((17339070603417212221ULL) ^ (2983651385537322782ULL)))));
                    }
                    for (int i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        var_31 = ((/* implicit */int) max((15463092688172228820ULL), (((/* implicit */unsigned long long int) (signed char)111))));
                        var_32 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0])))))) - (((((/* implicit */long long int) var_10)) % (((((/* implicit */_Bool) 9952909782679886172ULL)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) 
                        {
                            var_33 = ((/* implicit */short) var_5);
                            arr_36 [i_0] [i_1] [2LL] [i_10] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_11] [i_11] [i_10] [i_10] [i_1] [i_1] [i_0]))))) + (((unsigned long long int) (-(var_10))))));
                        }
                        /* vectorizable */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_34 = ((/* implicit */signed char) (+(((/* implicit */int) arr_21 [i_0] [i_1] [i_6] [i_0]))));
                            var_35 = ((/* implicit */short) arr_38 [i_12] [i_10] [i_6] [i_1] [i_12]);
                        }
                        arr_39 [i_6] [13LL] = ((/* implicit */_Bool) var_11);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 1; i_13 < 13; i_13 += 4) 
                    {
                        for (short i_14 = 0; i_14 < 17; i_14 += 4) 
                        {
                            {
                                var_36 = var_8;
                                arr_44 [i_0] [(unsigned char)9] [i_0] [(unsigned char)9] [i_13] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) != (min((((arr_13 [i_0] [i_0] [i_1] [i_14] [i_14] [i_14] [i_14]) ? (7257136578332714560ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))), (((/* implicit */unsigned long long int) arr_0 [i_1]))))));
                                arr_45 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(15463092688172228834ULL)));
                                arr_46 [i_14] [i_0] [(short)6] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-15469)))))));
                            }
                        } 
                    } 
                    var_37 = (_Bool)0;
                    var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) (((_Bool)1) || ((_Bool)0)))))));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    var_39 *= ((/* implicit */_Bool) max(((+(arr_2 [i_15]))), (((/* implicit */int) (!(((/* implicit */_Bool) 17339070603417212221ULL)))))));
                    arr_50 [i_15] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8)))) : (max((((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_0] [i_0])), (var_11))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_13 [i_0] [i_15] [i_15] [i_15] [16LL] [4U] [i_1])) : (((/* implicit */int) var_16))))) + (max((((/* implicit */unsigned int) (signed char)-1)), (var_12))))))));
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 17; i_16 += 1) 
                {
                    for (unsigned int i_17 = 4; i_17 < 16; i_17 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned short) ((((unsigned long long int) arr_12 [i_0] [i_1] [i_1] [i_1] [i_17 - 3] [i_17])) * (((arr_12 [i_17] [i_17] [i_16] [i_1] [i_1] [i_17]) / (((/* implicit */unsigned long long int) -1799384859))))));
                            var_41 = ((/* implicit */long long int) (((+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_41 [i_0] [8U] [i_16] [i_17])) : (var_15))))) >= ((~(((/* implicit */int) (_Bool)1))))));
                            arr_56 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned char)0)))) - (((/* implicit */int) max((((/* implicit */short) var_5)), ((short)16731))))))), ((+(261654832U)))));
                            /* LoopSeq 1 */
                            for (long long int i_18 = 4; i_18 < 13; i_18 += 2) 
                            {
                                arr_59 [i_0] [15ULL] [i_16] [15ULL] [(short)1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_5 [i_17 - 1] [i_18] [i_18] [i_17 - 1])))) ? ((-(arr_34 [i_1] [i_1] [i_18 - 1] [i_18] [i_18] [i_18] [i_18]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_1] [i_1] [i_17] [i_1]))) / (arr_57 [i_0] [i_0] [i_16] [i_0] [i_18 - 3] [i_0] [i_16]))))))))));
                                var_42 = ((/* implicit */unsigned short) ((short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)101))) : (12LL))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_43 = ((/* implicit */signed char) (+(min(((+(var_13))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)144)))))))));
}
