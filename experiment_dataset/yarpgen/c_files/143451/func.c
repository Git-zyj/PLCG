/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143451
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((int) ((short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_1 [(_Bool)1])))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            arr_6 [i_1] = ((/* implicit */long long int) min((574460741), (((/* implicit */int) (_Bool)0))));
            arr_7 [i_1] = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) (unsigned char)96)))));
        }
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_2])) : (((/* implicit */int) var_3)))) | ((-(((/* implicit */int) (_Bool)1))))));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (+((+(31U))))))));
        }
        for (unsigned char i_4 = 2; i_4 < 15; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_5 = 1; i_5 < 18; i_5 += 4) 
            {
                arr_19 [(unsigned short)18] [i_4] [i_5] [i_5] = ((/* implicit */int) var_18);
                arr_20 [i_2] [i_5] = ((/* implicit */_Bool) var_17);
                arr_21 [i_2] [i_2] [i_5] [(signed char)4] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_13 [i_4 + 1]))));
            }
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)13889))))) ? (((((/* implicit */_Bool) arr_11 [i_2] [11] [i_4])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))));
            /* LoopNest 3 */
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                for (unsigned char i_7 = 4; i_7 < 17; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_4 - 1] [i_4 - 1]))));
                            arr_29 [i_2] [i_2] [i_2] [i_2] [7] = ((/* implicit */short) ((unsigned char) arr_14 [i_7 - 2]));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_7 - 2] [i_4 + 3] [i_2])) == (((((/* implicit */_Bool) arr_28 [i_4] [i_4] [i_6] [i_4] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            arr_34 [i_9] = (~((-(((/* implicit */int) arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))));
            /* LoopSeq 2 */
            for (unsigned int i_10 = 1; i_10 < 16; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        {
                            var_25 += ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_32 [i_2] [i_2] [i_2])) == (((/* implicit */int) arr_8 [i_9])))))));
                            arr_41 [i_2] [i_2] [i_9] [(signed char)5] [(unsigned char)2] [i_9] = ((/* implicit */short) var_4);
                        }
                    } 
                } 
                arr_42 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_36 [i_10 + 1] [i_9] [i_10]))));
            }
            for (short i_13 = 2; i_13 < 18; i_13 += 2) 
            {
                var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)160)))))));
                /* LoopSeq 1 */
                for (unsigned int i_14 = 0; i_14 < 19; i_14 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_15 = 1; i_15 < 16; i_15 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned int) (~(arr_14 [i_13 - 2])));
                        arr_52 [i_14] [i_14] [i_13 - 1] [i_9] [i_14] = ((/* implicit */unsigned long long int) (+(var_14)));
                        arr_53 [i_2] [i_2] [i_9] [i_13] [i_14] [i_15 - 1] [i_14] = ((/* implicit */short) arr_24 [(unsigned short)13] [i_9] [i_13 - 1] [i_14] [6LL] [i_15 - 1]);
                    }
                    for (long long int i_16 = 1; i_16 < 16; i_16 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_45 [(_Bool)1] [(_Bool)1] [i_13 - 1] [(_Bool)1] [i_16 + 1])) : (((/* implicit */int) arr_45 [i_2] [(_Bool)1] [i_13] [i_14] [i_16]))));
                        arr_58 [i_14] [i_14] [i_14] [i_13] [i_13 + 1] [i_13] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_35 [i_13 - 1] [i_16 + 1] [2ULL] [i_16]))));
                        arr_59 [(signed char)5] [(short)5] [i_14] [i_14] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))) : (arr_48 [i_13 + 1])));
                    }
                    var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_33 [i_13 + 1]))));
                }
                /* LoopSeq 3 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_64 [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] [i_13 - 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -623040417)) ? (((/* implicit */int) (short)2058)) : (((/* implicit */int) (short)32767))))) == (arr_50 [i_17] [i_13] [i_13] [i_13 - 1] [i_13] [i_13] [i_13])));
                    arr_65 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_9] [i_13 + 1] [i_13 - 2] [i_13] [i_9] [i_13 + 1]))) >= ((~(var_9)))));
                    arr_66 [i_2] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_16))));
                }
                for (signed char i_18 = 0; i_18 < 19; i_18 += 2) 
                {
                    arr_70 [7ULL] [i_9] [i_13 + 1] [i_13 + 1] [i_9] = (!(arr_37 [i_13 + 1] [i_13] [i_18] [(_Bool)1]));
                    arr_71 [i_18] [i_13] [i_9] [i_9] [18U] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_2])) / (((/* implicit */int) arr_10 [i_13 - 2]))));
                }
                for (long long int i_19 = 1; i_19 < 18; i_19 += 3) 
                {
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_13 - 1] [i_13 + 1] [i_19 + 1])) ? (((/* implicit */int) arr_17 [i_13 - 2] [i_13 - 1] [i_19 + 1])) : (((/* implicit */int) arr_17 [i_13 - 2] [i_13 - 1] [i_19 + 1]))));
                    arr_76 [i_2] [i_9] [i_2] [i_19 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1073741808)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (short)32767))));
                    var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_73 [(unsigned char)3] [i_13 + 1] [i_19 + 1] [i_13] [i_19 + 1])))))));
                    var_32 = ((/* implicit */int) (+(arr_62 [i_2] [i_2] [i_9] [i_13] [i_2])));
                }
            }
        }
        arr_77 [i_2] [i_2] = ((/* implicit */unsigned short) var_4);
    }
    /* vectorizable */
    for (unsigned short i_20 = 1; i_20 < 12; i_20 += 2) 
    {
        arr_81 [i_20] [i_20] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) == (arr_18 [(_Bool)1] [i_20 + 2] [(_Bool)1])));
        var_33 = (!(((/* implicit */_Bool) arr_33 [i_20 + 1])));
        /* LoopNest 3 */
        for (unsigned char i_21 = 1; i_21 < 13; i_21 += 4) 
        {
            for (unsigned long long int i_22 = 1; i_22 < 11; i_22 += 2) 
            {
                for (unsigned char i_23 = 0; i_23 < 14; i_23 += 3) 
                {
                    {
                        arr_91 [(unsigned short)6] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_86 [i_20 + 2]))));
                        arr_92 [i_20] [13ULL] [i_21] [i_20] [12ULL] [3U] = ((((/* implicit */_Bool) var_9)) ? (arr_54 [i_20 - 1] [i_20 + 2] [i_21 - 1] [(_Bool)1] [i_22 - 1] [i_23]) : (arr_54 [i_20 - 1] [i_20 - 1] [i_21] [i_22] [i_23] [i_23]));
                        arr_93 [i_20] [(_Bool)1] [i_20 + 1] [(unsigned char)0] = ((/* implicit */unsigned char) ((signed char) (signed char)32));
                        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)28))))) && (((var_5) == (var_17)))));
                    }
                } 
            } 
        } 
        arr_94 [i_20] = ((/* implicit */long long int) var_18);
    }
    /* vectorizable */
    for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
    {
        arr_97 [i_24] [i_24] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (var_9))))));
        arr_98 [i_24] = ((/* implicit */long long int) var_13);
        arr_99 [i_24 + 1] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 0LL))))));
    }
    var_35 = ((/* implicit */unsigned short) ((short) max((((/* implicit */long long int) min((6U), (3742350157U)))), (-1LL))));
    var_36 = var_4;
}
