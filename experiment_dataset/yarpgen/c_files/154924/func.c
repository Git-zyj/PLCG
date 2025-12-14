/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154924
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            {
                var_10 = var_3;
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 2; i_2 < 11; i_2 += 2) 
                {
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_1 + 1] [i_2 - 1])) >> (((((/* implicit */int) ((unsigned short) var_5))) - (4028)))));
                    var_12 = 2077828625;
                    var_13 = var_7;
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned short)28)))) * (((/* implicit */int) (!((_Bool)1))))));
                                arr_10 [i_0] [i_1 + 3] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1 - 4])) ? (((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65488)))) : (((((/* implicit */int) (signed char)86)) >> (((/* implicit */int) (unsigned short)28))))));
                                var_15 -= ((signed char) (+(2052203487)));
                            }
                        } 
                    } 
                }
                arr_11 [i_0] [i_1 - 2] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_7)) & (((((/* implicit */int) var_4)) << (((((/* implicit */int) arr_5 [i_1 - 1])) - (16431)))))));
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    var_16 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_8 [i_5] [i_1 - 3]))))));
                    /* LoopSeq 3 */
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        arr_18 [8ULL] [i_1] [i_1 + 3] [i_1 + 1] [i_1 + 3] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_8 [i_5] [i_0])) * (((/* implicit */int) var_9)))), (((/* implicit */int) var_2))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((unsigned short) var_6)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        arr_22 [9LL] [(unsigned short)12] [i_7] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_1 - 4] [i_1 - 2] [i_1 - 3] [i_5] [i_7]))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 3; i_8 < 14; i_8 += 4) 
                        {
                            var_18 &= ((/* implicit */unsigned short) arr_20 [i_7] [i_8 - 3] [i_5] [i_7] [i_5] [i_1 - 2]);
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65507)) ? (arr_7 [i_8 - 2] [i_8 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_20 [i_5] [i_1] [i_7] [i_0] [i_7] [i_0])) : (((/* implicit */int) arr_19 [i_5] [i_1] [i_5] [i_7])))))));
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (signed char)33)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_1 + 3] [i_5] [i_1 - 4] [i_1 + 1] [i_8] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            var_20 = ((/* implicit */unsigned long long int) var_4);
                        }
                        for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            var_21 = ((/* implicit */_Bool) (+(0)));
                            arr_30 [i_0] [i_7] = ((/* implicit */unsigned long long int) var_8);
                            arr_31 [i_0] [i_7] [i_5] [i_7] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)27702)) - (((/* implicit */int) (unsigned short)62571))))) ? (((/* implicit */int) (unsigned short)2965)) : (((/* implicit */int) ((signed char) (-2147483647 - 1))))));
                        }
                    }
                    for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 4) 
                        {
                            var_22 = ((/* implicit */int) min((var_22), ((+(((arr_24 [i_0] [i_1 + 1] [i_1 + 2] [i_5] [i_10] [3U] [(signed char)9]) ? (((/* implicit */int) arr_36 [i_0] [i_1 + 1] [i_5] [i_5] [i_10])) : (((/* implicit */int) arr_14 [i_0] [(signed char)8]))))))));
                            var_23 = arr_2 [3LL] [3LL] [i_0];
                        }
                        arr_37 [i_0] [i_1 + 1] [i_1] [i_1] [i_5] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [(_Bool)1])) ? (((((/* implicit */int) max((var_3), (((/* implicit */signed char) (_Bool)1))))) * ((+(((/* implicit */int) var_2)))))) : (((((/* implicit */int) ((signed char) -1470290167))) ^ (((/* implicit */int) var_9))))));
                    }
                }
            }
        } 
    } 
    var_24 += ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    for (signed char i_12 = 1; i_12 < 18; i_12 += 3) 
    {
        arr_40 [i_12] [i_12 + 1] = ((/* implicit */long long int) var_2);
        var_25 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_39 [i_12 - 1] [i_12])))) ? ((~(((/* implicit */int) arr_38 [i_12 + 1])))) : (((/* implicit */int) var_5))));
        var_26 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), (arr_38 [i_12 + 1])))) ? (((long long int) (unsigned char)254)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51972))))));
    }
}
