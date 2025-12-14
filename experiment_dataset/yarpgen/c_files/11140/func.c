/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11140
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
    var_14 = ((var_2) >= (((/* implicit */int) var_3)));
    var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = (+(max((1003358330), (-918774032))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (1003358330) : ((+(((/* implicit */int) var_0)))))), (((arr_1 [i_0] [i_0]) ^ (((/* implicit */int) var_12))))));
        var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_13)) % (1003358330)))) ? (min((-1635447632), (((/* implicit */int) var_13)))) : (((/* implicit */int) ((-1707672542) != (-1003358330)))))), (((/* implicit */int) ((((unsigned int) arr_0 [i_0] [i_0])) == (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))))));
    }
    /* LoopSeq 3 */
    for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 19; i_2 += 4) 
        {
            for (unsigned int i_3 = 3; i_3 < 20; i_3 += 1) 
            {
                {
                    var_17 = arr_7 [i_2];
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            {
                                arr_17 [i_1] [i_1] [(short)3] [i_2] = arr_12 [i_5] [i_4] [i_3 - 1] [i_1] [i_1];
                                arr_18 [i_1] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */long long int) arr_15 [i_2] [i_2 - 1] [12U] [i_1] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_19 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned short) (short)32767)), (((unsigned short) (short)-20827))));
        /* LoopSeq 2 */
        for (long long int i_6 = 1; i_6 < 20; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    var_18 = ((/* implicit */long long int) arr_27 [i_1] [20LL] [i_1] [(signed char)1]);
                    /* LoopSeq 3 */
                    for (signed char i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        arr_31 [i_1] [17U] [17] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_1 [i_8] [i_8]);
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))));
                        arr_32 [i_1] [i_6] [(signed char)16] [8LL] [8LL] [(_Bool)1] [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_28 [i_6] [i_6 + 1]))));
                        var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_6 + 1])) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) var_3))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_21 ^= ((/* implicit */unsigned char) var_11);
                        arr_36 [i_1] [i_1] [i_1] [i_1] [(unsigned short)13] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_6] [i_1] [(_Bool)1] [i_10])) ? (-1003358330) : (((/* implicit */int) var_0))))) ? (arr_24 [i_6 - 1]) : (((/* implicit */unsigned long long int) ((var_6) ? (arr_0 [i_7] [i_6 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        arr_39 [(unsigned short)1] [i_6] [i_6] [i_6] [i_6 + 1] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) 9223372036854775807LL)))));
                        var_22 = ((/* implicit */unsigned char) ((arr_27 [i_6 + 1] [i_6 - 1] [i_8] [i_11]) ? (((/* implicit */int) var_0)) : (1003358328)));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        var_23 = ((/* implicit */int) (+(((unsigned int) (signed char)54))));
                        arr_43 [i_6] [i_6 - 1] [i_7] [i_6 - 1] [i_12] [i_7] [9U] |= ((/* implicit */_Bool) arr_22 [11LL] [11LL]);
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_35 [i_6] [i_6 - 1] [i_6 + 1] [i_6 + 1] [14ULL] [i_6 - 1])) != (((((/* implicit */_Bool) arr_25 [i_12] [i_8] [11ULL] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_1] [i_6] [i_7] [i_7] [i_12] [(_Bool)1]))) : (arr_21 [i_7] [i_7] [i_7])))));
                    }
                    for (int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        arr_47 [16U] [i_7] [i_7] [16U] &= (+(var_1));
                        arr_48 [15U] [i_7] [i_6] [i_1] = ((/* implicit */unsigned int) arr_44 [i_6 + 1] [i_6 - 1] [i_7] [i_7]);
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) ((unsigned char) var_3));
                        var_26 = ((/* implicit */unsigned int) (+(arr_15 [i_14] [i_8] [i_7] [i_6] [i_14])));
                        var_27 = ((((/* implicit */_Bool) arr_50 [i_6 + 1] [i_7] [13LL] [i_8] [i_14])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_50 [i_6 - 1] [(unsigned char)1] [i_7] [i_8] [i_6 - 1])));
                        var_28 = ((/* implicit */unsigned char) ((9223372036854775807LL) / (((((/* implicit */_Bool) (short)-32757)) ? (((/* implicit */long long int) var_1)) : (3151769419397772946LL)))));
                        arr_53 [i_1] [4ULL] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_4 [i_1] [i_7])) / (-1635447632))) % (arr_15 [i_8] [i_6] [i_6 + 1] [i_6 - 1] [i_8])));
                    }
                    for (unsigned short i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        arr_58 [i_1] [i_1] [i_7] [i_8] [i_15] = ((/* implicit */short) ((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))));
                        arr_59 [i_1] [i_6] [i_7] [i_6] [i_15] = ((/* implicit */signed char) (+(((/* implicit */int) arr_23 [i_6 - 1] [i_6 - 1]))));
                        var_29 = ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6 - 1]))) % (((((/* implicit */_Bool) arr_37 [i_1] [i_1] [18] [i_1] [i_1] [i_1])) ? (arr_29 [i_1] [i_6 - 1] [i_7] [i_8] [i_7] [i_6 + 1]) : (arr_45 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                    }
                    for (unsigned short i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        arr_62 [i_1] = ((/* implicit */unsigned int) var_3);
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_6] [i_6 + 1] [i_6 - 1] [i_8] [(unsigned short)14] [19LL] [i_1])) ? (((/* implicit */long long int) -1003358311)) : (arr_33 [i_8] [i_6] [i_6 + 1] [i_7] [(_Bool)1] [i_8] [(short)18]))))));
                        arr_63 [i_1] [i_6] [i_7] [i_7] [i_8] [i_8] [i_16] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_25 [i_1] [i_7] [(short)14] [20LL])) < (((/* implicit */int) (short)16687)))));
                        arr_64 [i_1] [i_6] [i_7] [(short)10] [i_8] [i_8] [(unsigned short)17] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_50 [i_1] [i_6 + 1] [i_7] [i_8] [i_16])) ? (((/* implicit */int) arr_50 [i_1] [i_6] [18U] [i_8] [i_16])) : (((/* implicit */int) arr_50 [i_1] [i_6 + 1] [i_7] [i_8] [(_Bool)1]))));
                    }
                    var_31 ^= ((/* implicit */_Bool) arr_50 [i_1] [i_1] [i_1] [20] [i_8]);
                }
                arr_65 [i_1] [14U] = ((/* implicit */long long int) ((signed char) arr_61 [i_6 - 1] [i_6 + 1]));
                arr_66 [i_1] [i_6] [i_7] = ((/* implicit */long long int) ((arr_4 [(short)0] [i_6]) ? ((+(((/* implicit */int) arr_57 [i_1] [i_6 - 1] [9] [i_6] [i_7] [i_7] [7])))) : (((/* implicit */int) var_13))));
                arr_67 [4ULL] [i_6] [i_6] [i_6] = ((/* implicit */signed char) arr_35 [i_7] [i_6] [i_6 - 1] [10LL] [10LL] [10LL]);
            }
            arr_68 [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) arr_35 [i_6] [i_6] [i_6] [(signed char)9] [i_6] [i_1]);
            arr_69 [i_1] [i_1] [(short)0] = ((/* implicit */unsigned short) arr_5 [i_1]);
        }
        for (long long int i_17 = 1; i_17 < 20; i_17 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_18 = 1; i_18 < 18; i_18 += 2) 
            {
                for (unsigned int i_19 = 0; i_19 < 21; i_19 += 4) 
                {
                    for (unsigned int i_20 = 3; i_20 < 20; i_20 += 4) 
                    {
                        {
                            var_32 = min((min((((/* implicit */int) (unsigned short)14279)), (-1635447632))), ((+(((((/* implicit */int) arr_37 [(unsigned char)8] [i_1] [i_17 - 1] [14ULL] [(unsigned short)5] [i_20])) >> (0LL))))));
                            var_33 = ((/* implicit */unsigned int) var_11);
                            arr_80 [i_18 + 2] [i_18 + 3] [i_18 + 2] [i_18 + 3] [i_18 + 2] = var_0;
                            var_34 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_71 [i_1] [i_17 - 1] [i_18 - 1])) ? (((/* implicit */int) arr_71 [i_18 + 1] [i_19] [i_20 - 3])) : (((/* implicit */int) arr_56 [i_1] [(signed char)17] [i_18 + 1] [i_19] [i_20 - 3])))), (((((/* implicit */int) arr_71 [(signed char)1] [(signed char)1] [i_18 - 1])) ^ (((/* implicit */int) var_12))))));
                        }
                    } 
                } 
            } 
            arr_81 [(short)8] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_35 [i_1] [i_1] [i_1] [(_Bool)1] [i_1] [i_17])), (3903648637U))) | (((/* implicit */unsigned int) -900265033))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)84))))) ? ((~(((/* implicit */int) (short)-16683)))) : (((/* implicit */int) var_7))))) : (((unsigned long long int) (~(((/* implicit */int) (short)-16701)))))));
            arr_82 [17] [15] = ((/* implicit */long long int) arr_41 [i_1] [i_17] [i_1] [i_1] [i_1] [i_17] [i_1]);
            arr_83 [(short)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) min((arr_45 [i_1] [i_1] [i_1] [(unsigned short)16] [i_1]), (((/* implicit */long long int) arr_27 [i_1] [i_17] [i_1] [i_1])))))) ? (3816934777U) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_25 [i_1] [6] [i_17] [i_17]), (((/* implicit */unsigned short) ((arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_17 + 1]) != (((/* implicit */int) arr_37 [i_1] [i_1] [i_1] [i_17 + 1] [i_17 + 1] [i_17])))))))))));
            arr_84 [i_1] [i_1] [i_17] = ((/* implicit */unsigned short) (unsigned char)176);
        }
        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (short)-15755))));
        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) (+(9223372036854775807LL))))));
    }
    for (unsigned short i_21 = 0; i_21 < 22; i_21 += 3) 
    {
        var_37 = ((/* implicit */unsigned short) var_2);
        var_38 = ((/* implicit */unsigned int) 4417022239330832853LL);
    }
    /* vectorizable */
    for (short i_22 = 0; i_22 < 21; i_22 += 4) 
    {
        var_39 += ((/* implicit */unsigned short) arr_44 [i_22] [i_22] [i_22] [13]);
        var_40 += ((/* implicit */signed char) 0);
    }
}
