/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175800
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_13 [i_3 + 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_7);
                        arr_14 [i_1] [i_2] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_10);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 2; i_6 < 10; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) arr_17 [i_0] [i_7]);
                                var_12 += ((/* implicit */int) var_4);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) | (((arr_16 [i_5] [i_5]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
                        var_14 = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) (unsigned char)165)))));
                    }
                    for (unsigned int i_9 = 4; i_9 < 11; i_9 += 2) 
                    {
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */int) (signed char)70)) / (((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (unsigned short)41718)))))))));
                        arr_31 [i_5] = ((/* implicit */_Bool) arr_5 [i_9] [i_0] [i_0]);
                        arr_32 [i_0] = ((/* implicit */int) ((arr_3 [i_5]) >= (((/* implicit */long long int) arr_7 [i_0]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            var_16 -= ((/* implicit */unsigned char) ((long long int) ((((((/* implicit */_Bool) (signed char)75)) ? (var_7) : (((/* implicit */unsigned long long int) arr_7 [i_9])))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)100))))))));
                            var_17 = ((/* implicit */unsigned short) arr_5 [i_10] [i_4 + 1] [i_4 + 2]);
                            var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_23 [i_0] [i_4 + 1] [i_0] [i_9 - 1] [i_10])), (((unsigned int) (short)-16237))));
                        }
                        var_19 = ((/* implicit */long long int) (unsigned short)2689);
                    }
                    var_20 = ((/* implicit */signed char) (+(((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((-3977071909129409165LL) == (((/* implicit */long long int) ((/* implicit */int) var_9)))))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_5))))))))));
    }
    for (short i_11 = 2; i_11 < 17; i_11 += 3) 
    {
        var_22 = ((/* implicit */long long int) arr_39 [(short)12] [i_11 - 2]);
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned short i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                {
                    var_23 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (arr_39 [i_11] [i_11]))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_38 [i_11] [i_11])))))))));
                    var_24 = ((/* implicit */signed char) ((((((/* implicit */int) ((unsigned char) var_6))) + ((+(((/* implicit */int) var_5)))))) ^ (((/* implicit */int) ((unsigned char) (unsigned short)41707)))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (signed char)100))))));
    }
    /* LoopSeq 2 */
    for (long long int i_14 = 3; i_14 < 10; i_14 += 2) 
    {
        var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_14] [(unsigned short)0] [i_14 + 1] [(unsigned short)0] [i_14 + 1] [i_14 + 1])) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (var_1)));
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (1191183645U)))) : (((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11420))))))))))));
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) arr_7 [6LL]))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
        var_29 = ((/* implicit */unsigned int) ((0ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16130)))));
    }
    for (short i_15 = 0; i_15 < 23; i_15 += 2) 
    {
        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) arr_49 [i_15]))));
        var_31 = ((/* implicit */_Bool) var_9);
    }
    /* LoopNest 2 */
    for (long long int i_16 = 0; i_16 < 14; i_16 += 2) 
    {
        for (unsigned char i_17 = 0; i_17 < 14; i_17 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_18 = 0; i_18 < 14; i_18 += 2) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) max((((/* implicit */unsigned long long int) (+(0)))), (var_7))))));
                            var_33 = ((/* implicit */unsigned char) arr_51 [i_16] [i_16]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_20 = 2; i_20 < 13; i_20 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_21 = 2; i_21 < 13; i_21 += 3) 
                    {
                        for (short i_22 = 0; i_22 < 14; i_22 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) var_6)), (2305843009213693952LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)91)) - (((/* implicit */int) (unsigned short)64512))))) : (var_3))))));
                                arr_70 [i_16] [i_16] [i_16] [i_21 - 1] [i_16] |= ((/* implicit */unsigned char) var_5);
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [i_20 - 2])) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) arr_49 [i_20 + 1])))) : ((+(((/* implicit */int) arr_49 [i_20 + 1])))))))));
                    /* LoopSeq 2 */
                    for (int i_23 = 0; i_23 < 14; i_23 += 2) 
                    {
                        arr_74 [i_16] [i_16] [i_17] [i_16] [i_16] &= ((/* implicit */unsigned short) var_10);
                        var_36 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_56 [i_16] [i_20] [i_17])), ((((~(-1048576))) - (650270390)))));
                        var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (+(arr_47 [i_16]))))));
                    }
                    /* vectorizable */
                    for (long long int i_24 = 1; i_24 < 13; i_24 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_25 = 2; i_25 < 12; i_25 += 4) 
                        {
                            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_16] [i_17] [i_16] [i_17])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (4467726473883603760ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_24 + 1] [i_25 - 1] [i_25 + 2] [i_25 + 1])))));
                            var_39 = ((/* implicit */unsigned char) ((-8693202158387583210LL) <= (((/* implicit */long long int) arr_75 [i_20 + 1] [i_20 + 1] [i_17] [i_20 - 2] [i_20]))));
                        }
                        var_40 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_53 [i_16] [i_16]))));
                    }
                }
                for (signed char i_26 = 0; i_26 < 14; i_26 += 3) 
                {
                    arr_82 [i_16] [i_17] = ((/* implicit */_Bool) var_4);
                    var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) var_0))));
                    /* LoopNest 2 */
                    for (unsigned char i_27 = 0; i_27 < 14; i_27 += 3) 
                    {
                        for (signed char i_28 = 0; i_28 < 14; i_28 += 3) 
                        {
                            {
                                var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) arr_43 [i_16] [i_17]))));
                                arr_89 [i_16] [i_17] [i_17] [i_17] [i_28] [i_16] [i_17] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)231)) ^ (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                    var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) var_9))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_29 = 0; i_29 < 14; i_29 += 4) 
                {
                    var_44 ^= ((/* implicit */unsigned short) max((((unsigned long long int) arr_66 [i_16] [i_17] [i_29] [i_16])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_16] [i_16] [i_16] [i_16]))) ^ (var_3)))));
                    var_45 = ((/* implicit */unsigned short) (~(var_1)));
                    arr_94 [i_17] [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) + (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_4)))))));
                }
            }
        } 
    } 
}
