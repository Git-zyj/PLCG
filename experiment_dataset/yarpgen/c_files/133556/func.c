/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133556
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
    var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) min((var_1), (((/* implicit */int) var_8))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_16 = ((1344874248U) & (((/* implicit */unsigned int) -950696755)));
        var_17 = ((/* implicit */unsigned char) var_2);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1] [(unsigned char)15]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1])))))));
        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_1]))));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 4; i_2 < 14; i_2 += 4) /* same iter space */
        {
            arr_6 [i_2 + 3] [(short)14] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */long long int) 2950093047U)) : (3498141875199755916LL)));
            arr_7 [i_1] [i_2] [i_2 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1] [i_2 - 4])) << (((((/* implicit */int) var_8)) - (54663)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 + 3] [i_1]))) : (var_5)));
        }
        for (unsigned char i_3 = 4; i_3 < 14; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_4 = 4; i_4 < 15; i_4 += 2) 
            {
                arr_12 [(unsigned char)8] [i_3 - 4] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [i_3] [i_1])))))) && (((/* implicit */_Bool) ((unsigned int) arr_2 [i_1] [i_1])))));
                var_20 ^= ((/* implicit */unsigned char) 2950093049U);
            }
            for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                arr_16 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)134)) ? (8292001202298925751LL) : ((-9223372036854775807LL - 1LL))))) ? (var_12) : (((/* implicit */unsigned int) (~(-950696755)))));
                arr_17 [i_1] [(unsigned char)15] [i_1] [i_1] = ((/* implicit */int) (unsigned short)23853);
            }
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)15644)))))));
            arr_18 [i_3 - 2] = ((/* implicit */signed char) 4036345256975481032LL);
            arr_19 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)113)))))));
            /* LoopSeq 2 */
            for (long long int i_6 = 2; i_6 < 16; i_6 += 4) 
            {
                arr_24 [i_1] [i_6] [i_6] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_22 [i_1] [14LL] [i_1] [i_1])) >> (((arr_3 [(unsigned char)15]) - (1470177559U)))))));
                arr_25 [i_3] [i_3] [i_3] [i_3 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_3 - 2] [i_3])) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) ((((/* implicit */int) arr_22 [i_1] [i_1] [i_6] [(short)7])) > (((/* implicit */int) arr_13 [i_1] [i_1] [i_1])))))));
                arr_26 [i_6] [(_Bool)1] [i_1] = var_13;
            }
            for (unsigned short i_7 = 2; i_7 < 16; i_7 += 2) 
            {
                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_3 - 2] [i_7 - 1]))));
                var_23 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209))) % (((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)20))))));
            }
        }
        for (unsigned char i_8 = 4; i_8 < 14; i_8 += 4) /* same iter space */
        {
            var_24 = arr_13 [i_8] [i_8] [i_1];
            var_25 = ((/* implicit */int) ((((/* implicit */unsigned int) -760331388)) >= (846827177U)));
            /* LoopSeq 4 */
            for (unsigned int i_9 = 2; i_9 < 14; i_9 += 4) 
            {
                arr_34 [i_9] [i_8] [i_8 + 2] [i_1] = arr_21 [i_9 + 2] [i_8] [15U] [15U];
                arr_35 [i_1] [i_1] [i_8] [i_9] = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_8 + 3]))));
                arr_36 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_8 - 2] [i_9 + 1]))) : (((((/* implicit */_Bool) -1861992662)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (-1LL)))));
                arr_37 [16] = ((/* implicit */_Bool) (-(arr_32 [i_1] [i_1] [i_1])));
                var_26 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_9 - 2] [i_8] [i_1] [i_1])) ? (var_12) : (((/* implicit */unsigned int) var_10))))) / (((((/* implicit */_Bool) var_9)) ? (-8354487078401431593LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)17)))))));
            }
            for (int i_10 = 4; i_10 < 15; i_10 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_11 = 2; i_11 < 15; i_11 += 1) 
                {
                    var_27 *= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_1] [i_8 - 2] [i_10] [i_11]))))) | (((/* implicit */int) ((unsigned char) (unsigned char)253)))));
                    var_28 = ((/* implicit */long long int) (~(((/* implicit */int) arr_42 [i_1] [i_11] [i_10 - 4] [i_11 + 2] [i_11 - 1]))));
                }
                for (unsigned int i_12 = 2; i_12 < 14; i_12 += 4) 
                {
                    arr_47 [i_1] [i_1] [(signed char)12] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_10 - 1])) >> (((((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)41667)))) - (251)))));
                    arr_48 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_8 + 2] [13LL] [i_10 - 2] [i_12 + 3])) * (((/* implicit */int) var_11))));
                }
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_10] [(short)11] [(short)0] [i_1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)113))))))));
                arr_49 [i_1] = ((unsigned char) arr_1 [i_10 - 3] [i_8 - 1]);
                arr_50 [i_1] [i_8] [i_10] [i_10] = ((/* implicit */_Bool) arr_28 [i_10 - 1] [i_8] [i_1] [12]);
            }
            for (short i_13 = 1; i_13 < 15; i_13 += 4) /* same iter space */
            {
                var_30 ^= ((/* implicit */unsigned short) (~((-(((/* implicit */int) var_3))))));
                arr_54 [i_13] [i_8] [i_8] [i_8] = ((/* implicit */short) ((long long int) arr_1 [i_13 - 1] [i_8 + 3]));
                arr_55 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_28 [i_13 + 1] [(unsigned char)6] [(unsigned char)6] [i_1])) - (((long long int) (short)-1334))));
                var_31 = ((/* implicit */long long int) var_8);
            }
            for (short i_14 = 1; i_14 < 15; i_14 += 4) /* same iter space */
            {
                arr_58 [i_14] [i_8] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_14 - 1] [i_1]))));
                /* LoopNest 2 */
                for (unsigned int i_15 = 1; i_15 < 16; i_15 += 4) 
                {
                    for (unsigned short i_16 = 0; i_16 < 17; i_16 += 4) 
                    {
                        {
                            arr_65 [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1]))));
                            arr_66 [i_15] [i_14] [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_43 [i_16] [i_8 - 3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [(unsigned char)8] [(signed char)15] [(unsigned char)8] [(unsigned char)8] [(unsigned char)8]))))) : (((/* implicit */int) arr_56 [i_14 + 1] [i_8] [i_8 - 4]))));
                        }
                    } 
                } 
                var_32 ^= ((3957539280U) | (((/* implicit */unsigned int) -691942432)));
                arr_67 [i_8 - 2] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)107))) >= (arr_32 [i_8] [i_8] [i_1])));
                var_33 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_8 - 4] [i_14 + 1]))) != (arr_57 [i_14])));
            }
            arr_68 [0U] = ((/* implicit */unsigned int) (unsigned char)7);
        }
    }
    for (long long int i_17 = 0; i_17 < 12; i_17 += 2) 
    {
        var_34 = ((max((((/* implicit */unsigned int) max((var_8), (((/* implicit */unsigned short) arr_62 [i_17]))))), (((arr_3 [i_17]) | (((/* implicit */unsigned int) var_7)))))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_17] [i_17] [i_17]))))));
        arr_71 [9] = ((/* implicit */long long int) ((((((/* implicit */int) arr_61 [i_17] [i_17] [i_17])) > (((/* implicit */int) arr_51 [i_17] [i_17])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_17] [i_17] [i_17]))) : (max((((/* implicit */unsigned int) arr_5 [i_17] [i_17])), (max((((/* implicit */unsigned int) var_8)), (arr_53 [i_17] [i_17] [i_17] [i_17])))))));
        arr_72 [i_17] = ((/* implicit */unsigned short) var_9);
    }
    var_35 = ((/* implicit */long long int) var_5);
    var_36 = ((/* implicit */signed char) var_12);
    var_37 = ((/* implicit */unsigned char) ((unsigned int) var_11));
}
