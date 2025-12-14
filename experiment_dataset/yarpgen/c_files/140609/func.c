/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140609
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) 3264610263U))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (1030357032U) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_0])))))));
                            arr_14 [i_0] [i_1] [(_Bool)1] [i_0] [i_4] = ((/* implicit */int) var_13);
                            var_15 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)0))))) < (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))) : (var_9)))));
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-27)), (4886111688019121162LL)))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                        {
                            arr_22 [i_7] [i_6] [i_0] [i_1] [1U] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_10)), (var_9)));
                            var_17 = ((/* implicit */unsigned char) (_Bool)1);
                            arr_23 [i_0] [i_6] [11ULL] [i_6] [i_6] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!((_Bool)0))))));
                            var_18 = ((/* implicit */unsigned char) var_11);
                        }
                        for (long long int i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min((((((/* implicit */int) var_11)) * (((/* implicit */int) arr_7 [i_0] [i_1] [i_5] [i_0 - 1])))), ((+(((/* implicit */int) arr_7 [i_0] [i_1] [i_5] [i_0 - 1])))))))));
                            var_20 = ((/* implicit */long long int) (((_Bool)1) && ((_Bool)1)));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (max((min((((/* implicit */unsigned char) var_2)), (var_13))), (((/* implicit */unsigned char) var_2))))));
                            arr_28 [(_Bool)1] [(_Bool)1] [(signed char)6] [i_0] [(_Bool)1] [7ULL] = ((/* implicit */unsigned short) ((signed char) 17662389736910509578ULL));
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_19 [i_5] [i_9 - 1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
                            arr_31 [i_0] [i_1] [i_6] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_8);
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            var_23 |= ((/* implicit */long long int) ((unsigned short) (unsigned short)0));
                            var_24 = ((/* implicit */_Bool) var_0);
                        }
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_13 = 1; i_13 < 15; i_13 += 1) 
                    {
                        arr_40 [i_0] [i_1] [(_Bool)1] [i_0] [i_13 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)40))));
                        var_25 = ((/* implicit */long long int) ((signed char) (short)-32756));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) > (((((/* implicit */_Bool) 7205137100962912875ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-10))) : (-4886111688019121171LL)))));
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_27 |= ((/* implicit */signed char) var_4);
                        var_28 = ((/* implicit */signed char) arr_32 [i_0] [(unsigned short)15] [i_0 - 1] [13ULL] [i_0] [i_0]);
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_13)))))));
                    }
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        arr_47 [i_0] [i_0] [i_11] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_1] [i_12] [i_11] [i_12] [i_1] [i_0 - 1] [(unsigned short)8])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_11 [i_0] [i_1]))));
                        arr_48 [(signed char)11] [i_0] [i_11] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 956432022234822100LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_26 [i_1] [i_1] [i_11] [i_0] [i_15 - 1] [i_12]))));
                        arr_49 [i_0] [i_0] [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)127))));
                        var_30 = ((/* implicit */signed char) (-(((/* implicit */int) var_13))));
                    }
                    arr_50 [i_0] [i_1] [(signed char)14] [i_0] [(unsigned short)12] [5] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)4)) > (((/* implicit */int) var_2))));
                }
                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (signed char)127))));
            }
            for (unsigned int i_16 = 0; i_16 < 16; i_16 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_32 = ((/* implicit */unsigned long long int) ((int) arr_5 [i_0] [i_0] [i_0] [i_0]));
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 0; i_18 < 16; i_18 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0] [i_17]))) : (var_8)));
                        arr_60 [i_0] [i_1] [i_16] [i_16] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2867365068U)) ? (6609467614822348482LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                    }
                    arr_61 [i_0 - 1] [i_1] [i_16] [(_Bool)1] [i_17] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-66))));
                    arr_62 [i_0] [i_0] [i_1] [13ULL] [13ULL] [i_17] = ((/* implicit */int) (~(4ULL)));
                }
                for (int i_19 = 0; i_19 < 16; i_19 += 1) 
                {
                    var_34 = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)0));
                    arr_65 [i_0] [(unsigned short)5] [i_16] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) 671058710U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_7)))) : (((((/* implicit */_Bool) (unsigned short)52858)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (3623908585U)))));
                    var_35 = ((/* implicit */long long int) 13ULL);
                    arr_66 [i_19] [i_0] [i_1] [i_1] [i_0] [i_0] = ((((/* implicit */int) var_13)) ^ (((/* implicit */int) (_Bool)1)));
                }
                arr_67 [i_0] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (10653185202338177218ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8064)))))) ? (((((/* implicit */unsigned long long int) arr_44 [5LL] [5LL] [i_16] [(_Bool)1] [i_1])) & (var_4))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (arr_44 [i_0 - 1] [i_1] [i_1] [14ULL] [i_16]))))));
            }
            for (unsigned int i_20 = 0; i_20 < 16; i_20 += 1) /* same iter space */
            {
                var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) var_12))));
                var_37 = ((unsigned long long int) 9223372036854775797LL);
                arr_72 [i_20] [i_0] [i_0] = ((/* implicit */unsigned char) (+(min((var_9), (var_4)))));
                arr_73 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12677))) : (arr_42 [i_0] [i_1] [i_0])))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
            }
        }
        arr_74 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2007392714)) || (((/* implicit */_Bool) (short)5939))));
    }
    var_38 = var_9;
    var_39 ^= ((/* implicit */short) 18299809644803642857ULL);
}
