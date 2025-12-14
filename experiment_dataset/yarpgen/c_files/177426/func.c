/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177426
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
    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (unsigned char)130)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_2);
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) var_3))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_13 = ((/* implicit */long long int) max((6119831416449609268ULL), (((/* implicit */unsigned long long int) (unsigned char)127))));
            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10867048234599226619ULL)) ? (arr_0 [i_0] [i_0 + 1]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) || (((/* implicit */_Bool) var_6))))))))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_3 = 1; i_3 < 14; i_3 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_4 = 3; i_4 < 14; i_4 += 3) 
                    {
                        var_15 -= ((((/* implicit */_Bool) (unsigned char)14)) ? ((+(var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_0 + 1])) < (var_6))))));
                        var_16 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6456832799800209314LL)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_8 [i_4 + 4] [i_1] [i_2])))) ? (max((arr_8 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_0 [i_0] [3LL])) <= (var_8)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_4))))), (arr_12 [i_4 + 2] [i_4] [i_3 + 3] [i_0 + 1] [i_0]))))) : (((arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1]) | (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 1; i_5 < 14; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4506392735193082560LL)) ? (arr_0 [i_0 + 1] [i_5 + 1]) : (1147234017)));
                        var_18 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_1]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [8LL] [(unsigned char)10]))))))));
                        arr_16 [i_5] [i_1] [i_3] [i_1] [i_0] = ((/* implicit */short) (((((~(arr_10 [i_3] [i_2] [i_3 + 4] [i_5 - 1]))) + (9223372036854775807LL))) >> (((((/* implicit */int) ((unsigned short) var_6))) - (27095)))));
                    }
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) (unsigned char)222)))) != (((/* implicit */int) ((4103281611876301997ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)176)))))))))));
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)43033)) ? (((/* implicit */int) (short)-14676)) : (((/* implicit */int) (unsigned char)111)))))));
                    var_21 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (938376158250250420LL) : ((+(4506392735193082560LL))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        arr_20 [i_0] [i_0] [i_3] [i_3 + 1] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0 + 1] [i_1] [i_3] [i_3 + 3] [i_6]))))) * (arr_0 [i_0 + 1] [i_3 + 4])));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_10 [i_6] [i_2] [i_6] [i_6]))));
                        arr_21 [i_3] [9] [i_3] [i_3] [i_6] = ((/* implicit */long long int) ((int) arr_17 [i_0 + 1] [i_1] [i_0 + 1] [14] [i_1] [i_0 + 1] [(_Bool)1]));
                    }
                }
                for (unsigned short i_7 = 3; i_7 < 16; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((((/* implicit */_Bool) arr_2 [i_7 - 3])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) >> (((var_8) - (1895985608U)))))) : (((((/* implicit */_Bool) arr_13 [i_8] [i_8])) ? (arr_19 [i_2] [i_7] [(unsigned short)6] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)147)))))))));
                        var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)10264)) ? (4518544440293377560LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 2; i_9 < 17; i_9 += 2) 
                    {
                        var_25 += ((/* implicit */int) arr_9 [i_0] [12ULL] [i_2] [i_9 - 1]);
                        arr_30 [i_9] [i_7] [i_2] [i_1] [i_0] [i_7] [i_0 + 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)111))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_33 [i_7 + 1])))) ? (((/* implicit */int) ((arr_0 [i_0 + 1] [i_0 + 1]) >= (arr_0 [i_0 + 1] [i_0 + 1])))) : (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_10 [i_7] [i_1] [i_2] [i_7]))))))));
                        var_27 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (short)29919))));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_2] [i_7]))));
                        arr_34 [i_0] [i_0] [i_0] [i_7] [i_0] = ((/* implicit */short) var_6);
                    }
                }
                arr_35 [i_0 + 1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(var_8))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)147)))))))) ? (((/* implicit */unsigned long long int) var_2)) : (max((arr_1 [i_1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4506392735193082545LL)))))))));
            }
            for (unsigned int i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                var_29 = ((/* implicit */int) max((var_3), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_0])))) ? (((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 1] [i_11] [i_0 + 1] [i_0 + 1] [i_11])) : (((((/* implicit */_Bool) arr_36 [i_0] [1ULL] [i_1] [i_11])) ? (((/* implicit */int) var_7)) : (arr_0 [i_11] [(unsigned short)10]))))))));
                arr_38 [i_11] [i_11] = ((/* implicit */unsigned long long int) min((-4823014405617461328LL), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)24)))))));
            }
            var_30 = ((/* implicit */short) min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1]) - (8073280132025124850ULL))))))));
            var_31 = ((/* implicit */long long int) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]);
        }
        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 1) 
        {
            arr_41 [i_0 + 1] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) <= (var_3))))) <= (((max((var_6), (((/* implicit */long long int) var_8)))) % (((/* implicit */long long int) ((((/* implicit */_Bool) 3ULL)) ? (-1817484122) : (-1817484106))))))));
            arr_42 [i_0] [i_0 + 1] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) 3056969663U)) / (17408722051202200930ULL)))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
        {
            var_32 = ((/* implicit */long long int) ((((arr_5 [i_0]) + (2147483647))) >> (((-1739068040334997347LL) + (1739068040334997349LL)))));
            var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) >= (arr_24 [i_0 + 1] [i_0 + 1] [i_0 + 1] [(unsigned char)15]))))) / (var_8)));
            var_34 &= ((/* implicit */long long int) ((signed char) arr_4 [i_0] [(_Bool)1]));
        }
        for (unsigned char i_14 = 0; i_14 < 18; i_14 += 2) /* same iter space */
        {
            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((var_3) + (9223372036854775807LL))) << (((var_5) - (3320243493839410382ULL)))))) : (((((/* implicit */_Bool) arr_44 [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_31 [i_14] [i_14] [i_14] [8ULL] [i_14] [i_14])) : (arr_23 [i_0] [i_14] [i_0] [i_14] [i_14] [i_0])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46284))) : (1739068040334997368LL)))) || (((/* implicit */_Bool) arr_46 [i_14] [6LL]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))))))));
            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) arr_37 [i_14] [(unsigned char)5] [i_14] [i_14]))));
            var_37 -= ((/* implicit */short) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_10))))));
            arr_49 [i_14] = ((/* implicit */long long int) ((int) -1739068040334997320LL));
            /* LoopSeq 3 */
            for (unsigned int i_15 = 0; i_15 < 18; i_15 += 2) 
            {
                var_38 = ((/* implicit */_Bool) arr_32 [i_15] [i_14]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_16 = 0; i_16 < 18; i_16 += 3) 
                {
                    arr_55 [i_0 + 1] [i_16] [i_0 + 1] [i_16] [i_0 + 1] = ((/* implicit */unsigned char) ((short) ((var_10) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_0 + 1]))))));
                    var_39 = ((/* implicit */unsigned char) var_2);
                }
                for (short i_17 = 1; i_17 < 14; i_17 += 3) 
                {
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_15] [i_17 + 4] [i_14] [i_15])) ? (max((((/* implicit */long long int) arr_37 [i_0] [i_0 + 1] [i_0 + 1] [i_17 + 2])), (var_6))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) << (((219267692U) - (219267690U))))))));
                    var_41 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)19264)) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0 + 1] [i_14] [i_15] [i_15] [i_17 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_15]))))))) : (arr_5 [i_0])));
                }
                for (unsigned short i_18 = 0; i_18 < 18; i_18 += 3) 
                {
                    var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) arr_52 [i_14])))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_0] [i_0] [i_14] [i_15] [i_18] [i_18]))) : (var_2))))));
                    var_43 = ((/* implicit */signed char) min((((/* implicit */int) arr_12 [i_14] [i_14] [i_14] [i_14] [2LL])), ((+(((((/* implicit */_Bool) arr_58 [i_0] [i_0] [i_15] [i_18] [(unsigned short)15])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_14 [i_18] [i_15] [i_14] [i_0] [i_0 + 1]))))))));
                }
            }
            /* vectorizable */
            for (short i_19 = 4; i_19 < 17; i_19 += 3) /* same iter space */
            {
                arr_62 [i_0 + 1] [i_14] [i_0 + 1] |= ((/* implicit */unsigned long long int) var_0);
                arr_63 [i_19 - 4] [i_19] [i_14] [i_0 + 1] = ((/* implicit */short) (+(arr_44 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                var_44 = ((((((/* implicit */_Bool) arr_39 [i_19 - 2])) || (((/* implicit */_Bool) arr_59 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0])))) ? (arr_45 [9LL] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_5 [i_19])) > (var_6))))));
                var_45 += ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_54 [i_0] [i_14])) && (((/* implicit */_Bool) arr_15 [i_19 - 4] [i_19] [i_14] [i_19] [i_19 - 1] [i_19]))))) == (((/* implicit */int) ((arr_51 [i_0] [1LL] [i_19]) >= (arr_60 [i_0] [i_0 + 1] [0U] [i_0]))))));
            }
            for (short i_20 = 4; i_20 < 17; i_20 += 3) /* same iter space */
            {
                var_46 = ((/* implicit */short) arr_33 [i_14]);
                arr_66 [i_20] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)5859)) ? (-1817484122) : (-1817484124)))));
            }
        }
    }
}
