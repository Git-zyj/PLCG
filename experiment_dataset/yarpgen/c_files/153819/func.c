/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153819
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
    var_13 &= ((/* implicit */unsigned int) var_4);
    var_14 -= ((/* implicit */signed char) var_4);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_0 [i_0 - 2] [i_0]))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1])) >> (((((/* implicit */int) arr_2 [20ULL])) - (175))))))));
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((var_6) || (((/* implicit */_Bool) -618381730471059259LL)))))));
            arr_6 [i_0 + 2] [i_0] [(signed char)22] = ((/* implicit */_Bool) (((!(var_9))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_3 [i_1])))))));
            arr_7 [i_0 + 1] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
        }
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 3) 
            {
                for (long long int i_4 = 1; i_4 < 23; i_4 += 2) 
                {
                    for (unsigned char i_5 = 2; i_5 < 23; i_5 += 1) 
                    {
                        {
                            arr_20 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_3] [i_0] [i_0] [i_3])) == (((/* implicit */int) arr_15 [(signed char)19] [i_0]))));
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((arr_3 [i_3 + 2]) ? (((/* implicit */int) arr_3 [i_3 + 1])) : (((/* implicit */int) arr_3 [i_3 - 1])))))));
                            arr_21 [i_0] [i_2] [i_3 - 1] = arr_17 [(signed char)7] [i_4] [i_3 + 2] [i_0] [i_0];
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_20 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_5 [i_0])) ? (618381730471059236LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_6])))))));
            var_21 -= ((/* implicit */unsigned char) var_3);
            /* LoopSeq 3 */
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                var_22 = ((/* implicit */unsigned char) var_7);
                var_23 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [(signed char)18] [i_6] [(signed char)18] [(short)22]))));
                arr_28 [i_0 + 2] [(_Bool)1] [(_Bool)1] &= ((/* implicit */signed char) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) arr_25 [i_7] [(unsigned char)8])) + (41)))));
            }
            for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_26 [i_8] [i_6]))));
                var_25 |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0 - 2] [i_0 - 2] [i_8] [i_0 - 1]))) / ((-(arr_10 [i_0] [i_8] [(unsigned char)20])))));
                var_26 |= ((/* implicit */int) var_4);
            }
            for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
            {
                arr_33 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_23 [i_0] [i_0]))));
                var_27 += (~((((_Bool)1) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) arr_13 [i_0])))));
            }
            arr_34 [(_Bool)1] [i_0 - 2] [(_Bool)1] &= ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) arr_2 [(unsigned char)16])) >> (((((/* implicit */int) var_12)) - (68))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [(short)18]))) > (arr_32 [i_0] [i_6] [i_6] [(_Bool)1])))));
        }
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            var_28 = ((/* implicit */unsigned long long int) ((signed char) var_6));
            var_29 = ((/* implicit */_Bool) ((signed char) arr_2 [i_0]));
            arr_39 [23ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_0 + 1] [i_0] [i_10 - 1])) < (((/* implicit */int) arr_22 [i_0 - 1] [i_0 - 1] [i_10 - 1]))));
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_11 [i_0] [i_0 - 2] [0LL] [i_0])) : (((/* implicit */int) arr_11 [i_10] [i_0 + 2] [(_Bool)1] [i_0 - 1])))))));
        }
    }
    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_12 = 1; i_12 < 13; i_12 += 3) 
        {
            var_31 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [9LL] [i_12 + 1]))) : (((long long int) var_0))));
            var_32 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_11] [i_11])) ? (arr_41 [(_Bool)1]) : (((/* implicit */long long int) ((134217728) / (((/* implicit */int) arr_26 [2ULL] [2ULL])))))));
        }
        for (short i_13 = 2; i_13 < 13; i_13 += 1) /* same iter space */
        {
            arr_47 [i_11] [i_13 + 3] [i_11] = (((-(((/* implicit */int) (short)14065)))) < (((/* implicit */int) ((short) arr_27 [i_11] [i_13 - 1] [i_11] [i_13 + 3]))));
            arr_48 [i_11] [i_13] = (i_11 % 2 == zero) ? (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)130)) << (((((((/* implicit */_Bool) (unsigned char)240)) ? (arr_1 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) - (377419380U))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_10)))) ? (((arr_8 [i_11] [(unsigned char)15] [i_11]) / (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_11]))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_5))))))) - (312995853655650LL)))))) : (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)130)) << (((((((((/* implicit */_Bool) (unsigned char)240)) ? (arr_1 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) - (377419380U))) - (3493114129U))))) << (((((((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_10)))) ? (((arr_8 [i_11] [(unsigned char)15] [i_11]) / (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_11]))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_5))))))) - (312995853655650LL))) + (38128709375362LL))) - (19LL))))));
            var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_26 [i_11] [i_13 - 2]))));
            var_34 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (arr_38 [i_11]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [(unsigned char)4]))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [i_13 + 2] [i_13 - 1] [16ULL]))))) : (arr_1 [16ULL])));
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 1) 
            {
                arr_52 [i_11] [i_13 - 1] [2LL] &= ((/* implicit */_Bool) ((((((/* implicit */int) arr_12 [14ULL] [(_Bool)1] [i_13 + 1] [(_Bool)1])) << (((/* implicit */int) arr_12 [i_13] [4LL] [i_13 + 1] [i_13])))) % (((/* implicit */int) arr_12 [i_13] [(signed char)10] [i_13 + 1] [i_13 + 3]))));
                arr_53 [(signed char)4] [(signed char)6] [i_13 - 2] [(signed char)4] |= ((/* implicit */_Bool) (((!((_Bool)1))) ? (((long long int) arr_29 [i_13 + 1] [i_13] [i_13 - 2] [i_13 - 2])) : (((/* implicit */long long int) min((1188236731), (((/* implicit */int) ((_Bool) var_5))))))));
            }
        }
        /* vectorizable */
        for (short i_15 = 2; i_15 < 13; i_15 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned char) (!(var_9)));
            arr_57 [i_11] = (!(((/* implicit */_Bool) arr_27 [i_15 - 1] [i_15] [i_11] [i_15])));
            var_36 |= ((/* implicit */long long int) ((((/* implicit */_Bool) -618381730471059239LL)) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) (unsigned char)42))));
            arr_58 [(signed char)14] [(signed char)14] &= ((/* implicit */_Bool) ((long long int) (signed char)-56));
        }
        arr_59 [i_11] [i_11] = var_8;
        arr_60 [i_11] = ((/* implicit */unsigned int) (signed char)-115);
    }
    for (signed char i_16 = 0; i_16 < 22; i_16 += 2) 
    {
        var_37 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 11481636618392178590ULL)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)87)) <= (((/* implicit */int) (signed char)-120))))) : ((+(((/* implicit */int) var_4))))));
        arr_63 [i_16] = (((+(arr_38 [i_16]))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) ? (11481636618392178586ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_16] [i_16])))))))))));
    }
    for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 2) 
    {
        var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) << (((arr_30 [i_17] [i_17] [i_17]) - (40049652U))))) * (((/* implicit */int) (signed char)98))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
        arr_67 [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_17] [i_17])) ? (((/* implicit */int) ((arr_3 [i_17]) || (((/* implicit */_Bool) ((signed char) arr_35 [i_17])))))) : (((((/* implicit */_Bool) arr_37 [i_17] [i_17])) ? (((/* implicit */int) ((arr_64 [i_17]) || (((/* implicit */_Bool) arr_66 [i_17]))))) : (((/* implicit */int) (short)-28538))))));
        var_39 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */int) min(((unsigned char)82), (((/* implicit */unsigned char) arr_37 [i_17] [i_17]))))) : (((((/* implicit */_Bool) ((unsigned char) arr_29 [i_17] [i_17] [i_17] [i_17]))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))));
        arr_68 [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) ((((((((/* implicit */int) (signed char)-45)) + (2147483647))) >> (((/* implicit */int) var_9)))) > (((((/* implicit */_Bool) arr_2 [i_17])) ? (((/* implicit */int) arr_26 [i_17] [i_17])) : (((/* implicit */int) var_7)))))))) : (((((/* implicit */_Bool) arr_25 [i_17] [i_17])) ? (((((/* implicit */_Bool) arr_38 [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_66 [(signed char)17]))) : (((/* implicit */long long int) ((int) 1298199472U)))))));
    }
    var_40 = ((/* implicit */_Bool) ((unsigned long long int) var_10));
    var_41 *= var_6;
}
