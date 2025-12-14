/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1658
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_12 ^= ((/* implicit */unsigned short) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) || (((/* implicit */_Bool) (short)0))))), (((long long int) arr_2 [i_0])))) > (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0 + 2] [(unsigned char)1])) || (((/* implicit */_Bool) (signed char)-1)))) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((((/* implicit */int) var_6)) / (((/* implicit */int) var_8)))))))));
        var_13 ^= max(((-(((/* implicit */int) ((unsigned short) var_4))))), ((-(((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_14 ^= ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_6 [i_0] [i_0] [0ULL] [i_0])) < (((/* implicit */int) arr_0 [i_1] [i_1])))));
                /* LoopSeq 2 */
                for (unsigned int i_3 = 1; i_3 < 14; i_3 += 4) 
                {
                    var_15 ^= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_6)))));
                    var_16 ^= ((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_2] [i_1]);
                }
                for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    var_17 ^= ((/* implicit */_Bool) ((int) var_4));
                    var_18 ^= ((/* implicit */unsigned char) var_7);
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [(short)15] [i_0 + 2])) < (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2])))))));
                }
            }
            for (long long int i_5 = 3; i_5 < 15; i_5 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    var_20 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) < (((/* implicit */int) arr_10 [i_5 - 1] [i_5 + 1] [i_0 + 2] [i_0 + 1] [i_0])))) ? (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_17 [i_1] [i_6] [i_1] [i_6]))))) : (((/* implicit */int) var_3))));
                    var_21 ^= ((/* implicit */unsigned long long int) min(((-((-(((/* implicit */int) var_6)))))), (((((/* implicit */int) arr_7 [i_5 - 2] [i_5 - 3] [i_5])) % (((((/* implicit */_Bool) arr_15 [i_6] [i_5 - 2] [i_1] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))))));
                    var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-8274)) >= (((/* implicit */int) (signed char)4))));
                    var_23 ^= var_11;
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        var_24 ^= ((/* implicit */signed char) (((((-(((/* implicit */int) var_10)))) < (((/* implicit */int) var_11)))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (var_8))))))) : (min((((int) arr_19 [i_5 - 2] [i_5 - 2] [10] [i_6] [i_7] [i_1] [i_6])), (max((var_7), (((/* implicit */int) arr_15 [i_7] [i_5 - 2] [(unsigned short)13] [i_0 + 2]))))))));
                        var_25 ^= ((/* implicit */int) max((((unsigned int) (signed char)-5)), (((/* implicit */unsigned int) ((unsigned char) arr_13 [i_0 + 1])))));
                        var_26 ^= (((-(arr_8 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_6]))) > ((-(arr_16 [i_7] [i_6] [i_5 - 2] [i_1] [i_0] [i_0]))));
                        var_27 ^= ((/* implicit */unsigned short) var_7);
                    }
                    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((signed char) (signed char)4)))));
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_8)))))))), (max((max((var_2), (4700415319860255237ULL))), (var_2))))))));
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (unsigned char)133))));
                    }
                }
                for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
                {
                    var_31 ^= ((signed char) (-(((/* implicit */int) ((arr_16 [12ULL] [6U] [i_5] [i_1] [i_1] [i_0]) > (((/* implicit */unsigned long long int) 4294967287U)))))));
                    var_32 ^= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (unsigned char)239)) || (((/* implicit */_Bool) var_9)))));
                    var_33 = ((/* implicit */_Bool) min((var_33), ((!(((/* implicit */_Bool) max((((/* implicit */int) arr_25 [i_0 + 2] [i_0 - 1])), (var_7))))))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 2) /* same iter space */
                {
                    var_34 ^= ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2))) < (var_2))));
                    var_35 ^= (_Bool)1;
                    var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) arr_22 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) > (((/* implicit */int) arr_22 [i_0] [(short)5] [i_0 + 1] [i_0] [i_0]))))))));
                    var_37 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_13 [i_0 + 1])), (((unsigned long long int) 2911746690U))))) ? (min((min((((/* implicit */unsigned long long int) (unsigned char)230)), (16265406999385895829ULL))), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) arr_7 [i_0] [i_5 + 1] [i_0]))))));
                    var_38 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) var_11))));
                }
                var_39 ^= ((/* implicit */long long int) (unsigned char)26);
            }
            for (signed char i_11 = 3; i_11 < 15; i_11 += 1) 
            {
                var_40 ^= ((/* implicit */short) (-(((/* implicit */int) var_11))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) arr_24 [i_0] [i_1] [i_1] [i_1] [i_12] [i_12]))));
                    var_42 ^= ((/* implicit */long long int) arr_23 [6] [6]);
                    var_43 ^= ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned char)16)))) > (((/* implicit */int) arr_7 [i_0 + 1] [i_1] [(unsigned short)14]))));
                }
                var_44 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), (arr_34 [i_1] [i_0] [i_11] [13] [i_0] [i_0 + 2])))) ? (arr_21 [i_0] [i_0] [i_1] [i_1] [(signed char)8]) : (((/* implicit */unsigned long long int) arr_31 [(short)3] [(short)3] [(short)3] [i_11])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_11 - 3] [i_11 - 3] [i_1] [i_0] [i_0])))));
                /* LoopNest 2 */
                for (unsigned int i_13 = 1; i_13 < 14; i_13 += 4) 
                {
                    for (signed char i_14 = 4; i_14 < 14; i_14 += 3) 
                    {
                        {
                            var_45 ^= ((/* implicit */_Bool) var_1);
                            var_46 ^= (-(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_11])) ? (((/* implicit */int) arr_10 [i_14 - 2] [i_14 + 2] [i_13 + 1] [i_0] [i_0])) : (((/* implicit */int) var_4)))));
                            var_47 ^= ((/* implicit */signed char) min((var_9), (((short) min((var_2), (((/* implicit */unsigned long long int) (unsigned char)239)))))));
                        }
                    } 
                } 
            }
            var_48 ^= max((min((((/* implicit */int) (unsigned char)16)), (1998409924))), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) var_5)), ((short)-31850)))) || (var_10)))));
            var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) arr_19 [i_1] [(_Bool)1] [i_1] [i_1] [(signed char)1] [i_0 + 1] [i_0]))));
        }
        for (unsigned char i_15 = 0; i_15 < 16; i_15 += 1) /* same iter space */
        {
            var_50 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) var_0)))));
            var_51 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [(signed char)4] [i_15] [i_15] [(signed char)4]))) != (arr_37 [i_0] [i_0] [(_Bool)1] [i_15] [i_15] [i_0] [i_0])));
            var_52 ^= ((/* implicit */long long int) (unsigned char)230);
        }
        for (unsigned char i_16 = 0; i_16 < 16; i_16 += 1) /* same iter space */
        {
            var_53 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0 + 2] [(short)8]))) : (2799567501U)))) || (((/* implicit */_Bool) 1495399794U)))))) ^ (arr_13 [14ULL])));
            var_54 ^= ((/* implicit */short) min((((long long int) 0LL)), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) arr_22 [i_0 + 1] [i_0 - 1] [i_0] [i_16] [i_16]))) >= (15ULL))))));
        }
        var_55 ^= ((/* implicit */long long int) (-(((/* implicit */int) (short)8))));
        var_56 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)1))))))), (max((((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)62)), ((unsigned char)37))))))));
    }
    var_57 ^= ((/* implicit */short) ((unsigned long long int) ((unsigned short) (-(0LL)))));
    var_58 ^= ((/* implicit */_Bool) max((((int) var_0)), (((/* implicit */int) ((((unsigned long long int) var_1)) != (max((((/* implicit */unsigned long long int) var_0)), (5607463749304810293ULL))))))));
    var_59 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)229)) + (((/* implicit */int) (_Bool)1))));
    var_60 ^= ((/* implicit */signed char) max((var_8), (var_4)));
}
