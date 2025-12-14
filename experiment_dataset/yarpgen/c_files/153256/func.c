/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153256
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
    var_13 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_14 = max((arr_0 [i_0]), (((/* implicit */unsigned long long int) -740794979)));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_15 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) >= (((/* implicit */int) var_5))));
            var_16 = ((/* implicit */int) 9223372036854775800LL);
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_2] [i_3] [i_0] [13ULL] = ((/* implicit */unsigned int) ((((long long int) var_0)) >= (((/* implicit */long long int) var_3))));
                                var_17 = ((/* implicit */unsigned char) arr_0 [i_0]);
                                arr_17 [i_0] [i_0] [i_3] [i_3] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned char)183), ((unsigned char)173)))) != ((+(((/* implicit */int) ((unsigned short) var_3)))))));
                                arr_18 [i_0] [i_2] [4LL] [i_0] [4LL] [i_3] = ((/* implicit */long long int) var_6);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) var_12)), (var_1))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_0] [i_0]), (arr_6 [i_0] [i_0])))))));
                }
            } 
        } 
        var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) var_2))))) && (((/* implicit */_Bool) ((unsigned short) ((int) var_3))))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            arr_25 [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_0 [i_7]))));
            var_20 = ((/* implicit */int) 9223372036854775800LL);
        }
        var_21 -= ((/* implicit */unsigned char) var_3);
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 1; i_10 < 17; i_10 += 4) 
                    {
                        arr_32 [i_10] [i_8] [i_10] = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) var_5)) >= (arr_11 [i_6] [i_8]))));
                        var_22 -= ((/* implicit */short) var_1);
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            arr_37 [i_6] [i_6] [10] [i_10] [i_11] &= ((/* implicit */short) (-(9223372036854775800LL)));
                            arr_38 [i_10] [i_10] [14ULL] [i_10] [i_11] = ((/* implicit */unsigned long long int) arr_11 [(unsigned char)8] [i_9]);
                            var_23 = ((/* implicit */long long int) ((int) arr_22 [i_11]));
                        }
                        for (long long int i_12 = 0; i_12 < 18; i_12 += 4) 
                        {
                            var_24 ^= ((/* implicit */signed char) arr_40 [i_8] [i_6] [i_8] [i_12] [i_12] [i_6] [i_6]);
                            arr_41 [i_6] [i_6] [i_10] = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                        }
                        for (unsigned int i_13 = 0; i_13 < 18; i_13 += 1) 
                        {
                            arr_44 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((unsigned char) arr_11 [i_6] [i_6]));
                            var_25 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_10 + 1]))) <= (arr_31 [i_6] [i_6] [i_6] [i_6] [i_6])));
                        }
                    }
                    for (int i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) arr_39 [i_8] [14LL] [i_9] [i_14] [i_14] [i_9]);
                        var_27 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_9] [(signed char)7] [i_6]))));
                        arr_47 [i_9] [i_8] [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) ((arr_0 [i_6]) != (((/* implicit */unsigned long long int) arr_7 [i_6] [i_8] [i_9] [i_14]))))) >= (((/* implicit */int) var_5))));
                    }
                    var_28 = ((/* implicit */long long int) var_10);
                }
            } 
        } 
    }
    var_29 = ((/* implicit */long long int) ((short) max(((-(((/* implicit */int) (unsigned short)65535)))), ((~(((/* implicit */int) (unsigned char)183)))))));
    var_30 = (~(var_9));
    var_31 -= ((/* implicit */short) (-(((/* implicit */int) var_7))));
}
