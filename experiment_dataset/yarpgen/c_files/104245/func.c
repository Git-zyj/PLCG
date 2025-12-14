/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104245
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
    var_10 = ((/* implicit */int) (unsigned char)29);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_2] [i_3]))));
                        arr_10 [i_3] [i_2] [i_1 - 3] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -616752474)) / (var_1)));
                        arr_11 [i_0] [i_1 + 1] [i_0] [i_3] [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned char)120))))) | (1906755664)));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
                        {
                            var_12 = ((/* implicit */int) ((unsigned long long int) arr_8 [i_1 - 2] [i_3 + 2] [i_2] [i_2 - 2] [i_4]));
                            var_13 ^= (((!(((/* implicit */_Bool) (unsigned char)255)))) ? (var_0) : (var_2));
                        }
                        for (signed char i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned char) 6400249203172377487ULL);
                            var_15 ^= ((/* implicit */unsigned short) ((long long int) (_Bool)1));
                        }
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
                        {
                            arr_22 [i_6] [i_3] [i_2 - 1] [i_0] [i_1] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_6 [i_2 - 2] [i_2 + 1] [i_2 - 2])) - (5938620653482843427LL)));
                            var_16 = ((/* implicit */int) ((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                            var_17 = (~(var_3));
                        }
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        arr_27 [i_0] [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) * (3654775418U)));
                        arr_28 [i_0] [14ULL] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_23 [i_2 + 1]);
                        var_18 *= ((/* implicit */unsigned char) 6001418120851083103ULL);
                        var_19 = ((((/* implicit */_Bool) arr_21 [i_1 - 3] [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 2] [i_2])) ? (arr_21 [i_1 - 3] [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1] [i_2] [i_0] [i_2 + 1] [i_2]))));
                    }
                    for (unsigned short i_8 = 3; i_8 < 17; i_8 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_8] [i_1 - 2] [i_2] [i_2] [i_0] [i_8 - 1])) | (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_21 = ((/* implicit */signed char) ((unsigned long long int) var_4));
                        var_22 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
                        var_23 = ((/* implicit */short) arr_24 [i_2] [i_2] [i_0]);
                    }
                }
                for (long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    var_24 -= ((/* implicit */int) min((5938620653482843438LL), (((/* implicit */long long int) (unsigned char)88))));
                    arr_33 [i_0] [i_1] [i_9] = ((unsigned char) var_5);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_10 = 3; i_10 < 19; i_10 += 4) 
                    {
                        var_25 = ((/* implicit */short) arr_19 [i_10] [i_9] [i_0] [i_1] [i_0] [i_0] [i_0]);
                        arr_37 [i_10] [i_9] [i_1] [i_1] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                    }
                    arr_38 [i_0] [(signed char)11] [i_0] = ((/* implicit */unsigned int) ((int) min((arr_8 [i_1 - 3] [i_1 - 3] [i_1 - 1] [i_1 - 3] [i_1]), ((signed char)-33))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_26 = ((/* implicit */int) var_0);
                    arr_41 [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)118)))));
                    var_27 = ((/* implicit */long long int) (+(((var_7) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)138)))))));
                    arr_42 [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
                    var_28 &= ((/* implicit */unsigned char) ((unsigned long long int) 12445325952858468513ULL));
                }
                /* vectorizable */
                for (unsigned int i_12 = 0; i_12 < 21; i_12 += 4) 
                {
                    var_29 = 4893951158909938095ULL;
                    var_30 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 5445046093298073414ULL)) ? (var_2) : (12445325952858468517ULL))) < (((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_12] [i_1] [i_1] [i_1 - 1] [i_0])) ? (12445325952858468517ULL) : (((/* implicit */unsigned long long int) var_1))))));
                    var_31 = ((/* implicit */_Bool) var_6);
                }
                arr_46 [(_Bool)0] [i_1 + 1] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 571310570U)))) % (max((((((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])) + (13001697980411478197ULL))), (max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_1 - 3]), (1583190878224684767ULL))))));
                var_32 = ((/* implicit */short) arr_16 [i_0] [i_1 - 2] [i_0] [i_0] [i_1 - 2] [i_0]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_13 = 1; i_13 < 15; i_13 += 4) 
    {
        arr_49 [i_13] [i_13] = ((/* implicit */unsigned char) ((signed char) min((((/* implicit */unsigned long long int) arr_48 [i_13 - 1])), (max((((/* implicit */unsigned long long int) arr_8 [i_13] [i_13] [i_13] [i_13] [i_13])), (var_0))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 17; i_14 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 2; i_15 < 16; i_15 += 1) 
            {
                var_33 = ((/* implicit */short) ((unsigned char) 6001418120851083096ULL));
                var_34 -= ((unsigned char) arr_19 [i_13] [i_13 + 1] [15] [(unsigned char)6] [i_13] [i_13 + 1] [i_15 - 1]);
            }
            var_35 = ((/* implicit */unsigned char) (~(arr_52 [i_13] [i_13] [i_13 + 2] [i_13])));
            arr_55 [i_13] [i_14] = ((/* implicit */unsigned long long int) ((long long int) arr_0 [i_13 + 2] [i_13 - 1]));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 4) 
        {
            for (signed char i_17 = 2; i_17 < 14; i_17 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 0; i_18 < 17; i_18 += 1) 
                    {
                        for (signed char i_19 = 0; i_19 < 17; i_19 += 1) 
                        {
                            {
                                arr_66 [i_16] [i_16] [i_13] |= ((/* implicit */unsigned long long int) ((unsigned int) (~(var_2))));
                                var_36 = var_4;
                            }
                        } 
                    } 
                    arr_67 [(signed char)12] [i_16] [i_17 + 3] [i_13] = ((/* implicit */long long int) (unsigned char)145);
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (((unsigned int) (_Bool)0)))))));
    }
    var_38 = ((/* implicit */unsigned int) ((((max((((/* implicit */unsigned long long int) (unsigned short)43997)), (var_0))) + (min((var_3), (var_3))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)20), ((unsigned char)132))))))))));
}
