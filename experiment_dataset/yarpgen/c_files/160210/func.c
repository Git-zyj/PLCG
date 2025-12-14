/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160210
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
    var_13 += ((/* implicit */unsigned int) (~((~(max((((/* implicit */long long int) (unsigned char)0)), (var_11)))))));
    var_14 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 8; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_3] [i_2]))))))));
                                var_16 = ((/* implicit */unsigned char) (~((~(18446744073709551615ULL)))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */signed char) ((short) min((max((((/* implicit */long long int) var_4)), (var_11))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_8 [i_0] [(unsigned char)7] [i_0] [(unsigned char)6] [i_0] [i_0]))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 2) 
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_1])) > (((/* implicit */int) var_8))))))) : ((-((-(((/* implicit */int) arr_3 [i_0] [i_0] [i_5]))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 4; i_6 < 9; i_6 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 2; i_7 < 9; i_7 += 4) 
                        {
                            var_19 = ((/* implicit */_Bool) min((min((arr_13 [i_0] [i_5 - 2] [i_7] [i_1]), (((/* implicit */long long int) (unsigned char)192)))), (((/* implicit */long long int) ((signed char) 2063924901411311777LL)))));
                            var_20 = ((3503370061U) >> (((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)235)), (1ULL)))) ? (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) 4294967283U)))) : (((/* implicit */unsigned long long int) var_11)))) - (18446744069414584308ULL))));
                        }
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) 60549690U)) ? (912274639285613073ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192)))));
                            var_22 = ((long long int) ((long long int) var_2));
                            arr_20 [i_8] [i_6] [2ULL] [8ULL] [i_0] = ((/* implicit */unsigned char) ((short) arr_13 [i_0 + 2] [i_1] [i_0 + 2] [i_1]));
                            arr_21 [i_0] [i_1] [(unsigned short)1] [i_6 - 2] [6ULL] |= var_8;
                        }
                        var_23 = ((/* implicit */unsigned long long int) var_0);
                        var_24 *= ((/* implicit */unsigned int) max((min((((unsigned char) arr_5 [i_0] [9LL] [(unsigned char)1])), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (arr_7 [(short)5] [(short)5] [i_0] [i_0])))))), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_12)))))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        arr_24 [i_1] [i_5 + 1] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 2058638308U)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)83))))))))));
                        var_25 = ((/* implicit */unsigned short) ((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 16ULL))))));
                        arr_25 [i_9] [i_1] [i_1] [i_9] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (signed char)-55))))));
                    }
                }
                for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        arr_33 [i_0] [i_0] [i_0] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_1] [i_10] [(_Bool)1])) ? (arr_8 [i_0 + 2] [i_0 + 1] [i_1] [i_10] [i_11] [i_11]) : (((/* implicit */long long int) var_6))))) > (var_2)));
                        arr_34 [i_0] [i_0] [i_1] [i_10] [2ULL] = ((/* implicit */long long int) ((unsigned short) min((1ULL), (((/* implicit */unsigned long long int) arr_23 [i_0] [(unsigned char)8] [i_0 + 1] [i_10])))));
                    }
                    var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((unsigned int) ((long long int) var_1)))) > (((unsigned long long int) arr_31 [(unsigned char)1] [i_0 + 2] [(unsigned char)1]))));
                }
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_1)))) ? (arr_11 [i_0 + 2] [i_0 + 2] [i_1] [(unsigned short)4]) : (((unsigned int) arr_11 [i_0 + 1] [(short)8] [(unsigned short)2] [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_12 = 0; i_12 < 24; i_12 += 4) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            {
                arr_41 [i_12] [4U] [14U] = ((/* implicit */unsigned char) var_8);
                var_28 = ((/* implicit */unsigned short) var_12);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_14 = 0; i_14 < 10; i_14 += 1) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 10; i_16 += 4) 
                {
                    for (unsigned int i_17 = 1; i_17 < 8; i_17 += 1) 
                    {
                        {
                            var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_17 + 2] [i_16] [6ULL] [i_17] [i_17] [0ULL] [i_16])) ? (var_1) : (12649407022439498875ULL)))) ? (((/* implicit */unsigned long long int) (-(2097144U)))) : (max((arr_9 [i_17 + 2] [i_15] [0LL] [i_17] [i_17] [i_16] [i_16]), (arr_9 [i_17 + 2] [i_15] [i_17] [i_17 + 2] [i_17] [8ULL] [i_15]))));
                            var_30 += ((((/* implicit */_Bool) 12891798787203766117ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))) : (5797337051270052752ULL));
                        }
                    } 
                } 
                var_31 = ((12891798787203766117ULL) | (((/* implicit */unsigned long long int) var_6)));
                var_32 = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) 5797337051270052743ULL)))));
            }
        } 
    } 
}
