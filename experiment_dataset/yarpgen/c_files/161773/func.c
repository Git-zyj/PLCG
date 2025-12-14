/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161773
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                arr_10 [i_2] [i_1] [i_1] [i_2] = (!(((0LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)0))))));
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) var_2);
                            var_14 &= ((/* implicit */short) (+((+((+(15707200665145824540ULL)))))));
                            arr_18 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) var_8);
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (var_4))), (arr_9 [i_0] [9LL])))) <= (((((/* implicit */_Bool) 0)) ? (arr_8 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2])))))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) 549755813887LL)) ? (((/* implicit */int) (short)-128)) : (((/* implicit */int) (unsigned char)0))));
                var_17 = arr_14 [i_0] [i_0] [(_Bool)1] [i_0] [i_0];
            }
            /* vectorizable */
            for (long long int i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
            {
                var_18 &= ((/* implicit */unsigned char) arr_9 [4] [i_1]);
                var_19 = ((/* implicit */signed char) arr_9 [(unsigned char)2] [i_0]);
            }
            for (long long int i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
            {
                var_20 = ((/* implicit */short) max(((-(arr_13 [i_6] [(signed char)2] [i_6] [i_6] [i_6]))), (((/* implicit */long long int) ((((/* implicit */_Bool) -2616702898472020013LL)) ? (((/* implicit */int) max(((short)-31719), ((short)-31728)))) : (((/* implicit */int) arr_20 [i_6])))))));
                /* LoopSeq 4 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_21 = var_1;
                    var_22 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (unsigned short)54618)))), (((arr_22 [i_0] [i_0] [i_6] [i_7]) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_6] [i_0])) : (((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_7]))))));
                }
                for (int i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        var_23 = ((/* implicit */short) ((((((((/* implicit */_Bool) 0ULL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54618))))) & (arr_13 [i_9] [i_1] [i_6] [i_8] [i_9]))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_9] [(unsigned char)8] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_6)) | (((/* implicit */int) arr_15 [i_1] [i_6] [i_8] [i_1])))))))));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_27 [i_1])) : (((/* implicit */int) var_11))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]))))) : (((((/* implicit */int) var_5)) * ((~(((/* implicit */int) var_12))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        var_25 = ((/* implicit */short) min((((/* implicit */long long int) var_7)), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_8] [i_10])) : (((/* implicit */int) var_12))))) + (arr_11 [i_1])))));
                        var_26 += ((/* implicit */signed char) arr_33 [4LL] [i_1] [4LL] [i_1] [i_1] [i_1] [i_1]);
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) max((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_6] [i_10])) ? (arr_13 [i_10] [i_8] [i_6] [i_1] [i_10]) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)4))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_10] [i_6])) ? (arr_28 [i_0] [i_8] [i_10]) : (arr_28 [i_0] [i_6] [i_8])))))))));
                    }
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)107)), (2010630507739898643LL))))));
                }
                for (int i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))));
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (+(((/* implicit */int) (short)31719)))))));
                }
                for (short i_12 = 2; i_12 < 6; i_12 += 2) 
                {
                    var_31 = ((/* implicit */unsigned short) ((((arr_1 [i_12 + 4]) ? (((/* implicit */int) (!(arr_22 [6LL] [i_1] [i_1] [i_1])))) : (((/* implicit */int) arr_30 [i_0] [i_1] [i_0] [i_12 - 2])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_42 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13274))) : (arr_24 [i_0] [i_0])))))))));
                    /* LoopSeq 4 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-16))))) ? (((((/* implicit */_Bool) (short)31718)) ? (4611686018427387903LL) : (((/* implicit */long long int) ((/* implicit */int) (short)31728))))) : (max((((/* implicit */long long int) var_6)), (arr_33 [i_12 - 1] [i_1] [i_6] [i_0] [i_13] [i_6] [(short)6]))))))));
                        var_33 = ((/* implicit */unsigned short) (-(max((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_13 [i_13] [i_1] [i_6] [i_12 - 1] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_14 = 1; i_14 < 7; i_14 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) var_0)) : ((~(arr_34 [i_0] [i_0] [i_0]))))))));
                        var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_43 [i_0] [i_6] [i_14 - 1] [i_12 + 4] [i_6] [i_12]))));
                    }
                    for (long long int i_15 = 0; i_15 < 10; i_15 += 1) 
                    {
                        arr_52 [i_12] [i_15] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_46 [i_0] [i_1] [i_0] [i_12 + 2] [i_15]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_16 [i_1] [i_1])))))))) ? ((~(((((/* implicit */int) arr_22 [2LL] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) var_10)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (var_0)))))))));
                        var_36 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                    {
                        var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) var_5))));
                        var_38 = arr_48 [i_12 - 2] [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16];
                    }
                }
            }
            arr_57 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_43 [(short)3] [(unsigned short)0] [i_0] [i_0] [(short)3] [i_0]), (var_11)))) ? ((~(((/* implicit */int) arr_43 [i_1] [i_1] [(_Bool)1] [(short)3] [i_1] [9LL])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_43 [4LL] [i_1] [i_1] [(unsigned char)0] [i_1] [6])) : (((/* implicit */int) var_11))))));
        }
        arr_58 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
    }
    var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))))));
    var_40 |= ((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (var_9)))) ? ((~(var_4))) : ((+(((/* implicit */int) (unsigned short)49277))))))));
}
