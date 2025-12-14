/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176403
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                for (long long int i_3 = 3; i_3 < 17; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        {
                            arr_16 [i_0] [i_1] [i_0] [i_2] [i_1] [i_4] [i_4] = arr_7 [i_1] [i_1] [i_3 - 3] [i_4];
                            var_14 = ((/* implicit */_Bool) (~(57344U)));
                        }
                    } 
                } 
            } 
            var_15 ^= ((/* implicit */unsigned int) (_Bool)1);
        }
        for (short i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(unsigned short)2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(short)2]))) : (562915593682944LL)));
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            var_17 -= (!(((/* implicit */_Bool) arr_12 [i_0] [i_7])));
                            var_18 ^= ((/* implicit */unsigned int) var_6);
                            var_19 = ((/* implicit */unsigned char) var_5);
                            var_20 = ((/* implicit */long long int) min((var_20), ((~(562915593682944LL)))));
                        }
                        var_21 = ((/* implicit */unsigned long long int) ((long long int) ((var_9) >> (((/* implicit */int) (_Bool)0)))));
                    }
                } 
            } 
            var_22 |= (~(((((/* implicit */_Bool) 562915593682958LL)) ? (-562915593682944LL) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_5]))))));
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */int) arr_7 [8LL] [i_5] [8U] [i_5])) | (((/* implicit */int) ((((/* implicit */int) (unsigned char)63)) == (arr_23 [(_Bool)1] [(_Bool)1] [13LL] [i_5] [i_5])))))))));
        }
        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            arr_31 [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_27 [i_0] [(_Bool)1]))));
            var_24 &= ((/* implicit */unsigned short) 7539455379463466548LL);
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_6 [i_0] [i_0] [i_9])))))));
        }
        var_26 += ((/* implicit */unsigned short) (-(3227335392U)));
    }
    /* vectorizable */
    for (unsigned int i_10 = 2; i_10 < 11; i_10 += 2) 
    {
        var_27 = ((/* implicit */unsigned int) var_8);
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            for (unsigned char i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                {
                    var_28 += ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned char)63)))) % (((/* implicit */int) arr_37 [i_10 + 1] [i_10 + 1] [i_10 - 2]))));
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 14; i_14 += 3) 
                        {
                            {
                                var_29 += ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) -562915593682944LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)165))))));
                                arr_45 [i_10] [i_13] [i_12] [i_13] [4LL] = ((/* implicit */unsigned char) var_12);
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) var_11))));
                }
            } 
        } 
    }
    for (unsigned short i_15 = 1; i_15 < 21; i_15 += 2) 
    {
        arr_48 [i_15] [(_Bool)1] |= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_1))) | ((~(((/* implicit */int) arr_46 [i_15 - 1]))))));
        var_31 = ((/* implicit */int) (unsigned char)136);
        var_32 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_47 [i_15 + 1] [i_15 + 1]), (arr_47 [i_15] [i_15])))) ? (((((/* implicit */_Bool) arr_47 [i_15 - 1] [i_15 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))) : (((((-1593805351) + (2147483647))) << (((((9223372036854775807LL) >> (((-53179437) + (53179489))))) - (2047LL)))))));
    }
    var_33 &= ((/* implicit */short) ((((((/* implicit */_Bool) min(((unsigned char)193), ((unsigned char)49)))) ? (((long long int) (short)32754)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)3496)) ? (((/* implicit */unsigned int) -2147483646)) : (1073741824U)))))) << (((((((/* implicit */_Bool) ((long long int) 562915593682944LL))) ? ((~(var_4))) : (((var_6) | (((/* implicit */long long int) 3221225487U)))))) + (7485335921045425418LL)))));
    var_34 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-4143))))) | ((+(var_9)))))));
    /* LoopNest 2 */
    for (long long int i_16 = 0; i_16 < 23; i_16 += 1) 
    {
        for (long long int i_17 = 0; i_17 < 23; i_17 += 1) 
        {
            {
                var_35 += ((/* implicit */unsigned int) arr_52 [(unsigned char)4] [i_17] [i_17]);
                var_36 *= min((1073741852U), (((/* implicit */unsigned int) (_Bool)1)));
                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((/* implicit */int) min((((short) 9223372036854775807LL)), (((/* implicit */short) arr_54 [i_16]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)131)))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 3) 
                {
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_20 = 0; i_20 < 23; i_20 += 1) 
                            {
                                var_38 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_59 [i_18] [i_19] [i_18] [i_19] [i_19 - 1] [i_20] [i_20]))) ? (((/* implicit */int) ((unsigned char) (short)32754))) : (((/* implicit */int) arr_59 [i_16] [i_17] [(short)6] [i_18] [i_19 - 1] [i_20] [(_Bool)1]))));
                                var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) 3174670082U))));
                                var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) max((1073741852U), (((/* implicit */unsigned int) var_7))))) != (var_4)))) < (((/* implicit */int) max((((/* implicit */unsigned short) arr_51 [i_19 - 1] [i_19 - 1])), (arr_58 [i_17] [i_17])))))))));
                                var_41 -= var_2;
                            }
                            var_42 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_13))))))));
                            var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) arr_56 [i_19] [i_19] [14ULL] [i_19 - 1]))))))));
                            var_44 = ((/* implicit */long long int) arr_53 [19U] [i_19 - 1]);
                            var_45 += ((/* implicit */unsigned char) var_6);
                        }
                    } 
                } 
            }
        } 
    } 
}
