/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111081
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_14 = (!(arr_1 [i_0] [i_0]));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((long long int) (_Bool)1);
            var_16 = ((/* implicit */unsigned int) max((var_16), ((-(var_8)))));
            var_17 = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_0])) - (((/* implicit */int) arr_1 [i_0] [i_1]))));
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) || (((/* implicit */_Bool) var_4))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_2 [i_2] [i_0]))))) && (((((/* implicit */_Bool) 496U)) || (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2]))))));
                var_20 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) -8104467335640257562LL)))));
            }
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                var_21 *= ((/* implicit */short) (-(((/* implicit */int) (_Bool)0))));
                arr_13 [i_0] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1] [i_3])) ? (arr_12 [i_0]) : (-122250526350751037LL)));
            }
            for (long long int i_4 = 2; i_4 < 10; i_4 += 4) 
            {
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_4 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_4]))) : (arr_5 [i_0])));
                arr_16 [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 1739235466U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_14 [i_4 + 1] [0LL]))))));
                arr_17 [i_0] [i_0] [i_0] [3LL] = ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) 356959176)) : (3435593942U));
            }
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
            {
                var_23 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_5] [i_1] [i_0])) ? (arr_6 [i_0] [i_1] [i_5]) : (0U)));
                arr_21 [i_5] [9ULL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_5]))) < (var_5))))) : (arr_6 [i_0] [i_1] [i_5])));
            }
            for (short i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
            {
                arr_24 [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_6])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_6]))));
                /* LoopSeq 2 */
                for (signed char i_7 = 3; i_7 < 12; i_7 += 4) 
                {
                    arr_28 [i_7] [i_6] [i_1] [i_7] = ((/* implicit */long long int) var_0);
                    arr_29 [i_7] [i_7] [i_6] [0LL] [i_7] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) (unsigned char)49)))) - (((int) var_11))));
                }
                for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    arr_33 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_25 [i_0] [i_0] [i_1] [i_1] [i_1] [i_8]))) ? (((/* implicit */int) arr_7 [i_0] [i_6] [i_8])) : (((/* implicit */int) arr_0 [i_6]))));
                    /* LoopSeq 4 */
                    for (unsigned char i_9 = 1; i_9 < 10; i_9 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -6361355747548289149LL)) ? (((((/* implicit */_Bool) (short)629)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_8] [i_8]))) : (arr_6 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) arr_34 [i_8] [i_8] [i_8] [i_8] [i_9 + 1]))));
                        var_25 = (((!(((/* implicit */_Bool) (signed char)102)))) ? (var_7) : (((/* implicit */int) arr_8 [i_0] [i_9 + 1] [i_9 - 1])));
                    }
                    for (short i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) arr_15 [i_1]))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (signed char)94)) ? (arr_35 [(short)1] [i_1] [i_6] [i_8] [i_10]) : (-4183326379056644597LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_10])))));
                        var_28 = ((/* implicit */long long int) ((short) arr_4 [i_0]));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_29 = 1386759704;
                        arr_42 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)174))) / (-5129618889568072648LL)));
                    }
                    for (unsigned short i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        var_30 = ((/* implicit */_Bool) max((var_30), (((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) != (((/* implicit */int) arr_7 [i_6] [i_6] [i_12]))))));
                        var_31 = ((/* implicit */short) (-(((/* implicit */int) arr_43 [i_0] [i_1] [i_6] [i_8] [i_12]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        var_32 = ((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_6] [i_8] [5LL] [i_6]);
                        arr_50 [(unsigned short)10] [(unsigned short)10] [i_6] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_13] [i_1] [i_13] [i_8] [i_13])) ? (arr_35 [i_0] [i_1] [i_6] [i_8] [i_13]) : (arr_35 [i_0] [i_1] [i_6] [i_8] [i_13])));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_0] [i_0] [i_1] [i_6] [i_6] [i_8] [i_13])) ? (((/* implicit */int) arr_47 [i_0] [i_1] [i_6] [i_8] [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_47 [i_0] [i_1] [i_1] [i_0] [i_6] [i_8] [i_13]))));
                    }
                    for (unsigned int i_14 = 2; i_14 < 11; i_14 += 2) 
                    {
                        arr_54 [(short)0] [(short)0] [(signed char)8] [i_8] [(short)0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_43 [i_0] [i_8] [i_0] [(short)10] [i_8]))));
                        var_34 = ((((/* implicit */_Bool) arr_52 [i_0] [i_6] [i_8])) ? (2555731830U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_14] [i_14 + 3] [i_14 - 2] [i_14 - 1] [i_14 + 1]))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_15 = 2; i_15 < 13; i_15 += 3) 
                    {
                        arr_58 [i_0] [i_1] [i_6] [i_8] [i_15 + 1] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_15 + 1] [i_15] [i_15] [i_15 - 1] [i_15 - 1])) ? (-1832955593960078200LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                        arr_59 [i_15] [i_15 - 2] [i_8] [i_6] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_23 [(short)8] [i_15 - 2] [i_15 - 2] [i_15 + 1])) ? (arr_31 [i_0] [i_1] [i_0] [i_8] [i_8] [i_15 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_6] [i_1]))) != (arr_56 [i_0] [i_1] [i_1] [i_6] [i_8] [i_8] [i_15 - 1])))))));
                    }
                }
            }
        }
        for (unsigned long long int i_16 = 2; i_16 < 11; i_16 += 4) 
        {
            var_36 = ((/* implicit */unsigned int) (~(((arr_4 [i_16 + 2]) ? (((/* implicit */int) arr_4 [i_16 + 1])) : (((/* implicit */int) arr_4 [i_16 + 3]))))));
            arr_64 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_62 [i_0]);
        }
    }
    var_37 -= ((/* implicit */short) (signed char)-94);
    var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (-(((/* implicit */int) var_10)))))));
    var_39 = ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_17 = 0; i_17 < 16; i_17 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_40 = ((/* implicit */int) ((((/* implicit */_Bool) arr_66 [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) arr_69 [i_17] [i_18]))) : (arr_66 [i_18])));
            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) 199917233U)) ? (arr_66 [i_18]) : (arr_66 [i_17])));
            var_42 = ((/* implicit */unsigned long long int) (+(arr_68 [i_18])));
        }
        var_43 = ((/* implicit */unsigned long long int) (!(((_Bool) var_7))));
    }
    /* vectorizable */
    for (signed char i_19 = 1; i_19 < 22; i_19 += 2) 
    {
        arr_72 [2ULL] |= ((/* implicit */_Bool) (-(-122250526350751039LL)));
        arr_73 [i_19] [i_19] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) 122250526350751037LL)) ? (((/* implicit */int) arr_71 [i_19])) : (420634094))));
    }
}
