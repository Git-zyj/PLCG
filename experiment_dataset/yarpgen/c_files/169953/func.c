/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169953
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
    var_19 = ((/* implicit */unsigned long long int) var_11);
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_16)), (min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) ^ (var_18)))))));
    var_21 = max((((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (var_16)))) & (max((((/* implicit */unsigned long long int) var_11)), (var_0))))), (((/* implicit */unsigned long long int) var_7)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) != (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))));
            arr_6 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4465888737604540034LL))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                var_22 = ((/* implicit */_Bool) (~(arr_1 [i_0 - 2] [i_0])));
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */int) ((var_6) & (((unsigned long long int) arr_7 [11] [i_1 + 1] [i_1 - 1] [5ULL]))));
                var_23 = ((/* implicit */int) ((arr_8 [i_0] [i_1 + 1] [i_1 + 1]) == (arr_8 [i_0] [i_1 + 1] [8])));
            }
        }
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
            var_25 = ((/* implicit */unsigned char) var_2);
            arr_14 [i_0] [i_0] [i_3] = (i_0 % 2 == zero) ? (((/* implicit */short) ((arr_8 [i_0] [i_3] [i_0]) >> (((arr_11 [i_0]) - (2815863440U)))))) : (((/* implicit */short) ((arr_8 [i_0] [i_3] [i_0]) >> (((((arr_11 [i_0]) - (2815863440U))) - (2573589683U))))));
            var_26 ^= ((/* implicit */unsigned int) ((long long int) var_2));
            var_27 ^= ((/* implicit */unsigned long long int) arr_0 [i_3] [i_3]);
        }
        for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                var_28 = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_0 + 2] [i_0])) ^ (((/* implicit */int) arr_18 [i_0] [i_0]))));
                var_29 &= ((/* implicit */signed char) ((((arr_7 [10] [i_4] [i_4] [i_4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_12 [i_4] [i_4] [i_5])) == (arr_8 [i_4] [i_4] [10ULL])))))));
                var_30 = ((/* implicit */unsigned int) ((arr_15 [i_0] [i_0 + 2] [i_0 + 2]) - (arr_15 [i_0] [i_0 + 2] [i_0])));
                arr_19 [i_0] [i_0 - 1] [i_4] [i_0] = ((/* implicit */signed char) ((short) -4465888737604540037LL));
            }
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                var_31 ^= (~(((/* implicit */int) var_17)));
                arr_24 [(short)2] [(short)2] [i_0] [(short)2] = ((/* implicit */int) ((((var_2) + (((/* implicit */unsigned long long int) arr_0 [i_0] [i_4])))) & (((/* implicit */unsigned long long int) arr_3 [i_0 + 2] [i_0 + 2] [i_0]))));
            }
            var_32 ^= ((int) arr_13 [i_0 - 2] [i_0 - 1] [i_4]);
            var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0]))));
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                for (int i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        {
                            var_34 ^= ((/* implicit */int) arr_1 [i_0 - 2] [i_7]);
                            arr_32 [(unsigned short)8] [i_0] = arr_2 [i_0] [i_8] [i_0];
                        }
                    } 
                } 
            } 
            arr_33 [i_0] [9LL] [i_0] = ((/* implicit */unsigned char) ((arr_15 [i_0] [i_0 - 1] [i_0]) < (arr_15 [i_0] [i_0] [i_0])));
        }
        for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) 
            {
                arr_38 [i_0] [i_10] = ((/* implicit */unsigned long long int) (~(arr_12 [i_0] [i_11] [(signed char)3])));
                var_35 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_7))) && (((/* implicit */_Bool) var_10))));
            }
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    {
                        arr_43 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) var_4));
                        arr_44 [i_0] = ((/* implicit */_Bool) ((((arr_4 [i_13] [7LL] [i_10]) + (2147483647))) >> (((arr_4 [i_10] [i_10] [3]) + (1585571023)))));
                    }
                } 
            } 
            arr_45 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_0 - 1] [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1])) && (((/* implicit */_Bool) arr_28 [i_0 - 2] [i_0] [i_0 + 2] [i_0 - 1] [i_0 - 2]))));
            /* LoopSeq 4 */
            for (short i_14 = 0; i_14 < 13; i_14 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 4) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 4) 
                    {
                        {
                            var_36 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_37 [i_0 - 1] [i_0 + 2] [i_0 - 2] [i_0 - 1]))));
                            arr_56 [i_0] [i_0] [i_16] = ((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_0 + 2] [i_0])) % (((/* implicit */int) arr_18 [i_0 + 1] [i_0]))));
                            var_37 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_12 [i_10] [i_0 - 1] [i_10])) != (arr_52 [i_16] [i_16] [12ULL] [i_0 - 2])));
                            var_38 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
                            var_39 = ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_23 [i_0 - 2] [i_0 - 1] [i_0])));
                        }
                    } 
                } 
                var_40 ^= ((/* implicit */unsigned int) ((long long int) arr_50 [i_14]));
                arr_57 [i_14] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_46 [i_14] [8]))) || (((/* implicit */_Bool) arr_46 [i_0 - 2] [i_0 - 2]))));
            }
            for (long long int i_17 = 1; i_17 < 10; i_17 += 4) 
            {
                arr_61 [i_0 + 2] [i_0] [i_17] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
                var_41 = ((/* implicit */unsigned long long int) ((arr_4 [i_0 - 2] [i_10] [5U]) * (((/* implicit */int) ((var_0) < (var_8))))));
            }
            for (int i_18 = 0; i_18 < 13; i_18 += 1) 
            {
                arr_65 [i_0] = ((/* implicit */short) arr_36 [(short)11]);
                var_42 = ((arr_58 [i_0 + 2] [i_10] [i_10] [i_0]) || (((/* implicit */_Bool) ((long long int) arr_51 [(unsigned short)11] [i_10] [i_10] [i_0]))));
            }
            for (signed char i_19 = 0; i_19 < 13; i_19 += 2) 
            {
                var_43 += ((((/* implicit */int) arr_2 [i_19] [i_10] [i_19])) / (arr_4 [i_0 - 2] [i_10] [i_19]));
                var_44 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_67 [i_0 - 1] [i_0 + 2] [i_0 + 2]))));
            }
        }
        arr_69 [(short)4] [i_0 + 2] &= ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_13)) * (var_14))) != (arr_31 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 2])));
        arr_70 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_55 [i_0] [i_0 - 2] [i_0 - 1] [i_0 + 2] [i_0] [i_0] [i_0])) < (((/* implicit */int) ((((/* implicit */int) var_17)) < (((/* implicit */int) arr_16 [i_0] [i_0])))))));
    }
    for (unsigned int i_20 = 0; i_20 < 24; i_20 += 1) 
    {
        arr_75 [i_20] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_4)), (var_11))))))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_21 = 1; i_21 < 20; i_21 += 1) /* same iter space */
        {
            arr_78 [i_21 + 4] [(unsigned short)12] [i_20] |= ((/* implicit */int) arr_76 [i_21 + 4]);
            /* LoopNest 2 */
            for (long long int i_22 = 0; i_22 < 24; i_22 += 3) 
            {
                for (unsigned int i_23 = 0; i_23 < 24; i_23 += 4) 
                {
                    {
                        var_45 = ((/* implicit */unsigned int) var_6);
                        arr_86 [i_20] [i_22] [i_21 + 3] [i_20] = ((/* implicit */unsigned long long int) ((signed char) arr_85 [i_21 - 1] [i_21] [i_20] [i_20] [i_21 + 4] [i_21]));
                        var_46 = ((int) ((short) arr_83 [i_22] [i_20] [i_22] [(unsigned char)10]));
                    }
                } 
            } 
        }
        for (long long int i_24 = 1; i_24 < 20; i_24 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_25 = 0; i_25 < 24; i_25 += 1) 
            {
                for (unsigned short i_26 = 0; i_26 < 24; i_26 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_27 = 0; i_27 < 24; i_27 += 4) 
                        {
                            var_47 += ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_87 [i_24 + 3] [i_24 + 2] [i_24 + 3])))) << (((((max((((/* implicit */long long int) (+(((/* implicit */int) arr_94 [i_26] [i_27] [i_26] [i_26]))))), (arr_91 [i_20] [i_24 + 3] [i_25] [i_25]))) + (21140LL))) - (28LL)))));
                            arr_97 [i_20] [i_20] [i_24] [i_25] [i_20] [i_26] [i_27] = ((/* implicit */signed char) (!(((_Bool) max((-4465888737604540035LL), (4465888737604540034LL))))));
                            arr_98 [i_20] [i_26] [i_26] [i_26] [i_20] [i_24] [i_20] = ((/* implicit */short) (!(min((arr_95 [i_20] [i_24] [i_20] [i_24 + 4] [i_24 + 3] [i_25]), (arr_95 [i_20] [i_24] [i_25] [i_25] [i_24 - 1] [i_27])))));
                        }
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            var_48 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) >= (var_18)))), (max((var_3), (arr_99 [i_20] [i_24 + 3] [11U] [i_20] [i_28] [i_28] [11U])))));
                            var_49 = ((/* implicit */unsigned char) ((signed char) min((((/* implicit */unsigned int) arr_96 [i_28] [i_26] [(unsigned short)9] [i_25] [i_24] [20])), (arr_82 [i_24 + 1] [i_24 - 1] [i_24 + 1]))));
                            arr_102 [i_20] [6ULL] [i_20] [i_20] [i_20] [i_20] &= ((/* implicit */_Bool) arr_90 [i_20] [i_20]);
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_29 = 0; i_29 < 24; i_29 += 3) 
                        {
                            arr_106 [i_20] [i_20] [i_25] [i_20] [i_29] [i_29] = (i_20 % 2 == zero) ? (((/* implicit */_Bool) ((((var_16) + (9223372036854775807LL))) << (((((/* implicit */int) arr_99 [i_25] [i_24 - 1] [i_24] [i_20] [i_24 + 4] [i_24] [i_24])) - (142)))))) : (((/* implicit */_Bool) ((((var_16) + (9223372036854775807LL))) << (((((((((/* implicit */int) arr_99 [i_25] [i_24 - 1] [i_24] [i_20] [i_24 + 4] [i_24] [i_24])) - (142))) + (145))) - (38))))));
                            arr_107 [i_20] [i_24] [i_25] [i_26] [i_20] [i_29] = ((/* implicit */int) arr_83 [i_20] [i_20] [(signed char)7] [i_29]);
                        }
                        arr_108 [i_20] [18U] [i_24] [i_24 + 2] [i_24] [i_26] &= ((/* implicit */int) ((((((((/* implicit */int) arr_85 [i_20] [i_20] [i_24] [(unsigned char)20] [i_20] [i_26])) & (arr_103 [i_26] [(unsigned short)2] [(short)22] [(short)22] [i_24 + 2] [i_20]))) + (((/* implicit */int) arr_93 [i_26] [i_26] [i_25] [i_20] [i_20] [i_20])))) <= (((/* implicit */int) (!(var_17))))));
                        var_50 = min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (min((((/* implicit */unsigned long long int) var_9)), (6725096760875135028ULL)))))), (((unsigned long long int) max((((/* implicit */unsigned long long int) arr_80 [i_24])), (arr_77 [(_Bool)1] [i_26])))));
                    }
                } 
            } 
            arr_109 [i_20] [(short)21] = ((/* implicit */unsigned char) ((min((((/* implicit */int) min((((/* implicit */unsigned char) arr_95 [i_24] [i_24] [(signed char)23] [i_24] [(short)4] [i_24])), (var_4)))), (arr_74 [i_24 + 1] [i_20]))) % (((/* implicit */int) var_17))));
        }
        var_51 ^= ((/* implicit */unsigned short) var_15);
        var_52 &= ((/* implicit */signed char) max((arr_99 [i_20] [i_20] [i_20] [20] [i_20] [i_20] [i_20]), (((/* implicit */unsigned char) min((var_7), (((/* implicit */signed char) (!(((/* implicit */_Bool) 6725096760875135023ULL))))))))));
        var_53 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_82 [i_20] [i_20] [i_20]) > (arr_82 [i_20] [i_20] [i_20]))))) == (((unsigned int) max((var_1), (((/* implicit */unsigned int) arr_103 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20])))))));
    }
}
