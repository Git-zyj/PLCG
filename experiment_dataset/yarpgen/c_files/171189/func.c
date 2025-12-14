/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171189
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_14 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 12189615784471226106ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((arr_6 [i_0 - 2] [i_1 + 1] [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))))))))) & ((+(2107467317U)))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -2959078116844878654LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 1] [i_0 - 2]))) : (6257128289238325509ULL)))));
                        arr_12 [i_1] = var_5;
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            var_16 *= (!(((/* implicit */_Bool) var_11)));
                            var_17 = (signed char)96;
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+(((arr_15 [i_0 + 2] [i_4 - 1] [i_1 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_2 [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0 + 1])))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) (signed char)0)) ? (12189615784471226126ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5] [i_1 - 1] [i_3])))))));
                        }
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
                        {
                            arr_23 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 5174296541654162072LL)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) (unsigned char)106))));
                            var_21 += ((/* implicit */_Bool) ((unsigned short) arr_20 [i_0 - 1] [i_6] [i_1 + 1] [i_3] [(signed char)4]));
                        }
                        for (long long int i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (((_Bool)0) ? (((((/* implicit */_Bool) arr_10 [i_7] [4U] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_10 [i_7] [i_3] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(signed char)14] [i_1 - 1]))) - (9223372036854775807LL)))))))));
                            arr_26 [i_1] [i_3] [0U] [0U] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)101))) : (3714162220U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [(unsigned char)1] [i_1 + 1] [i_1])) && (((/* implicit */_Bool) arr_19 [i_0] [i_1 + 1] [i_1] [i_1 + 1] [i_1]))))))));
                            var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) (signed char)76))));
                        }
                        var_24 = ((/* implicit */unsigned long long int) ((signed char) arr_5 [i_1 + 1] [i_1]));
                    }
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) arr_19 [i_0 + 2] [i_0] [i_0] [i_0] [i_1]);
                        arr_29 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_1] [(signed char)15] [(signed char)15])) ? (((/* implicit */int) arr_4 [i_1] [i_1 + 1] [i_8])) : (((/* implicit */int) arr_4 [i_1] [i_1 + 1] [i_1 + 1])))) / (((((/* implicit */int) arr_4 [i_1] [i_1 + 1] [i_2])) * (((/* implicit */int) arr_4 [i_1] [i_1 + 1] [i_1]))))));
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_10 [i_0] [i_0 + 2] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)15156)))) : ((~(var_10))))))));
                        arr_30 [i_1] [15U] [i_1] [(unsigned char)6] [i_2] = var_1;
                    }
                    for (unsigned long long int i_9 = 4; i_9 < 18; i_9 += 3) 
                    {
                        arr_34 [i_0] [i_1] [i_2] [(short)0] = ((/* implicit */short) var_5);
                        /* LoopSeq 4 */
                        for (short i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)1)) || (((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_9]))));
                            arr_37 [i_1] [8ULL] [i_2] [8ULL] [i_1] = ((/* implicit */short) ((unsigned long long int) ((((((/* implicit */unsigned long long int) 1493154506)) * (12189615784471226123ULL))) / (((/* implicit */unsigned long long int) arr_5 [i_9 - 4] [i_1])))));
                        }
                        for (short i_11 = 0; i_11 < 19; i_11 += 4) /* same iter space */
                        {
                            arr_41 [i_0] [(signed char)13] [i_1] [i_1] [i_1] [i_9] [i_1] = ((/* implicit */unsigned int) var_1);
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)0)))))));
                            var_29 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-32752)) > (((/* implicit */int) arr_7 [i_0 - 2] [0U] [i_9 + 1] [i_0 - 2])))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) ((signed char) (short)9628)))))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_30 = ((((/* implicit */_Bool) (-(arr_15 [i_0 - 1] [i_1 + 1] [i_9 + 1])))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) 3472672044U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_33 [i_0] [i_1 - 1] [i_1] [i_2] [i_9 + 1] [i_12])))));
                            arr_46 [i_0] [i_1] [i_0] [(_Bool)1] [(signed char)13] = ((/* implicit */short) ((((/* implicit */_Bool) -2142189284)) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) (unsigned char)255))));
                        }
                        for (signed char i_13 = 3; i_13 < 15; i_13 += 1) 
                        {
                            arr_50 [i_0] [i_0] [i_2] [i_1] [i_13 - 3] = ((/* implicit */short) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65504))) ^ (arr_47 [(_Bool)1] [i_1] [i_1] [i_13] [i_0 - 1])))));
                            var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)972)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) arr_44 [i_1 - 1] [i_9 - 1])))))));
                            var_32 *= ((/* implicit */int) ((var_7) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                        arr_51 [i_1] [(unsigned char)4] [10LL] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25925))) + (var_3))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 2; i_15 < 18; i_15 += 3) 
                        {
                            {
                                var_33 *= ((/* implicit */signed char) (+((~(((/* implicit */int) var_13))))));
                                var_34 += ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
                                var_35 = ((/* implicit */unsigned short) arr_49 [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)0))));
}
