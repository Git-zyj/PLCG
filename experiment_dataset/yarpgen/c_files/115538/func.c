/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115538
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [i_0] [(short)6]);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned char) (signed char)-95);
                        var_20 = (_Bool)1;
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] [i_4] = ((/* implicit */int) ((((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) min(((short)25708), (((/* implicit */short) var_12))))))) == (((/* implicit */int) arr_0 [i_0] [19LL]))));
                        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_10)), (18446744073709551588ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                    {
                        var_22 |= ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])), (arr_15 [i_0] [i_0])));
                        arr_16 [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)1520))));
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) (+(arr_10 [i_0] [i_0] [i_0 - 1] [i_6 + 1] [i_6])));
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */signed char) min((((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) max(((unsigned char)73), (((/* implicit */unsigned char) (_Bool)1))))))), ((!(((/* implicit */_Bool) arr_10 [i_0] [i_0 - 1] [i_2] [16ULL] [i_2]))))));
                            arr_23 [i_7] [i_6] [i_0 + 2] [i_6] [i_0 + 2] = ((/* implicit */short) min((min((-4042750412072421379LL), (((/* implicit */long long int) var_17)))), (((/* implicit */long long int) ((((/* implicit */int) arr_21 [(short)7] [(short)7] [i_2] [(short)7] [i_0])) ^ ((~(((/* implicit */int) arr_1 [i_6])))))))));
                        }
                        for (unsigned char i_8 = 1; i_8 < 21; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */int) var_17);
                            var_26 = ((/* implicit */unsigned long long int) var_6);
                        }
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4042750412072421379LL)) ? (922448737) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [i_6]))))))) ? ((~(((/* implicit */int) max(((short)17121), (((/* implicit */short) var_12))))))) : (min((((/* implicit */int) ((short) var_14))), ((~(((/* implicit */int) var_1))))))));
                    }
                    var_28 = ((/* implicit */unsigned int) arr_17 [(short)2] [i_0 - 1] [(short)2]);
                    /* LoopSeq 3 */
                    for (short i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        var_29 = min(((-(((/* implicit */int) arr_13 [(signed char)1] [i_0 + 1] [(signed char)5])))), (((((/* implicit */int) ((unsigned char) var_3))) ^ (((/* implicit */int) var_0)))));
                        arr_29 [i_9] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_15) + (((/* implicit */int) (unsigned char)154))))) ? ((((_Bool)1) ? (-4042750412072421388LL) : (((/* implicit */long long int) max((536739840), (((/* implicit */int) (unsigned short)0))))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                        arr_30 [9] [i_1] = ((/* implicit */short) var_1);
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_11 = 4; i_11 < 20; i_11 += 1) 
                        {
                            arr_35 [i_0] [i_0] [i_2] [i_10] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) arr_21 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_10] [11])) : (((/* implicit */int) arr_0 [i_10] [i_2])))))));
                            arr_36 [i_0] [i_0] [i_0] [(_Bool)1] [(unsigned char)22] = ((((/* implicit */_Bool) 304402346U)) ? (arr_15 [i_0 + 3] [i_11 - 1]) : (arr_15 [i_0 + 2] [i_11 - 1]));
                        }
                        for (unsigned short i_12 = 0; i_12 < 23; i_12 += 2) 
                        {
                            arr_39 [3LL] [3LL] [i_2] [i_10] [3LL] |= ((/* implicit */short) min(((unsigned short)11143), (((/* implicit */unsigned short) (signed char)31))));
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) ((((/* implicit */int) var_16)) / (((/* implicit */int) var_10))))), (9223372036854775807LL))) <= (((/* implicit */long long int) ((/* implicit */int) (((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (short)17121))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-33)) == (((/* implicit */int) var_16)))))))))))))));
                            var_31 = ((/* implicit */signed char) var_12);
                            var_32 = ((/* implicit */short) min((((/* implicit */int) var_18)), (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) var_8)))), (((/* implicit */int) (short)1960))))));
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_17 [i_12] [i_0 - 1] [(signed char)10])))))))));
                        }
                        var_34 = ((/* implicit */long long int) (short)1960);
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) min((min((var_3), (((/* implicit */unsigned short) var_6)))), (min((var_11), (((/* implicit */unsigned short) var_12))))))) | (((/* implicit */int) (signed char)127))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) % (((/* implicit */int) arr_1 [i_1])))) | (((/* implicit */int) max(((short)20259), (((/* implicit */short) (unsigned char)70)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_1] [(short)4] [i_2] [(signed char)16] [(short)4]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 3] [i_0 + 3] [i_0 + 2] [i_2]))) - (6502954210092772052LL)))));
                        arr_42 [i_0] [i_1] [i_1] [i_0] [(signed char)19] = ((/* implicit */unsigned int) min((min((arr_15 [i_0] [i_1]), (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_34 [i_0] [i_0 + 3] [i_0 + 1])))))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 1) 
    {
        var_37 |= ((/* implicit */unsigned short) (((-(-9223372036854775807LL))) < (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_14] [i_14] [i_14] [13LL] [(signed char)7])))));
        arr_45 [i_14] = ((/* implicit */unsigned char) arr_10 [i_14] [i_14] [i_14] [(unsigned short)0] [i_14]);
    }
    for (unsigned char i_15 = 0; i_15 < 17; i_15 += 3) 
    {
        var_38 = ((/* implicit */signed char) max((min((((/* implicit */long long int) (unsigned char)195)), (arr_27 [i_15] [(signed char)18] [i_15] [i_15]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? ((-(((/* implicit */int) arr_34 [10ULL] [10ULL] [i_15])))) : (((/* implicit */int) (short)-17114)))))));
        arr_49 [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_13 [i_15] [i_15] [14LL])) ? (((/* implicit */int) arr_21 [i_15] [i_15] [i_15] [i_15] [i_15])) : (((/* implicit */int) var_17)))) >> (((((/* implicit */int) (short)-1958)) + (1984)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -269667516380778252LL)) | (9605398819018231505ULL)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)31681)))) : (((((/* implicit */_Bool) 8935141660703064064ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)38276))))));
        arr_50 [15LL] [i_15] = ((/* implicit */unsigned char) (~((-(-7342643229851123982LL)))));
    }
    for (unsigned char i_16 = 0; i_16 < 20; i_16 += 4) 
    {
        arr_55 [i_16] = ((/* implicit */_Bool) ((269667516380778259LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-10)))));
        /* LoopSeq 3 */
        for (int i_17 = 0; i_17 < 20; i_17 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_18 = 0; i_18 < 20; i_18 += 1) 
            {
                var_39 = ((/* implicit */short) (+(((-1855380639331994286LL) / (36028797018963967LL)))));
                var_40 = ((/* implicit */long long int) 8841345254691320097ULL);
            }
            for (unsigned char i_19 = 0; i_19 < 20; i_19 += 1) /* same iter space */
            {
                arr_65 [i_17] = ((/* implicit */_Bool) (short)21909);
                arr_66 [i_16] [i_17] [(_Bool)1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-53)) + (((/* implicit */int) (unsigned short)575))))) ? (min((6U), (((/* implicit */unsigned int) arr_51 [i_16] [i_17])))) : (((/* implicit */unsigned int) -230212070))));
            }
            for (unsigned char i_20 = 0; i_20 < 20; i_20 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 20; i_21 += 3) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            arr_76 [i_16] [9ULL] [11LL] [7LL] [i_20] [i_17] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_53 [i_22]), (arr_53 [i_16])))) ? (((/* implicit */int) arr_1 [i_16])) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32431)))))))));
                            var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)13073)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_16] [i_17] [i_16] [i_21] [i_22])) ? (((/* implicit */int) (unsigned short)51143)) : (((/* implicit */int) arr_34 [i_21] [i_20] [(short)12]))))) : (min((-1601741646705336280LL), (((/* implicit */long long int) arr_64 [i_17] [i_20] [i_21]))))));
                            var_42 = ((/* implicit */unsigned char) arr_14 [i_21] [i_21] [i_21] [i_21] [(unsigned short)15] [i_21]);
                        }
                    } 
                } 
                var_43 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_72 [i_16])), (((((/* implicit */int) arr_72 [i_17])) - (((/* implicit */int) (unsigned char)193))))));
                arr_77 [19ULL] [i_17] = ((/* implicit */_Bool) 0);
                /* LoopSeq 2 */
                for (int i_23 = 2; i_23 < 18; i_23 += 3) /* same iter space */
                {
                    var_44 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)40)))), (((arr_71 [i_23 - 1] [i_23 - 1] [i_23 + 2]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)77))))));
                    var_45 = ((/* implicit */unsigned char) ((((/* implicit */int) var_17)) <= (((((/* implicit */_Bool) arr_3 [i_23 - 1] [i_23 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)179))))));
                    arr_80 [i_16] [i_16] [i_17] = ((/* implicit */short) arr_7 [i_20] [i_20]);
                }
                for (int i_24 = 2; i_24 < 18; i_24 += 3) /* same iter space */
                {
                    arr_85 [i_17] [i_17] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_79 [i_24] [i_24 + 2] [i_17] [i_17] [18] [i_16]))))));
                    var_46 = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)12)) >= (((/* implicit */int) arr_59 [i_17] [i_20])))))))) == (((min((arr_27 [i_16] [4LL] [i_20] [(short)17]), (((/* implicit */long long int) (short)2052)))) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_12))))))));
                    var_47 = ((/* implicit */short) min(((-(max((((/* implicit */unsigned long long int) arr_20 [(short)9] [(short)9] [i_20] [i_20] [(short)9])), (6566579504807304128ULL))))), (((/* implicit */unsigned long long int) arr_53 [i_16]))));
                }
            }
            var_48 = ((/* implicit */signed char) max((min((arr_62 [i_16] [i_16] [i_17]), (arr_62 [(signed char)10] [i_16] [i_17]))), (((/* implicit */int) ((_Bool) 9511602413006487557ULL)))));
            arr_86 [(_Bool)1] [i_17] [i_17] = ((/* implicit */long long int) var_8);
            var_49 |= ((/* implicit */short) min((((((/* implicit */_Bool) arr_84 [i_16] [i_16] [i_17] [i_16] [i_16] [i_17])) ? (6311928775076331294ULL) : (9511602413006487527ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_74 [i_16] [i_17])))))));
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) min(((unsigned short)0), (((/* implicit */unsigned short) arr_9 [i_16] [i_25] [i_25] [i_25])))))));
            var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) (~((~(min((var_9), (((/* implicit */unsigned int) var_12)))))))))));
        }
        for (signed char i_26 = 1; i_26 < 19; i_26 += 1) 
        {
            /* LoopNest 2 */
            for (short i_27 = 0; i_27 < 20; i_27 += 2) 
            {
                for (long long int i_28 = 0; i_28 < 20; i_28 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_29 = 0; i_29 < 20; i_29 += 4) 
                        {
                            var_52 = ((/* implicit */long long int) ((((/* implicit */int) min((arr_19 [i_26 - 1] [i_26 - 1] [i_26]), (arr_19 [i_26 - 1] [i_26 + 1] [i_26])))) >> ((((~(((((/* implicit */_Bool) (short)24986)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_27] [i_27] [i_16]))))))) - (4102662892230860872LL)))));
                            var_53 = ((/* implicit */int) max((var_53), (min(((~(402653184))), (((((var_15) + (2147483647))) >> (((((/* implicit */int) arr_60 [i_29] [(short)0])) - (2232)))))))));
                            var_54 = ((/* implicit */long long int) arr_14 [(short)14] [i_26 + 1] [i_26] [i_26 + 1] [i_26] [i_16]);
                        }
                        arr_97 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26] = ((/* implicit */long long int) min((((/* implicit */int) arr_26 [i_27] [i_26] [i_27] [i_27] [16U])), ((-(((/* implicit */int) (unsigned char)145))))));
                        arr_98 [i_16] [i_16] [i_27] [i_28] |= ((/* implicit */signed char) arr_17 [i_16] [(unsigned char)22] [i_27]);
                    }
                } 
            } 
            var_55 = ((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)18))))) ? (((/* implicit */int) arr_34 [i_16] [i_26 - 1] [i_16])) : (((/* implicit */int) max((arr_0 [i_16] [i_16]), (arr_9 [i_16] [i_26 - 1] [i_26 + 1] [i_26 + 1])))));
        }
        arr_99 [i_16] [i_16] = ((/* implicit */unsigned char) arr_24 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [(_Bool)1]);
        arr_100 [i_16] = ((/* implicit */short) max((-1372328841), (((((/* implicit */int) (signed char)-120)) + (((/* implicit */int) (short)-1981))))));
    }
    var_56 |= ((/* implicit */unsigned short) var_9);
    var_57 = ((/* implicit */short) 121055509360985168LL);
}
