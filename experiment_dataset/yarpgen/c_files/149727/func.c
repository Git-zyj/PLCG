/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149727
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
    var_13 ^= (~(((/* implicit */int) (((~(var_1))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3618634662247619690ULL)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (14828109411461931926ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 1]))))))));
        var_16 = (+(-346204494));
    }
    for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_3 + 2])) ? (((/* implicit */int) arr_2 [i_3 + 2])) : (((/* implicit */int) arr_2 [i_3 + 3]))));
                arr_9 [i_2] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 4183265933U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (14828109411461931937ULL)))));
                var_17 = ((/* implicit */_Bool) arr_5 [i_1]);
            }
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                arr_12 [i_1] [i_1] = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_10 [(unsigned char)14] [i_2])) : (var_2))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))));
                var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_9)), (14828109411461931939ULL)));
            }
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                var_19 = (!(arr_14 [i_1 - 1]));
                /* LoopSeq 4 */
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        arr_21 [i_1] [i_2] [i_5] [i_1] [(short)15] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 950851011))));
                        arr_22 [i_7] [i_7] [i_7] [i_6] [i_1] [i_6] [i_6] = ((/* implicit */unsigned char) 4169965009674800714LL);
                        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_1] [5ULL]))));
                    }
                    for (unsigned short i_8 = 2; i_8 < 15; i_8 += 4) 
                    {
                        arr_26 [i_1] = ((/* implicit */signed char) (-(-947672090)));
                        arr_27 [(unsigned char)1] [i_1] [i_1] [13] [i_5] [(unsigned char)1] = ((/* implicit */unsigned long long int) arr_2 [i_8]);
                        var_21 = arr_10 [i_1] [i_2];
                        var_22 = ((/* implicit */unsigned long long int) arr_5 [i_8 + 1]);
                        var_23 *= ((/* implicit */unsigned short) (~(4294967271U)));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        arr_32 [i_1 - 1] [i_2] [i_1] [(short)10] [i_6] [i_2] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_2] [i_5] [i_1] [i_9]))) : (3618634662247619688ULL))));
                        var_24 = ((((/* implicit */_Bool) arr_31 [i_1] [i_1 + 1] [(_Bool)1] [i_1 + 2] [i_1 + 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1] [i_2])) ? (18446744073709551598ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213)))))));
                    }
                    arr_33 [i_6] &= ((/* implicit */unsigned int) ((arr_10 [i_1 - 2] [i_1 - 2]) & (arr_10 [i_1 - 2] [i_1 + 1])));
                }
                for (unsigned int i_10 = 0; i_10 < 16; i_10 += 2) /* same iter space */
                {
                    var_25 = ((arr_10 [i_1 + 1] [i_1 + 1]) ^ (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 1])));
                    /* LoopSeq 3 */
                    for (short i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        var_26 = ((/* implicit */_Bool) var_7);
                        arr_38 [i_1] = ((/* implicit */unsigned short) ((((unsigned long long int) 3618634662247619673ULL)) <= (((/* implicit */unsigned long long int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (0ULL))))));
                        var_27 += ((/* implicit */unsigned long long int) (signed char)104);
                    }
                    for (unsigned short i_12 = 1; i_12 < 15; i_12 += 3) /* same iter space */
                    {
                        arr_42 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_5] [i_2] [i_5] [i_1 - 2])) ? (((/* implicit */unsigned long long int) 7051541179930317868LL)) : (1201320410240096468ULL)));
                        var_28 = ((/* implicit */_Bool) 4190208);
                    }
                    for (unsigned short i_13 = 1; i_13 < 15; i_13 += 3) /* same iter space */
                    {
                        arr_46 [i_1] [i_2] [i_1] [i_10] [6LL] = ((((/* implicit */unsigned int) ((int) arr_20 [i_1 - 1] [i_1 + 1]))) ^ (arr_0 [i_1]));
                        arr_47 [i_2] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                        arr_48 [i_1] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_5] [i_13 - 1] [7LL])) ? (arr_24 [i_1 + 2] [i_13 + 1] [i_13 + 1]) : (((/* implicit */int) (_Bool)1))));
                        var_29 += ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_1 - 1] [i_1 - 1] [i_5] [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_1 - 1])));
                        var_30 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                    }
                    /* LoopSeq 2 */
                    for (short i_14 = 0; i_14 < 16; i_14 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned short) var_11);
                        var_32 -= ((/* implicit */signed char) ((unsigned int) arr_7 [i_1] [i_1 - 2] [i_1 - 2]));
                    }
                    for (short i_15 = 0; i_15 < 16; i_15 += 2) /* same iter space */
                    {
                        var_33 -= ((/* implicit */unsigned char) ((32505856) / (((/* implicit */int) (short)-19315))));
                        arr_56 [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3529517377U)) || (((/* implicit */_Bool) 4431285126168209414ULL))));
                        arr_57 [i_15] [i_1] [(unsigned short)6] [i_10] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 2] [i_2] [i_5]))) : (((long long int) var_9))));
                    }
                }
                for (unsigned int i_16 = 0; i_16 < 16; i_16 += 2) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned int) 3618634662247619690ULL);
                    arr_61 [6U] [6U] [i_5] [i_1] = ((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_5]);
                }
                for (unsigned short i_17 = 0; i_17 < 16; i_17 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 1) 
                    {
                        arr_68 [i_1] [i_2] [i_5] = ((/* implicit */short) (-(((/* implicit */int) arr_60 [i_1] [i_1] [i_1] [i_1]))));
                        var_35 = ((/* implicit */short) (~(((/* implicit */int) arr_59 [(unsigned short)12] [i_1 - 2] [i_2] [i_5] [i_17] [i_18]))));
                        arr_69 [i_1 - 1] [i_1] [i_1] [(unsigned short)7] [(unsigned short)2] [i_1 + 2] [i_1] = ((/* implicit */unsigned short) arr_10 [i_5] [i_1]);
                        arr_70 [i_1] [i_17] [i_5] [i_2] [i_1] = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_2)))));
                    }
                    for (short i_19 = 0; i_19 < 16; i_19 += 4) 
                    {
                        var_36 -= ((/* implicit */signed char) (unsigned short)2);
                        var_37 = ((/* implicit */long long int) ((unsigned short) (_Bool)1));
                    }
                    for (unsigned short i_20 = 0; i_20 < 16; i_20 += 4) 
                    {
                        var_38 &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) 14828109411461931925ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_1] [i_2] [i_5] [14LL] [i_17] [i_17] [i_20]))) : (arr_35 [i_1] [i_1] [i_5] [i_17])))));
                        var_39 = arr_49 [i_1 + 2] [i_2] [i_2] [i_17] [(_Bool)1];
                    }
                    var_40 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_17])) & (((/* implicit */int) arr_25 [i_1] [(signed char)7] [i_2] [i_2] [i_5] [i_17] [i_17]))));
                }
            }
            /* LoopSeq 1 */
            for (unsigned short i_21 = 0; i_21 < 16; i_21 += 4) 
            {
                arr_78 [i_1] [i_21] = ((/* implicit */unsigned char) arr_23 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_21] [i_1 - 1] [i_1]);
                var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((877922251U) >= (1073733632U)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 10673856470609286176ULL)))))))), (arr_18 [i_21]))))));
                var_42 *= ((/* implicit */unsigned long long int) var_8);
            }
        }
        arr_79 [i_1] [i_1] = ((/* implicit */int) (((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((/* implicit */int) (short)62)))));
        var_43 -= ((/* implicit */unsigned long long int) var_7);
        var_44 = ((/* implicit */signed char) ((long long int) 6952315776458984188ULL));
        var_45 = ((/* implicit */unsigned char) var_0);
    }
    for (unsigned short i_22 = 0; i_22 < 20; i_22 += 4) 
    {
        var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_22])) ? (((/* implicit */int) arr_1 [i_22])) : (((/* implicit */int) var_5))))) ? (((((((/* implicit */int) arr_1 [i_22])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_22])) + (8979))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)25312))))));
        var_47 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)6))));
    }
}
