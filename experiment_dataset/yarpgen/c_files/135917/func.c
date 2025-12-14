/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135917
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
    var_10 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_7)))) % (((3632002160U) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            arr_5 [(signed char)16] [i_1] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (9223372036854775797LL) : (arr_2 [18LL] [i_1])))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) -9223372036854775798LL)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) var_3))))));
            var_11 = ((long long int) arr_4 [i_0] [i_0] [i_1]);
            var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            arr_9 [10ULL] = ((/* implicit */int) 2199023255536LL);
            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (8719386113601147572LL) : (arr_1 [i_0])))) >= (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (18446744073709551599ULL))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    {
                        var_14 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) - (44)))));
                        arr_17 [i_0] [22U] [i_0] [i_0] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_4])) ? (9223372036854775797LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) << (((((((/* implicit */int) (short)-18723)) + (18758))) - (35)))));
                        var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4]))) == ((+(-3697898216055550986LL)))));
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0]))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_5 = 1; i_5 < 23; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    for (signed char i_8 = 3; i_8 < 22; i_8 += 4) 
                    {
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_6] [i_0] [i_0] [i_8] = ((/* implicit */unsigned long long int) ((arr_11 [i_5 + 1] [i_8 - 2] [(unsigned char)23]) == (arr_11 [i_5 + 1] [i_8 + 1] [i_8 + 1])));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_29 [i_6] [i_6]))));
                        }
                    } 
                } 
            } 
            arr_31 [i_0] [i_0] [13] &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_5])))) ? (((/* implicit */int) (unsigned char)180)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_27 [i_0])) : (((/* implicit */int) (signed char)91))))));
        }
        arr_32 [i_0] = ((/* implicit */unsigned char) 9223372036854775801LL);
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) 7064935104643362001ULL))));
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
    {
        var_19 &= ((/* implicit */unsigned long long int) arr_12 [(short)12] [i_9] [i_9] [i_9]);
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((unsigned long long int) arr_20 [i_9] [i_9]))));
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 18; i_11 += 2) 
            {
                for (signed char i_12 = 0; i_12 < 18; i_12 += 1) 
                {
                    {
                        arr_43 [i_9] [i_10] [i_9] [i_12] [i_10] = ((((/* implicit */_Bool) arr_7 [i_9] [i_11] [i_9])) ? (1192427747994165190LL) : (((/* implicit */long long int) arr_7 [i_9] [i_10] [i_9])));
                        /* LoopSeq 1 */
                        for (signed char i_13 = 3; i_13 < 16; i_13 += 2) 
                        {
                            arr_46 [i_11] [i_13 - 2] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((short) 18446744073709551582ULL))) + (2147483647))) >> (((var_1) + (4436897485955849911LL)))));
                            var_21 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_29 [i_12] [i_9])) || (((/* implicit */_Bool) arr_15 [i_9] [i_9] [i_9] [i_9])))) ? (((/* implicit */int) (signed char)110)) : (arr_26 [i_13 - 2] [i_13] [i_13 - 3] [i_13 - 2] [i_13 + 2])));
                        }
                    }
                } 
            } 
            var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_9] [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_9]))) : (arr_8 [i_9])));
            arr_47 [i_9] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_9])) ? (((/* implicit */int) arr_42 [i_10])) : (((/* implicit */int) arr_42 [i_9]))));
            /* LoopSeq 2 */
            for (unsigned long long int i_14 = 1; i_14 < 17; i_14 += 1) 
            {
                var_23 -= ((/* implicit */signed char) ((arr_28 [(signed char)5] [i_10] [i_10] [i_10] [i_10] [i_10]) % (((/* implicit */int) (short)-17727))));
                var_24 += ((/* implicit */long long int) (~(((/* implicit */int) arr_41 [i_14] [i_14 - 1] [i_14] [i_14 - 1] [i_14 + 1]))));
            }
            for (unsigned char i_15 = 0; i_15 < 18; i_15 += 1) 
            {
                arr_54 [i_9] [i_9] [i_15] [2U] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_9])) ? (((/* implicit */int) arr_0 [i_10])) : (((/* implicit */int) arr_0 [i_9]))));
                var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_15])) ? (((((/* implicit */int) (unsigned char)16)) & (((/* implicit */int) (signed char)115)))) : (((/* implicit */int) arr_38 [i_15]))));
            }
            var_26 -= ((/* implicit */short) arr_10 [i_9] [i_9] [i_10]);
        }
        var_27 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_45 [(short)7] [0LL] [i_9] [i_9] [(short)7] [i_9] [i_9])))) ? (3798778546206379059LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_35 [(unsigned char)8] [i_9])))))));
    }
    /* vectorizable */
    for (signed char i_16 = 0; i_16 < 18; i_16 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_17 = 1; i_17 < 17; i_17 += 3) 
        {
            for (signed char i_18 = 0; i_18 < 18; i_18 += 1) 
            {
                for (unsigned char i_19 = 1; i_19 < 15; i_19 += 3) 
                {
                    {
                        arr_66 [i_19] [i_16] [i_16] [i_19] = ((/* implicit */unsigned long long int) 2147483644);
                        var_28 += ((/* implicit */int) (signed char)(-127 - 1));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) arr_14 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))))));
        arr_67 [i_16] [6LL] = ((/* implicit */unsigned long long int) ((int) ((-3697898216055551009LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))));
    }
    for (signed char i_20 = 0; i_20 < 18; i_20 += 4) /* same iter space */
    {
        var_30 += ((/* implicit */signed char) ((((/* implicit */int) (signed char)126)) | (((((/* implicit */_Bool) arr_7 [i_20] [(short)12] [i_20])) ? (((/* implicit */int) arr_41 [i_20] [i_20] [i_20] [i_20] [i_20])) : (arr_44 [i_20] [i_20] [i_20] [i_20] [i_20] [(unsigned char)13])))));
        arr_70 [i_20] = ((/* implicit */long long int) 18446744073709551609ULL);
        var_31 += ((/* implicit */unsigned char) min((min((arr_13 [i_20] [i_20] [(signed char)11] [i_20]), (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)185))))) ? (((/* implicit */int) (signed char)30)) : (((((/* implicit */_Bool) 3697898216055550979LL)) ? (((/* implicit */int) (unsigned char)246)) : (469762048))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_21 = 2; i_21 < 8; i_21 += 3) 
    {
        var_32 ^= ((/* implicit */unsigned char) (+(((((/* implicit */int) var_4)) & (arr_28 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21])))));
        var_33 ^= ((/* implicit */unsigned char) arr_53 [i_21 + 1] [i_21 + 1] [i_21]);
    }
    /* vectorizable */
    for (long long int i_22 = 4; i_22 < 16; i_22 += 4) 
    {
        arr_75 [i_22 - 2] = ((/* implicit */long long int) (signed char)31);
        arr_76 [i_22 - 3] = ((/* implicit */unsigned char) ((unsigned long long int) 3221225472U));
    }
}
