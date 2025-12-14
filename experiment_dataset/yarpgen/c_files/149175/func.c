/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149175
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) (_Bool)1);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_13 [i_0] [i_0] [i_1] [(unsigned char)2] [(short)9] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_12))) ? ((((_Bool)0) ? (arr_9 [i_1] [i_3] [i_2 - 1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_3] [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 - 1] [i_2] [i_0])))));
                                var_18 = ((/* implicit */short) (+(((/* implicit */int) var_6))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 1) 
                            {
                                var_19 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [(unsigned char)3] [i_1] [i_2] [i_2] [i_3] [i_2]))) + (max((((/* implicit */unsigned long long int) var_10)), (18446744073709551615ULL))))) << (((unsigned long long int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_0])) - (21634))))))));
                                var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_11 [(unsigned short)3] [(unsigned char)15] [i_2 - 1] [i_5])), (((((/* implicit */int) arr_0 [i_3])) % (((/* implicit */int) arr_0 [i_0]))))));
                                var_21 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-(var_3)))) ? (((((/* implicit */int) (_Bool)1)) << (((arr_12 [i_0] [i_1] [i_0] [i_3] [i_5]) - (2224939120U))))) : (-1538829980)))));
                            }
                            arr_16 [i_0] [i_3] [i_3] [i_3] [i_2] [12U] = ((_Bool) ((unsigned long long int) -5174131514386892394LL));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_6 = 3; i_6 < 15; i_6 += 4) 
                {
                    var_22 += max((((/* implicit */unsigned long long int) (unsigned char)243)), (3737742274985403597ULL));
                    var_23 = ((/* implicit */unsigned char) ((((var_4) ? (arr_12 [i_0] [i_1] [i_6 + 1] [i_1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) - (((/* implicit */unsigned int) (+(((var_1) - (((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 2 */
                    for (short i_7 = 2; i_7 < 13; i_7 += 1) /* same iter space */
                    {
                        var_24 ^= ((/* implicit */unsigned int) ((((unsigned int) (!(((/* implicit */_Bool) arr_22 [i_0]))))) < (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_2 [i_7]))) & (((/* implicit */int) ((unsigned char) arr_22 [i_0]))))))));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 1; i_8 < 14; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */long long int) arr_6 [i_6 - 2] [i_7 - 2] [i_8 - 1]);
                            var_26 -= ((/* implicit */short) (_Bool)1);
                        }
                        arr_27 [i_6] [(_Bool)1] [i_1] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_1])))) + (max((((/* implicit */long long int) arr_14 [i_0] [i_0] [i_1] [i_6] [(unsigned char)14] [i_7] [(unsigned short)11])), (arr_21 [i_0] [i_1] [(_Bool)1] [(_Bool)1] [13] [(unsigned short)9]))))) | (((/* implicit */long long int) ((/* implicit */int) (short)-143)))));
                    }
                    /* vectorizable */
                    for (short i_9 = 2; i_9 < 13; i_9 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            arr_34 [i_9 + 3] [i_1] [i_6] [i_9] = ((/* implicit */_Bool) ((short) arr_14 [i_1] [i_1] [i_6 - 1] [(_Bool)1] [8U] [i_1] [i_6 - 1]));
                            var_27 = ((/* implicit */unsigned char) (-((+(var_2)))));
                            arr_35 [i_6] = ((/* implicit */signed char) ((unsigned long long int) var_0));
                            var_28 -= ((/* implicit */int) ((((arr_3 [i_10 - 1]) / (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_6])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5))))));
                            var_29 = ((/* implicit */_Bool) ((unsigned short) (short)31752));
                        }
                        for (unsigned char i_11 = 2; i_11 < 14; i_11 += 1) 
                        {
                            arr_38 [i_6] [11ULL] [i_6] = ((/* implicit */unsigned char) ((((unsigned long long int) 18446744073709551599ULL)) >= ((+(arr_22 [i_6])))));
                            var_30 -= ((/* implicit */unsigned short) ((short) (unsigned char)155));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)240)) >> (((/* implicit */int) arr_25 [i_6 - 2] [i_6 + 1] [i_9 + 2] [i_9 - 2] [i_9 + 2] [i_11 + 1] [i_11 + 2]))));
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)161)) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) (_Bool)1))));
                        }
                        var_33 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_1] [i_6] [i_6] [i_6] [i_6 - 1] [13ULL] [i_6 + 1])) && (((/* implicit */_Bool) arr_26 [i_6] [i_6 - 3]))));
                    }
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_14 = 1; i_14 < 11; i_14 += 1) 
            {
                arr_47 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9374976261342145799ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_13])) - (((/* implicit */int) arr_14 [(signed char)7] [i_13 + 1] [(signed char)7] [i_13 + 1] [i_14] [i_14] [i_13]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-67))) + (9374976261342145799ULL)))));
                /* LoopSeq 1 */
                for (long long int i_15 = 2; i_15 < 13; i_15 += 4) 
                {
                    arr_52 [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)19180))));
                    arr_53 [i_12] [i_13 + 1] [(unsigned short)8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))));
                    var_34 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)250)) ? (arr_24 [i_14] [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16884))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_16 = 4; i_16 < 11; i_16 += 1) 
                    {
                        var_35 = ((/* implicit */short) (-(((/* implicit */int) ((short) arr_50 [i_12])))));
                        var_36 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6))) & (564404936739344409ULL))) >> (((((((/* implicit */_Bool) arr_43 [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)74))) : (arr_12 [i_12] [i_13] [i_14] [i_13] [i_16 + 1]))) - (21U)))));
                    }
                    for (signed char i_17 = 0; i_17 < 14; i_17 += 1) 
                    {
                        var_37 = ((/* implicit */_Bool) (+(4294967280U)));
                        arr_60 [i_12] [i_12] [i_13] [i_13] [i_14] [(signed char)0] [i_12] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)147))) <= (11053361610268644662ULL))))));
                        arr_61 [i_12] [i_13 + 1] [i_12] [i_15] [i_17] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63120))) - (17882339136970207192ULL)));
                    }
                }
            }
            arr_62 [i_12] [i_13] [9U] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-74)) & (((/* implicit */int) arr_18 [i_13] [i_13 + 1]))));
        }
        var_38 = ((/* implicit */long long int) min((var_38), (((long long int) (short)-20602))));
    }
    var_39 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)142))))) ? (((/* implicit */int) var_15)) : ((+((~(((/* implicit */int) var_13))))))));
}
