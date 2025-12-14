/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120253
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_17 -= ((/* implicit */unsigned int) ((((7413677338824704347ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) % (((/* implicit */unsigned long long int) -6177881296268439765LL))));
        var_18 = ((/* implicit */unsigned int) ((max((var_10), (((/* implicit */long long int) var_5)))) + (((/* implicit */long long int) ((/* implicit */int) (!(arr_1 [i_0] [i_0])))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) 11033066734884847269ULL))) || (((/* implicit */_Bool) arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) arr_1 [i_1] [i_1]);
        /* LoopSeq 2 */
        for (int i_2 = 3; i_2 < 19; i_2 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_3 = 2; i_3 < 17; i_3 += 4) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)37)) <= (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_0 [i_2]))))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_3 + 4] [i_2 + 2])) >> (((7413677338824704345ULL) - (7413677338824704315ULL)))));
            }
            for (unsigned char i_4 = 2; i_4 < 17; i_4 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (int i_6 = 2; i_6 < 17; i_6 += 2) 
                    {
                        {
                            arr_16 [i_5] [i_6] = ((/* implicit */long long int) arr_15 [i_1] [i_2 + 1] [i_2 - 3] [i_4 - 1] [i_5] [i_5]);
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_5 [i_2] [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_5 [i_2] [i_2 + 1] [i_2 + 1])))) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18674))))))))));
                        }
                    } 
                } 
                arr_17 [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_1] [i_2])) - (7413677338824704335ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-28123))) : (arr_8 [i_2 + 1] [i_2 + 1]))), (max((-6177881296268439768LL), (((/* implicit */long long int) -2147483638))))));
                arr_18 [i_1] [i_1] [i_1] = ((/* implicit */short) (+(((((/* implicit */int) arr_5 [i_2 - 3] [i_2 + 1] [i_2 + 1])) % (((/* implicit */int) ((unsigned char) arr_13 [i_1] [i_1] [i_1] [i_2] [i_4 - 1] [i_4 - 1])))))));
                arr_19 [i_1] [i_2 - 2] [i_4 + 3] = ((/* implicit */long long int) 4047931532U);
                /* LoopSeq 3 */
                for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    var_24 = ((/* implicit */signed char) arr_9 [i_1] [i_1] [i_1]);
                    var_25 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)62)) || (((/* implicit */_Bool) (unsigned short)18674)))) ? (var_16) : (((/* implicit */int) arr_13 [i_2 + 1] [i_4 - 1] [i_7] [i_7] [i_7] [i_7]))));
                }
                for (unsigned long long int i_8 = 3; i_8 < 17; i_8 += 2) 
                {
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (((!(((/* implicit */_Bool) ((unsigned int) arr_3 [i_1] [i_8]))))) && (((/* implicit */_Bool) arr_23 [i_2 + 1] [i_4 + 1])))))));
                    var_27 ^= ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_23 [i_2 + 1] [i_4 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_23 [i_2 - 3] [i_4 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) >> (((/* implicit */int) arr_1 [i_1] [i_1]))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_20 [i_1] [i_2 - 1])))) : (arr_21 [i_8 - 1]))))));
                    var_28 += ((/* implicit */long long int) arr_23 [i_2] [i_2]);
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_2 - 2] [i_4 + 4] [i_4 + 4] [i_2 - 2]))) - ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1]))) : (arr_3 [i_1] [i_4 + 4])))))) ? (((((/* implicit */_Bool) arr_7 [i_4 + 2] [i_4 - 1] [i_8 + 4] [i_8 + 2])) ? (arr_7 [i_4 + 1] [i_4 + 1] [i_8 + 2] [i_4 + 1]) : (arr_7 [i_4 - 1] [i_4 - 1] [i_8 - 1] [i_4 - 1]))) : (arr_23 [i_1] [i_1])));
                    var_30 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) + (2147483647))) << (((((((/* implicit */int) arr_24 [i_2 - 2] [i_4 + 4] [i_4] [i_8 + 1])) + (17))) - (2)))))) ? (((/* implicit */int) min((arr_24 [i_2 + 2] [i_4 + 1] [(unsigned short)4] [i_8 + 4]), (arr_24 [i_2 - 2] [i_4 + 4] [i_4 - 2] [i_8 - 2])))) : (((/* implicit */int) ((unsigned char) arr_24 [i_2 + 1] [i_4 + 2] [i_4 + 2] [i_8 + 2]))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    var_31 -= ((/* implicit */int) ((((/* implicit */int) (unsigned char)2)) <= (((/* implicit */int) max((((/* implicit */signed char) ((arr_8 [i_1] [i_2 + 2]) >= (((/* implicit */long long int) var_9))))), (var_12))))));
                    var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4 + 3] [i_2 - 1])) ? (((/* implicit */int) arr_20 [i_4 + 1] [i_2 - 3])) : (((/* implicit */int) (_Bool)1)))))));
                }
            }
            arr_28 [i_1] [i_1] = ((/* implicit */signed char) (+(max((var_10), (((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_1] [i_1])) <= (var_13))))))));
            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_3 [i_2 - 2] [i_2 + 2])))))))));
        }
        for (long long int i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (+(((/* implicit */int) (_Bool)1)))))));
            arr_31 [i_1] = ((/* implicit */unsigned int) 9223372036854775780LL);
            /* LoopNest 3 */
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                for (long long int i_12 = 3; i_12 < 18; i_12 += 4) 
                {
                    for (long long int i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 4294967295U))))) / (((/* implicit */int) ((short) arr_24 [i_12 - 3] [i_12 + 2] [i_12 + 3] [i_12 + 2]))))))));
                            var_36 = ((/* implicit */short) min((((/* implicit */unsigned short) max((arr_24 [i_12 - 2] [i_12] [i_12] [i_12 + 2]), (arr_24 [i_12 + 3] [i_12 - 2] [i_12 + 1] [i_12 - 3])))), (min(((unsigned short)9), (((/* implicit */unsigned short) (short)-923))))));
                            arr_39 [i_1] [i_10] [i_11] [i_1] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_38 [i_12 - 2] [i_12 + 2] [i_12 - 2] [i_12 - 2] [i_12 + 1] [i_12 + 2] [i_12])))));
                            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((_Bool) var_10)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_12 - 3] [i_10] [i_11] [i_10] [i_13] [i_11] [i_1])) ? ((((_Bool)1) ? (arr_37 [i_1] [i_13] [i_11] [i_1] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_20 [i_10] [i_10]))))))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                arr_43 [i_1] [i_1] [i_1] = ((/* implicit */long long int) max(((+(arr_38 [i_1] [(signed char)8] [i_14] [(signed char)8] [i_10] [(signed char)8] [i_1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)59)))))));
                var_38 = ((/* implicit */long long int) (signed char)-31);
                var_39 = ((/* implicit */unsigned int) (+(arr_8 [i_1] [i_1])));
                var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_4 [i_1] [i_1]) | (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_1] [i_1] [i_1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_10]))))) : (((/* implicit */int) ((((arr_15 [i_1] [i_1] [i_10] [i_10] [i_14] [i_14]) << (((((/* implicit */int) var_1)) - (17975))))) <= (arr_41 [i_1]))))));
                var_41 += ((/* implicit */long long int) arr_9 [i_14] [i_1] [i_1]);
            }
            for (unsigned int i_15 = 1; i_15 < 19; i_15 += 3) 
            {
                var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-4521600233038574243LL) + (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_15] [i_15 + 1] [i_15 + 1])))))) ? ((~(((/* implicit */int) arr_42 [i_15] [i_15 + 2] [i_15 + 2])))) : (((/* implicit */int) min((arr_42 [i_15 - 1] [i_15 - 1] [i_15 + 2]), (arr_42 [i_15 + 2] [i_15 + 2] [i_15 + 1])))))))));
                arr_47 [i_1] [i_1] [i_10] [i_1] = ((/* implicit */unsigned short) arr_23 [i_1] [i_10]);
                var_43 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)20))))) ? (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])) : (17987794525984256316ULL)))));
                var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) arr_44 [i_1] [i_15 + 1] [i_15]))));
            }
            for (int i_16 = 3; i_16 < 17; i_16 += 4) 
            {
                var_45 ^= ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    for (unsigned short i_18 = 0; i_18 < 21; i_18 += 2) 
                    {
                        {
                            var_46 -= ((/* implicit */unsigned char) (!((!(((((/* implicit */_Bool) arr_44 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) var_9))))))));
                            arr_56 [i_1] [i_10] [i_16] [i_16] [i_1] [i_16] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_50 [i_16 + 1] [i_16 + 2] [i_16 + 1] [i_16 - 3])) && (((/* implicit */_Bool) arr_33 [i_1] [i_1])))));
                            arr_57 [i_1] [18LL] [i_16] [i_17] = ((/* implicit */int) var_15);
                        }
                    } 
                } 
            }
        }
        var_47 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_34 [i_1] [i_1] [i_1] [i_1]) << (((((/* implicit */int) arr_49 [i_1])) - (99))))))));
    }
    for (int i_19 = 0; i_19 < 21; i_19 += 3) /* same iter space */
    {
        arr_61 [i_19] [i_19] = ((/* implicit */int) (+(arr_38 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])));
        var_48 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (11033066734884847271ULL)))))))));
    }
    for (unsigned long long int i_20 = 3; i_20 < 16; i_20 += 2) 
    {
        var_49 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_63 [i_20] [i_20])))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_20 [i_20 - 2] [i_20 - 2])) << (((((var_7) + (1546525357558884795LL))) - (24LL)))))))) : (max((((unsigned long long int) var_10)), (((/* implicit */unsigned long long int) arr_36 [i_20 - 2] [i_20 - 2] [i_20 - 2] [i_20 + 2] [i_20 - 2]))))));
        var_50 -= ((/* implicit */unsigned long long int) arr_11 [i_20] [i_20] [i_20] [i_20]);
        var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_58 [i_20] [i_20])) + (((((/* implicit */_Bool) (unsigned short)4)) ? (var_9) : (((/* implicit */int) arr_54 [i_20 - 1] [i_20 + 1] [i_20 - 3] [i_20 - 3] [i_20 - 3]))))))) ? (((long long int) arr_49 [i_20 - 1])) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_20 + 2])) : (((/* implicit */int) (_Bool)1)))) << (18U))))));
    }
    var_52 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) (+(1690474218U))))))) ? (var_11) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (int i_21 = 0; i_21 < 14; i_21 += 4) 
    {
        for (signed char i_22 = 3; i_22 < 13; i_22 += 1) 
        {
            {
                var_53 -= ((/* implicit */long long int) (-(((/* implicit */int) (signed char)32))));
                var_54 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_54 [i_22] [i_22] [i_22] [i_22] [i_21]))) << (((unsigned long long int) arr_48 [i_21]))))), (7413677338824704347ULL)));
                var_55 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) arr_40 [i_22 - 1] [i_22 - 2])) | ((~(7413677338824704329ULL))))), (7413677338824704329ULL)));
                var_56 = ((/* implicit */short) ((((long long int) (+(16562885473248224205ULL)))) / (((long long int) (unsigned short)50929))));
            }
        } 
    } 
    var_57 = ((/* implicit */unsigned char) (+(((((/* implicit */int) ((signed char) var_7))) << (((((((/* implicit */_Bool) var_14)) ? (9911956630467815011ULL) : (((/* implicit */unsigned long long int) 2581279452924896964LL)))) - (9911956630467814996ULL)))))));
}
