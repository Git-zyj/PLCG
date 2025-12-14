/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184010
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) min((((/* implicit */short) var_19)), ((short)15)))) + (((((/* implicit */_Bool) (short)-21124)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))))) : (((/* implicit */int) var_3))));
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (max((var_17), (((/* implicit */int) (short)-1)))) : (((/* implicit */int) (short)-2))))) ? (((/* implicit */unsigned long long int) min((((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) var_19))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-116)))))))) : (max((((/* implicit */unsigned long long int) (short)12)), (((((/* implicit */_Bool) (short)4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (15069753338421228729ULL))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) min((min((-9175997180602869584LL), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (short)-5))) / (var_4))))))));
            var_23 = min((((((/* implicit */long long int) ((/* implicit */int) var_7))) / (((-9175997180602869564LL) + (((/* implicit */long long int) ((/* implicit */int) var_0))))))), (((/* implicit */long long int) max((((((/* implicit */int) var_14)) * (((/* implicit */int) var_16)))), (((arr_0 [i_0]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))))));
        }
        for (long long int i_2 = 1; i_2 < 7; i_2 += 2) 
        {
            arr_8 [(unsigned char)7] [(unsigned char)7] [i_0] |= (~(((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2 - 1])) ? ((~(((/* implicit */int) (unsigned char)206)))) : (((/* implicit */int) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
            arr_9 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(3405096905U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (max((((/* implicit */long long int) (signed char)-42)), (1099511627775LL)))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))));
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) 67108863U)) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) (_Bool)1)))))));
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) min((var_11), (((/* implicit */short) var_14)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_18))))) ? (((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
        }
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)230)) ? (1LL) : (((/* implicit */long long int) 2147483647))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    arr_15 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) * (((long long int) var_4))));
                    arr_16 [i_0] [i_0] &= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)16320)) : (((/* implicit */int) arr_0 [i_4])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_5 = 3; i_5 < 23; i_5 += 2) /* same iter space */
    {
        arr_19 [i_5 - 3] = ((/* implicit */int) var_1);
        arr_20 [i_5 - 3] [i_5] = ((/* implicit */unsigned long long int) -1099511627776LL);
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                arr_25 [i_5] [i_7] = ((/* implicit */unsigned char) var_0);
                var_27 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
            }
            for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        {
                            arr_32 [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9175997180602869585LL)) ? (arr_30 [i_5 - 3] [i_5 - 1] [i_8 + 1] [i_8 + 1] [i_10]) : (((/* implicit */unsigned long long int) ((int) 736836197)))));
                            var_28 = ((/* implicit */signed char) ((unsigned char) var_15));
                        }
                    } 
                } 
                arr_33 [i_5] [i_6] [i_8 - 1] [i_8] = ((/* implicit */signed char) ((((unsigned long long int) var_10)) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))));
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_6])) ? (arr_30 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89)))));
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    var_30 += ((/* implicit */signed char) ((int) var_1));
                    /* LoopSeq 4 */
                    for (signed char i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))));
                        arr_39 [i_5] [i_11] [i_8] [i_5] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_26 [i_6] [i_11]))))));
                        var_32 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
                        var_33 = ((/* implicit */long long int) (short)18298);
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        arr_44 [i_5] [i_5] [i_8] [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32758))) / (7ULL)));
                        arr_45 [i_11] [i_6] [i_6] [i_11] [i_8] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_5 - 3] [i_5])) + (((/* implicit */int) var_9))));
                        var_34 = ((/* implicit */long long int) (~(var_8)));
                        var_35 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_38 [i_8] [i_8] [i_8 + 1])) ? (arr_38 [i_5] [i_5] [i_8 + 1]) : (arr_38 [i_8 - 1] [i_8 - 1] [i_8 + 1])));
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_5] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_23 [i_5 - 3] [i_5 - 3] [i_5 - 1])))))));
                    }
                    for (long long int i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        arr_48 [i_11] [i_5 - 2] = var_9;
                        var_37 = ((((/* implicit */_Bool) arr_21 [i_5 - 3] [i_5 - 3] [i_8 + 1])) ? (-26LL) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_5] [i_5] [i_5 - 1] [i_5] [i_5 + 1] [i_5] [i_8 + 1]))));
                        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_29 [i_11] [i_11] [i_11]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -1099511627776LL)))) : (var_8)));
                    }
                    for (short i_15 = 2; i_15 < 20; i_15 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2179563470U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6282632666461972597LL)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65526))) : (var_5))))))));
                        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)92))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_13)))) : (((((/* implicit */_Bool) var_19)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                    }
                    var_41 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 8335858064230767724ULL))));
                }
            }
            var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_4)))));
        }
    }
    /* vectorizable */
    for (unsigned char i_16 = 3; i_16 < 23; i_16 += 2) /* same iter space */
    {
        arr_55 [i_16] [i_16 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206))) % (var_4)))) : (arr_28 [i_16 - 3])));
        arr_56 [i_16 - 2] |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 922122243)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-93))))));
    }
    var_43 = ((/* implicit */unsigned long long int) min((8328819841463139169LL), (((/* implicit */long long int) (_Bool)1))));
    var_44 = ((/* implicit */unsigned int) (((-(((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) (!((_Bool)1))))));
}
