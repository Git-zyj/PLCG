/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101209
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
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (var_2)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_19 = ((arr_0 [i_0 + 1]) || (((/* implicit */_Bool) var_0)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_2] [i_2] [(unsigned char)5] [(unsigned char)5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 1])) ? ((-(((/* implicit */int) arr_6 [i_0] [i_0])))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 1]))));
                        arr_11 [i_2] [i_2] [i_2] [(unsigned short)2] [i_2] [(signed char)17] = ((/* implicit */_Bool) arr_8 [(short)0] [i_0] [i_0 - 1] [i_2 - 1] [i_2]);
                        arr_12 [i_2] = ((unsigned char) arr_4 [i_1] [i_2 - 1] [i_2 - 1]);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) var_3);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 2) 
                        {
                            var_20 *= ((/* implicit */_Bool) ((arr_16 [(short)14]) ? (((/* implicit */int) arr_6 [i_4] [i_4])) : (((((/* implicit */_Bool) 419188515U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))));
                            arr_18 [i_0] [(short)6] [i_2] = ((/* implicit */unsigned char) 3039330820U);
                            arr_19 [11U] [11U] [11U] [i_2] [i_5] = (+(((/* implicit */int) arr_5 [i_5 + 1] [i_2 - 1] [i_0 + 1])));
                            arr_20 [i_2] = ((/* implicit */signed char) arr_1 [i_0 + 1] [i_0 + 1]);
                            arr_21 [i_5] [i_5] [i_5] [i_5] [i_5] [i_2] [(unsigned short)0] = ((/* implicit */unsigned short) ((_Bool) (_Bool)1));
                        }
                        arr_22 [i_2] [i_1] [i_1] = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_16 [i_2]))))));
                        arr_23 [i_2] = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2]))));
                        arr_24 [i_0] [i_0] [(short)2] |= (!(arr_16 [(_Bool)1]));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) (((+(11125490763177823792ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_7 [i_0] [i_1] [(short)18] [(_Bool)1]))))));
                        /* LoopSeq 1 */
                        for (int i_7 = 1; i_7 < 17; i_7 += 3) 
                        {
                            var_22 = ((/* implicit */int) arr_25 [i_2]);
                            var_23 = ((((/* implicit */int) arr_4 [i_1] [i_2 - 1] [i_2 - 1])) * (((/* implicit */int) arr_4 [(_Bool)1] [i_2 - 1] [(_Bool)1])));
                            arr_30 [i_0] [i_2] [14] [14] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (_Bool)0)))));
                        }
                        var_24 = ((/* implicit */_Bool) min((var_24), ((!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))))));
                    }
                    arr_31 [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                    arr_32 [i_0] [(unsigned short)18] [(_Bool)1] [(unsigned short)18] |= ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_2]);
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) ((arr_26 [i_0 + 1] [i_0 + 1] [(short)16] [4ULL] [i_0] [(unsigned char)4]) >> (((arr_26 [i_0 - 1] [i_0 - 1] [i_0] [10] [i_0] [i_0]) - (657171862)))));
        arr_33 [i_0] = ((/* implicit */unsigned char) ((arr_0 [i_0 - 1]) ? (((/* implicit */int) arr_29 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [13ULL])) : (((/* implicit */int) arr_0 [i_0 - 1]))));
    }
    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        arr_37 [i_8] [i_8] = ((/* implicit */short) min((((unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) arr_34 [i_8]))));
        arr_38 [i_8] [i_8] = ((/* implicit */_Bool) max((((unsigned char) (_Bool)1)), (((/* implicit */unsigned char) arr_34 [i_8]))));
    }
    for (signed char i_9 = 0; i_9 < 21; i_9 += 1) 
    {
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
        var_27 = ((/* implicit */unsigned short) arr_34 [i_9]);
    }
    var_28 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_0)), (var_16)));
    var_29 |= ((/* implicit */_Bool) ((int) (_Bool)1));
}
