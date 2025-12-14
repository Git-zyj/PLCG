/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135734
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
    var_17 = 8296717350817465414LL;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 8296717350817465414LL))));
                                arr_15 [i_2] [20ULL] [i_1] [i_2] [(signed char)3] [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_11 [i_2] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1])))) ? (((/* implicit */int) (((-(((/* implicit */int) var_1)))) != ((-(((/* implicit */int) (short)12706))))))) : (max((var_6), (((/* implicit */int) arr_6 [i_3] [(_Bool)1] [i_0]))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_7 [i_0] [i_0]);
                /* LoopSeq 3 */
                for (unsigned int i_5 = 3; i_5 < 21; i_5 += 3) 
                {
                    arr_19 [i_5] [i_5] [i_1 + 1] [i_0] = ((/* implicit */short) -1007461512);
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 22; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            {
                                var_19 -= ((/* implicit */long long int) (((_Bool)0) && (((/* implicit */_Bool) (unsigned char)229))));
                                var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_8 [i_7] [i_5 - 2] [i_5 - 1] [i_5 + 2])) : (arr_14 [i_5] [i_0] [i_5 + 1] [i_5 - 1]))))));
                                var_21 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (1289204878U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                                arr_25 [i_7] [i_6] [i_6] [(unsigned short)12] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (~((+(-1)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) (+(5512582307816428ULL)));
                }
                for (signed char i_8 = 1; i_8 < 19; i_8 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned long long int) arr_11 [i_8] [0] [0] [i_0] [i_1]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        arr_30 [i_9] [i_8] [i_8] [i_8] [i_0] = ((/* implicit */unsigned char) var_3);
                        var_24 = ((/* implicit */unsigned long long int) var_2);
                    }
                    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        var_25 = ((/* implicit */long long int) ((signed char) ((arr_9 [15LL] [i_8] [i_0] [i_0]) & (((/* implicit */int) (unsigned short)57344)))));
                        var_26 = ((/* implicit */unsigned char) (+(((long long int) max((((/* implicit */unsigned int) (unsigned short)8509)), (3439019874U))))));
                        var_27 = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) | (arr_7 [i_1 - 1] [(_Bool)1]))), (((/* implicit */unsigned long long int) var_6))));
                        arr_33 [20ULL] [i_8] [i_8 + 3] [i_8] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((-8879980412059197935LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 72057594037927935LL)) ? (var_7) : (((/* implicit */int) (signed char)(-127 - 1))))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [(short)1])) ? (((/* implicit */int) var_2)) : (var_12)))) ? (min((((/* implicit */unsigned long long int) (unsigned char)88)), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                    }
                    /* LoopSeq 4 */
                    for (int i_11 = 2; i_11 < 19; i_11 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) (unsigned short)47097))))) || (((/* implicit */_Bool) -8879980412059197935LL))))) : (((/* implicit */int) (_Bool)1))));
                        var_29 = ((/* implicit */signed char) max((((/* implicit */long long int) ((int) arr_14 [i_0] [i_8] [i_8 + 3] [i_11 + 4]))), (((long long int) var_6))));
                        arr_36 [i_8] [i_0] [i_0] [i_8] = ((/* implicit */long long int) ((signed char) (-9223372036854775807LL - 1LL)));
                        var_30 = (~(((((/* implicit */long long int) ((/* implicit */int) (short)-12706))) / (5476080231800836280LL))));
                    }
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 23; i_12 += 4) 
                    {
                        var_31 |= arr_3 [i_0];
                        var_32 = ((/* implicit */short) (~(var_6)));
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_33 |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_12] [i_13] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_0]))) : (var_10))))));
                            var_34 = ((/* implicit */unsigned char) (signed char)-10);
                            var_35 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_9)))) > (var_13)));
                        }
                        /* LoopSeq 1 */
                        for (short i_14 = 3; i_14 < 22; i_14 += 3) 
                        {
                            var_36 = ((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_4))) * (((/* implicit */long long int) ((/* implicit */int) (short)4096))));
                            arr_43 [i_0] [(signed char)0] [i_12] [i_12] [i_8] = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_2)) ? (arr_31 [i_14] [i_12] [i_8] [i_1 - 1] [i_1 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-20))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3959586660569836251ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)26))) : (1289204872U)))));
                        }
                        arr_44 [i_0] [i_8] [i_8] [i_12] [i_12] = ((/* implicit */signed char) (~(72057594037927935LL)));
                    }
                    for (long long int i_15 = 0; i_15 < 23; i_15 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_37 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_24 [i_0] [i_0] [i_0] [i_15] [i_0])))));
                            arr_50 [i_8] [i_8] [i_8] [(unsigned char)19] [(unsigned char)19] [i_1] = ((/* implicit */_Bool) (~(arr_18 [i_8] [i_8] [i_8] [i_8])));
                        }
                        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */int) ((_Bool) ((16157729906571072330ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) & (((/* implicit */int) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) 1LL)) || (((/* implicit */_Bool) var_8)))))))))))));
                        var_39 = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)673)) ? (((var_5) | (0LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 4) 
                    {
                        arr_53 [(unsigned short)20] [i_1] [i_8] [i_17] [i_17] [i_8] = ((/* implicit */signed char) ((unsigned long long int) arr_34 [i_17] [i_8] [i_8] [i_0]));
                        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_51 [i_8] [20LL] [i_1 - 1] [i_1 - 1])) ? (var_12) : (-1893996140)));
                        var_41 = ((/* implicit */long long int) (signed char)10);
                        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)63)) || (((/* implicit */_Bool) var_5)))))));
                    }
                }
                /* vectorizable */
                for (signed char i_18 = 1; i_18 < 19; i_18 += 4) /* same iter space */
                {
                    var_43 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1721046084253057658LL)) || ((_Bool)1)));
                    /* LoopSeq 4 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_60 [i_0] [i_0] [i_18] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)22)) ? (((((/* implicit */int) arr_21 [i_0] [i_19] [i_19] [i_0])) * (((/* implicit */int) var_0)))) : (arr_9 [i_1] [i_1 - 1] [i_1 + 1] [i_1])));
                        var_44 = ((var_10) % (8690850884099790335ULL));
                        var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [(unsigned short)22] [i_18 + 3] [i_18])) - (((/* implicit */int) (unsigned char)64))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_2)))))));
                    }
                    for (unsigned short i_20 = 0; i_20 < 23; i_20 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            arr_66 [i_0] [i_0] [10] [10] [i_18] = ((/* implicit */unsigned short) var_1);
                            var_46 = ((/* implicit */short) (((-(((/* implicit */int) var_1)))) % ((+(((/* implicit */int) (short)12706))))));
                        }
                        arr_67 [i_20] [i_18] [0ULL] [i_18] [i_18] [0ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))))));
                        arr_68 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1]))));
                    }
                    for (signed char i_22 = 0; i_22 < 23; i_22 += 1) 
                    {
                        var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)9664)) ? (((((/* implicit */_Bool) 925927791)) ? (((/* implicit */long long int) var_7)) : (1962015144758583085LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3))))));
                        arr_71 [i_18] = ((/* implicit */short) 9077802617685842153LL);
                    }
                    for (short i_23 = 0; i_23 < 23; i_23 += 2) 
                    {
                        var_48 = ((/* implicit */short) ((unsigned char) ((((-18) + (2147483647))) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (150))))));
                        /* LoopSeq 1 */
                        for (short i_24 = 0; i_24 < 23; i_24 += 2) 
                        {
                            arr_77 [i_23] [i_18] [i_18] [i_23] [(short)2] = ((/* implicit */long long int) (-(((unsigned int) 2134233972334592323LL))));
                            var_49 = (~((-(arr_12 [(signed char)0] [(signed char)12] [i_18]))));
                            var_50 -= (!(((((/* implicit */_Bool) (short)1020)) || (((/* implicit */_Bool) -5476080231800836281LL)))));
                            arr_78 [i_18] [i_24] = ((((((/* implicit */_Bool) 4035958545547156442LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)12710))) : (3118147902478621994LL))) & (((/* implicit */long long int) ((/* implicit */int) (short)-18607))));
                        }
                        var_51 = ((/* implicit */short) var_1);
                        var_52 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-127))));
                    }
                }
                var_53 = ((/* implicit */unsigned short) max((var_53), (((/* implicit */unsigned short) (~((-(var_12))))))));
            }
        } 
    } 
}
