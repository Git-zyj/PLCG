/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148588
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
    var_18 = ((/* implicit */unsigned int) var_15);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((0ULL) - (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [1ULL] [i_1])), (var_1)))))) < (((/* implicit */unsigned long long int) var_9)))))));
                    arr_7 [i_0] [i_0] [i_1 + 1] [i_0] |= ((unsigned char) (_Bool)0);
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_2 + 3] = ((/* implicit */int) arr_9 [i_0] [i_0] [i_1 + 1] [i_2] [i_3 + 1] [i_3]);
                        var_20 = ((/* implicit */short) (~(((int) (unsigned short)15164))));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((arr_9 [i_2] [i_2 + 2] [i_2] [i_2] [i_2 - 1] [i_3 + 1]), (arr_9 [i_2] [19U] [i_2 + 3] [i_2] [i_2 - 1] [i_3 + 1]))))));
                        var_22 -= ((/* implicit */_Bool) arr_6 [i_1 + 1]);
                    }
                    for (int i_4 = 3; i_4 < 21; i_4 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) arr_5 [i_0] [i_0] [i_0]))));
                        var_24 = ((/* implicit */unsigned short) arr_8 [i_0] [i_1 + 1] [i_2 - 1] [(_Bool)1] [i_1 + 1] [(_Bool)1]);
                    }
                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 21; i_5 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)78))))) ? ((+(arr_4 [8U] [23ULL] [i_2 + 1] [i_5]))) : (((/* implicit */int) arr_14 [i_1 - 1]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_26 = ((/* implicit */short) ((int) 890780643));
                            arr_19 [i_0] [i_0] [i_0] [i_0] = (-(((/* implicit */int) arr_3 [i_1 + 1] [i_2 - 1] [i_2 + 3])));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            arr_22 [i_0] [4] [i_2] [i_5] [i_7] = ((((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_7])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_14 [i_0])))) % (arr_12 [i_1 - 1] [i_2 - 1]));
                            arr_23 [i_0] [i_1] [i_0] [i_2 + 2] = ((var_14) != (((/* implicit */int) arr_0 [i_1 + 1] [i_5])));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_28 [i_0] [i_1] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_1] [(unsigned char)6] [(unsigned short)11] [i_2 + 1] [i_2])) ? (4100174232599585098ULL) : (((/* implicit */unsigned long long int) arr_16 [i_2 + 3] [i_1 + 1] [i_2 + 3] [i_1 + 1]))));
                            arr_29 [i_5] [i_5] [i_5] [i_5 + 2] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */unsigned int) arr_4 [i_0] [0LL] [i_2 - 1] [i_2 - 1])) : (var_1))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [(short)4] [i_1] [(_Bool)1] [(short)4] [i_8])))));
                        }
                        /* LoopSeq 2 */
                        for (int i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_7) : (((/* implicit */int) (short)1804)))))));
                            var_28 += ((/* implicit */unsigned int) arr_17 [i_0] [i_1] [i_2] [i_5 + 3] [22]);
                            arr_32 [i_0] [i_0] [(short)5] [i_0] [i_0] [i_0] = var_8;
                        }
                        for (int i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
                        {
                            var_29 -= ((/* implicit */unsigned long long int) var_1);
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_24 [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_10] [i_10] [i_10]))))));
                            arr_36 [i_0] [i_1] [i_1] [i_5] [(short)5] = ((/* implicit */unsigned short) arr_4 [i_1] [i_2 + 1] [i_5 - 3] [i_10]);
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (unsigned char)79))));
                        }
                    }
                    var_32 &= var_13;
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */int) (((+(((/* implicit */int) var_4)))) > (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_6)), (var_8)))))))));
}
