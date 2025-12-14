/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107635
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
    var_15 = ((/* implicit */_Bool) var_0);
    var_16 = ((/* implicit */int) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))));
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) : (9223372036854775807LL)))));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (~(((((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2] [i_3 + 1] [i_3])) & (((/* implicit */int) var_6)))))))));
                    }
                } 
            } 
        } 
        var_20 ^= ((/* implicit */long long int) ((signed char) ((((/* implicit */int) (signed char)51)) == (((/* implicit */int) arr_2 [11] [i_0 + 2] [(_Bool)1])))));
        var_21 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0 + 2] [i_0])) % (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 2] [i_0] [4LL] [i_0 + 2] [(unsigned char)8]))));
    }
    for (unsigned char i_4 = 2; i_4 < 20; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (-7160741075097311904LL)));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_10 [i_4 - 1] [i_5] [i_4 - 1]), (arr_10 [(short)16] [i_4] [i_4 - 1])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-1))))) : (((arr_11 [i_4 + 1] [i_4 - 1]) + (arr_11 [i_4 + 1] [i_4 - 1])))));
            /* LoopSeq 2 */
            for (unsigned int i_6 = 1; i_6 < 20; i_6 += 2) 
            {
                var_24 = ((/* implicit */long long int) ((unsigned char) var_6));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    for (short i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */int) (short)-1)) ^ (((/* implicit */int) (signed char)-52))));
                            arr_21 [i_4] [(unsigned char)1] [i_6] [i_7] = arr_16 [(signed char)12] [i_5] [i_5] [i_5] [i_5] [(unsigned char)15];
                            var_26 ^= ((/* implicit */signed char) 4796149553172956889LL);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                arr_25 [(signed char)3] [(unsigned short)5] [i_9] = ((/* implicit */signed char) (((+(((/* implicit */int) var_8)))) >= (((((/* implicit */_Bool) var_4)) ? (arr_22 [i_9] [i_5] [18U] [i_4]) : (((/* implicit */int) var_2))))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 1; i_10 < 20; i_10 += 2) 
                {
                    for (int i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */short) var_10);
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_11] [i_10 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_24 [i_11] [i_10 - 1] [i_4 - 1])) : (((/* implicit */int) (signed char)127))));
                            var_29 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)127))));
                        }
                    } 
                } 
            }
            arr_33 [(signed char)3] [15LL] [i_4 + 1] = ((/* implicit */signed char) max((((((/* implicit */int) var_4)) << (((((/* implicit */int) arr_18 [i_4 - 2] [i_4 - 2] [i_4] [i_4 + 1] [i_4 - 2] [(signed char)20] [8U])) - (10028))))), (((((/* implicit */_Bool) arr_18 [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4 - 2] [(unsigned char)16] [i_4])) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) arr_18 [i_4 + 1] [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_5] [i_5]))))));
        }
        for (long long int i_12 = 0; i_12 < 21; i_12 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */int) var_1);
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (signed char)42))));
            var_32 = ((/* implicit */int) arr_16 [i_4] [i_4] [i_12] [i_12] [i_12] [i_4]);
            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-43)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)42)))))) ? (((/* implicit */int) (short)32767)) : (((((/* implicit */_Bool) (unsigned short)5470)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12)))))) >= ((+(((/* implicit */int) arr_16 [i_4 - 1] [i_4 + 1] [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 2])))))))));
            var_34 = max((((long long int) (!(((/* implicit */_Bool) (short)-28481))))), (var_9));
        }
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 21; i_13 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_14 = 3; i_14 < 20; i_14 += 3) 
            {
                for (signed char i_15 = 0; i_15 < 21; i_15 += 4) 
                {
                    {
                        var_35 = ((/* implicit */short) ((long long int) var_7));
                        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((arr_27 [i_4 - 1] [i_14 - 2] [i_15]) << (((1464837576U) - (1464837575U))))))));
                        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((long long int) 590728023428723048LL)))));
                        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) (unsigned short)0))));
                    }
                } 
            } 
            var_39 = ((/* implicit */unsigned char) var_6);
            arr_42 [i_4] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_13] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_4] [i_4] [i_4 - 1] [i_4 + 1] [(unsigned short)6]))) : (((((/* implicit */_Bool) arr_17 [(unsigned short)17] [(signed char)3] [i_4] [(unsigned short)1] [(signed char)3] [i_4])) ? (arr_26 [i_4 + 1] [i_13] [(signed char)2] [(signed char)4] [i_4 + 1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
        }
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 21; i_16 += 4) /* same iter space */
        {
            var_40 = (~(((/* implicit */int) var_11)));
            var_41 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3516769871U)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)0))))) : (arr_35 [i_16] [i_16])));
        }
        var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned short) ((short) arr_17 [0U] [(unsigned short)10] [i_4] [i_4] [i_4 - 1] [(unsigned char)1]))), ((unsigned short)21440)))))));
    }
    /* vectorizable */
    for (unsigned char i_17 = 2; i_17 < 20; i_17 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_18 = 0; i_18 < 21; i_18 += 3) 
        {
            for (unsigned short i_19 = 0; i_19 < 21; i_19 += 1) 
            {
                for (unsigned char i_20 = 0; i_20 < 21; i_20 += 4) 
                {
                    {
                        var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (+(((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                        arr_55 [i_17 - 1] [i_18] [i_20] [i_18] = ((/* implicit */signed char) (-(((/* implicit */int) arr_52 [i_17 - 2] [i_17 - 1] [i_17 - 2] [i_17]))));
                        arr_56 [i_18] = ((/* implicit */short) arr_16 [i_17] [i_17] [(short)3] [i_20] [i_17] [i_17]);
                    }
                } 
            } 
        } 
        arr_57 [(short)3] [11LL] = ((/* implicit */signed char) (-(((((/* implicit */int) (_Bool)1)) & (var_7)))));
        /* LoopSeq 1 */
        for (signed char i_21 = 0; i_21 < 21; i_21 += 1) 
        {
            var_44 = ((/* implicit */long long int) (+((((_Bool)1) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_8))))));
            var_45 = ((/* implicit */long long int) var_7);
        }
    }
}
