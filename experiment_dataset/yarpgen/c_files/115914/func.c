/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115914
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (short)(-32767 - 1));
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                var_11 += ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_8 [i_1 - 2] [i_2] [i_2])))));
                /* LoopSeq 4 */
                for (short i_3 = 4; i_3 < 18; i_3 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_12 ^= ((/* implicit */unsigned char) arr_10 [6ULL] [i_1] [i_1]);
                        arr_17 [i_0] [i_1] [i_4] [i_3 - 4] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_2 [i_3]), (arr_8 [i_3 + 3] [i_3 - 3] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1704443409018188444LL))))) : (((((/* implicit */int) arr_0 [i_3 + 3] [i_1 - 2])) / (((/* implicit */int) (short)15608))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_16 [i_0] [i_1] [i_2] [i_3] [i_5] [i_3 - 2] [i_2]), (arr_16 [0] [i_1] [i_0] [i_3] [i_5] [i_3 + 1] [i_1 - 3])))) ? (((/* implicit */int) (unsigned char)28)) : (((((/* implicit */int) arr_12 [i_3 + 2] [i_3] [i_3] [i_3 + 1])) % (((/* implicit */int) arr_12 [i_3] [i_3] [i_3] [i_3 - 1])))))))));
                        var_14 *= ((/* implicit */unsigned int) (short)-5294);
                    }
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        arr_23 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) arr_8 [i_0] [i_3] [i_6])))));
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) min((arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [10LL] [i_2]), (arr_8 [i_0] [i_2] [i_2]))))))))));
                        arr_24 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) -1704443409018188444LL))))))) : (min((9223372036854775807LL), (((/* implicit */long long int) 0U))))));
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((unsigned long long int) var_7))));
                    }
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) min((2874704565U), (((/* implicit */unsigned int) arr_0 [i_2] [i_2])))))));
                    /* LoopSeq 2 */
                    for (long long int i_7 = 1; i_7 < 18; i_7 += 3) /* same iter space */
                    {
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)150))))) ? (((/* implicit */long long int) (+(arr_6 [16LL])))) : (arr_11 [i_7 + 2] [i_7] [i_7] [(signed char)4]))))));
                        var_19 += ((/* implicit */unsigned long long int) var_7);
                        var_20 &= ((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) arr_26 [i_0] [(signed char)0] [i_0] [i_0] [i_0])) ? (arr_28 [i_0] [i_1 + 1] [i_2] [i_3 + 3] [14LL]) : (arr_28 [i_0] [i_1] [i_2] [i_3 + 2] [0]))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)-902)) : (((/* implicit */int) (unsigned char)148))))));
                        var_21 -= ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_3]);
                    }
                    for (long long int i_8 = 1; i_8 < 18; i_8 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) (+(min((3027283410U), (((/* implicit */unsigned int) arr_0 [i_3] [i_8]))))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_2 [i_3 + 3]))));
                        var_24 = ((unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-4724719228674155853LL) : (((/* implicit */long long int) 2147475456))));
                    }
                }
                for (short i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        var_25 += ((/* implicit */unsigned short) ((short) ((unsigned long long int) arr_34 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_1])));
                        var_26 ^= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_27 [i_0] [i_10] [i_2] [i_9] [i_9] [i_10])) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_10])) : (var_0))));
                        var_27 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 0U))) ? (((/* implicit */int) arr_15 [i_0] [i_1 - 1] [i_2] [i_9] [i_10] [i_10])) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_1 - 1] [9] [i_9] [i_9] [i_10])) <= (((/* implicit */int) arr_15 [i_10] [i_2] [i_2] [i_2] [i_1 - 3] [i_0])))))));
                        arr_37 [i_0] [i_1 - 2] [i_0] [i_0] [i_1] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_13 [i_1] [i_1]))) ^ ((+(((/* implicit */int) arr_32 [i_1 + 1] [i_1 - 3] [i_1 - 3] [i_1 - 2] [i_1 + 1] [i_1 - 2]))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_38 [i_1] [i_1] [i_1 - 3] [i_1 - 1] [i_1 + 1])) & (((/* implicit */int) (unsigned char)203))));
                        var_29 += ((/* implicit */unsigned int) arr_11 [i_0] [i_1 - 2] [i_2] [12LL]);
                        arr_42 [i_1] = ((/* implicit */_Bool) var_7);
                        arr_43 [6LL] [i_1 + 1] [i_2] [i_9] [i_11] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_32 [19U] [i_1] [(unsigned char)18] [i_2] [i_1 - 3] [(unsigned char)18]))));
                    }
                    for (long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        var_30 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((1973295), (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)250)), ((unsigned short)32129))))))) ? (((/* implicit */int) ((short) arr_0 [i_1 + 1] [i_1 + 1]))) : ((-(((/* implicit */int) arr_5 [i_9]))))));
                        var_31 = ((/* implicit */unsigned long long int) arr_39 [i_1]);
                    }
                    for (short i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        var_32 = ((/* implicit */short) arr_5 [i_1 - 2]);
                        var_33 = var_9;
                        var_34 &= ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(unsigned short)2] [i_1 - 1]))))), ((-(var_9)))));
                        var_35 += ((/* implicit */signed char) var_9);
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (~(((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_27 [i_0] [6LL] [i_1] [i_2] [i_9] [i_13])))))))))));
                    }
                    var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_15 [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1 + 1]), (arr_15 [i_1] [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1] [i_1])))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1 - 3] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_15 [i_1 - 2] [i_1 + 1] [i_1] [i_1] [i_1] [i_1 - 3])) : (((/* implicit */int) arr_15 [i_1] [i_1 - 3] [i_1] [i_1] [i_1 - 3] [i_1 - 2])))))));
                }
                for (unsigned char i_14 = 0; i_14 < 21; i_14 += 1) 
                {
                    var_38 *= ((signed char) (unsigned char)250);
                    var_39 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min(((+(arr_27 [i_14] [10] [i_2] [i_1] [10] [i_0]))), (((/* implicit */int) arr_16 [i_14] [i_2] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1]))))), (3027283410U)));
                }
                for (int i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    arr_56 [i_2] [i_2] [i_1] = 5128177118673050973LL;
                    arr_57 [i_0] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_11 [i_1] [i_1 - 3] [i_1] [i_1]) % (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_1] [i_1 - 2] [i_1] [i_1])))))) ? (arr_10 [i_1] [i_2] [i_1]) : (((/* implicit */unsigned int) ((int) arr_55 [i_1] [i_0] [i_1] [19])))));
                    arr_58 [4ULL] [i_1 - 2] [i_1] [i_15] = ((/* implicit */short) (-(((/* implicit */int) arr_55 [i_1] [i_0] [i_1 - 1] [i_1 - 3]))));
                    arr_59 [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_1 - 2] [i_2] [i_2] [i_1 - 2] [i_0])) ? (arr_50 [i_15] [i_15] [i_15] [i_1 - 2] [i_0]) : (arr_50 [i_15] [i_2] [i_2] [i_1 + 1] [i_1]))))));
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)54106)) << (((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_38 [i_15] [i_1] [13ULL] [i_1] [i_0]))) >= (((/* implicit */int) ((unsigned short) 1U))))))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 1; i_16 < 19; i_16 += 1) 
                {
                    var_41 &= (-(((((/* implicit */_Bool) ((short) (short)512))) ? (((/* implicit */int) (short)14840)) : (((/* implicit */int) arr_2 [i_0])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_17 = 2; i_17 < 17; i_17 += 3) 
                    {
                        arr_65 [i_1] [12U] &= ((/* implicit */int) arr_33 [i_17 - 2] [i_17 + 3] [i_17 + 3] [i_17] [i_17] [i_17]);
                        var_42 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_1 [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))))))));
                        var_43 *= ((/* implicit */unsigned long long int) (unsigned short)11430);
                        var_44 ^= ((/* implicit */unsigned long long int) ((((_Bool) (unsigned short)2909)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1] [i_2]))));
                        var_45 = ((/* implicit */int) ((unsigned short) arr_19 [(unsigned short)7] [(unsigned short)7] [i_1] [(unsigned short)7] [i_1 + 1] [i_1] [i_1]));
                    }
                }
            }
            for (int i_18 = 1; i_18 < 17; i_18 += 2) 
            {
                var_46 = ((/* implicit */signed char) var_5);
                var_47 -= ((/* implicit */int) var_2);
            }
            var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) arr_53 [i_1 - 3] [i_1] [i_1] [i_1 - 3]))))))));
        }
    }
    for (unsigned short i_19 = 0; i_19 < 21; i_19 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_20 = 0; i_20 < 21; i_20 += 1) 
        {
            for (unsigned int i_21 = 1; i_21 < 19; i_21 += 3) 
            {
                {
                    var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_27 [i_19] [12ULL] [i_19] [(unsigned char)4] [i_21 + 2] [i_21 - 1]), ((-(((/* implicit */int) (unsigned short)41997))))))) ? ((-(((int) arr_62 [6ULL] [i_19] [i_20] [(short)14])))) : (((/* implicit */int) arr_45 [i_19] [i_19] [i_21] [i_21] [i_21] [i_21 - 1])))))));
                    var_50 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_19] [i_19] [i_19] [i_19])) ? ((-(max((arr_9 [8] [i_20]), (((/* implicit */long long int) arr_64 [i_20] [i_20] [i_21] [i_21] [i_20])))))) : (arr_40 [i_19] [i_19] [i_20] [i_21 - 1] [i_20] [i_19] [i_20])));
                }
            } 
        } 
        var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_14 [i_19] [i_19] [16])))) == (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (2569386988U) : (4294967280U))))))));
    }
    for (unsigned char i_22 = 0; i_22 < 12; i_22 += 1) 
    {
        var_52 = ((/* implicit */long long int) arr_78 [(_Bool)1]);
        var_53 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) var_0)))));
        /* LoopSeq 1 */
        for (unsigned short i_23 = 2; i_23 < 11; i_23 += 1) 
        {
            arr_81 [i_22] [i_22] = ((/* implicit */unsigned short) ((((arr_33 [i_23 - 2] [i_23 - 2] [(_Bool)1] [i_23 - 2] [i_23] [(_Bool)1]) != (arr_33 [i_23 - 2] [i_23 - 1] [i_23 - 1] [i_23 - 2] [i_22] [i_23 - 2]))) ? (arr_33 [i_23 - 2] [i_23] [i_22] [i_22] [i_22] [i_22]) : (max((711496920U), (arr_33 [i_23 - 2] [i_23] [i_23] [i_22] [i_22] [i_23])))));
            arr_82 [i_22] = ((/* implicit */int) arr_34 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] [i_22]);
            arr_83 [i_22] [3ULL] [i_22] = arr_40 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] [i_23];
        }
    }
    for (short i_24 = 0; i_24 < 11; i_24 += 1) 
    {
        var_54 = ((/* implicit */unsigned long long int) arr_76 [i_24] [i_24] [i_24]);
        arr_87 [i_24] = ((/* implicit */long long int) ((min((arr_33 [10] [i_24] [i_24] [i_24] [i_24] [i_24]), (((/* implicit */unsigned int) (signed char)-74)))) >> ((((~(((/* implicit */int) arr_25 [i_24] [i_24] [0LL] [i_24] [20LL] [6U] [i_24])))) - (17341)))));
        /* LoopSeq 2 */
        for (long long int i_25 = 3; i_25 < 10; i_25 += 3) 
        {
            var_55 = ((/* implicit */int) arr_46 [(_Bool)1] [i_25] [i_24] [i_24] [8LL]);
            var_56 ^= ((((/* implicit */_Bool) (~(arr_19 [i_24] [i_24] [i_24] [i_24] [i_25 + 1] [i_25 - 2] [i_24])))) ? (((/* implicit */int) (unsigned short)38623)) : ((-(((/* implicit */int) ((_Bool) (unsigned char)230))))));
        }
        for (unsigned long long int i_26 = 1; i_26 < 9; i_26 += 1) 
        {
            var_57 -= ((/* implicit */unsigned char) (signed char)-1);
            var_58 ^= ((/* implicit */unsigned short) ((unsigned char) (signed char)91));
        }
    }
    var_59 = ((/* implicit */unsigned int) var_3);
    var_60 = ((/* implicit */unsigned long long int) var_5);
    var_61 = ((/* implicit */short) min((var_61), (((/* implicit */short) var_3))));
    var_62 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)62626)) ? (-1850025969) : (((/* implicit */int) (unsigned char)87)))), (((/* implicit */int) var_6))));
}
