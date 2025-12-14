/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189410
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                var_13 -= ((/* implicit */unsigned long long int) arr_1 [3ULL]);
                var_14 = ((/* implicit */int) arr_3 [i_0] [(short)0] [7ULL]);
            }
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                arr_11 [i_0] [i_3] [i_3] [(signed char)13] = ((arr_9 [i_3] [1LL] [i_3 - 1]) + (arr_9 [(_Bool)1] [i_3 - 1] [i_3 - 1]));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        {
                            arr_16 [0LL] [(unsigned short)18] [(unsigned short)22] [(unsigned char)8] [i_5] |= (+(((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_0] [i_1])) <= (arr_12 [(signed char)4] [(unsigned short)9] [(unsigned short)9] [(unsigned short)9])))));
                            var_15 |= ((/* implicit */short) arr_9 [19U] [19U] [i_3]);
                            var_16 = ((/* implicit */unsigned short) ((long long int) (-(arr_2 [(short)19]))));
                        }
                    } 
                } 
                var_17 -= ((/* implicit */_Bool) arr_8 [i_3] [15LL]);
                var_18 -= (!(((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_3] [(signed char)20] [(unsigned short)4] [(signed char)18])));
            }
            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                arr_19 [i_6] [i_1] [i_6] = ((/* implicit */short) ((long long int) arr_2 [i_1]));
                var_19 &= ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) arr_4 [(_Bool)1] [i_6])));
                var_20 = ((((/* implicit */_Bool) arr_6 [i_1])) || (((/* implicit */_Bool) ((arr_12 [(_Bool)1] [i_0] [19ULL] [i_6]) + (((/* implicit */long long int) ((/* implicit */int) arr_8 [(_Bool)1] [i_6])))))));
            }
            var_21 = ((/* implicit */unsigned short) arr_8 [i_1] [i_1]);
            var_22 -= ((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_0]))));
        }
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                var_23 *= ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                var_24 = ((/* implicit */unsigned short) (signed char)-21);
                var_25 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_3 [i_0] [i_7] [i_0]))))));
                var_26 |= ((/* implicit */_Bool) arr_21 [2LL] [(_Bool)1]);
                /* LoopSeq 4 */
                for (int i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    var_27 -= ((/* implicit */unsigned long long int) arr_0 [(signed char)3] [i_0]);
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) arr_6 [i_0]))));
                    arr_29 [i_7] [i_7] [17ULL] [i_7] [(unsigned short)1] = ((/* implicit */long long int) (unsigned short)22613);
                    var_29 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_7] [i_7]))));
                }
                for (signed char i_10 = 1; i_10 < 22; i_10 += 3) 
                {
                    arr_32 [(signed char)15] |= ((/* implicit */_Bool) arr_4 [i_10 + 2] [i_10 - 1]);
                    arr_33 [i_0] [i_7] [6LL] [i_10] = ((/* implicit */_Bool) ((((long long int) arr_30 [i_0])) % (((/* implicit */long long int) (+(2147483647))))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_37 [i_0] [(_Bool)1] [i_8] [3U] [i_8] = ((/* implicit */unsigned long long int) arr_30 [i_0]);
                    var_30 &= ((/* implicit */unsigned int) 9223372036854775807LL);
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (unsigned short)22609))) | (((/* implicit */int) arr_36 [i_8] [3LL] [i_8] [i_8]))));
                    var_32 -= ((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_0]))));
                    var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) arr_0 [i_11] [i_7]))))))));
                }
                for (long long int i_12 = 1; i_12 < 23; i_12 += 1) 
                {
                    arr_40 [i_0] [i_12] [i_7] |= ((/* implicit */int) (short)0);
                    var_34 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_12 - 1] [i_0]))) > ((-(arr_23 [i_0])))));
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_7])) && (((/* implicit */_Bool) arr_23 [i_7]))));
                }
            }
            for (int i_13 = 0; i_13 < 24; i_13 += 3) 
            {
                var_36 = ((/* implicit */short) (+(arr_23 [i_0])));
                arr_44 [i_0] [i_0] [(unsigned short)4] [i_7] &= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (_Bool)1))) | (((/* implicit */int) arr_39 [i_7]))));
            }
            /* LoopSeq 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_37 -= (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_7] [i_7] [i_0]))))));
                var_38 = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) arr_39 [i_7])))));
                var_39 *= ((/* implicit */unsigned short) arr_45 [10LL]);
                arr_48 [2LL] [(unsigned short)3] [(unsigned short)3] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0]))))));
            }
            for (unsigned short i_15 = 0; i_15 < 24; i_15 += 1) 
            {
                var_40 = ((/* implicit */unsigned long long int) arr_18 [i_15]);
                arr_52 [i_0] [i_7] [i_15] = ((/* implicit */unsigned short) arr_31 [(short)11] [(short)11] [i_15] [13LL]);
                arr_53 [i_0] [i_0] [i_0] [i_7] |= ((/* implicit */short) (-(((/* implicit */int) arr_42 [i_7] [i_15]))));
            }
            var_41 = ((/* implicit */long long int) arr_7 [i_7]);
        }
        arr_54 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)219))));
        /* LoopSeq 3 */
        for (long long int i_16 = 1; i_16 < 22; i_16 += 2) 
        {
            var_42 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_16 - 1] [i_16 + 1]))));
            /* LoopNest 2 */
            for (long long int i_17 = 0; i_17 < 24; i_17 += 1) 
            {
                for (unsigned int i_18 = 0; i_18 < 24; i_18 += 3) 
                {
                    {
                        arr_64 [i_0] [i_17] [(unsigned short)4] [i_17] [i_0] = ((/* implicit */unsigned short) arr_58 [(unsigned short)3] [i_16] [i_17] [(unsigned short)3]);
                        var_43 = ((/* implicit */short) arr_22 [6LL] [4LL] [9ULL] [(short)17]);
                    }
                } 
            } 
        }
        for (unsigned short i_19 = 0; i_19 < 24; i_19 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (short i_20 = 0; i_20 < 24; i_20 += 3) 
            {
                arr_70 [i_0] [i_0] [i_0] [1] = ((/* implicit */_Bool) ((signed char) arr_0 [i_19] [i_19]));
                var_44 &= ((/* implicit */unsigned short) arr_41 [i_0] [i_0] [i_0]);
            }
            for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 1) 
            {
                arr_75 [i_0] [i_19] [i_21] [i_21] = ((/* implicit */signed char) (+(arr_67 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2])));
                arr_76 [i_21] [(short)15] [(short)15] [i_21] = ((/* implicit */unsigned char) (_Bool)0);
                arr_77 [i_21] [(signed char)21] = (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0] [i_19] [i_0] [i_19]))) == (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))));
            }
            for (long long int i_22 = 0; i_22 < 24; i_22 += 4) 
            {
                var_45 |= ((/* implicit */unsigned long long int) (short)-6433);
                /* LoopNest 2 */
                for (long long int i_23 = 0; i_23 < 24; i_23 += 3) 
                {
                    for (signed char i_24 = 0; i_24 < 24; i_24 += 3) 
                    {
                        {
                            arr_87 [i_19] [i_22] [i_22] [i_24] [3LL] = ((/* implicit */_Bool) arr_49 [i_24]);
                            var_46 = ((/* implicit */_Bool) max((var_46), (((((_Bool) (unsigned short)17)) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_51 [i_22] [i_22] [i_22] [6LL])))))))));
                        }
                    } 
                } 
                arr_88 [i_19] = ((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) & (((/* implicit */int) ((((/* implicit */int) arr_18 [i_19])) < (((/* implicit */int) (unsigned char)44)))))));
                arr_89 [i_22] &= ((unsigned short) arr_23 [i_0]);
                arr_90 [(short)19] = ((/* implicit */short) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
            }
            var_47 *= ((/* implicit */short) arr_69 [i_19] [(unsigned short)13] [i_19]);
            arr_91 [7ULL] &= ((/* implicit */unsigned long long int) arr_78 [i_0] [i_0] [i_0]);
        }
        for (unsigned short i_25 = 0; i_25 < 24; i_25 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_26 = 1; i_26 < 22; i_26 += 4) 
            {
                for (unsigned short i_27 = 0; i_27 < 24; i_27 += 3) 
                {
                    for (signed char i_28 = 1; i_28 < 20; i_28 += 1) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_25] [(unsigned char)10] [6])) || (arr_61 [(short)6] [18ULL] [(short)6] [(short)6])))))))));
                            var_49 = ((((/* implicit */int) ((short) arr_36 [i_0] [i_0] [11U] [i_27]))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(unsigned short)4] [(unsigned short)4] [0] [(unsigned short)4] [i_26] [(_Bool)1]))))));
                            var_50 = ((/* implicit */unsigned short) (~(((long long int) 7714429453716748141LL))));
                        }
                    } 
                } 
            } 
            arr_105 [i_0] [10LL] [10LL] = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_45 [i_0]))))));
            var_51 *= ((/* implicit */unsigned char) (-(arr_96 [8U] [i_25])));
            arr_106 [17U] = ((/* implicit */unsigned long long int) ((_Bool) arr_20 [i_0] [i_0] [i_0]));
        }
    }
    var_52 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (var_3)))) ^ (15006165397913393894ULL)))));
    var_53 = ((/* implicit */_Bool) min((var_53), (((/* implicit */_Bool) var_10))));
    var_54 *= ((/* implicit */unsigned long long int) var_1);
    var_55 -= ((/* implicit */short) ((((int) (-(((/* implicit */int) (short)18810))))) >= (((/* implicit */int) (unsigned short)38491))));
}
