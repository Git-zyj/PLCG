/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145436
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_18 ^= ((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_0 - 1]);
                var_19 &= ((/* implicit */int) ((((/* implicit */_Bool) min((((long long int) arr_3 [i_0] [i_1])), (((/* implicit */long long int) arr_1 [i_0 - 1]))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) / (350359686U)))) : (((((((/* implicit */_Bool) (short)32767)) ? (arr_3 [i_0 + 1] [i_1]) : (arr_3 [i_0] [i_1]))) / (arr_3 [i_1] [i_1])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 1; i_2 < 15; i_2 += 3) 
    {
        /* LoopSeq 4 */
        for (short i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) arr_6 [i_2 - 1]);
            var_21 *= ((/* implicit */unsigned long long int) arr_10 [i_2] [i_3] [i_2 + 1]);
        }
        /* vectorizable */
        for (unsigned short i_4 = 2; i_4 < 15; i_4 += 3) 
        {
            arr_15 [i_2] [i_4] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_4 - 1] [i_4 - 2] [i_2 - 1]))));
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                for (unsigned char i_6 = 3; i_6 < 15; i_6 += 2) 
                {
                    {
                        arr_22 [i_2] [i_4] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6 - 1])) ? (((/* implicit */unsigned int) (-(arr_19 [i_5] [i_2] [i_5] [i_5])))) : (((arr_5 [i_2]) % (((/* implicit */unsigned int) arr_9 [i_5] [i_4]))))));
                        var_22 ^= ((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_2])) ? (((/* implicit */int) arr_14 [i_2] [i_2])) : (((/* implicit */int) arr_14 [i_2] [i_6])))) <= (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)-32757)) : (((/* implicit */int) arr_14 [i_2] [i_5]))))));
                        arr_23 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (((/* implicit */long long int) arr_20 [i_2])) : (arr_11 [i_4])));
                        /* LoopSeq 2 */
                        for (int i_7 = 1; i_7 < 14; i_7 += 2) /* same iter space */
                        {
                            arr_27 [i_2] [i_4 + 1] [i_4 + 1] = ((/* implicit */unsigned short) ((arr_21 [i_2] [i_2] [i_5] [i_6 - 1] [i_7]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_2])))));
                            arr_28 [i_2] [i_4] [i_4] [i_4] [i_7 + 1] [(short)14] = ((/* implicit */signed char) ((((((/* implicit */_Bool) -575847902)) ? (((/* implicit */unsigned int) arr_9 [i_2] [i_5])) : (var_15))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_4 - 1])))));
                            var_23 += ((/* implicit */signed char) ((unsigned int) arr_13 [i_2 - 1]));
                            var_24 = ((/* implicit */signed char) ((long long int) arr_16 [i_2 - 1]));
                            var_25 -= ((/* implicit */unsigned int) arr_7 [(unsigned char)10] [(unsigned char)10]);
                        }
                        for (int i_8 = 1; i_8 < 14; i_8 += 2) /* same iter space */
                        {
                            var_26 *= ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(unsigned char)2] [i_4 - 1]))) != (var_13));
                            var_27 = ((signed char) ((-575847902) + (((/* implicit */int) (short)6971))));
                        }
                    }
                } 
            } 
            arr_31 [i_4] [i_2] = ((/* implicit */unsigned int) arr_19 [i_2] [i_2] [i_4 + 1] [i_2 + 1]);
            var_28 += ((/* implicit */short) var_5);
        }
        for (unsigned short i_9 = 3; i_9 < 15; i_9 += 2) 
        {
            /* LoopSeq 4 */
            for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    var_29 = ((/* implicit */short) ((unsigned short) 394880267U));
                    var_30 = ((/* implicit */unsigned int) arr_16 [i_2 - 1]);
                    var_31 = ((/* implicit */int) ((max((arr_11 [i_9]), (arr_11 [i_11]))) > (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2 + 1] [i_9 + 1] [i_9 + 1])))));
                }
                /* vectorizable */
                for (unsigned int i_12 = 2; i_12 < 12; i_12 += 3) 
                {
                    arr_43 [i_2 - 1] [i_9] [i_10] [i_12 + 1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_2] [i_9 - 2] [i_2] [i_10] [i_9 - 2] [i_12 + 1])) ? (((/* implicit */int) arr_17 [i_2 - 1] [i_9 - 3] [i_12 - 2] [i_12 + 3])) : (((/* implicit */int) arr_29 [i_9 - 3] [i_12 - 2] [i_10] [i_9 - 3] [i_2 - 1]))));
                    arr_44 [i_2] = ((/* implicit */unsigned int) ((arr_36 [i_2 + 1] [i_2 + 1] [i_12 + 1]) > (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-81)))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        arr_47 [i_13] [i_2] [i_2] [i_9] [i_2] = ((/* implicit */_Bool) arr_18 [i_13] [i_2]);
                        arr_48 [i_2] [i_2 - 1] [i_9] [i_2] [i_12 + 4] [i_9] [i_13] = ((((/* implicit */int) arr_7 [i_12 - 2] [i_13])) - (arr_24 [i_2 - 1] [i_9 - 1] [i_10] [i_12 - 1] [i_2]));
                        arr_49 [i_13] [12] [i_10] [i_13] [i_13] &= ((/* implicit */long long int) ((arr_5 [i_2 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)100)))));
                        var_32 = ((/* implicit */short) var_11);
                    }
                    for (long long int i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        var_33 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_40 [i_2] [i_2] [i_2] [i_2])) <= (((/* implicit */int) var_0))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_12])))))));
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_38 [i_2] [i_2])) - (((/* implicit */int) arr_38 [i_2] [i_2]))));
                    }
                    for (unsigned char i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        arr_55 [i_2] [i_9 - 3] [i_10] [i_10] [i_10] &= ((/* implicit */unsigned short) arr_42 [i_2] [i_2] [i_15]);
                        var_35 = ((/* implicit */short) arr_12 [i_2] [i_2]);
                        var_36 = ((/* implicit */unsigned short) arr_30 [i_2 - 1] [2] [i_2 - 1] [i_2 - 1]);
                    }
                    for (unsigned int i_16 = 0; i_16 < 16; i_16 += 3) 
                    {
                        arr_58 [i_2] [i_9] [i_2] [i_12 - 2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12758)) ? (arr_26 [i_2] [(unsigned short)0] [i_2] [i_12 + 1] [i_9] [i_2 + 1] [i_12 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_2] [i_2] [i_2] [i_2] [i_16])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((~(arr_39 [(short)5] [(short)5] [i_10] [i_2] [i_16] [(short)5])))));
                        var_37 = ((/* implicit */unsigned char) (((+(arr_54 [(short)12] [(short)12] [i_16]))) > (((/* implicit */unsigned int) arr_24 [i_12] [i_9] [i_9] [i_9] [i_2]))));
                        arr_59 [i_2] [i_9] [i_10] [i_2] [i_16] = ((/* implicit */unsigned short) arr_36 [i_2 + 1] [i_2 - 1] [(unsigned char)6]);
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_2 + 1] [i_2] [i_2])) ? (arr_20 [i_2]) : (arr_20 [i_2 - 1])));
                    }
                }
                arr_60 [i_2 + 1] [i_2] [i_2] = ((/* implicit */int) ((long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_10] [i_9] [i_10] [i_9 - 3])) || (((/* implicit */_Bool) arr_30 [i_2] [i_9 - 1] [5U] [i_10]))))) >> ((((~(((/* implicit */int) (short)29446)))) + (29476))))));
                arr_61 [i_2 + 1] [i_2] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_10] [i_2] [i_2] [i_2])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */int) ((arr_13 [i_2]) <= (((/* implicit */long long int) ((/* implicit */int) max((arr_14 [i_2 - 1] [i_10]), (((/* implicit */unsigned short) arr_7 [i_2 + 1] [i_10]))))))))) : (((((/* implicit */_Bool) arr_18 [i_9 - 2] [i_2])) ? (((/* implicit */int) arr_18 [i_9 - 1] [i_2])) : (((/* implicit */int) arr_18 [i_9 - 3] [i_2]))))));
            }
            for (long long int i_17 = 0; i_17 < 16; i_17 += 3) 
            {
                arr_64 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_2] [i_9] [i_2 + 1] [i_9 + 1])) / (((((/* implicit */int) (unsigned short)14653)) - (arr_19 [i_2 - 1] [i_2] [i_9] [i_17])))))) / ((+(arr_5 [i_2 + 1])))));
                arr_65 [i_2] [i_9] [(unsigned short)14] &= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_18 [i_9 - 2] [4])) <= (((/* implicit */int) arr_18 [i_9 - 3] [(unsigned char)4])))))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_39 = ((/* implicit */short) (~(((arr_13 [i_9 - 3]) << (((arr_13 [i_9 - 2]) - (234872065086417500LL)))))));
                arr_68 [i_18] [0ULL] [i_18] [i_18] &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_16 [i_18])) * (((((/* implicit */_Bool) arr_41 [0U])) ? (((/* implicit */int) arr_38 [(signed char)2] [i_9 - 3])) : (((/* implicit */int) arr_63 [10LL])))))) >> (((((/* implicit */int) (unsigned short)63115)) - (63106)))));
                var_40 &= ((/* implicit */signed char) arr_51 [i_2] [i_2 + 1] [i_2] [(signed char)0] [i_2 - 1]);
            }
            for (int i_19 = 3; i_19 < 15; i_19 += 3) 
            {
                var_41 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((signed char) 16688584340663019665ULL))), (((unsigned int) arr_13 [i_19 - 2]))));
                var_42 ^= ((/* implicit */short) (+(arr_26 [(unsigned short)8] [(unsigned short)8] [i_2] [(unsigned short)8] [i_9] [(unsigned short)0] [i_19])));
                var_43 &= ((/* implicit */signed char) (+(((((/* implicit */unsigned int) arr_24 [i_2] [i_2] [i_2] [i_19 - 1] [(unsigned char)4])) & (arr_37 [i_2] [i_2] [i_9 - 3])))));
            }
            var_44 = ((/* implicit */int) arr_66 [i_2]);
            var_45 += ((/* implicit */signed char) (unsigned short)57643);
        }
        for (unsigned int i_20 = 0; i_20 < 16; i_20 += 3) 
        {
            arr_73 [i_2] = ((/* implicit */int) ((unsigned int) (~(arr_26 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
            var_46 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-88))) / (2377747162983827689LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47672))))))));
            arr_74 [i_2 + 1] [i_20] [(unsigned short)12] |= ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_38 [2] [2]), (arr_38 [8LL] [8LL])))) < ((-(((/* implicit */int) arr_38 [14U] [14U]))))));
            var_47 = ((/* implicit */unsigned int) arr_72 [i_2 - 1] [i_2 - 1]);
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_21 = 0; i_21 < 16; i_21 += 2) /* same iter space */
        {
            var_48 &= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_17 [i_2] [i_2 - 1] [i_2 + 1] [i_2]))));
            /* LoopNest 3 */
            for (long long int i_22 = 0; i_22 < 16; i_22 += 3) 
            {
                for (unsigned int i_23 = 0; i_23 < 16; i_23 += 3) 
                {
                    for (unsigned int i_24 = 0; i_24 < 16; i_24 += 2) 
                    {
                        {
                            arr_86 [i_2] [i_2] [i_22] [i_23] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_38 [i_2] [i_2])) + (((/* implicit */int) (_Bool)1))));
                            arr_87 [i_2] [i_2] [i_2] [i_2] [11LL] = ((/* implicit */unsigned int) arr_72 [i_22] [i_23]);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_25 = 0; i_25 < 16; i_25 += 2) /* same iter space */
        {
            var_49 = ((((/* implicit */_Bool) arr_40 [i_2] [i_2 - 1] [i_2] [i_25])) ? (((/* implicit */long long int) arr_88 [i_2] [i_2])) : (arr_41 [i_2]));
            var_50 = arr_84 [i_2] [i_2] [i_25] [i_25] [i_2];
        }
        var_51 = ((/* implicit */unsigned int) arr_33 [i_2] [i_2 + 1]);
    }
    var_52 = ((/* implicit */unsigned int) var_16);
}
