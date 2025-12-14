/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132671
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
    var_20 = ((/* implicit */unsigned int) var_15);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_21 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]), (arr_3 [i_1 + 2] [i_1 + 2] [i_1 - 1]))))));
                    arr_7 [i_1] = ((/* implicit */_Bool) (((!((!(((/* implicit */_Bool) arr_6 [i_1])))))) ? (arr_6 [i_1]) : (var_0)));
                    arr_8 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (var_8))))));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) (+(11088434638010978329ULL)));
                }
                for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((int) var_6)), (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))))))));
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */short) arr_6 [i_1]);
                            arr_18 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) arr_16 [i_5] [i_1] [i_1] [i_4] [i_5] [i_3]);
                            var_24 = ((int) (signed char)23);
                            var_25 = ((/* implicit */signed char) arr_10 [i_1]);
                        }
                        for (int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) var_5)))));
                            arr_22 [i_1] [i_3] [i_4] [i_4] = ((/* implicit */short) (unsigned char)40);
                        }
                    }
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_23 [i_1 - 1] [i_0] [i_0])) ? (((/* implicit */int) arr_20 [i_7] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_0])) : (((/* implicit */int) arr_23 [i_1 - 1] [i_1] [i_1])))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_20 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_0])) : (var_0)))));
                        var_28 = ((/* implicit */signed char) max((var_28), (((signed char) (((!((_Bool)1))) ? (((/* implicit */long long int) ((int) arr_5 [i_0] [i_0] [i_0] [i_0]))) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        var_29 -= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_19 [i_1 + 2] [i_1] [i_1 + 2])) >> (((((/* implicit */int) arr_19 [i_1 + 1] [i_1 - 1] [i_1 - 1])) - (193))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_0] [i_1 + 2] [i_0] [i_1])) ? (arr_29 [i_0] [i_1 + 2] [i_1] [i_1]) : (((/* implicit */unsigned int) var_1)))))));
                            var_31 = ((((/* implicit */_Bool) ((arr_24 [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_1]) : (arr_10 [i_1])))) ? (arr_14 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1]) : (arr_14 [i_1] [i_1 + 2] [i_1 + 1] [i_1] [i_1 + 1] [i_0]));
                        }
                        for (unsigned short i_9 = 2; i_9 < 15; i_9 += 1) 
                        {
                            var_32 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 2])) ? (((((/* implicit */_Bool) var_1)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 2] [i_9]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))) ? (71987225293750272LL) : (max((((/* implicit */long long int) ((int) arr_5 [i_0] [i_0] [i_0] [i_0]))), (((var_14) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                            arr_33 [i_9] [i_7] [i_1] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8242))) : (arr_10 [i_1]))))));
                            var_33 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_1 [i_9] [i_9]))))));
                        }
                        for (int i_10 = 2; i_10 < 13; i_10 += 2) 
                        {
                            var_34 ^= ((/* implicit */unsigned long long int) var_7);
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 17437149946358990181ULL))) ? (((/* implicit */int) ((arr_35 [i_0] [i_0] [i_3] [i_3] [i_0] [i_10 + 2]) || (arr_11 [i_0] [i_1] [i_1] [i_10])))) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            arr_37 [i_1] [i_0] [i_1] [i_1] [i_7] [i_7] [i_10] = ((/* implicit */int) var_18);
                            var_36 = ((/* implicit */int) arr_20 [i_1] [i_1 + 1] [i_10 - 2] [i_10 + 2] [i_1] [i_10]);
                        }
                    }
                }
                arr_38 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_36 [i_1] [i_1] [i_1 + 1] [i_0] [i_0]);
                var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_1] [i_1] [i_1 + 2])) * (((var_14) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) (_Bool)1))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_11 = 3; i_11 < 15; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned int) var_16);
                        /* LoopSeq 2 */
                        for (int i_13 = 1; i_13 < 12; i_13 += 4) /* same iter space */
                        {
                            var_40 *= ((/* implicit */_Bool) arr_47 [i_1] [i_0] [i_12] [i_13]);
                            var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) var_12))));
                        }
                        for (int i_14 = 1; i_14 < 12; i_14 += 4) /* same iter space */
                        {
                            var_42 |= ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_14 [i_14] [i_14] [i_12] [i_11] [i_1 + 2] [i_0]))))));
                            var_43 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_14 + 3] [i_14 + 3] [i_14 + 2]))));
                            var_44 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_19 [i_1 + 2] [i_1 + 1] [i_1 + 1])) : (arr_45 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11] [i_1])));
                            var_45 = ((/* implicit */unsigned long long int) ((((((var_8) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) arr_13 [i_1] [i_1 + 2] [i_11 + 1] [i_14]))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 3; i_15 < 13; i_15 += 3) 
                    {
                        for (int i_16 = 0; i_16 < 16; i_16 += 2) 
                        {
                            {
                                var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_0)))))))));
                                var_47 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                                arr_56 [i_11 - 3] [i_1] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_1] [i_11] [i_15] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (18268341383694337897ULL))) ^ ((~(8394422794297470907ULL)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) var_1))));
    var_49 = ((/* implicit */short) ((((/* implicit */_Bool) 8394422794297470903ULL)) ? (var_6) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)2)), (816564214095656883ULL)))) ? (((/* implicit */unsigned int) var_8)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_6)))))));
}
