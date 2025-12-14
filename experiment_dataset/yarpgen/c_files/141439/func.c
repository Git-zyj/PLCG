/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141439
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), ((-(var_1)))));
    var_12 *= ((/* implicit */unsigned short) var_0);
    var_13 = ((/* implicit */int) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_3 [i_0] = ((/* implicit */_Bool) (~(var_1)));
        arr_4 [i_0] = ((/* implicit */_Bool) (+(((int) var_8))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (int i_4 = 3; i_4 < 24; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */unsigned short) (signed char)37);
                            var_15 = ((((/* implicit */int) (unsigned short)48311)) | (((/* implicit */int) (short)32767)));
                            arr_15 [i_0] [i_1 - 1] [i_2] [i_4] [i_4] [i_2 - 3] = (+(var_10));
                        }
                        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) (short)244)) ? (((/* implicit */unsigned long long int) var_4)) : (10718258168049492884ULL))) ^ (((/* implicit */unsigned long long int) arr_17 [(signed char)3] [i_2] [i_2] [1ULL] [(unsigned short)22])))))));
                            var_17 -= ((/* implicit */unsigned int) var_0);
                            var_18 = ((/* implicit */int) ((var_7) ? (arr_0 [i_0 + 1] [i_1 + 3]) : ((~(var_10)))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 23; i_6 += 4) 
                        {
                            var_19 = (~(arr_19 [i_6] [(short)0] [i_2 - 3] [i_2 + 1] [i_2]));
                            arr_21 [19LL] [i_1 + 3] [i_2] [i_6] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(7728485905660058731ULL))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            var_20 += ((/* implicit */unsigned short) (((~(arr_13 [i_0] [i_1] [i_2] [i_3] [i_1]))) << ((((~(((/* implicit */int) var_9)))) + (285)))));
                            arr_24 [i_0 + 1] = ((/* implicit */unsigned short) (+(arr_9 [i_0 + 1] [i_1 + 3] [i_1 + 3])));
                        }
                        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            var_21 -= ((/* implicit */int) (short)-245);
                            arr_29 [i_0] [i_1] [i_2] [i_3] [19LL] = ((/* implicit */unsigned short) arr_26 [i_0] [i_1 - 1] [(unsigned short)14] [4ULL] [4ULL]);
                            arr_30 [i_0] [(unsigned short)18] [(unsigned short)8] [i_3] [19ULL] = ((/* implicit */unsigned short) (~(arr_28 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])));
                        }
                        for (int i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            arr_34 [i_0] [i_1 + 3] [i_2] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [(short)10] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((arr_23 [i_0 + 1] [8] [i_1] [i_1] [i_2] [i_3] [i_9]) ? (((/* implicit */int) (short)-244)) : (var_0)))) : (((((/* implicit */_Bool) (signed char)-86)) ? (var_1) : (var_1)))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((arr_23 [i_0 + 1] [i_0] [i_0] [i_0] [(unsigned short)5] [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) arr_23 [i_0 + 1] [i_0] [(unsigned short)15] [i_0] [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_23 [i_0 + 1] [6] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1])))))));
                            arr_35 [14] [i_9] [i_2] [i_0] [24ULL] = ((arr_17 [i_1] [(unsigned short)21] [i_2 + 3] [19LL] [i_9]) | (((((/* implicit */_Bool) arr_22 [8] [10LL] [7ULL] [13LL] [i_9] [i_2] [i_0])) ? (((/* implicit */int) (unsigned short)38488)) : (arr_18 [i_0] [i_1] [i_2 - 3] [i_3] [i_9]))));
                            arr_36 [i_0 + 1] [i_1 - 1] [i_9] [i_1] [i_2] [i_3] [i_9] = ((/* implicit */unsigned short) arr_17 [(signed char)8] [9ULL] [i_2] [(short)13] [i_9]);
                        }
                        arr_37 [i_0 + 1] [i_1 + 2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 + 1])));
                        var_23 -= ((/* implicit */_Bool) (~(((/* implicit */int) (short)-244))));
                        arr_38 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)13)))))));
                    }
                    arr_39 [9U] [i_1] [(unsigned short)9] = ((/* implicit */unsigned int) -8454759094705633051LL);
                }
            } 
        } 
    }
    for (short i_10 = 0; i_10 < 14; i_10 += 1) 
    {
        arr_42 [i_10] = var_8;
        var_24 -= ((/* implicit */unsigned char) max((max((((4989065388415460293LL) / (8454759094705633079LL))), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) (-(max((arr_20 [i_10] [i_10] [14ULL] [i_10] [i_10] [i_10]), (arr_18 [i_10] [i_10] [i_10] [i_10] [i_10]))))))));
        arr_43 [i_10] = -6446582292153302505LL;
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) arr_6 [i_10]))));
            var_26 = ((/* implicit */short) arr_33 [i_11]);
        }
        var_27 = ((/* implicit */long long int) ((unsigned short) ((unsigned long long int) arr_33 [i_10])));
    }
}
