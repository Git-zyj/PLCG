/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1132
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_10 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_2 [(_Bool)1]) : (arr_2 [(short)0])));
        var_11 = ((/* implicit */short) arr_1 [i_0]);
        /* LoopSeq 3 */
        for (unsigned char i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_12 *= ((/* implicit */signed char) arr_6 [i_0] [i_2] [i_2]);
                    var_13 = ((/* implicit */short) arr_0 [i_3]);
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1])))))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0])) ? (arr_0 [i_3]) : ((~(arr_7 [i_0])))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) arr_10 [i_0] [i_1]))));
                    var_17 -= ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_1 - 2] [i_4] [i_4]))));
                    /* LoopSeq 4 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */int) arr_1 [i_0]);
                        var_19 += ((/* implicit */short) var_1);
                        var_20 *= ((/* implicit */unsigned int) (unsigned char)65);
                        var_21 = ((/* implicit */int) arr_3 [i_2]);
                    }
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */long long int) arr_1 [i_0]);
                        var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))));
                    }
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 131064)) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) (_Bool)1))));
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) 4294967272U)) : (9223372036854775808ULL))))));
                    }
                    for (short i_8 = 4; i_8 < 24; i_8 += 3) 
                    {
                        var_26 = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_0])))))) : (((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_0]))))));
                        var_27 += ((/* implicit */_Bool) (+(arr_22 [i_4] [i_4] [i_4] [i_4] [i_1] [i_4])));
                    }
                    var_28 = ((/* implicit */long long int) arr_12 [(unsigned char)18] [(unsigned char)18] [i_2] [i_0]);
                }
                var_29 = ((/* implicit */unsigned short) var_3);
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2] [i_0]);
                            arr_31 [i_0] = ((/* implicit */int) (_Bool)1);
                        }
                    } 
                } 
            }
            var_31 ^= ((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned short)4]))));
        }
        for (long long int i_11 = 0; i_11 < 25; i_11 += 3) 
        {
            var_32 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (var_5)))));
            /* LoopNest 3 */
            for (unsigned char i_12 = 3; i_12 < 24; i_12 += 2) 
            {
                for (signed char i_13 = 0; i_13 < 25; i_13 += 3) 
                {
                    for (unsigned short i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) arr_36 [i_0] [i_11] [i_0]);
                            arr_42 [i_14] [i_11] [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) (unsigned char)64);
                            arr_43 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((var_3) == (arr_41 [i_14] [i_11] [i_14] [(unsigned short)6] [(unsigned short)6] [i_12]))))));
                        }
                    } 
                } 
            } 
            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_37 [2ULL] [i_11] [i_11] [i_11] [i_0] [i_11])) : (arr_21 [i_0]))))));
            var_35 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0]))));
            arr_44 [8LL] |= ((/* implicit */signed char) var_8);
        }
        for (unsigned int i_15 = 2; i_15 < 21; i_15 += 3) 
        {
            arr_47 [i_0] [i_15 + 3] = (~(arr_21 [i_0]));
            /* LoopNest 2 */
            for (unsigned char i_16 = 1; i_16 < 22; i_16 += 3) 
            {
                for (int i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    {
                        var_36 = ((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_0] [i_16 + 3] [i_0]);
                        var_37 = ((/* implicit */unsigned long long int) (unsigned char)254);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_18 = 1; i_18 < 23; i_18 += 3) 
            {
                var_38 = ((/* implicit */signed char) ((arr_37 [i_0] [(_Bool)1] [i_0] [i_0] [(_Bool)1] [i_18]) / (var_9)));
                /* LoopSeq 3 */
                for (unsigned short i_19 = 1; i_19 < 23; i_19 += 2) 
                {
                    var_39 *= ((/* implicit */short) arr_3 [i_0]);
                    var_40 = ((/* implicit */long long int) max((var_40), (arr_36 [(unsigned short)6] [i_15 + 2] [(unsigned short)6])));
                    var_41 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_15 + 4] [i_15] [i_15] [i_0])) ^ ((-(((/* implicit */int) (_Bool)1))))));
                    var_42 = ((/* implicit */unsigned int) (_Bool)1);
                }
                for (int i_20 = 1; i_20 < 21; i_20 += 4) 
                {
                    var_43 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) (signed char)67))));
                    var_44 = ((/* implicit */long long int) max((var_44), (arr_36 [i_0] [20U] [(unsigned char)2])));
                }
                for (short i_21 = 1; i_21 < 22; i_21 += 4) 
                {
                    var_45 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) -3966038535294903872LL))))));
                    var_46 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) >= (((/* implicit */int) (unsigned char)120))));
                    var_47 = ((/* implicit */signed char) (((+(var_9))) <= ((+(arr_37 [(unsigned char)1] [i_15] [(signed char)14] [i_18] [i_21] [i_21])))));
                    arr_62 [(unsigned char)3] [i_15 - 2] [i_0] [i_21 - 1] = ((/* implicit */_Bool) (-(3589289617U)));
                }
            }
            for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
            {
                arr_65 [i_22] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((arr_16 [(unsigned short)12] [i_15] [(_Bool)1] [5] [5]) ? (arr_41 [i_22] [i_0] [i_0] [i_15 - 2] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_0] [i_0] [i_22])))))));
                var_48 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)0))));
            }
            var_49 ^= ((/* implicit */int) arr_21 [i_0]);
            var_50 = ((/* implicit */unsigned char) arr_7 [i_0]);
        }
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 14; i_23 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_24 = 2; i_24 < 13; i_24 += 2) 
        {
            arr_73 [i_23] = ((/* implicit */short) arr_19 [i_23] [i_24 - 2] [i_24 - 2] [i_24] [i_24]);
            var_51 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_24] [(unsigned short)16] [i_24] [i_23] [i_23] [(unsigned short)4])) ? (((/* implicit */int) (short)15716)) : (arr_4 [i_23] [i_23] [i_23])))) ? (((/* implicit */int) arr_29 [i_23] [i_23] [i_23] [i_24] [18])) : (((/* implicit */int) var_4))));
        }
        for (unsigned char i_25 = 4; i_25 < 11; i_25 += 3) 
        {
            var_52 = ((/* implicit */int) 0ULL);
            var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) arr_49 [i_23]))));
            var_54 ^= ((/* implicit */int) arr_14 [i_23] [i_23] [i_23] [i_23] [i_23] [(short)23]);
        }
        for (short i_26 = 0; i_26 < 14; i_26 += 3) 
        {
            var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) arr_20 [i_26] [i_26] [i_26] [i_26] [i_26]))));
            var_56 = ((/* implicit */unsigned long long int) (short)4);
        }
        var_57 = ((/* implicit */_Bool) arr_35 [i_23] [i_23] [i_23] [i_23]);
        var_58 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (arr_3 [i_23])))) ? (((arr_63 [i_23]) + (((/* implicit */unsigned long long int) arr_74 [i_23] [(short)12] [10ULL])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_50 [(signed char)18] [i_23] [i_23] [i_23]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    }
    /* LoopSeq 1 */
    for (long long int i_27 = 0; i_27 < 24; i_27 += 2) 
    {
        var_59 = ((/* implicit */signed char) min((var_59), (((/* implicit */signed char) -1732420844))));
        arr_83 [i_27] [i_27] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_4)) : ((~((~(((/* implicit */int) (_Bool)1))))))));
    }
    var_60 |= var_4;
}
