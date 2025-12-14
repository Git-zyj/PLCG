/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149026
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
    var_17 = ((/* implicit */unsigned short) min((min((max((((/* implicit */int) var_15)), (var_14))), ((+(var_14))))), (-2026689142)));
    var_18 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (+(max((((/* implicit */int) var_1)), (max((-2026689142), (((/* implicit */int) (unsigned short)65535)))))))))));
            arr_5 [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0])) : (arr_4 [i_1]))))))), ((+((+(((/* implicit */int) var_9))))))));
            var_20 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2026689142)) ? (-1311064586) : (2026689124)))) ? (((/* implicit */int) ((unsigned short) 2026689124))) : (((((/* implicit */int) arr_3 [i_0] [i_0])) - (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
        }
        for (signed char i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (+(min(((+(((/* implicit */int) (signed char)1)))), (max((((/* implicit */int) (signed char)121)), (2026689165))))))))));
                /* LoopSeq 3 */
                for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    arr_14 [i_0] [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) var_2);
                    var_22 = ((int) min((((/* implicit */int) arr_7 [i_4] [i_3])), (-2147483636)));
                    arr_15 [i_3] [i_3] [i_2] [i_3] [i_0] = ((int) arr_1 [i_4]);
                }
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    var_23 = ((/* implicit */_Bool) min((((/* implicit */int) var_8)), (var_14)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)8145)) >= (((/* implicit */int) arr_7 [i_0] [(signed char)1])))) ? (2026689120) : (((/* implicit */int) ((arr_10 [i_2]) != (-1085560164765097386LL)))))))));
                        arr_22 [i_0] [i_2] [i_3] [i_5] [i_6] [i_3] [i_2] = ((/* implicit */int) arr_17 [i_0] [i_2] [(short)11] [i_5] [i_0]);
                        arr_23 [i_3] [i_2] [i_3] [i_3] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)121))))) ^ (((long long int) arr_8 [(signed char)8] [(signed char)8] [i_0]))));
                    }
                    for (short i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        arr_26 [i_7] [i_5] [i_3] [i_3] [i_2] [i_0] = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) var_12)))));
                        arr_27 [i_3] [i_7] [(unsigned char)1] [i_3] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) arr_19 [i_0] [i_2] [i_3] [i_5] [i_7]);
                    }
                    for (long long int i_8 = 1; i_8 < 10; i_8 += 3) 
                    {
                        arr_30 [i_0] [i_2] [i_2] [i_2] |= ((short) (-((-(var_11)))));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)118)) || (((/* implicit */_Bool) (signed char)110)))))));
                    }
                    arr_31 [i_0] [i_2] [i_3] [(unsigned short)0] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned short)57391)) ? (-30LL) : (((/* implicit */long long int) 2026689155)))) + (9223372036854775807LL))) >> (((((unsigned long long int) (~(-1055888801)))) - (1055888775ULL)))));
                    var_26 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_3] [i_2] [(unsigned char)7] [i_0] [i_0]))))));
                }
                for (short i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    arr_34 [(_Bool)1] [i_3] [i_9] = ((/* implicit */unsigned short) (!(arr_11 [i_0] [i_0] [i_0] [i_0])));
                    arr_35 [i_3] [i_2] [i_2] [10U] = (-(((arr_6 [i_0]) + (arr_6 [i_0]))));
                    arr_36 [i_0] [(unsigned short)8] [i_3] [i_3] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) % (((/* implicit */int) (unsigned short)59741))))), (max((arr_6 [i_9]), (((/* implicit */unsigned long long int) 2305561534236983296LL)))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775807LL))))));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)26037)) << (((2026689135) - (2026689131)))))) ? (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)15991))))), (((arr_6 [i_9]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_3]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0])))));
                    var_28 = ((/* implicit */unsigned int) (-(((unsigned long long int) arr_11 [i_0] [i_2] [12ULL] [i_9]))));
                }
                var_29 += ((/* implicit */unsigned short) ((9223372036854775807LL) != (((((/* implicit */_Bool) arr_19 [i_0] [i_2] [(_Bool)1] [i_0] [i_0])) ? (((arr_12 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60535))))) : (((/* implicit */long long int) ((int) -2026689155)))))));
                var_30 -= ((/* implicit */short) ((_Bool) (~((-9223372036854775807LL - 1LL)))));
                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_3))))));
            }
            for (short i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
            {
                arr_40 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57402))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_32 [i_2] [i_2])) : (((/* implicit */int) var_12)))))) ^ (((int) (+(((/* implicit */int) arr_38 [7U] [i_2] [i_2] [i_0])))))));
                arr_41 [i_10] [i_2] [i_0] &= ((/* implicit */unsigned short) var_12);
            }
            arr_42 [i_0] &= ((/* implicit */unsigned short) min((((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [1] [i_2] [i_2] [i_2] [i_2])) ? (var_14) : (((/* implicit */int) var_4)))) <= (((((/* implicit */int) (signed char)-22)) + (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [(signed char)13] [(signed char)13] [i_2]))))))), (min((var_16), (((/* implicit */int) var_13))))));
        }
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 14; i_11 += 1) 
        {
            arr_45 [i_0] [i_11] = ((/* implicit */int) arr_9 [i_11] [i_11] [i_0]);
            var_32 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_11] [i_11] [(_Bool)1] [i_11]))) + ((~(arr_12 [i_0])))));
            var_33 = ((/* implicit */unsigned char) 9223372036854775807LL);
            arr_46 [(unsigned char)13] = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) ^ ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
        }
    }
    for (signed char i_12 = 2; i_12 < 11; i_12 += 1) 
    {
        var_34 = ((/* implicit */unsigned short) arr_11 [i_12] [i_12] [i_12] [i_12]);
        /* LoopSeq 2 */
        for (unsigned long long int i_13 = 1; i_13 < 12; i_13 += 3) 
        {
            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)57390))))) - ((+(arr_9 [i_13 - 1] [i_13 + 1] [i_12 - 1]))))))));
            var_36 ^= (-(((unsigned long long int) arr_24 [i_13] [i_13 + 1] [i_13] [i_13] [i_12] [i_12] [i_12 + 1])));
            var_37 -= ((/* implicit */signed char) max((((/* implicit */long long int) arr_3 [i_13] [i_12])), (((arr_28 [i_13 - 1] [i_13 + 1] [i_13] [i_13] [i_13] [i_13 - 1] [i_13]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_12 - 2] [i_12 + 2])))))));
        }
        for (long long int i_14 = 0; i_14 < 13; i_14 += 2) 
        {
            var_38 *= ((((/* implicit */int) (unsigned short)8145)) > (2026689124));
            /* LoopSeq 2 */
            for (signed char i_15 = 2; i_15 < 10; i_15 += 1) 
            {
                var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (_Bool)1))));
                arr_55 [i_12] [i_14] [i_12] = var_14;
                arr_56 [i_15] [i_12] = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_8)), (arr_6 [i_15])));
            }
            /* vectorizable */
            for (short i_16 = 3; i_16 < 12; i_16 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 13; i_17 += 4) 
                {
                    for (int i_18 = 1; i_18 < 12; i_18 += 3) 
                    {
                        {
                            arr_64 [i_12 + 2] [i_14] [i_12] [i_14] [i_12 + 2] = ((/* implicit */_Bool) ((unsigned int) 11057695705438267010ULL));
                            var_40 += ((/* implicit */long long int) arr_4 [i_18]);
                            arr_65 [i_12] [9] [i_14] [i_12] [i_12] [i_17] [12LL] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_12 - 1] [i_16 - 1]))) == (arr_58 [i_18 - 1] [i_12] [i_12] [i_12 - 1])));
                            var_41 = ((/* implicit */short) var_1);
                            var_42 *= ((/* implicit */unsigned short) (-(((arr_60 [i_17] [i_17] [i_16 - 3] [i_17]) % (((/* implicit */int) arr_19 [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12] [i_12]))))));
                        }
                    } 
                } 
                var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((((/* implicit */int) arr_49 [i_12] [i_14] [i_12])) & (((/* implicit */int) ((short) (short)3))))))));
            }
        }
    }
    for (unsigned long long int i_19 = 2; i_19 < 21; i_19 += 2) 
    {
        var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) (unsigned char)2)))))) ? (((/* implicit */int) arr_67 [i_19 - 2])) : ((~(((/* implicit */int) arr_66 [i_19 - 1]))))));
        arr_68 [i_19] = ((((((/* implicit */_Bool) (~(-9223372036854775805LL)))) || (((/* implicit */_Bool) min((arr_66 [(unsigned char)17]), (((/* implicit */unsigned char) (signed char)-45))))))) ? (((/* implicit */int) ((_Bool) ((int) (unsigned char)0)))) : (((/* implicit */int) arr_67 [i_19 - 2])));
    }
}
