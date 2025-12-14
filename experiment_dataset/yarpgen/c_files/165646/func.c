/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165646
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
    var_14 = ((/* implicit */unsigned short) var_12);
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_4))));
    var_16 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [(signed char)8] |= ((/* implicit */unsigned short) ((arr_2 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : ((+(max((var_11), (((/* implicit */long long int) arr_2 [i_0] [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) min((min((max((arr_5 [i_0] [i_1]), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))))), (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))));
            var_18 = ((/* implicit */short) arr_5 [i_1] [i_1]);
            var_19 = ((/* implicit */unsigned short) min(((signed char)107), ((signed char)-77)));
            var_20 -= ((/* implicit */int) (!(max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1])))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_3 = 2; i_3 < 21; i_3 += 4) 
            {
                var_21 = ((/* implicit */int) (short)-20938);
                var_22 &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0]))));
            }
            var_23 |= ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_11 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) (_Bool)0)))))));
            var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_2] [i_2] [i_0])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))))) : (arr_4 [(unsigned char)16] [i_0] [i_2]))))));
            var_25 -= ((/* implicit */short) var_11);
        }
        var_26 = ((/* implicit */short) var_12);
        var_27 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_14 [9LL] [i_4] = ((/* implicit */unsigned long long int) -1252599095);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_5 = 1; i_5 < 21; i_5 += 2) 
        {
            arr_17 [i_5] [1ULL] [i_5 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_5 - 1] [i_5 + 2])) && (((/* implicit */_Bool) arr_13 [i_5 + 2] [i_5 + 2]))));
            var_28 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4] [7LL])) ? (((/* implicit */int) (short)-20916)) : (arr_12 [i_4]))))));
            arr_18 [i_4] = (!(((/* implicit */_Bool) arr_15 [i_5 + 1] [i_5 + 2])));
            /* LoopSeq 4 */
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                arr_21 [i_4] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5 + 1] [i_5] [i_5] [i_5 + 1])) ? (((/* implicit */int) arr_19 [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) arr_19 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1]))));
                var_29 = ((/* implicit */signed char) (short)20937);
                var_30 = var_4;
            }
            for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                /* LoopSeq 4 */
                for (signed char i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
                {
                    arr_29 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_4] [i_5 - 1] [i_7] [i_8])) ? (((/* implicit */int) arr_28 [i_5 - 1] [i_5 + 1])) : (((/* implicit */int) arr_19 [i_4] [i_5] [i_5] [i_5 - 1]))));
                    arr_30 [i_4] [i_5 + 2] [i_5] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_5 - 1])) ? (((/* implicit */int) arr_16 [i_4] [i_4])) : (((/* implicit */int) arr_19 [i_4] [i_4] [i_4] [i_4]))));
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_5 - 1] [i_5 + 2])) ? (((/* implicit */int) (short)20937)) : (((/* implicit */int) arr_16 [i_5 - 1] [i_5 + 2])))))));
                }
                for (signed char i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
                {
                    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) arr_22 [i_4] [i_4] [i_4] [i_4]))));
                    arr_35 [i_4] [20ULL] [i_4] [20ULL] = ((/* implicit */long long int) arr_22 [i_4] [i_5 + 2] [i_5 + 2] [i_5 + 2]);
                    var_33 |= ((/* implicit */_Bool) arr_13 [i_5 + 2] [i_5 - 1]);
                }
                for (unsigned int i_10 = 4; i_10 < 22; i_10 += 4) /* same iter space */
                {
                    var_34 = ((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_10 - 1] [i_10 + 1] [i_10 - 4] [i_10 - 4]))));
                    var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (~(((/* implicit */int) arr_36 [i_4] [i_10 - 4] [i_5 - 1])))))));
                    var_36 = ((/* implicit */int) min((var_36), ((-(((/* implicit */int) arr_28 [i_10 - 3] [i_7]))))));
                    var_37 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)20931))));
                    var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_5 + 2] [i_10 - 4])) << (((1843940583U) - (1843940570U))))))));
                }
                for (unsigned int i_11 = 4; i_11 < 22; i_11 += 4) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned int) max((var_39), (((((/* implicit */_Bool) arr_32 [i_4] [i_5 - 1] [i_7] [i_11 - 3])) ? (arr_42 [i_4] [i_5] [(short)18] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_11 + 1])))))));
                    var_40 = ((/* implicit */unsigned int) arr_15 [i_4] [i_5 + 1]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 4) /* same iter space */
                    {
                        var_41 -= ((/* implicit */short) arr_23 [i_11] [i_11] [i_7]);
                        var_42 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_4]))));
                        var_43 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_32 [i_4] [(signed char)9] [i_4] [i_4]))))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 4) /* same iter space */
                    {
                        var_44 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_36 [i_11] [i_11] [i_11 - 1]))));
                        var_45 = ((/* implicit */unsigned char) (signed char)59);
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 4) /* same iter space */
                    {
                        var_46 = (-(((/* implicit */int) (short)20925)));
                        var_47 = ((/* implicit */int) (+(arr_47 [(short)8] [i_5] [i_5] [i_11 - 3] [i_5] [i_5 - 1] [i_11 - 1])));
                    }
                }
                var_48 = ((/* implicit */long long int) arr_20 [i_4] [(unsigned short)17] [i_7]);
                /* LoopSeq 1 */
                for (unsigned short i_15 = 0; i_15 < 23; i_15 += 2) 
                {
                    arr_53 [i_15] [i_4] = ((/* implicit */int) (short)0);
                    var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_5 + 1])) ? (((/* implicit */int) arr_38 [i_5 + 2] [i_5 - 1])) : (arr_12 [i_5 + 1])));
                }
            }
            for (unsigned short i_16 = 0; i_16 < 23; i_16 += 1) 
            {
                var_50 ^= ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) var_1)));
                var_51 &= ((/* implicit */unsigned char) arr_40 [i_16] [i_5] [i_5 - 1] [i_5] [i_5]);
                var_52 ^= ((/* implicit */unsigned char) arr_44 [(unsigned char)15] [i_5] [(_Bool)1] [(unsigned char)15] [0U]);
                var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)20914)) ? (3975994671941684716LL) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_4] [i_5] [i_16])))));
                arr_57 [i_4] [(unsigned char)3] [i_5] [20ULL] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)250)) ? (-3LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)225)))));
            }
            for (int i_17 = 1; i_17 < 22; i_17 += 2) 
            {
                var_54 -= ((/* implicit */int) (unsigned char)34);
                var_55 = ((/* implicit */long long int) (unsigned char)6);
            }
        }
    }
}
