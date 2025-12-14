/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100735
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = (-(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (82441980198803825ULL))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_15 &= ((/* implicit */signed char) arr_15 [i_4]);
                                arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */unsigned long long int) var_1)) : (82441980198803825ULL)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) ^ (var_12))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)26408)) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                                arr_17 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned short)0)) ? ((-(((/* implicit */int) arr_0 [i_3])))) : ((+(((/* implicit */int) arr_0 [i_0])))));
                                arr_18 [i_3] = ((/* implicit */unsigned short) var_6);
                                arr_19 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -406018731)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) (signed char)97))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
                    {
                        arr_22 [(signed char)3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_13 [7] [i_1] [i_1] [i_5] [i_2])), (min((3059231553U), (((/* implicit */unsigned int) var_4))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_8 [i_1]), (arr_8 [i_5]))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1332361761U)) ? (((/* implicit */long long int) var_8)) : (arr_1 [i_1] [i_5])))), (max((var_2), (((/* implicit */unsigned long long int) arr_20 [10U] [i_2] [10U] [i_0]))))))));
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (min((var_9), (((/* implicit */unsigned int) arr_7 [i_5] [i_2] [i_1] [i_0])))) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_10 [i_0] [(unsigned short)11] [i_1] [i_1] [i_2] [i_5])), (arr_7 [i_0] [i_1] [i_2] [i_5]))))));
                        var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157))) : (var_8)));
                        var_18 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_11 [i_5] [i_0] [i_0])))) >= (((/* implicit */int) min((arr_14 [i_1] [i_0]), (arr_14 [i_1] [i_2]))))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
                    {
                        arr_25 [i_0] [i_1] [i_1] [i_2] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_0] [i_6] [i_2] [(signed char)0] [i_1]))) : (var_3))))));
                        arr_26 [i_2] [(unsigned short)8] [i_0] [i_6] [(unsigned short)8] [i_6] = ((/* implicit */unsigned short) arr_13 [i_0] [i_1] [i_2] [i_6] [i_2]);
                    }
                    var_20 = ((/* implicit */unsigned short) arr_0 [i_0]);
                }
                for (short i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
                {
                    arr_29 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned short) (unsigned char)149)), (var_7)));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_0 [i_1]))));
                }
                for (short i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) ((long long int) (~(((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(_Bool)1] [(_Bool)1] [i_9]))))))));
                                arr_37 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_0] [i_1] [(unsigned char)16] [i_8] [i_9] [i_10]))))) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_1] [i_8] [i_9] [i_10])) : (((/* implicit */int) min((arr_23 [i_0] [i_1] [i_8] [i_9] [i_9] [i_10]), (arr_23 [i_0] [i_1] [i_8] [i_9] [i_10] [i_9]))))));
                            }
                        } 
                    } 
                    var_23 |= arr_15 [13];
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_12 = 4; i_12 < 16; i_12 += 2) 
                        {
                            arr_45 [i_0] [i_11] [i_8] [i_11] [(unsigned char)0] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) < (((((/* implicit */int) var_14)) * (((/* implicit */int) (unsigned short)32159)))));
                            var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_8]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_3)))) ? (((/* implicit */int) arr_8 [(unsigned char)3])) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (long long int i_13 = 0; i_13 < 17; i_13 += 2) 
                        {
                            var_25 -= arr_31 [i_0] [i_1] [i_11] [i_13];
                            arr_48 [i_13] [i_11] [i_8] [i_11] [i_0] = ((/* implicit */short) ((var_5) > (arr_43 [i_1] [i_11] [i_13])));
                            var_26 = (-(arr_32 [i_0] [i_11] [i_0] [i_0]));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_11 [i_14] [i_1] [i_0]))));
                            var_28 = var_7;
                            arr_51 [i_0] [i_11] [i_11] [i_11] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0]))));
                            arr_52 [i_11] [i_1] [i_1] = ((/* implicit */unsigned short) ((arr_44 [i_0] [i_1] [i_0] [i_11] [i_11] [(signed char)1]) == (arr_44 [i_0] [i_0] [i_8] [i_0] [i_14] [i_8])));
                        }
                        for (unsigned int i_15 = 0; i_15 < 17; i_15 += 2) 
                        {
                            arr_56 [i_15] [i_11] [i_1] [i_11] [i_15] = ((/* implicit */unsigned long long int) ((arr_40 [i_0] [i_1] [i_8]) ^ (arr_40 [i_11] [i_8] [i_1])));
                            var_29 = arr_41 [i_11] [i_1] [i_11] [i_15];
                            arr_57 [i_0] [i_1] [i_8] [i_11] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_11] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ^ (((/* implicit */int) arr_21 [i_15] [i_11] [i_8] [i_1]))));
                        }
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) var_1))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_43 [i_0] [i_1] [i_8])) ? (1332361742U) : (arr_43 [i_1] [i_8] [i_8])));
                    }
                    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))))));
                }
                var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) (_Bool)0)) % (2147483647))) : (arr_7 [i_0] [(unsigned short)10] [i_1] [i_1])))) ? (((((/* implicit */_Bool) (~(82441980198803803ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_3)))) : (arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1994700985)) ? ((~(var_4))) : ((~(((/* implicit */int) (short)28826))))))))))));
                var_34 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_3 [3U] [i_1])) : (arr_33 [(unsigned char)11] [i_1] [i_0] [i_0] [i_0] [i_0]))) < (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_1] [i_0] [i_0] [i_0])) ? (arr_4 [i_1]) : (((/* implicit */int) (unsigned short)43445))))), (var_8))))));
                var_35 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_21 [i_0] [i_1] [i_0] [i_0]))))) / ((-(arr_43 [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)));
            }
        } 
    } 
    var_36 = ((/* implicit */signed char) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
    {
        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) var_14))));
        arr_61 [8U] |= ((/* implicit */short) var_10);
    }
    var_38 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
}
