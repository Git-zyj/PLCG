/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176431
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
    var_14 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -9223372036854775805LL)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (signed char)-85)))), (((/* implicit */int) (signed char)-80))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_1]) <= (arr_0 [i_0])))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 4; i_2 < 8; i_2 += 3) 
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_6 [3U]))));
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_17 ^= ((/* implicit */unsigned long long int) ((unsigned short) (signed char)-75));
                        var_18 += ((/* implicit */long long int) 18446744073709551588ULL);
                    }
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_10 [i_2] [i_2] [i_2] [i_2 - 2] [(unsigned char)8])) / (((var_1) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-58))))))))));
                        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_5)), ((+(((/* implicit */int) (signed char)62)))))))));
                    }
                    for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_21 = arr_6 [i_1];
                        var_22 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)117))) | (arr_6 [i_2 - 2]))));
                    }
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
                        {
                            var_23 ^= ((/* implicit */int) arr_8 [i_0] [i_2] [i_6] [i_7]);
                            var_24 = max((((/* implicit */unsigned char) ((signed char) arr_16 [i_0] [i_1] [i_2 + 1] [i_0] [4LL]))), (arr_4 [i_7] [i_2]));
                            var_25 = ((/* implicit */signed char) max((var_9), (((/* implicit */int) ((_Bool) min((var_6), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_2] [i_6] [i_6]))))))));
                            arr_18 [i_2] [5] [i_2] [5] [i_2] = ((arr_6 [i_7]) == (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2 - 2] [i_7] [2ULL] [i_7] [(_Bool)1]))));
                        }
                        for (signed char i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned short) (-(arr_20 [i_0] [(signed char)4] [i_1] [i_6] [i_6])));
                            var_27 = ((/* implicit */int) max((arr_13 [i_0] [i_0] [i_2] [i_6] [i_6]), (max((arr_13 [i_2] [i_2] [5ULL] [i_2] [i_2 - 2]), (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2 + 1])))));
                            var_28 = ((/* implicit */unsigned int) -6791338521190741786LL);
                            arr_21 [1LL] [9LL] [i_2] [i_2] [8LL] [0U] [(unsigned char)3] = ((/* implicit */unsigned char) ((int) min((((/* implicit */int) (_Bool)0)), (arr_10 [i_2 + 2] [i_2 - 3] [i_2] [i_2 - 1] [i_2 + 1]))));
                        }
                        for (signed char i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
                        {
                            var_29 -= ((/* implicit */unsigned char) arr_7 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]);
                            var_30 ^= ((/* implicit */unsigned char) (+(max((arr_23 [i_2] [i_2] [i_2 - 2] [(unsigned short)7] [i_2 - 1]), (arr_23 [i_2] [i_2 - 2] [i_2 + 1] [i_2] [(signed char)1])))));
                        }
                        var_31 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((max((var_3), (((/* implicit */unsigned int) arr_22 [i_0] [i_1] [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_10 [i_0] [i_1] [8] [i_0] [i_1]) : (((/* implicit */int) (short)32744)))))))), (((((/* implicit */_Bool) arr_20 [i_0] [(unsigned char)7] [i_1] [i_2] [i_6])) ? (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])) : (17251727403543726493ULL)))));
                        var_32 = arr_4 [i_0] [i_0];
                    }
                    arr_24 [i_2] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_6 [i_2])))) == (arr_23 [i_0] [(signed char)8] [i_0] [1] [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2791224706U)) ? (((/* implicit */long long int) arr_17 [i_0] [i_0] [i_0] [i_0])) : (arr_0 [i_1]))))))) : ((-(((int) (unsigned char)118))))));
                }
                for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    arr_28 [i_10] [i_0] [i_10] = ((/* implicit */unsigned char) ((1195016670165825123ULL) * (min((((arr_3 [i_0] [i_1] [i_1]) | (((/* implicit */unsigned long long int) arr_20 [3U] [i_1] [(_Bool)1] [i_0] [i_1])))), (((/* implicit */unsigned long long int) (signed char)-125))))));
                    var_33 = ((/* implicit */unsigned int) var_9);
                    var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))))), ((signed char)-117))))));
                    var_35 = ((/* implicit */signed char) var_11);
                }
                arr_29 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_14 [i_1] [8LL] [i_1] [i_0] [8LL] [i_0])), (arr_15 [i_0] [i_1] [i_0] [i_1] [i_1] [i_0])))), (max(((~(arr_3 [i_0] [i_0] [i_1]))), (max((((/* implicit */unsigned long long int) arr_1 [2LL])), (5123005298781923156ULL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 3) 
    {
        for (unsigned short i_12 = 1; i_12 < 15; i_12 += 3) 
        {
            {
                var_36 = ((/* implicit */unsigned long long int) ((unsigned char) ((long long int) -2031813112)));
                /* LoopSeq 1 */
                for (unsigned int i_13 = 0; i_13 < 16; i_13 += 3) 
                {
                    arr_38 [i_11] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) arr_30 [i_11]))), ((~(10092227527656581878ULL)))))) ? (((/* implicit */int) var_0)) : (1877334635)));
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 1; i_14 < 12; i_14 += 3) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 16; i_15 += 3) 
                        {
                            {
                                var_37 += ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (~(arr_33 [0ULL] [14U] [i_12]))))) * (((/* implicit */int) ((arr_42 [i_11] [i_12] [i_12] [i_12 + 1] [15U] [i_12 - 1]) == (((/* implicit */unsigned long long int) arr_37 [i_12] [(unsigned char)2] [i_12])))))));
                                arr_45 [i_11] [i_11] [i_15] = ((/* implicit */signed char) ((unsigned int) max((arr_44 [i_15] [i_14 + 3] [(unsigned char)3] [i_12] [i_11]), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_15] [i_14] [i_13] [i_12 + 1] [i_11]))) == (var_3)))))));
                                var_38 = ((/* implicit */unsigned long long int) max((var_38), (((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)(-127 - 1))) : ((-2147483647 - 1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)(-32767 - 1))) : (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL))))) : (150676951001227912ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((signed char) arr_35 [i_15] [i_13])))))))));
                                arr_46 [i_11] [i_12] [i_11] [i_14] [i_15] = ((/* implicit */signed char) (((-(var_9))) == (((/* implicit */int) max((arr_34 [i_11] [i_12] [(signed char)13]), (arr_34 [i_12 - 1] [i_12] [i_14 + 1]))))));
                                var_39 ^= ((/* implicit */unsigned int) arr_33 [i_14] [i_12 + 1] [i_12 + 1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_16 = 1; i_16 < 13; i_16 += 3) 
                    {
                        for (unsigned char i_17 = 4; i_17 < 13; i_17 += 3) 
                        {
                            {
                                arr_52 [i_11] [i_11] [i_13] [i_16] [i_11] [i_16 + 3] [i_17 + 1] = ((/* implicit */unsigned char) ((signed char) 4294967294U));
                                var_40 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_51 [i_11] [i_11] [i_11] [i_11] [(unsigned short)8] [i_11]))) == (arr_48 [(_Bool)1]))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) max(((short)-16492), (((/* implicit */short) arr_51 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))))))))));
                            }
                        } 
                    } 
                    var_41 = ((/* implicit */unsigned char) arr_42 [i_11] [i_12] [i_12] [i_13] [i_13] [i_12]);
                }
                arr_53 [i_11] = ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))), (var_6))));
            }
        } 
    } 
    var_42 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_10), (var_9))))));
}
