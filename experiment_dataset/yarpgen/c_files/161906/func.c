/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161906
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_19 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)212))));
        var_20 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_18)), (min((((((/* implicit */unsigned long long int) arr_2 [i_0])) | (17423658599468536493ULL))), (((/* implicit */unsigned long long int) var_1))))));
    }
    var_21 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) ((var_14) == (((/* implicit */unsigned long long int) ((722034991U) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 24; i_1 += 1) 
    {
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_3 [i_1] [i_1]))));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((arr_4 [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 722034991U)) ^ (-8625024243739869965LL))))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            var_25 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (2741370994U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2])) + (((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_5 = 1; i_5 < 18; i_5 += 1) /* same iter space */
                {
                    var_26 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) - (2741370993U)));
                    var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [12ULL] [i_3] [(unsigned char)12] [i_5 - 1] [i_2] [i_4])) ? (2741371002U) : (((arr_14 [i_2] [i_3] [i_4] [i_5]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3)))))));
                }
                for (signed char i_6 = 1; i_6 < 18; i_6 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (signed char)6))));
                    var_29 |= ((/* implicit */short) var_0);
                    var_30 *= ((/* implicit */unsigned short) (+(((((/* implicit */int) (short)16855)) % (((/* implicit */int) var_5))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        var_31 += ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_6 + 3] [i_6] [i_7])) || ((!(((/* implicit */_Bool) (unsigned short)15511))))));
                        var_32 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) var_9)))));
                        var_33 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [(unsigned char)8]))) : (3572932304U))) - (arr_11 [i_6 - 1])));
                        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)6)))))));
                    }
                    for (long long int i_8 = 3; i_8 < 19; i_8 += 1) 
                    {
                        var_35 += ((/* implicit */unsigned short) var_16);
                        var_36 -= ((/* implicit */unsigned short) 3952026859U);
                        var_37 &= (!(((/* implicit */_Bool) 3572932290U)));
                    }
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >= (((((/* implicit */int) arr_26 [(unsigned char)18] [i_3] [i_4] [(short)10] [i_4])) & (((/* implicit */int) (signed char)-9)))))))));
                        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((var_18) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                    }
                    var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((((long long int) var_16)) | (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 3] [i_6 + 2] [i_6]))))))));
                }
                for (signed char i_10 = 1; i_10 < 18; i_10 += 1) /* same iter space */
                {
                    var_41 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_12 [i_2] [i_3] [i_2] [i_10])) + (15120420096141854593ULL)))) && (((/* implicit */_Bool) ((3572932304U) | (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))));
                    var_42 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)14212))));
                    var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((var_14) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((/* implicit */int) var_16))))))))));
                    var_44 |= ((/* implicit */int) var_7);
                }
                var_45 -= ((/* implicit */signed char) arr_9 [i_2] [i_2] [14]);
                var_46 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (short)-14225)) >= (((/* implicit */int) arr_8 [i_2] [i_2]))));
                var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_2] [2U] [i_2] [(_Bool)1] [2U] [i_4] [i_4])) ? (arr_25 [(_Bool)1] [6U] [i_4] [(unsigned short)10] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    var_48 &= ((/* implicit */unsigned char) 722034980U);
                    var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)-14236)))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (11142283126447680110ULL)))))))));
                    var_50 ^= ((/* implicit */long long int) arr_12 [i_12] [i_12] [(unsigned short)17] [i_12]);
                    var_51 *= ((/* implicit */signed char) ((7304460947261871491ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7957)))));
                }
                for (short i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    var_52 &= ((/* implicit */int) (unsigned char)13);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 1; i_14 < 19; i_14 += 1) 
                    {
                        var_53 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) * ((+(arr_4 [i_13]))));
                        var_54 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) arr_32 [i_13] [i_13] [i_11] [i_13]))));
                        var_55 = ((/* implicit */unsigned long long int) min((var_55), (((/* implicit */unsigned long long int) 722035020U))));
                        var_56 -= ((/* implicit */unsigned long long int) ((var_18) ? (((((/* implicit */_Bool) 2104497537)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (!(var_18))))));
                    }
                    for (long long int i_15 = 0; i_15 < 21; i_15 += 4) 
                    {
                        var_57 = ((/* implicit */unsigned int) min((var_57), (((unsigned int) 722035020U))));
                        var_58 = ((/* implicit */unsigned char) min((var_58), (((/* implicit */unsigned char) var_4))));
                        var_59 -= ((/* implicit */_Bool) arr_36 [i_2] [i_2]);
                        var_60 = ((/* implicit */unsigned long long int) min((var_60), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)171)))))));
                        var_61 -= ((/* implicit */unsigned char) (short)-14220);
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        var_62 += ((/* implicit */long long int) var_1);
                        var_63 = ((/* implicit */int) min((var_63), (((/* implicit */int) var_5))));
                        var_64 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)14236))) % (arr_32 [i_2] [i_3] [i_3] [(unsigned short)14]));
                        var_65 |= ((/* implicit */long long int) var_11);
                    }
                    for (long long int i_17 = 0; i_17 < 21; i_17 += 3) 
                    {
                        var_66 = ((/* implicit */long long int) min((var_66), (((/* implicit */long long int) (unsigned char)170))));
                        var_67 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_2] [0] [i_2] [i_2] [i_2]))) - (1553596302U)));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 1) 
                {
                    var_68 = ((/* implicit */unsigned short) min((var_68), (((/* implicit */unsigned short) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_15)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_19 = 0; i_19 < 21; i_19 += 3) 
                    {
                        var_69 ^= ((/* implicit */long long int) arr_32 [i_2] [i_2] [i_11] [(signed char)12]);
                        var_70 = ((/* implicit */_Bool) max((var_70), (((/* implicit */_Bool) var_7))));
                    }
                    for (unsigned short i_20 = 0; i_20 < 21; i_20 += 4) 
                    {
                        var_71 = ((/* implicit */short) max((var_71), (((/* implicit */short) (!(((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_18] [i_20]))))))))));
                        var_72 &= ((/* implicit */signed char) ((arr_22 [i_2] [i_20] [i_11] [i_18] [i_20]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_20])))));
                        var_73 -= ((/* implicit */_Bool) ((var_9) ? (313397427225775946LL) : (((/* implicit */long long int) arr_31 [i_2] [i_18] [i_2]))));
                        var_74 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) | (arr_53 [i_2] [i_2] [i_2] [i_20] [i_20] [i_20])))));
                    }
                    var_75 = ((/* implicit */unsigned char) max((var_75), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [(unsigned short)20] [(unsigned short)10] [i_2] [i_18] [i_18])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))))));
                }
            }
            var_76 &= arr_52 [i_2] [i_2] [i_3] [i_3];
            var_77 += ((/* implicit */unsigned int) var_10);
            var_78 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19552))) < (7304460947261871505ULL)));
        }
    }
}
