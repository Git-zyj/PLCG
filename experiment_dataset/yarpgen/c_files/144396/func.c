/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144396
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] = ((((/* implicit */_Bool) ((var_1) ? (((var_8) | (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((var_5) | (((/* implicit */int) var_11)))))))) ? (var_13) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))) | (2096031032870417518ULL))));
                        arr_10 [i_0] [i_2] [i_1] [0LL] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_2))))) | (((((/* implicit */int) var_3)) | (var_7)))));
                        var_14 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_4))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_1))) | (var_8))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */unsigned long long int) var_9)) | (((var_13) | (((/* implicit */unsigned long long int) var_7))))))));
                        arr_11 [i_1] [i_2] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_6) ^ (((/* implicit */int) var_3)))) | (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (var_9)))) : (((((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) | (var_13)))));
                        arr_12 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) var_10);
                    }
                    for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        arr_16 [i_0] [(signed char)3] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_4))))) | (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_5)) | (var_13)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_2)))))))));
                        var_15 ^= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_13))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) | (((/* implicit */unsigned long long int) var_9))));
                        var_16 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((var_3) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_10))))) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) | (var_8)))));
                    }
                    /* LoopSeq 1 */
                    for (int i_5 = 4; i_5 < 17; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) | (var_9)))) : (var_13))) | (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) var_1)) : (var_6))))));
                        var_18 = ((/* implicit */unsigned int) ((((((var_8) / (var_8))) * (((var_8) / (((/* implicit */long long int) ((/* implicit */int) var_2))))))) * (((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_3)))))));
                    }
                    arr_20 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) | (((/* implicit */int) var_3)))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_9)) : (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) | (((var_8) | (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                    /* LoopSeq 4 */
                    for (short i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7184829966933813164ULL)) && (((/* implicit */_Bool) (signed char)-83)))))) | (((((/* implicit */unsigned long long int) var_6)) | (((16350713040839134103ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17))))))));
                            var_20 = ((/* implicit */long long int) var_0);
                            arr_27 [i_1] [i_1] [(signed char)19] [i_6] [i_7] = ((/* implicit */signed char) ((((var_6) | (var_5))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */int) var_3))))) ? (((((/* implicit */int) var_11)) | (((/* implicit */int) var_4)))) : (((((/* implicit */int) var_2)) | (var_7)))))));
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((((((/* implicit */long long int) ((/* implicit */int) var_0))) | (var_8))) | (((/* implicit */long long int) ((var_7) | (((/* implicit */int) var_0))))))) | (((/* implicit */long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_1))))))))));
                            var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_10))))));
                        }
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)31)) | (((/* implicit */int) (short)30436))));
                    }
                    for (short i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            var_24 = ((/* implicit */long long int) ((((var_7) | (var_6))) | (((var_4) ? (((var_6) | (((/* implicit */int) var_11)))) : (((var_6) | (var_9)))))));
                            arr_34 [i_1] [i_1] [i_2] [i_8] [17] [i_1] = ((/* implicit */short) ((var_1) ? (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (var_7))) | (var_6))) : (((/* implicit */int) var_2))));
                            var_25 = ((/* implicit */long long int) var_1);
                            arr_35 [i_1] [i_1] [8] [12ULL] [(signed char)17] = ((/* implicit */unsigned long long int) ((((((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_8))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_8))))) | (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            arr_36 [i_0] [i_1] [i_2] [(_Bool)1] [i_9] = ((/* implicit */long long int) var_13);
                        }
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)219))) | (1056690229433417875LL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_3)))))));
                    }
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        var_27 = ((/* implicit */signed char) (((_Bool)1) ? (-4260442391873330890LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)36)))));
                        /* LoopSeq 4 */
                        for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            var_28 = ((/* implicit */signed char) ((var_3) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (var_7)))) ? (var_7) : (((((/* implicit */int) var_11)) | (((/* implicit */int) var_3))))));
                            arr_43 [i_1] [i_1] = ((/* implicit */long long int) ((var_13) | (((/* implicit */unsigned long long int) ((var_7) | (var_7))))));
                        }
                        for (long long int i_12 = 2; i_12 < 19; i_12 += 3) 
                        {
                            var_30 = ((/* implicit */short) ((var_6) | (var_5)));
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (var_13)));
                            arr_46 [i_0] [i_1] [i_2] [i_10] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) | (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))));
                            var_32 = ((/* implicit */signed char) ((var_4) ? (((/* implicit */long long int) var_6)) : (var_8)));
                        }
                        for (int i_13 = 0; i_13 < 20; i_13 += 3) 
                        {
                            var_33 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */int) var_4)))) | (((/* implicit */int) var_0))));
                            arr_51 [i_0] [i_1] [i_1] [i_10] [i_13] = var_0;
                            var_34 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_1))));
                        }
                        for (unsigned int i_14 = 2; i_14 < 19; i_14 += 3) 
                        {
                            arr_54 [i_0] [i_1] [i_2] [i_2] [i_1] [i_10] [i_1] = ((((/* implicit */int) var_1)) | (var_7));
                            arr_55 [i_0] [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_2)) | (((/* implicit */int) var_2))))));
                            var_35 = ((/* implicit */signed char) var_13);
                        }
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 3) 
                    {
                        arr_58 [i_1] [i_2] = var_5;
                        arr_59 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) : (((var_3) ? (var_13) : (((/* implicit */unsigned long long int) var_9))))));
                    }
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_7)) | (((var_4) ? (((/* implicit */long long int) var_5)) : (var_8)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))) | (((var_13) | (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (var_6))) / (((/* implicit */int) var_10)))))));
}
