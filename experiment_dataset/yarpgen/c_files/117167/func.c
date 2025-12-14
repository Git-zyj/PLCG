/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117167
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */short) arr_2 [i_0] [i_0]);
        var_13 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))))) ? (min((((/* implicit */unsigned long long int) max((arr_3 [i_0]), (((/* implicit */long long int) arr_2 [i_0] [i_0]))))), ((-(arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */long long int) var_8)), (-9223372036854775786LL))) == (((/* implicit */long long int) max((arr_2 [i_0] [i_0 - 1]), (((/* implicit */int) (short)7122)))))))))));
    }
    var_14 ^= min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)60));
    /* LoopSeq 4 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) max((((/* implicit */short) (unsigned char)1)), ((short)-4616)));
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) max((min((arr_7 [(signed char)5]), (10591849428036827530ULL))), (((/* implicit */unsigned long long int) (+(min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_3)))))))));
        arr_9 [i_1] = ((/* implicit */_Bool) arr_7 [i_1]);
        arr_10 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)31433))));
        var_16 &= (-(min((((((/* implicit */_Bool) var_0)) ? (15949313038004420942ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))))), (max((arr_5 [10ULL]), (((/* implicit */unsigned long long int) 9223372036854775807LL)))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        arr_13 [i_2] [(short)6] = ((/* implicit */long long int) arr_2 [i_2] [i_2]);
        arr_14 [8U] = ((/* implicit */int) (!(((/* implicit */_Bool) 268435455))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            arr_20 [i_4] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) (unsigned char)148)), (653604347877227549LL)))));
            arr_21 [i_3] [i_3] [i_4] = ((/* implicit */_Bool) (~(7431256893004157050ULL)));
        }
        for (unsigned char i_5 = 2; i_5 < 10; i_5 += 3) 
        {
            arr_25 [i_5] [i_3] = ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (arr_15 [i_5])))), (var_6)))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) (signed char)127)) ? (-8379644803129761503LL) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5] [i_3] [i_5])))))))));
            /* LoopSeq 2 */
            for (long long int i_6 = 2; i_6 < 9; i_6 += 1) 
            {
                arr_29 [i_3] [i_5] = ((/* implicit */unsigned long long int) var_1);
                /* LoopSeq 3 */
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((unsigned short) (-(max((((/* implicit */long long int) 2258368770U)), (8989607068696576LL)))))))));
                    var_18 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 2064408705U)) < (min((((/* implicit */unsigned long long int) max((arr_12 [8] [i_5]), (((/* implicit */long long int) var_12))))), (((unsigned long long int) (short)10050))))));
                }
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                {
                    var_19 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)2013))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [0ULL] [i_5 + 1]))) : (268419072LL));
                    var_20 = arr_23 [i_8] [i_6] [i_5];
                    arr_35 [i_6 + 2] [(unsigned char)10] [(unsigned char)10] = ((/* implicit */unsigned char) (-(arr_30 [i_3])));
                    arr_36 [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((9223372036854775807LL) != (9223372036854775807LL))))));
                }
                for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
                {
                    var_21 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((unsigned short)47160), ((unsigned short)6))))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((2230558567U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)52)))))), ((unsigned short)3)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15782))))))));
                }
                arr_39 [(unsigned char)6] [i_5] [(_Bool)1] [i_3] = ((/* implicit */signed char) (~((-(((((/* implicit */_Bool) arr_30 [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_32 [i_3] [i_6])))))));
            }
            for (unsigned long long int i_10 = 1; i_10 < 8; i_10 += 4) 
            {
                var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)3534))))))))));
                /* LoopSeq 2 */
                for (long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    arr_47 [i_3] [i_5] [i_3] [(_Bool)1] [i_10] = ((/* implicit */unsigned char) (-(max((max((arr_3 [i_3]), (2199021158400LL))), (((/* implicit */long long int) arr_11 [i_10] [i_10 + 2]))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        arr_50 [i_10] [i_10 + 2] [i_11] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)29)) && (((/* implicit */_Bool) (short)2346))))) << (((((/* implicit */int) min((((/* implicit */unsigned short) arr_26 [i_3] [i_3] [i_10] [2ULL])), (arr_46 [i_3] [i_5] [4LL] [i_3] [i_12])))) - (43216)))))) ? (((/* implicit */int) max(((unsigned short)32783), (((/* implicit */unsigned short) (short)-2346))))) : ((~(((/* implicit */int) (unsigned char)254))))));
                        var_24 = ((/* implicit */unsigned int) arr_22 [i_3] [i_5 + 1] [i_12]);
                    }
                    for (int i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned short)65535)), (((unsigned long long int) (short)15))));
                        var_26 = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) arr_27 [i_5] [i_11])) ? (((/* implicit */int) (unsigned short)5217)) : (((/* implicit */int) var_2)))), ((-(var_6))))), ((-(((/* implicit */int) arr_11 [i_3] [i_5 + 1]))))));
                        var_27 = ((/* implicit */short) 18446744073709551615ULL);
                    }
                    var_28 -= (-(((/* implicit */int) min((arr_42 [i_11]), ((unsigned short)27854)))));
                    var_29 = arr_27 [i_3] [i_10 + 2];
                }
                for (long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    arr_59 [i_10] [i_10] [i_10] [i_10] [2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */long long int) min((arr_15 [i_3]), (((/* implicit */unsigned int) var_12))))) > (min((arr_51 [(unsigned char)8]), (((/* implicit */long long int) (_Bool)0))))))), ((~(((/* implicit */int) ((18437736874454810624ULL) < (((/* implicit */unsigned long long int) var_11)))))))));
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((9007199254740992ULL) - (((14670063528779136765ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [(unsigned short)4])))))))) ? (max((min((((/* implicit */unsigned long long int) (unsigned short)8)), (17179869120ULL))), (((/* implicit */unsigned long long int) min((arr_16 [i_14]), (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((min((2575776516U), (((/* implicit */unsigned int) (short)27799)))) << (((((/* implicit */int) (unsigned short)60601)) - (60572)))))))))));
                    arr_60 [i_10] [i_14] = ((/* implicit */_Bool) (-(min((((/* implicit */int) arr_28 [i_5 - 2] [(unsigned short)4])), (1073479680)))));
                    var_31 = ((/* implicit */int) max((((/* implicit */long long int) ((arr_17 [(unsigned char)1]) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_38 [i_10]))))))))), ((-(max((var_4), (((/* implicit */long long int) var_5))))))));
                }
            }
        }
        var_32 -= min((((((/* implicit */_Bool) arr_53 [2])) ? (var_9) : (((/* implicit */unsigned long long int) ((var_7) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))), (min((((/* implicit */unsigned long long int) arr_48 [i_3] [i_3] [(short)5] [i_3] [i_3])), (((arr_30 [i_3]) ^ (((/* implicit */unsigned long long int) arr_51 [i_3])))))));
        var_33 |= ((/* implicit */unsigned short) min((arr_12 [i_3] [i_3]), (min((arr_12 [i_3] [i_3]), (var_7)))));
    }
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        arr_64 [i_15] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)14210))));
        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (~(((/* implicit */int) (!(var_12)))))))));
    }
    var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */int) (unsigned short)0)), (-1749367485)))) < (min((var_4), (((/* implicit */long long int) var_2))))))) : (((int) 2602856609852928969ULL))));
}
