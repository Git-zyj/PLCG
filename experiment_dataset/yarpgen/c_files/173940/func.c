/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173940
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_2))));
    var_13 = ((/* implicit */int) min((min((var_9), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_4)), (var_10)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(601677228)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    var_14 *= ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                    arr_7 [i_0 + 2] [(_Bool)1] [i_1] = ((((/* implicit */_Bool) min((0ULL), (10ULL)))) ? (min((18446744073709551601ULL), (1677345177012112106ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 33ULL)))));
                    arr_8 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(min((var_7), (((/* implicit */int) var_4))))))) ? (((((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_6 [(unsigned short)9] [i_1] [(_Bool)1]))) & (((/* implicit */unsigned long long int) ((int) arr_2 [i_0]))))) : ((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9961))) : (var_9)))))));
                }
                for (short i_3 = 4; i_3 < 20; i_3 += 3) /* same iter space */
                {
                    arr_11 [i_0 - 3] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((arr_10 [i_1] [i_3 + 1] [i_1]) % ((~(((/* implicit */int) arr_5 [i_0 + 2] [i_0 - 3] [i_1]))))))));
                    var_15 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)-26896)) + (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_6 [i_0 - 1] [(short)20] [i_3 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0])) ? ((+(((/* implicit */int) (unsigned short)21047)))) : (arr_10 [(_Bool)1] [i_0 - 3] [i_0 + 2]))))));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (~((~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_10)))))))))));
                }
                /* vectorizable */
                for (short i_4 = 4; i_4 < 20; i_4 += 3) /* same iter space */
                {
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (!(((var_1) || (var_1))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (short i_6 = 3; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_18 [i_0 + 2] [i_0 + 2] [i_4] [i_1] [i_6 - 1] = ((/* implicit */short) ((_Bool) ((var_0) >= (arr_1 [i_0 - 2]))));
                                var_18 ^= (-(((/* implicit */int) (short)9961)));
                            }
                        } 
                    } 
                }
                for (signed char i_7 = 2; i_7 < 21; i_7 += 1) 
                {
                    arr_21 [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_5 [i_7 - 2] [i_7 - 1] [i_1])) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_19 [i_0 - 2] [(unsigned short)2] [i_1] [i_7 + 2])) : (((/* implicit */int) (_Bool)1)))))))));
                    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((min((((/* implicit */int) (signed char)-38)), (1816425061))), (((/* implicit */int) (!((_Bool)1))))))) != ((((!(var_1))) ? (arr_3 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [4ULL] [6ULL] [i_7])) && (((/* implicit */_Bool) var_3))))))))));
                    var_20 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_12 [i_0 + 3] [i_7 + 1] [i_7 + 1] [(signed char)6]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 4; i_8 < 22; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) min((min((1924126478), (((/* implicit */int) (short)3257)))), (var_5))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-142605736), (((/* implicit */int) (short)-27165))))) ? (((((/* implicit */_Bool) (unsigned short)28954)) ? (((/* implicit */unsigned int) arr_1 [i_7 + 2])) : (arr_24 [(signed char)1] [i_1] [20ULL] [10] [10] [(signed char)1]))) : (((/* implicit */unsigned int) (-(-1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) 1ULL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)74)) ? (142605737) : (142605725)))))))) : ((-(arr_6 [i_0 + 3] [i_1] [i_0 - 2])))));
                        }
                        var_23 ^= ((min((var_5), (((/* implicit */int) arr_20 [i_0 + 1] [i_0 - 1] [i_7 - 1] [i_8])))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_23 [i_7 - 1] [i_8] [i_7 + 2] [(unsigned char)20]) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_12 [i_8] [(signed char)14] [i_8 - 1] [21U])) : ((-(((/* implicit */int) arr_25 [i_0] [i_1] [i_7 - 2] [i_7 - 1] [i_8 - 3])))))));
                    }
                }
                arr_26 [i_0 - 2] [i_0 - 2] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-6895)), (16769398896697439510ULL)))) ? (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) arr_22 [i_0 - 1] [i_0 + 1] [8ULL] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13075))) : (18446744073709551583ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_13 [5]))))) < ((+(4616544224179182136ULL))))))));
            }
        } 
    } 
}
