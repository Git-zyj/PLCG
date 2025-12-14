/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1217
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)13646)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */int) (short)-16746)) != (((/* implicit */int) var_16))))))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)4419))));
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    for (short i_4 = 4; i_4 < 15; i_4 += 1) 
                    {
                        {
                            arr_17 [i_0] [i_0] [i_0] = ((/* implicit */short) max(((-(((/* implicit */int) ((unsigned short) (unsigned short)4734))))), ((+((+(((/* implicit */int) var_16))))))));
                            var_18 += (!(((/* implicit */_Bool) arr_8 [i_0] [i_4 - 1])));
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((arr_8 [i_1 - 4] [i_1 + 2]), ((~((-9223372036854775807LL - 1LL)))))))));
                /* LoopNest 2 */
                for (long long int i_5 = 3; i_5 < 15; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_20 |= ((/* implicit */unsigned char) arr_13 [i_6] [i_5] [i_2] [i_0] [i_0]);
                            arr_22 [i_0] [i_0] [i_1 - 2] [i_0] [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) max((max((((/* implicit */unsigned char) (_Bool)1)), (arr_15 [(short)9] [i_5] [i_6]))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9223372036854775784LL)))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (unsigned char)28))))))));
                        }
                    } 
                } 
                arr_23 [i_0] [(_Bool)1] [i_0] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_21 [i_1] [(_Bool)1] [i_1 + 1] [i_1 + 1] [i_1 - 3] [i_1 + 1])))) ? (arr_21 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 3] [i_1]) : (((((/* implicit */_Bool) (unsigned char)228)) ? (arr_21 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 3] [i_1 - 2]) : (arr_21 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 3] [i_1])))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_15 [i_1 + 2] [i_1 + 2] [i_1 + 1])) ? (((/* implicit */int) arr_15 [i_1 - 1] [i_1 - 1] [i_1 - 3])) : (((/* implicit */int) arr_15 [i_1 + 2] [i_1 + 1] [i_1 - 3])))) <= ((+(var_4)))));
                            var_22 = ((/* implicit */signed char) min((max((max((var_4), (((/* implicit */int) (signed char)-110)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) >= (var_3)))))), ((-((+(((/* implicit */int) var_13))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned int i_9 = 3; i_9 < 16; i_9 += 2) 
            {
                var_23 += ((/* implicit */long long int) arr_10 [i_1] [i_1 - 3] [i_9 + 1] [i_1 - 3]);
                arr_32 [i_0] [i_1] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_9 - 2] [6LL] [(_Bool)1] [i_9 + 1] [i_9 - 2] [i_9] [i_9]))) + (arr_8 [i_1 - 2] [i_9 - 1])));
            }
            arr_33 [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) max(((-(((/* implicit */int) var_7)))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_15 [(unsigned short)14] [i_1 + 1] [i_1 + 2])), (arr_14 [i_0] [i_0] [i_0] [(unsigned char)4] [i_1]))))))), (min((((/* implicit */long long int) (~(1319428542)))), (arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_0])))));
            var_24 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_30 [(unsigned char)14] [i_1 + 2] [i_1 + 1]))))));
        }
    }
    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min(((unsigned char)255), (arr_34 [i_10])))), (((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60800))) : (1803551199U)))))) ? (((/* implicit */int) max((((/* implicit */short) arr_7 [i_10] [(unsigned char)10] [i_10] [i_10])), ((short)4094)))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_10] [i_10] [8LL] [(short)4] [(signed char)2] [i_10]))))) != ((~(((/* implicit */int) (short)-3393)))))))));
        arr_37 [i_10] = ((/* implicit */unsigned long long int) (+(3088195295U)));
    }
    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
    {
        arr_40 [i_11] = ((/* implicit */long long int) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (-(1876447405633706973ULL)))) ? ((~(((/* implicit */int) var_7)))) : ((-(((/* implicit */int) arr_30 [i_11] [i_11] [6]))))))));
        arr_41 [i_11] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3232))) : (arr_13 [6U] [i_11] [(unsigned short)6] [i_11] [0ULL]))), (((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) (short)-16445)), (arr_20 [i_11]))))))));
        arr_42 [i_11] = ((/* implicit */unsigned short) min((min((min((((/* implicit */unsigned int) (short)31264)), (2966143201U))), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) (signed char)15))));
    }
    /* vectorizable */
    for (unsigned char i_12 = 0; i_12 < 16; i_12 += 2) 
    {
        var_26 = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) arr_38 [i_12])))) : (((/* implicit */int) ((_Bool) arr_26 [i_12] [i_12] [i_12] [i_12])))));
        var_27 = ((/* implicit */short) ((((/* implicit */int) arr_35 [i_12])) - (((/* implicit */int) var_13))));
        /* LoopSeq 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_50 [i_13] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) var_10)) % (((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned short)49839))));
            arr_51 [14U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (unsigned short)4734)) : (((/* implicit */int) (short)-1))));
            /* LoopSeq 3 */
            for (unsigned short i_14 = 0; i_14 < 16; i_14 += 4) /* same iter space */
            {
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (+(((((/* implicit */_Bool) 127U)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)205))))))))));
                var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
                arr_54 [i_12] [i_12] [i_12] [i_12] = (short)10;
            }
            for (unsigned short i_15 = 0; i_15 < 16; i_15 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 16; i_16 += 4) 
                {
                    for (unsigned char i_17 = 0; i_17 < 16; i_17 += 1) 
                    {
                        {
                            var_30 ^= ((/* implicit */unsigned long long int) -2147483634);
                            arr_65 [(unsigned short)7] [i_13] [i_15] [i_15] [i_15] [10LL] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_15])) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (short)-16445))))) ? (((var_3) / (((/* implicit */long long int) arr_4 [i_17] [i_13])))) : ((+(arr_9 [i_12] [i_13] [i_15] [i_17])))));
                            arr_66 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_17] [i_16] [11ULL])) << (((/* implicit */int) arr_34 [i_12]))));
                        }
                    } 
                } 
                var_31 *= ((/* implicit */unsigned int) ((short) arr_5 [i_12] [i_13]));
            }
            for (unsigned short i_18 = 0; i_18 < 16; i_18 += 4) /* same iter space */
            {
                var_32 *= ((/* implicit */unsigned long long int) var_5);
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 3) 
                {
                    for (signed char i_20 = 0; i_20 < 16; i_20 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_12] [i_13] [i_13] [(short)2] [14ULL] [(unsigned short)14]))));
                            arr_78 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_13] [16LL] [i_19] [i_20])) / (((/* implicit */int) arr_75 [i_12] [i_20] [i_18] [i_20] [i_20]))));
                        }
                    } 
                } 
            }
        }
        for (long long int i_21 = 2; i_21 < 13; i_21 += 3) 
        {
            arr_81 [i_21] [(unsigned char)0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_59 [i_12] [i_21 - 2] [i_21] [i_12])) == (((/* implicit */int) (_Bool)0))))) != (((/* implicit */int) arr_57 [i_21] [i_21] [i_21 + 3]))));
            arr_82 [i_21] [i_21] = ((/* implicit */unsigned short) arr_12 [i_21 + 1] [i_21 - 1] [i_21 + 2] [i_21 + 3]);
        }
    }
}
