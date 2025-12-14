/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11661
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
    var_12 = ((/* implicit */int) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_13 += ((/* implicit */short) arr_5 [i_0]);
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */int) var_1);
            var_14 -= ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-10224))))) != (((/* implicit */int) (short)-10224))));
            /* LoopSeq 2 */
            for (signed char i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_7 [i_0]))));
                /* LoopSeq 3 */
                for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                {
                    arr_15 [i_0] [i_1] [i_2 - 3] [i_3] [i_0] [i_1] |= ((/* implicit */unsigned short) var_0);
                    var_16 = ((/* implicit */int) var_8);
                    arr_16 [i_0] [i_1] [i_3] [i_3] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_9)) / (arr_6 [i_1] [i_1] [i_1])));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) * (((/* implicit */int) arr_0 [i_2] [i_3]))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    arr_19 [i_0] [i_1] [i_2] [i_0] |= ((/* implicit */unsigned long long int) (~(arr_11 [i_0] [i_0] [i_2 - 3] [i_2 - 3])));
                    var_18 = ((/* implicit */unsigned short) (~(arr_5 [i_1])));
                    arr_20 [i_0] [i_1] [i_0] [i_0] [i_4] [i_4] |= ((/* implicit */short) arr_18 [i_0] [0LL] [10ULL] [14LL]);
                }
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_17 [16ULL] [i_1] [i_0] [20LL]))));
                    var_20 += ((/* implicit */unsigned long long int) (signed char)10);
                }
                /* LoopSeq 3 */
                for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 3; i_7 < 22; i_7 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */short) max((var_21), (arr_17 [i_0] [i_2 - 2] [i_0] [i_6])));
                        var_22 = ((/* implicit */unsigned int) ((-7) * (((/* implicit */int) (short)-24818))));
                        arr_28 [i_0] [i_0] [i_7] |= (-(((/* implicit */int) var_10)));
                    }
                    for (unsigned char i_8 = 3; i_8 < 22; i_8 += 1) /* same iter space */
                    {
                        arr_32 [i_0] [i_1] [i_1] [i_2 - 3] [i_2 - 2] [i_1] [i_8] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_8 - 1] [i_2 + 1] [i_1] [i_6]))) - (((arr_11 [i_0] [i_1] [(short)3] [(short)3]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)115)))))));
                        var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_0] [i_0] [i_2 + 1] [22ULL])) <= (((/* implicit */int) var_10))));
                        var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) 7)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (short)10213))))));
                    }
                    var_25 += ((/* implicit */long long int) var_1);
                    arr_33 [0LL] [4U] [i_2 - 2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)10210)) / (((/* implicit */int) (short)-10242))));
                }
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    arr_37 [7] [i_1] [5] [i_2] [i_2] [(short)13] = ((/* implicit */long long int) arr_30 [i_0] [i_9] [(unsigned short)20] [(unsigned short)1]);
                    arr_38 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((arr_30 [i_0] [i_1] [i_1] [i_9]) - (((/* implicit */int) arr_23 [i_0] [(unsigned char)3] [5] [i_9] [i_1]))));
                    var_26 ^= ((/* implicit */unsigned int) arr_0 [i_0] [i_2]);
                    var_27 = ((/* implicit */_Bool) (~(arr_13 [i_1] [i_1] [i_2 - 3] [i_9])));
                }
                for (short i_10 = 1; i_10 < 22; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_11 = 1; i_11 < 22; i_11 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_2 - 3] [i_11 - 1])) != (((/* implicit */int) arr_0 [i_2 + 1] [i_11 + 1]))));
                        arr_43 [i_0] [i_0] [i_2] [i_10 - 1] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) var_9)) < (((72057594036879360LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)10213)))))));
                        arr_44 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) > (((/* implicit */int) var_3))))))));
                        var_29 = ((/* implicit */short) var_0);
                    }
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (short)10238))));
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_0] [i_1] [i_0] [i_2 + 2] [i_0])) ? (((/* implicit */long long int) var_9)) : (arr_22 [i_0] [i_0] [i_0] [i_0])))) ? (arr_7 [i_0]) : (arr_25 [i_2 + 1] [i_2 - 3] [i_0] [i_2 - 2] [i_2 - 1] [i_2 - 1]))))));
                    arr_45 [i_0] [4] [i_2] [i_2 + 1] [i_10 + 1] [i_10] |= ((/* implicit */unsigned char) var_9);
                }
                var_32 = ((/* implicit */long long int) arr_42 [i_0] [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] [i_0]);
                arr_46 [i_1] [i_0] [17ULL] [i_2] = ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_1] [i_1] [(unsigned char)6] [i_1]))) <= (arr_7 [i_0]));
            }
            for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 4) 
            {
                var_33 += ((/* implicit */short) var_4);
                arr_50 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_36 [i_0] [(unsigned short)5] [15LL] [i_1] [i_12] [i_12]);
                var_34 += ((arr_48 [i_0]) > (((/* implicit */unsigned long long int) 3651122309U)));
                /* LoopSeq 4 */
                for (long long int i_13 = 4; i_13 < 22; i_13 += 2) /* same iter space */
                {
                    var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10223)) ? (((/* implicit */int) var_5)) : (arr_51 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    var_36 += ((/* implicit */_Bool) (~(((/* implicit */int) arr_41 [(_Bool)1] [(_Bool)1] [i_13] [i_13] [i_13 - 2]))));
                }
                for (long long int i_14 = 4; i_14 < 22; i_14 += 2) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -5)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)-93)))) | (((/* implicit */int) (short)10209))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        arr_58 [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [13ULL] [(short)22] [8ULL] [i_0])) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) var_4))))) == (var_2)));
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) 6)) ? (arr_22 [i_0] [i_14 - 3] [i_12] [i_14]) : (arr_22 [i_0] [i_14 - 2] [i_12] [i_14])));
                    }
                    arr_59 [i_1] [i_1] [i_12] [i_14] = ((/* implicit */int) 268435200U);
                    var_39 += ((/* implicit */short) ((((var_2) + (9223372036854775807LL))) << (((((((/* implicit */int) var_10)) + (157))) - (48)))));
                }
                for (unsigned int i_16 = 1; i_16 < 19; i_16 += 1) 
                {
                    arr_62 [i_1] [(signed char)16] [i_12] [i_16 + 4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)117)) ? (arr_22 [17U] [i_16] [(short)14] [i_16]) : (arr_52 [i_16] [10LL] [i_16] [i_1] [i_1])));
                    var_40 = ((/* implicit */signed char) var_3);
                    var_41 = ((/* implicit */signed char) arr_0 [i_16 + 4] [i_12]);
                    /* LoopSeq 3 */
                    for (long long int i_17 = 0; i_17 < 23; i_17 += 4) /* same iter space */
                    {
                        arr_65 [i_0] [5] [17LL] [i_0] [6ULL] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_47 [i_12] [i_1] [i_16 + 1])) > (((arr_9 [i_1]) - (((/* implicit */unsigned long long int) arr_64 [i_1] [i_1] [i_12] [4U]))))));
                        var_42 += ((/* implicit */unsigned int) ((((arr_35 [i_12]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) % (arr_54 [7U]))))));
                    }
                    for (long long int i_18 = 0; i_18 < 23; i_18 += 4) /* same iter space */
                    {
                        var_43 = 1724640252;
                        var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_0] [i_16 + 3] [i_12] [i_0] [i_18] [i_18])) ? (((/* implicit */unsigned int) 19)) : (arr_63 [i_0] [i_16 + 3] [(short)16] [i_0] [i_18]))))));
                        var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_39 [i_12] [i_1] [i_12] [i_16])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)4)))))))));
                        arr_68 [10LL] [4] [i_1] [(short)12] = ((/* implicit */short) var_2);
                        var_46 = ((/* implicit */int) var_11);
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_47 += ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (var_0)));
                        var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_16 + 4] [i_0] [i_16 + 2]))) / (arr_22 [i_12] [i_16 + 4] [i_16 + 4] [3LL]))))));
                        var_49 = ((/* implicit */long long int) arr_42 [i_0] [i_1] [i_19] [i_16 + 1] [i_1]);
                    }
                    var_50 |= ((((/* implicit */_Bool) arr_36 [i_0] [i_16 + 3] [i_12] [i_0] [i_12] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_1] [i_12]))) / (arr_70 [i_0]))));
                }
                for (int i_20 = 1; i_20 < 19; i_20 += 4) 
                {
                    arr_74 [i_1] = ((/* implicit */unsigned short) 3);
                    arr_75 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (short)10213))));
                    /* LoopSeq 1 */
                    for (int i_21 = 0; i_21 < 23; i_21 += 3) 
                    {
                        var_51 = ((/* implicit */_Bool) (short)-256);
                        arr_80 [i_0] [i_1] [i_12] [i_20] [i_1] = ((/* implicit */unsigned short) (-((~(5575272821637863938ULL)))));
                    }
                }
            }
            var_52 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) var_2)) : (arr_48 [i_1])))));
        }
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            var_53 = ((/* implicit */_Bool) min((var_53), (((/* implicit */_Bool) arr_54 [i_0]))));
            var_54 ^= ((/* implicit */signed char) arr_34 [i_0] [i_0] [i_0] [i_22] [i_0]);
        }
        arr_83 [i_0] [i_0] = ((/* implicit */short) arr_64 [i_0] [i_0] [i_0] [i_0]);
        arr_84 [i_0] [i_0] = ((/* implicit */unsigned char) ((2308767633U) * (((/* implicit */unsigned int) arr_77 [i_0] [i_0] [i_0] [i_0] [(unsigned char)4] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (signed char i_23 = 2; i_23 < 11; i_23 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_24 = 3; i_24 < 10; i_24 += 4) 
        {
            for (signed char i_25 = 1; i_25 < 11; i_25 += 3) 
            {
                {
                    var_55 ^= ((/* implicit */unsigned long long int) var_6);
                    arr_92 [i_23 - 2] [i_24] [i_23 - 2] = ((/* implicit */short) ((arr_79 [i_23 + 1] [i_24] [(short)11] [i_25 + 1] [(short)4]) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    var_56 = ((/* implicit */signed char) arr_9 [(signed char)16]);
                }
            } 
        } 
        arr_93 [9LL] = ((/* implicit */long long int) ((((/* implicit */int) var_3)) % (arr_67 [(_Bool)1] [i_23 + 1])));
        arr_94 [i_23] = arr_3 [i_23 + 2];
    }
    var_57 = ((/* implicit */unsigned char) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    var_58 = ((/* implicit */long long int) max((var_58), (((/* implicit */long long int) ((var_1) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (var_9)))) : (((((/* implicit */_Bool) ((1073741824) & (((/* implicit */int) var_7))))) ? ((~(var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
}
