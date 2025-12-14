/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16341
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
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_8 [i_0 + 1] [i_2] [i_2] [i_0 + 1] = ((/* implicit */unsigned int) arr_0 [19U] [i_2]);
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */long long int) (short)16989)), (arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_2]))) : (arr_2 [20U] [i_0]))), (((/* implicit */unsigned int) -1702402900))));
                    var_13 = ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) arr_3 [i_0 - 1])))));
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) arr_6 [i_2] [(signed char)17] [i_1] [i_0]))));
                }
                for (signed char i_3 = 2; i_3 < 23; i_3 += 2) 
                {
                    var_15 = ((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_3]);
                    var_16 = arr_7 [i_0] [i_1] [(short)2] [i_3];
                }
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_4])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5 + 2] [i_5 + 3] [i_5 + 3] [i_5 + 1] [i_5 - 1] [i_1]))) : (arr_13 [i_0] [i_5 + 3] [i_0 - 1]))))));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_5 + 3] [i_1] [i_1] [i_0 - 1])) >> (((((/* implicit */int) arr_12 [(signed char)4])) - (15312))))))));
                        var_19 = ((/* implicit */_Bool) arr_1 [i_0]);
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5 - 1] [i_5 + 1] [i_6] [i_6]))) : (((((/* implicit */_Bool) 812861720423154904LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_2 [i_0] [i_0 + 1])))));
                            var_21 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
                            var_22 = (~(((/* implicit */int) arr_18 [i_5 - 1] [i_0 + 1])));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) arr_16 [i_0] [i_8] [i_0] [i_0] [0U]);
                                arr_25 [i_0 - 1] [i_1] [i_4] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [4U] [i_1] [i_4] [i_7] [i_8] [i_1]))))) ^ (min((arr_21 [i_1] [i_4] [i_7] [i_4]), (((/* implicit */unsigned long long int) arr_15 [i_0 + 1] [12ULL] [i_0 - 1] [i_1] [i_8] [i_1]))))));
                                arr_26 [i_0] [i_1] [i_4] [i_7] [i_7] = ((/* implicit */signed char) (+(((long long int) arr_6 [i_0] [i_0 + 1] [(signed char)1] [(signed char)1]))));
                            }
                        } 
                    } 
                    var_24 = arr_4 [i_4];
                }
            }
        } 
    } 
}
