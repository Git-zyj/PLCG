/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124844
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
    for (long long int i_0 = 3; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (signed char)37))))) < ((-(9085427241695838971LL)))));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [(signed char)13] [(signed char)13])))), (((/* implicit */int) arr_2 [i_0 - 1] [i_0])))))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((unsigned char) (~(((/* implicit */int) ((short) (signed char)75))))))));
    }
    for (long long int i_1 = 3; i_1 < 18; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (arr_6 [i_1 + 2]) : (arr_6 [i_1 - 3])));
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */_Bool) (~((-(24ULL)))));
                        arr_18 [i_1] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */short) ((var_2) & (((/* implicit */int) arr_17 [i_1 - 1]))));
                        var_18 += ((/* implicit */unsigned long long int) ((signed char) arr_11 [15U] [i_2] [i_5 - 1]));
                        var_19 += ((((/* implicit */_Bool) var_6)) ? (arr_7 [i_1 - 1]) : (arr_7 [i_4]));
                    }
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        arr_21 [i_1] [i_2] [i_3] [i_4] [i_6] [i_1] [i_6] = ((/* implicit */_Bool) (+(18446744073709551602ULL)));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1 + 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))))));
                        var_21 ^= ((short) arr_15 [i_1 + 2] [i_1 + 2] [i_4] [i_1 - 1] [i_1 + 2]);
                        arr_22 [i_6] [(unsigned char)7] [(unsigned char)14] [i_2] [(unsigned char)7] [i_1 + 1] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((13492899784643765659ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) == (((/* implicit */int) arr_14 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 + 2] [(unsigned char)12]))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 3; i_7 < 17; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((var_12) / (((/* implicit */long long int) var_10)))) > (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_3]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))))))))))));
                        var_23 = ((/* implicit */signed char) arr_7 [i_2]);
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 2) 
                    {
                        var_24 -= ((/* implicit */unsigned short) var_12);
                        arr_30 [(signed char)7] [(signed char)7] [i_3] [6ULL] [6ULL] [i_1 - 3] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_1 + 1] [i_3] [i_3] [7LL] [5ULL] [i_3] [7LL]))) == (((((/* implicit */_Bool) arr_1 [(unsigned char)17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) : (arr_4 [i_1])))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        var_25 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_2]))));
                        var_26 = ((((/* implicit */_Bool) arr_25 [i_3] [i_1 - 3] [i_1] [i_1 - 1] [i_1 - 3] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_25 [9LL] [i_1 + 2] [i_1 - 2] [i_1 - 2] [i_1 + 2] [i_1 + 1] [i_1 + 2])) : (((/* implicit */int) arr_25 [i_9] [i_1 + 1] [(unsigned short)11] [i_1 - 1] [i_1 - 1] [(unsigned short)11] [i_1 - 1])));
                    }
                    arr_34 [i_1 - 3] [(unsigned short)3] [9ULL] [9ULL] = ((/* implicit */int) ((((((/* implicit */int) (signed char)-28)) - (((/* implicit */int) var_5)))) < (((((/* implicit */_Bool) 94722579356695151ULL)) ? (((/* implicit */int) (unsigned short)1511)) : (((/* implicit */int) (unsigned short)65534))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
                    {
                        arr_37 [9] [i_1] [i_10] [i_1] [i_3] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_1 - 1] [i_1 + 1] [i_1]))) : (arr_20 [7ULL] [(_Bool)1])));
                        arr_38 [i_10] [(unsigned char)15] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_26 [i_1 + 2])))) * (((/* implicit */int) ((var_13) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_3] [0LL] [i_4] [i_1 - 1]))))))));
                        var_27 = ((/* implicit */unsigned long long int) ((unsigned char) ((long long int) 7871444954340750291ULL)));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
                    {
                        arr_43 [i_1] [i_3] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [(signed char)19] [i_1 + 2] [i_1 + 1] [(unsigned short)19] [i_1 + 2] [i_1 + 1])) ? (arr_33 [16LL] [i_1 + 2] [16LL] [i_1] [i_1 + 2] [i_1 + 1]) : (arr_33 [i_1] [i_1 + 2] [3ULL] [i_1] [i_1 + 2] [i_1 + 1])));
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18352021494352856465ULL)) ? (1200820794U) : (((/* implicit */unsigned int) -1785435641)))))));
                        arr_44 [5LL] [5LL] [(unsigned short)15] [i_4] [i_1 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 94722579356695165ULL)) ? (var_2) : (((/* implicit */int) var_11))));
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7428120857458357031LL)) ? (((/* implicit */int) arr_17 [i_2])) : (((/* implicit */int) (signed char)-114))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_11] [i_3] [i_2]))))))));
                    }
                }
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_30 ^= ((/* implicit */short) (unsigned short)0);
                /* LoopSeq 2 */
                for (signed char i_13 = 0; i_13 < 20; i_13 += 2) /* same iter space */
                {
                    var_31 += ((/* implicit */unsigned char) ((unsigned long long int) 24ULL));
                    arr_49 [9ULL] [9ULL] [i_12] [9ULL] |= ((unsigned short) ((((((/* implicit */int) (signed char)-125)) + (2147483647))) >> (((18446744073709551591ULL) - (18446744073709551580ULL)))));
                }
                for (signed char i_14 = 0; i_14 < 20; i_14 += 2) /* same iter space */
                {
                    var_32 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_1 - 2] [i_2] [i_12] [i_12] [i_12] [i_1 - 2])) && (((/* implicit */_Bool) arr_33 [i_1 - 3] [i_1 - 3] [i_14] [18] [i_2] [(unsigned char)7]))));
                    var_33 ^= ((/* implicit */_Bool) ((long long int) arr_28 [i_1] [i_1] [i_1 + 2] [i_1] [i_1 + 2] [i_1 - 2]));
                }
            }
            for (long long int i_15 = 0; i_15 < 20; i_15 += 3) 
            {
                arr_56 [5U] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_48 [i_1 + 2])) ? (arr_7 [i_1 - 3]) : (((/* implicit */unsigned long long int) var_9))));
                /* LoopSeq 3 */
                for (unsigned long long int i_16 = 1; i_16 < 17; i_16 += 3) /* same iter space */
                {
                    arr_60 [i_1 - 3] [i_1 - 3] [(short)8] [(short)8] = ((/* implicit */unsigned int) arr_2 [i_2] [i_2]);
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4220985973341190418ULL)) ? (((/* implicit */int) (short)-12881)) : (((/* implicit */int) (unsigned short)6742))));
                }
                for (unsigned long long int i_17 = 1; i_17 < 17; i_17 += 3) /* same iter space */
                {
                    arr_64 [i_1 + 1] [i_1] [i_1] = ((/* implicit */unsigned short) var_3);
                    arr_65 [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_13))) < (((/* implicit */int) var_11))));
                    /* LoopSeq 2 */
                    for (unsigned char i_18 = 0; i_18 < 20; i_18 += 3) 
                    {
                        arr_68 [6] [i_2] [i_15] [i_17 - 1] [2] [i_2] |= ((/* implicit */signed char) (+(var_9)));
                        arr_69 [i_17 + 1] [i_2] [i_17 + 1] [i_17 + 2] [i_18] = ((/* implicit */unsigned int) (short)-32666);
                        var_35 = ((/* implicit */_Bool) arr_11 [i_17] [(unsigned short)8] [(unsigned short)8]);
                    }
                    for (short i_19 = 0; i_19 < 20; i_19 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) var_10);
                        var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 289157845U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)188))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_23 [i_2] [i_15] [4LL]))))) : ((~(7648034030512176257ULL))))))));
                        var_38 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_59 [i_17 + 2] [i_17 + 2] [i_15] [i_15] [i_2] [14ULL])) != (((/* implicit */int) (unsigned short)0))));
                    }
                }
                for (unsigned long long int i_20 = 2; i_20 < 16; i_20 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_21 = 3; i_21 < 19; i_21 += 3) 
                    {
                        var_39 |= ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) var_8)))));
                        arr_77 [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(var_12)))) < (((((/* implicit */_Bool) var_5)) ? (arr_20 [i_20] [i_20]) : (16885855257371697017ULL)))));
                    }
                    for (int i_22 = 0; i_22 < 20; i_22 += 3) 
                    {
                        arr_80 [i_1 - 3] [i_20] [i_15] [11U] [i_20] [11U] = ((/* implicit */unsigned char) arr_7 [i_1 + 1]);
                        arr_81 [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)16662)) : (((/* implicit */int) arr_19 [i_1] [i_2] [i_15] [i_20 + 3] [i_2]))))) : (arr_74 [i_20] [i_20] [i_20 - 1] [i_20] [(unsigned char)0])));
                        var_40 *= ((/* implicit */unsigned char) ((_Bool) ((unsigned long long int) var_11)));
                    }
                    var_41 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)200)))));
                    var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) ((short) 1030062606U)))));
                }
            }
            var_43 += ((/* implicit */unsigned long long int) (short)0);
        }
        var_44 += ((/* implicit */unsigned short) var_6);
        var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) ((var_2) % ((-(((/* implicit */int) arr_13 [i_1 + 2])))))))));
        var_46 ^= ((/* implicit */unsigned char) var_12);
    }
    for (long long int i_23 = 3; i_23 < 18; i_23 += 2) /* same iter space */
    {
        arr_84 [i_23] = ((/* implicit */unsigned int) (-(arr_71 [i_23] [i_23] [i_23 - 2] [i_23] [8LL] [i_23])));
        var_47 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_23] [i_23 + 1] [i_23] [i_23] [10ULL])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_45 [i_23] [i_23]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)25821))))) : (((/* implicit */int) ((18446744073709551604ULL) > (((/* implicit */unsigned long long int) var_9))))))));
    }
    var_48 = ((/* implicit */unsigned long long int) max((var_48), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (~(max((var_2), (var_2)))))) : (var_6)))));
}
