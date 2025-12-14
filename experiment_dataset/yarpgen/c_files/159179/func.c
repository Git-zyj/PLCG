/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159179
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_13 = ((/* implicit */unsigned int) var_1);
    var_14 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((long long int) var_9)))));
            /* LoopSeq 2 */
            for (long long int i_2 = 2; i_2 < 7; i_2 += 4) 
            {
                var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 + 1] [i_2 + 3] [i_2 - 1])) ? (arr_6 [i_2 - 1] [i_2 + 1] [i_2 + 3]) : (arr_6 [i_2 - 1] [i_2 + 1] [i_2 + 3])));
                var_17 = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_5)) << (((var_6) - (3748994964U)))))));
                arr_8 [0ULL] [i_0] [i_1] [i_2] = ((/* implicit */long long int) (((_Bool)0) ? (arr_4 [i_0] [i_2 - 1] [i_2 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 709902855882138354LL)) ? (607453986) : (((/* implicit */int) (unsigned char)121))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) : ((+(arr_6 [i_2] [i_1] [i_2])))))));
            }
            for (int i_3 = 2; i_3 < 8; i_3 += 1) 
            {
                var_19 += ((/* implicit */long long int) arr_1 [i_0]);
                var_20 = ((/* implicit */unsigned short) var_9);
            }
            var_21 += ((/* implicit */long long int) ((var_4) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1])))));
        }
        var_22 -= ((/* implicit */_Bool) ((signed char) (signed char)123));
        /* LoopSeq 3 */
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            arr_15 [i_0] [i_0] = ((/* implicit */_Bool) (+(arr_5 [i_0] [i_4])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    {
                        var_23 -= ((/* implicit */int) (_Bool)1);
                        var_24 = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (arr_13 [i_0] [i_4])));
                    }
                } 
            } 
            var_25 -= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : ((+(((/* implicit */int) (_Bool)1))))));
            var_26 = ((/* implicit */signed char) arr_9 [i_0]);
        }
        for (long long int i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_7])));
            var_28 = ((/* implicit */unsigned int) var_11);
            /* LoopSeq 1 */
            for (signed char i_8 = 1; i_8 < 9; i_8 += 1) 
            {
                var_29 = ((((/* implicit */_Bool) 0LL)) ? (3LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0]))));
                var_30 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) arr_21 [i_0] [i_7] [(unsigned short)2])) == (((/* implicit */int) (_Bool)0))))) : (((/* implicit */int) ((_Bool) (_Bool)1))));
                arr_24 [i_7] = (~(arr_4 [i_8 - 1] [i_8 - 1] [i_8 + 1]));
                var_31 = ((/* implicit */signed char) var_2);
                var_32 += ((/* implicit */long long int) ((var_5) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((arr_10 [i_7]) << (((((/* implicit */int) var_1)) - (15675)))))));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    for (short i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        {
                            var_33 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_7]))) : (arr_30 [i_0] [7LL] [i_9] [i_10] [i_9 - 1])));
                            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) arr_31 [i_0] [i_7] [i_9] [i_9] [(_Bool)1] [7ULL])))) : (((/* implicit */int) arr_0 [i_7])))))));
                            var_35 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 8646557140551822843LL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0])))))));
                            var_36 -= var_4;
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_37 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                    var_38 = ((/* implicit */unsigned int) ((_Bool) ((arr_19 [i_0] [(short)5] [(short)6] [i_12] [i_7] [i_7]) ? (2885308030U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                    var_39 = ((/* implicit */int) 0U);
                    var_40 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_19 [i_9 + 1] [i_9] [i_9] [i_9 + 1] [i_9] [i_9 + 2]))));
                    var_41 = ((/* implicit */_Bool) (+(arr_29 [i_9 + 1] [i_9 + 2] [i_9 + 2] [(_Bool)1] [i_9] [i_9 - 1])));
                }
                /* LoopSeq 1 */
                for (long long int i_13 = 1; i_13 < 9; i_13 += 1) 
                {
                    arr_37 [i_0] [(short)3] [5LL] [i_9] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [(_Bool)1] [9LL])))) ? ((+(2LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))));
                    var_42 = ((/* implicit */_Bool) ((long long int) 18446744073709551610ULL));
                    arr_38 [i_13] [i_7] [i_9] [i_13] = ((long long int) arr_29 [i_7] [i_7] [(short)8] [i_7] [i_13 - 1] [i_9]);
                    var_43 = ((/* implicit */short) ((long long int) ((_Bool) var_4)));
                    arr_39 [4U] = ((/* implicit */short) (+(((/* implicit */int) var_10))));
                }
                arr_40 [i_0] [i_7] [(short)6] [i_9] = ((/* implicit */unsigned int) arr_36 [i_0] [i_7] [i_9] [i_9] [(_Bool)1]);
                /* LoopSeq 1 */
                for (unsigned short i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    var_44 = ((/* implicit */int) (_Bool)0);
                    arr_44 [i_14] [i_14] [i_7] [(short)0] [i_14] [i_0] = ((/* implicit */unsigned long long int) arr_32 [i_9 + 1] [i_7] [i_7] [i_14] [i_7]);
                    var_45 = ((/* implicit */long long int) ((short) ((((/* implicit */long long int) 611146143U)) == (-7334070623703489860LL))));
                    var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) ((((/* implicit */int) arr_36 [8U] [i_14] [i_9 - 1] [1U] [i_9 - 1])) << (((-491092229175456274LL) + (491092229175456282LL))))))));
                }
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_47 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) -2LL)) : (arr_5 [i_0] [i_7])));
                var_48 -= ((/* implicit */short) (_Bool)1);
            }
        }
        for (long long int i_16 = 0; i_16 < 10; i_16 += 2) /* same iter space */
        {
            var_49 = ((/* implicit */long long int) arr_49 [i_16] [i_16] [i_16]);
            arr_53 [(_Bool)1] [i_16] [(_Bool)1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1] [i_16])) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
        }
        var_50 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_10)))) == (((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0] [1U]))));
    }
}
