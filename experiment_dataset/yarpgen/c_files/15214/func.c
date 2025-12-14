/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15214
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
    for (signed char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))) ? (min((((/* implicit */unsigned int) arr_1 [i_0 - 1])), (var_8))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) < (var_7))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)5)) == (((/* implicit */int) (_Bool)1)))))) : (((arr_1 [i_0]) ? (9223372036854775805LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                    var_19 ^= ((/* implicit */_Bool) ((arr_8 [(_Bool)1] [i_1] [i_0 - 2] [i_3] [i_0 - 2] [i_1]) ? (-9223372036854775805LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0 - 1] [1U] [i_3] [i_0])))));
                    arr_10 [i_1] = ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)12))) : (-9223372036854775801LL));
                }
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (unsigned int i_5 = 4; i_5 < 8; i_5 += 2) 
                    {
                        {
                            var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (9223372036854775805LL) : (-6960846084271106416LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0])) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 1940971201U)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                            var_21 = ((/* implicit */signed char) ((4215886487U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                            var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-105)) && (arr_1 [i_1]))) ? (((/* implicit */int) arr_4 [i_0 - 2])) : (((/* implicit */int) arr_7 [i_5] [i_5 - 1] [i_5 - 1] [i_5] [i_5]))));
                            arr_15 [i_0] [i_1] [3U] [2U] [i_5 + 4] = ((arr_5 [i_1] [11U] [i_4] [i_5 + 3]) % (((/* implicit */unsigned int) ((/* implicit */int) var_5))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) ((((arr_13 [(_Bool)1] [(_Bool)1] [(signed char)5] [i_2] [i_2]) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) (signed char)75)))) * (((((/* implicit */int) var_13)) & (((/* implicit */int) arr_8 [8U] [11U] [i_1] [(_Bool)1] [8U] [i_2]))))));
            }
            var_24 = ((/* implicit */long long int) ((arr_1 [(signed char)8]) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-22)) && (((/* implicit */_Bool) 2167670407U)))))) >= (((arr_4 [i_0]) ? (2127296889U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [(_Bool)1])))))))) : (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-23)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_13 [i_0] [(_Bool)1] [i_0 - 2] [i_0 + 1] [i_0 - 2]))))));
            /* LoopSeq 1 */
            for (signed char i_6 = 2; i_6 < 11; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_25 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((unsigned int) arr_16 [i_0] [i_0 + 1] [i_6 + 1] [i_8])) * (((/* implicit */unsigned int) ((/* implicit */int) ((-9223372036854775806LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-29)))))))));
                            arr_26 [i_7] [i_1] [i_6 - 1] [(signed char)5] [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) var_3);
                        }
                    } 
                } 
                arr_27 [i_0 - 2] [i_0 - 2] [i_6 + 1] [i_6 + 1] = ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_6 - 2])) ? (((arr_14 [i_6 - 1] [i_6 - 2] [i_6 - 1] [i_6] [i_6 - 2] [i_6 - 2]) ? (1749049969U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)53))))) : (((((((/* implicit */_Bool) (signed char)-10)) ? (2342570211U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [1LL] [i_0] [1LL] [8LL] [i_6] [i_6 - 1]))))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)18)) & (((/* implicit */int) (signed char)-23))))))));
            }
        }
        arr_28 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 2] [i_0] [3U] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_0 - 2] [(signed char)2] [i_0 + 1] [i_0 + 1] [i_0])) : (((/* implicit */int) var_6)))));
    }
    for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
    {
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)10]))) >= (576460752295034880LL))) ? (min((((/* implicit */long long int) arr_1 [i_9])), (var_1))) : (((/* implicit */long long int) ((arr_1 [i_9]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_9]))) : (1749049969U)))))))));
        /* LoopNest 2 */
        for (signed char i_10 = 2; i_10 < 9; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                {
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((4294967295U) == (((/* implicit */unsigned int) ((/* implicit */int) ((9223372036854775789LL) < (((/* implicit */long long int) 2147483640U)))))))) ? ((+(2127296899U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775791LL)) && (((/* implicit */_Bool) var_1)))))))))))));
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
                        {
                            {
                                arr_43 [i_13] = ((/* implicit */long long int) var_17);
                                var_27 = ((/* implicit */_Bool) max((var_27), (((((/* implicit */int) arr_8 [i_9] [i_10] [i_11] [i_11] [8LL] [i_13])) == (((((/* implicit */int) arr_12 [i_9] [i_10] [i_10] [i_12] [i_9] [i_13])) | (((/* implicit */int) arr_8 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))))));
                                var_28 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_41 [i_13] [i_12] [i_10] [i_10] [i_10 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_13] [i_12] [i_12] [i_11] [i_10] [i_10 + 1]))) : (arr_41 [6LL] [i_13] [i_13] [i_13] [i_10 + 1]))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_9] [i_10 - 2] [i_11])) ? (((/* implicit */int) arr_13 [i_10 + 2] [i_10] [(_Bool)1] [(_Bool)1] [(signed char)1])) : (((/* implicit */int) ((arr_19 [i_9] [i_9] [i_9] [i_9]) > (var_18)))))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (var_4)))) ? (((((/* implicit */_Bool) 2167670396U)) ? (3282856758U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >> (((((/* implicit */int) (signed char)-18)) + (39)))));
                }
            } 
        } 
        var_30 = (signed char)15;
    }
    var_31 |= ((/* implicit */unsigned int) min((((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_2)))), (((/* implicit */int) var_3))));
}
