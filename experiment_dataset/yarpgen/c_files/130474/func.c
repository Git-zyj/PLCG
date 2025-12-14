/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130474
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) ((short) arr_4 [i_0]))) : (((/* implicit */int) arr_0 [i_3]))))) ? (min((((((/* implicit */_Bool) arr_9 [i_3] [(unsigned short)2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_10 [i_0] [i_1] [i_3] [i_2 - 1] [i_3] [i_3]))), (((/* implicit */unsigned int) arr_11 [i_1 + 1] [i_1] [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 + 1] [i_3])))))))))));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-20628)) ? (((/* implicit */int) (short)11191)) : (((/* implicit */int) (_Bool)0)))) >> ((((~(((/* implicit */int) ((unsigned short) (short)11199))))) + (11221))))))));
                        arr_12 [i_0] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? ((+(min((((/* implicit */long long int) arr_7 [i_1] [i_0])), (arr_6 [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2 + 2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_6 [i_0] [i_0] [(_Bool)1])))) || (((/* implicit */_Bool) ((unsigned char) arr_10 [i_3] [i_3] [i_0] [i_0] [2] [i_0]))))))));
                        arr_13 [i_0] [(signed char)1] [i_1 + 1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_0])) || (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])))) ? (((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_0])) ? ((~(((/* implicit */int) (short)29546)))) : (((int) arr_11 [i_1 - 1] [i_2] [i_2] [i_3])))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_2 + 1])) ? ((-(arr_8 [i_0] [1U] [i_0]))) : ((+(((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned char) ((short) arr_4 [i_0]));
    }
    /* LoopSeq 3 */
    for (short i_4 = 3; i_4 < 9; i_4 += 2) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_15 [i_4]))) ? (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) arr_9 [(_Bool)0] [(unsigned short)0])))) : ((+(((/* implicit */int) arr_9 [2LL] [i_4 - 1]))))))) ? (((/* implicit */int) ((unsigned short) (~(arr_15 [(_Bool)1]))))) : (((/* implicit */int) ((short) arr_15 [i_4 - 3])))));
        arr_17 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) min((arr_8 [i_4] [i_4] [i_4]), (((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [(_Bool)1]))))))));
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_30 [i_4] [i_5] [i_6] [i_6] [(unsigned char)9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_27 [i_8] [8ULL] [i_8] [(signed char)0] [i_8] [i_8] [i_8])) ? (arr_24 [i_6] [(signed char)2] [i_6]) : (((/* implicit */int) arr_20 [i_4] [i_4 - 1] [i_4 - 1])))))))));
                            var_21 = ((/* implicit */long long int) arr_5 [i_4 + 1] [i_4] [i_6]);
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((int) arr_11 [i_7] [i_6] [i_5] [i_4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_25 [i_7] [i_4 - 1])), (arr_14 [i_4] [1ULL])))) ? (((/* implicit */int) arr_0 [i_6])) : ((~(((/* implicit */int) arr_2 [i_4]))))))) : (((long long int) arr_5 [i_4] [0LL] [i_6]))));
                            var_23 = ((long long int) ((arr_10 [i_4 - 3] [i_8] [i_6] [i_8] [i_8] [i_6]) + (arr_10 [i_4 - 3] [i_4 - 1] [i_6] [i_8] [i_8] [i_8])));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_9 = 2; i_9 < 8; i_9 += 2) 
            {
                for (unsigned short i_10 = 2; i_10 < 9; i_10 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_9 - 2] [i_10] [i_10 + 1])) ? (((/* implicit */int) ((signed char) arr_6 [(unsigned short)11] [(unsigned short)11] [(signed char)4]))) : (((/* implicit */int) ((short) arr_29 [i_9] [(unsigned short)6] [(unsigned short)0] [(unsigned short)4] [i_9])))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_5] [i_4 - 3])) & (((/* implicit */int) ((unsigned char) arr_20 [i_5] [i_9] [2])))))) : (((long long int) ((arr_24 [(unsigned short)0] [i_5] [i_10]) & (((/* implicit */int) arr_0 [i_5]))))))))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(arr_18 [1] [i_5] [i_9])))))) ? (((/* implicit */int) ((short) arr_28 [i_4] [i_5] [i_9] [i_10 - 2]))) : (((((/* implicit */_Bool) (short)2047)) ? (-549550887) : (((/* implicit */int) (unsigned short)30969))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */int) ((min((arr_27 [i_4] [i_4] [i_4 - 2] [i_5] [i_5] [i_4] [i_5]), (((long long int) arr_19 [i_4] [(unsigned char)9])))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(2250700302057472LL))))))))));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 10; i_11 += 2) 
        {
            arr_39 [i_11] = ((/* implicit */unsigned int) ((unsigned short) 2883436485U));
            var_27 = ((/* implicit */unsigned char) ((int) arr_19 [i_4 - 1] [i_11]));
            var_28 = ((/* implicit */long long int) ((_Bool) arr_3 [i_11]));
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 10; i_12 += 4) 
        {
            for (signed char i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                {
                    arr_47 [i_4] [i_13] [i_13] = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) arr_41 [i_4 - 1])))));
                    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25073)) ? (((/* implicit */int) (short)-27188)) : (((/* implicit */int) (short)9147))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4398046511103LL)) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) arr_20 [i_4 - 3] [i_4 - 2] [i_13]))))) : (4294967295U)));
                }
            } 
        } 
        arr_48 [i_4] = ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_16 [i_4] [(short)3])))))) ? (((((/* implicit */_Bool) arr_29 [i_4 - 1] [i_4] [i_4] [i_4 - 1] [(_Bool)1])) ? (arr_16 [i_4 - 2] [4]) : (arr_16 [i_4] [i_4]))) : ((-(((/* implicit */int) arr_41 [i_4 - 3])))));
    }
    for (unsigned char i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_50 [i_14]), (((/* implicit */unsigned int) arr_49 [i_14] [i_14]))))) ? ((-(((/* implicit */int) arr_11 [i_14] [(signed char)11] [i_14] [i_14])))) : (((/* implicit */int) ((short) arr_6 [i_14] [i_14] [i_14])))))) ? (((((/* implicit */_Bool) ((unsigned short) arr_0 [i_14]))) ? (min((arr_50 [i_14]), (arr_50 [i_14]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_7 [i_14] [i_14])))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_4 [i_14])) ? (((/* implicit */int) arr_7 [9ULL] [i_14])) : (((/* implicit */int) arr_3 [i_14])))), (((/* implicit */int) arr_2 [i_14])))))));
        arr_51 [i_14] = ((((/* implicit */unsigned long long int) ((long long int) (_Bool)1))) <= (((((/* implicit */_Bool) arr_4 [i_14])) ? (arr_4 [i_14]) : (arr_4 [i_14]))));
        var_31 = ((int) ((short) (~(((/* implicit */int) arr_11 [i_14] [i_14] [i_14] [i_14])))));
    }
    for (unsigned char i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_16 = 3; i_16 < 8; i_16 += 3) 
        {
            for (unsigned char i_17 = 0; i_17 < 11; i_17 += 2) 
            {
                {
                    var_32 = ((((/* implicit */long long int) ((/* implicit */int) ((short) ((unsigned short) arr_62 [i_15] [i_16 - 1] [i_17]))))) ^ (arr_6 [(short)3] [(short)3] [i_17]));
                    arr_63 [i_16] [7U] [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_61 [i_16 + 3] [i_16] [i_16 + 1]) ^ (arr_61 [i_16 - 3] [i_16 + 3] [i_16 + 3])))) ? (((((/* implicit */_Bool) arr_9 [i_16] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_16] [(short)8]))) : (arr_61 [i_16 - 1] [i_16 - 1] [i_16 - 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_9 [i_16] [i_16 - 2]))))));
                }
            } 
        } 
        var_33 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) arr_5 [i_15] [i_15] [(short)10])))));
        /* LoopNest 2 */
        for (long long int i_18 = 0; i_18 < 11; i_18 += 2) 
        {
            for (unsigned char i_19 = 0; i_19 < 11; i_19 += 2) 
            {
                {
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_19])) ? (((/* implicit */int) ((short) arr_5 [i_18] [i_18] [i_18]))) : (((/* implicit */int) arr_64 [i_19]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) arr_2 [i_15]))), (arr_1 [i_18])))) : (((((/* implicit */_Bool) arr_59 [i_19] [i_18] [i_19])) ? (((/* implicit */int) arr_65 [i_15] [i_18])) : (((/* implicit */int) arr_65 [i_15] [i_15]))))));
                    arr_68 [(short)1] [(short)1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_15] [i_15] [i_19])) - (((/* implicit */int) arr_5 [i_15] [i_15] [i_19]))))) ? (((long long int) arr_65 [i_19] [i_18])) : (((/* implicit */long long int) ((/* implicit */int) ((short) (+(((/* implicit */int) arr_7 [i_18] [i_19])))))))));
                    /* LoopNest 2 */
                    for (short i_20 = 0; i_20 < 11; i_20 += 3) 
                    {
                        for (signed char i_21 = 2; i_21 < 10; i_21 += 3) 
                        {
                            {
                                arr_74 [10LL] [i_21] [i_21] [i_15] [i_21 - 2] = ((/* implicit */long long int) ((short) min((((((/* implicit */_Bool) arr_4 [0LL])) ? (arr_67 [i_15]) : (((/* implicit */long long int) arr_61 [(short)3] [(_Bool)0] [i_19])))), (((/* implicit */long long int) arr_61 [i_20] [i_15] [i_15])))));
                                var_35 *= ((/* implicit */short) ((((_Bool) arr_67 [i_21 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (~(arr_56 [i_18] [i_19] [i_18])))))) : (((((/* implicit */_Bool) arr_10 [i_21] [i_21] [i_19] [i_21 + 1] [i_21] [(unsigned short)6])) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_72 [i_15] [i_18] [i_18] [(short)2] [i_18] [i_21 + 1]))) : (((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (18446744073709551615ULL)))))));
                                arr_75 [i_21] [i_20] [i_15] [i_21] = ((/* implicit */unsigned short) (~(min((arr_4 [i_21 - 2]), (arr_4 [i_18])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_22 = 0; i_22 < 11; i_22 += 1) 
        {
            for (unsigned short i_23 = 0; i_23 < 11; i_23 += 1) 
            {
                for (int i_24 = 0; i_24 < 11; i_24 += 3) 
                {
                    {
                        var_36 = ((/* implicit */short) ((signed char) ((unsigned short) arr_59 [i_22] [i_23] [i_22])));
                        arr_82 [i_22] = ((/* implicit */unsigned char) arr_60 [i_23] [i_24] [i_23] [i_24]);
                    }
                } 
            } 
        } 
        arr_83 [i_15] [i_15] = ((/* implicit */unsigned int) ((unsigned long long int) arr_64 [(signed char)5]));
    }
    var_37 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((unsigned short) var_9))))) - (((/* implicit */int) var_1))));
}
