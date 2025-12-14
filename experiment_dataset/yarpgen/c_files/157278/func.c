/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157278
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] |= ((/* implicit */signed char) arr_0 [(signed char)4] [(signed char)4]);
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_3] [i_3] [i_3] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [(signed char)7] [i_1 - 1] [i_2] [i_3])) >> (((((/* implicit */int) arr_4 [2LL] [i_1] [9U])) - (115)))))))) ? ((~(((-1LL) % (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [(short)6] [(short)6]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) || (((/* implicit */_Bool) ((unsigned short) arr_2 [(signed char)11])))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) arr_6 [i_1] [i_0] [i_1] [i_0]))));
                            arr_15 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) 140737488355200LL);
                        }
                        var_14 ^= ((/* implicit */_Bool) arr_2 [i_3]);
                        arr_16 [14] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_2]))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) + (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))) : (((unsigned int) arr_5 [(_Bool)1] [i_0] [i_0])))))))));
    }
    for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_6 = 1; i_6 < 23; i_6 += 4) 
        {
            var_16 = ((/* implicit */int) ((arr_19 [i_6 + 2] [0U] [i_6]) & (((/* implicit */long long int) arr_18 [i_6 + 2] [i_5]))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 2; i_7 < 23; i_7 += 4) 
            {
                for (short i_8 = 3; i_8 < 24; i_8 += 3) 
                {
                    {
                        var_17 = ((((((/* implicit */int) (signed char)-3)) ^ (((/* implicit */int) (_Bool)0)))) ^ (((/* implicit */int) var_1)));
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)111)) + (((/* implicit */int) var_7)))))));
                            arr_29 [i_7 + 1] = ((/* implicit */short) arr_21 [i_7 - 2]);
                        }
                        arr_30 [i_8 - 2] [i_7] [i_6 + 2] [i_5] = ((signed char) arr_27 [i_8] [i_8 - 2] [i_6 + 1] [i_6 - 1] [i_6] [i_6]);
                    }
                } 
            } 
            arr_31 [5U] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_23 [i_5] [i_6] [i_6 - 1] [i_6] [i_6]))))) & (arr_28 [i_5] [i_6] [(unsigned short)15])));
            arr_32 [i_6] [i_5] = ((/* implicit */_Bool) (signed char)-108);
        }
        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            var_19 |= ((/* implicit */unsigned short) ((((/* implicit */int) (short)-29200)) != (max((((/* implicit */int) min((var_3), (arr_24 [i_5])))), ((((_Bool)1) ? (((/* implicit */int) arr_21 [i_5])) : (((/* implicit */int) (signed char)-127))))))));
            var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) - (((3287526481093336785LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-1212)))))));
            var_21 = ((/* implicit */unsigned short) arr_23 [i_10] [i_10] [i_10] [i_10] [i_5]);
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_39 [i_5] [i_5] [i_5] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (var_4)))) ? (((long long int) -1)) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5] [i_11] [i_11] [i_11] [i_11])))))) + (arr_28 [17ULL] [17ULL] [i_11])));
            var_22 = ((unsigned short) max((((((/* implicit */_Bool) arr_19 [i_5] [i_11] [(_Bool)1])) ? (1859941145) : (((/* implicit */int) arr_21 [i_5])))), (((/* implicit */int) (short)15))));
            var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)68)) ? (arr_28 [(short)20] [(short)20] [(short)20]) : (((/* implicit */unsigned long long int) (((~(var_2))) - (((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [i_5] [i_5])))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_12 = 3; i_12 < 22; i_12 += 4) 
            {
                var_24 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)(-127 - 1)))));
                arr_44 [i_11] [i_11] [i_11] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_37 [i_5] [i_11])) ? (3601500111U) : (arr_38 [i_5] [i_11] [i_12 - 1])))));
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)18381)) ? (((/* implicit */int) (unsigned short)2502)) : (((/* implicit */int) (unsigned short)52456))));
            }
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((arr_38 [i_13] [i_13] [i_13 + 1]), (((/* implicit */unsigned int) (signed char)89))))) % ((+(((4941331371743402593ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 25; i_14 += 4) 
                {
                    for (short i_15 = 4; i_15 < 21; i_15 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (-(((unsigned int) ((((/* implicit */int) arr_23 [i_5] [20ULL] [i_13] [i_14] [(signed char)17])) * (((/* implicit */int) arr_46 [i_14] [i_14]))))))))));
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_6)))) : (arr_41 [(short)21] [i_11] [i_11] [i_14])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50442))) : (((((/* implicit */_Bool) arr_23 [i_13 + 1] [i_14] [i_5] [i_14] [i_15 - 3])) ? (arr_40 [i_13 + 1] [i_5] [i_13 + 1]) : (arr_40 [i_13 + 1] [(signed char)6] [i_13])))));
                            var_29 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_41 [i_5] [(signed char)10] [i_13 + 1] [i_13 + 1])))) ? ((-(((((/* implicit */int) arr_25 [i_14])) - (((/* implicit */int) (signed char)-4)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_18 [i_5] [(unsigned short)1])))))))));
                            var_30 = ((((/* implicit */_Bool) (+((-(((/* implicit */int) (short)32767))))))) ? ((-(((/* implicit */int) min((arr_52 [i_5] [i_11] [i_13 + 1] [i_14] [i_15] [i_14]), (((/* implicit */short) (signed char)17))))))) : (((/* implicit */int) ((((((((/* implicit */int) var_7)) + (2147483647))) >> (((726484185U) - (726484171U))))) == (((/* implicit */int) ((((/* implicit */int) arr_34 [i_13] [i_11])) > (((/* implicit */int) var_11)))))))));
                            var_31 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [(short)13]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_15 - 4] [(short)18] [i_11] [i_5]))) != (arr_38 [i_5] [i_11] [i_13])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-28))))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) (unsigned short)0))))) == (3841652630U))))));
                        }
                    } 
                } 
                arr_53 [21ULL] [23LL] [i_11] = ((/* implicit */int) ((signed char) 155377327979698554LL));
            }
        }
        var_32 = ((/* implicit */int) (unsigned short)57062);
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_16 = 3; i_16 < 23; i_16 += 2) 
        {
            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_36 [0U] [i_16 - 1] [i_16 + 2])))))));
            /* LoopNest 3 */
            for (short i_17 = 0; i_17 < 25; i_17 += 3) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned short i_19 = 2; i_19 < 23; i_19 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */int) max((var_34), (((((/* implicit */_Bool) arr_54 [i_17] [i_17])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_33 [i_5]))))));
                            var_35 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_16] [i_17] [i_18] [i_19 - 1]))) & (2167667626U))) - (((/* implicit */unsigned int) arr_41 [i_16 - 2] [i_19 - 2] [i_19 + 1] [i_19 - 1]))));
                            arr_63 [(_Bool)1] [i_16] [i_18] [i_19] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-23247))));
                            arr_64 [i_5] [i_16 + 1] [i_16 - 1] [i_16 - 1] [i_19] = ((/* implicit */signed char) arr_38 [i_16] [i_17] [(signed char)21]);
                        }
                    } 
                } 
            } 
        }
        for (short i_20 = 1; i_20 < 22; i_20 += 4) 
        {
            var_36 *= ((/* implicit */unsigned short) arr_17 [i_20 - 1]);
            arr_68 [i_5] [12LL] [i_20 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((((/* implicit */_Bool) arr_66 [i_5] [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_50 [i_5] [(signed char)17] [i_5] [23] [i_5] [23]))) & (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_22 [(unsigned short)16])) : (((/* implicit */int) (signed char)125))))))) : ((+(min((410632228U), (((/* implicit */unsigned int) arr_42 [3] [i_20] [i_20 - 1] [i_5]))))))));
        }
        for (signed char i_21 = 2; i_21 < 23; i_21 += 4) 
        {
            arr_71 [i_21] = ((/* implicit */long long int) (_Bool)0);
            var_37 |= ((/* implicit */signed char) var_1);
            arr_72 [i_21 - 2] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_59 [i_21 + 2] [i_5])) + (((/* implicit */int) arr_59 [i_21 + 2] [i_5]))))));
            var_38 = ((/* implicit */int) max((var_38), ((+(((/* implicit */int) var_5))))));
        }
    }
    for (unsigned short i_22 = 0; i_22 < 19; i_22 += 4) 
    {
        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) (+(((/* implicit */int) var_10)))))));
        arr_75 [i_22] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_22])))))));
        arr_76 [i_22] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) (unsigned short)62856))) ^ (((((/* implicit */int) arr_74 [i_22])) ^ (((/* implicit */int) arr_74 [i_22]))))));
        /* LoopNest 3 */
        for (signed char i_23 = 0; i_23 < 19; i_23 += 3) 
        {
            for (signed char i_24 = 0; i_24 < 19; i_24 += 4) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    {
                        var_40 ^= ((/* implicit */_Bool) var_3);
                        var_41 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_46 [i_25] [14U]))) ? (((/* implicit */int) arr_43 [i_24])) : (((((/* implicit */_Bool) arr_19 [i_22] [i_24] [i_25])) ? (((/* implicit */int) arr_60 [i_22] [i_22] [i_22] [i_23] [(signed char)15] [i_25])) : (((/* implicit */int) arr_82 [i_22] [i_25] [i_23] [i_24] [(signed char)11] [i_23]))))))) == (((((/* implicit */unsigned long long int) arr_38 [i_22] [i_23] [i_22])) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_66 [i_22] [(_Bool)1])) : (1924580003441663010ULL)))))));
                    }
                } 
            } 
        } 
    }
    var_42 = ((/* implicit */unsigned int) 0);
}
