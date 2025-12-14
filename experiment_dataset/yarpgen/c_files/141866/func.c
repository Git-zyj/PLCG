/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141866
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
    var_12 = (short)20342;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    var_13 = ((/* implicit */unsigned char) (unsigned short)40168);
                    arr_10 [i_0] [i_1] = ((/* implicit */long long int) var_3);
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_4))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_0]))))));
                        arr_13 [i_0] [19LL] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 1] [12ULL])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((((/* implicit */_Bool) (unsigned short)25368)) ? (((/* implicit */int) arr_8 [i_0] [i_1 - 2] [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_1 - 1] [(_Bool)1]))))));
                    }
                    arr_14 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)-56)))))))));
                }
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        arr_19 [i_0] [i_1 - 1] [i_4] [i_1 - 1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (var_5)));
                        var_16 = ((/* implicit */unsigned long long int) var_10);
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 2; i_7 < 19; i_7 += 2) 
                        {
                            var_17 -= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1]))))) * (((/* implicit */int) var_0))));
                            var_18 = ((/* implicit */signed char) ((arr_20 [i_0] [i_1] [i_4] [i_0] [i_0]) != (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)25364)))))));
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_7 [i_6] [i_1]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 3; i_8 < 19; i_8 += 2) 
                        {
                            var_20 = ((/* implicit */short) ((unsigned char) arr_23 [i_0]));
                            arr_28 [(unsigned char)7] [i_1] [i_1 - 2] [i_0] [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)240))));
                            arr_29 [i_4] [6LL] [i_0] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)11))));
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) var_4)))))));
                            var_22 = ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_0]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            arr_32 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [(unsigned short)12] [i_0] [i_0] [i_0] [(unsigned short)8]))) : (2877180961724522603LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_0] [i_0] [i_6]))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (var_5) : (((/* implicit */unsigned long long int) -2877180961724522609LL))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2877180961724522603LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_30 [i_0] [i_1])))) ? (var_11) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))));
                            arr_33 [i_0] [i_0] [i_4] [i_0] [(unsigned char)6] [(unsigned char)8] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_0]))));
                        }
                        arr_34 [i_0] [i_0] = ((/* implicit */unsigned short) (~(arr_25 [(signed char)12] [i_1] [i_1 - 2] [i_1] [(signed char)12])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 3; i_10 < 18; i_10 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned short) (+(((long long int) arr_15 [i_0] [i_0] [i_0] [i_11]))));
                            arr_41 [i_0] [i_1] [i_4] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_25 [(unsigned char)17] [i_10 + 2] [i_4] [i_1 + 1] [i_0])) ? (2877180961724522603LL) : (((/* implicit */long long int) ((/* implicit */int) (short)28443))))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_25 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)48908)) : (((/* implicit */int) var_10))));
                            var_26 = ((unsigned char) arr_24 [i_0] [i_0] [i_10 + 1] [i_10] [i_12]);
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            arr_48 [i_0] [i_0] [i_4] [i_4] [i_0] [i_0] = ((/* implicit */signed char) ((short) var_10));
                            arr_49 [(signed char)18] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_0);
                            arr_50 [i_13] [i_0] [8LL] [8LL] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) arr_36 [i_0] [i_0] [i_10] [i_0] [i_1] [i_0]));
                            arr_51 [i_0] [i_10] [(signed char)16] [(signed char)11] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)195)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-7))));
                        }
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_37 [i_1] [i_1] [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_24 [i_0] [5LL] [9LL] [i_1 - 2] [i_10 - 2]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        arr_54 [i_0] [i_0] [i_0] [i_4] [i_0] [i_14] = ((/* implicit */short) (((-(((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_0] [i_0])))) * (((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0] [i_1 - 1] [15LL] [15LL])) ? (((/* implicit */int) (short)-8307)) : (((/* implicit */int) (_Bool)1))))));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_9)) ? (arr_16 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
                    }
                }
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))) : (arr_23 [i_0])))))) ? ((+(min((var_5), (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) min(((unsigned short)16340), (((/* implicit */unsigned short) arr_45 [i_0] [i_1] [i_1] [i_0] [i_1 - 1]))))))))));
                arr_55 [i_0] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
                var_30 = ((/* implicit */short) arr_3 [i_0]);
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_3)))) || (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_2))))));
    var_32 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)249)), (var_5)))) ? ((+(((/* implicit */int) (unsigned short)61727)))) : (((((/* implicit */_Bool) (short)-30809)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-6))))))));
}
