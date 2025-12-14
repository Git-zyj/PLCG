/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137700
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = arr_1 [i_0];
        var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)7)) >> (((-2690354516187747197LL) + (2690354516187747214LL)))))), (((long long int) 899207004U)))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) max((((var_5) != (((/* implicit */int) arr_1 [i_4])))), (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4])))) > (arr_10 [(signed char)4] [i_2]))))));
                            arr_12 [(unsigned char)0] [17] [0LL] [(_Bool)1] [i_3] = ((/* implicit */short) ((signed char) ((((/* implicit */int) (signed char)-112)) - (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)15)), (arr_1 [i_0])))))));
                        }
                    } 
                } 
            } 
            var_13 ^= ((/* implicit */unsigned short) ((unsigned int) (_Bool)1));
        }
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            arr_15 [i_0] = ((/* implicit */signed char) (_Bool)1);
            arr_16 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-112)) + (var_5)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [10ULL]))))) : (max((661651356U), (((/* implicit */unsigned int) (unsigned char)6))))))) && (((/* implicit */_Bool) max((min((((/* implicit */unsigned short) arr_11 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] [i_0] [i_0])), (arr_0 [i_5]))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [(short)4] [i_5] [i_5])) && (((/* implicit */_Bool) 14692206006180888945ULL))))))))));
            var_14 = ((((/* implicit */_Bool) arr_4 [i_5])) ? ((+(((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)1))));
            var_15 ^= ((/* implicit */_Bool) (signed char)122);
        }
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (unsigned char)132))));
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    {
                        arr_26 [i_0] [i_6] [i_7] &= ((/* implicit */signed char) var_4);
                        arr_27 [(signed char)3] [i_6] [i_6] [i_8] = ((/* implicit */unsigned long long int) (signed char)-8);
                    }
                } 
            } 
            var_17 = arr_0 [i_0];
            var_18 = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) (signed char)-24)) ? (8658654068736LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1]))))), (((/* implicit */long long int) (unsigned char)235))))));
        }
    }
    for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
    {
        arr_30 [i_9] &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_10 [i_9] [i_9])) ? ((~(var_5))) : (((/* implicit */int) ((arr_7 [i_9]) || (((/* implicit */_Bool) arr_9 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_31 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10]))))));
            arr_33 [i_10] = ((/* implicit */short) arr_20 [(signed char)1] [i_10] [(_Bool)1]);
        }
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
        {
            arr_38 [i_11] = ((/* implicit */_Bool) ((((((/* implicit */int) var_7)) != (((/* implicit */int) var_10)))) ? (((/* implicit */int) arr_7 [i_9])) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_9])) == (((/* implicit */int) (signed char)115)))))));
            arr_39 [i_9] [i_11] [4ULL] |= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [i_9] [(unsigned char)11] [i_11] [i_9] [i_9] [i_9]))));
            /* LoopSeq 2 */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                arr_44 [i_11] [i_11] [i_12] [i_11] = ((/* implicit */signed char) var_10);
                var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) 1279837124)) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) var_3)))) == (((/* implicit */int) ((signed char) arr_40 [i_11] [i_11] [i_9] [i_11])))));
            }
            for (short i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                arr_48 [i_9] [i_11] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_47 [i_9] [i_9] [i_9] [i_9])) ? (-7230881274409705252LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [(unsigned short)2] [(unsigned short)2] [i_9]))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_9] [i_11] [i_11] [i_13])) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-10)))))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_11])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) arr_31 [i_13] [i_11] [i_13])) : (((/* implicit */int) (_Bool)1)))))));
            }
        }
    }
    for (long long int i_14 = 0; i_14 < 20; i_14 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_15 = 3; i_15 < 16; i_15 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_16 = 1; i_16 < 18; i_16 += 2) 
            {
                for (short i_17 = 0; i_17 < 20; i_17 += 3) 
                {
                    for (signed char i_18 = 0; i_18 < 20; i_18 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) 8658654068736LL))));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) ((((/* implicit */_Bool) ((var_5) | (((/* implicit */int) arr_53 [i_18] [i_15 + 3] [i_16]))))) || (((/* implicit */_Bool) (short)18101))))))))));
                            var_25 = ((/* implicit */unsigned char) arr_52 [i_14] [(_Bool)1] [(_Bool)1]);
                        }
                    } 
                } 
            } 
            arr_62 [(unsigned short)7] = ((/* implicit */long long int) arr_50 [5]);
        }
        for (int i_19 = 0; i_19 < 20; i_19 += 4) 
        {
            arr_65 [i_14] [i_14] [i_19] = ((/* implicit */unsigned short) (+(arr_55 [(unsigned short)8] [i_19])));
            var_26 = ((/* implicit */signed char) var_0);
            var_27 = ((/* implicit */_Bool) ((((/* implicit */long long int) max((arr_52 [i_14] [(_Bool)1] [i_14]), ((+(arr_59 [i_19] [i_14] [i_14] [i_14] [i_14])))))) | (((((_Bool) arr_60 [i_19])) ? (max((arr_58 [19U] [19U] [i_14] [i_14] [(short)4] [19U] [i_14]), (1396728576907158474LL))) : (arr_64 [i_14] [i_14] [i_19])))));
        }
        /* vectorizable */
        for (int i_20 = 1; i_20 < 18; i_20 += 4) 
        {
            arr_68 [i_14] = ((/* implicit */unsigned short) ((arr_58 [(_Bool)1] [(_Bool)1] [i_20] [i_14] [i_14] [i_14] [(short)15]) | (((/* implicit */long long int) ((/* implicit */int) var_4)))));
            var_28 += arr_56 [i_14];
            arr_69 [i_14] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 94949443U)) ? (2404009177U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((unsigned int) (signed char)20)) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))))));
        }
        arr_70 [12] = ((/* implicit */long long int) min(((~(((/* implicit */int) ((_Bool) 2404009177U))))), (((((/* implicit */int) (signed char)115)) & (((/* implicit */int) max(((short)-26240), ((short)-26239))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 1) 
    {
        for (unsigned short i_22 = 0; i_22 < 11; i_22 += 3) 
        {
            {
                var_30 = ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (unsigned char)230)))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_18 [i_22] [i_22] [i_22])) & (((/* implicit */int) (signed char)-27)))) * (((/* implicit */int) arr_49 [i_22]))))) : (((((/* implicit */_Bool) arr_75 [i_21])) ? (((((/* implicit */_Bool) -716791759)) ? (1659422955U) : (((/* implicit */unsigned int) 4194303)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10)))))));
                var_31 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((unsigned short) (signed char)-8))) ? ((-(18446744073709551609ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_56 [i_21]))))))));
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 11; i_23 += 1) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            arr_83 [i_21] [i_21] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((max((arr_52 [i_21] [i_21] [i_23]), (((/* implicit */int) (signed char)-124)))) > (((/* implicit */int) arr_14 [i_23]))))) : (((/* implicit */int) ((((/* implicit */int) ((signed char) (short)-26239))) > (((/* implicit */int) ((unsigned short) -6LL))))))));
                            arr_84 [i_21] [(short)0] [i_23] [i_21] = ((/* implicit */long long int) 3482891067843316835ULL);
                            arr_85 [i_21] [i_22] [i_21] = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((/* implicit */int) arr_14 [i_23]))));
                            var_32 ^= ((/* implicit */_Bool) arr_52 [i_22] [i_23] [i_22]);
                            arr_86 [i_21] [4] [i_21] [(signed char)8] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((4231100761U), (((/* implicit */unsigned int) arr_7 [i_22]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)119))) : (((3560187529U) | (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) ? (((((((/* implicit */long long int) arr_75 [i_21])) | (arr_40 [(unsigned char)8] [i_22] [(unsigned char)8] [6ULL]))) ^ (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_67 [(unsigned char)3] [(unsigned char)3])), (var_2))))))) : (((/* implicit */long long int) (((~(((/* implicit */int) arr_37 [i_23])))) ^ (((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_21] [i_22] [i_21] [i_21] [i_24])), ((unsigned short)7155)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
