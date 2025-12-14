/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161602
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
    var_10 = ((/* implicit */unsigned long long int) (unsigned char)127);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((+(var_8))), (((/* implicit */long long int) ((unsigned char) (unsigned char)145))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)111))))))));
                                arr_14 [i_0] [7LL] = ((((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)126))) / (6073043983061265977LL)))) % (((((/* implicit */_Bool) max((arr_0 [i_0] [i_3 - 3]), (((/* implicit */long long int) (unsigned char)106))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551607ULL)) && (((/* implicit */_Bool) arr_1 [i_2])))))) : (min((((/* implicit */unsigned long long int) var_0)), (6705245969935595461ULL))))));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))))), (min((arr_8 [5LL] [i_1] [i_1] [i_4 + 1]), ((unsigned char)145)))));
                                arr_16 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_2])) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [3ULL] [3ULL] [3LL]))))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_4 + 1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))))));
                                var_13 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)246))))))) ? (((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) arr_11 [i_0] [0ULL] [i_2] [i_3] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_13 [i_4 - 1] [i_4 + 1] [i_4]))) : (((long long int) var_3))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [(unsigned char)0] [i_1] [i_2]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_5 = 2; i_5 < 13; i_5 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) arr_8 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            arr_23 [i_0] = ((/* implicit */unsigned char) var_6);
                            var_15 = ((/* implicit */unsigned char) (+(var_8)));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (arr_2 [i_2])));
                            var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_5 - 2] [i_5 - 2] [i_0] [i_5 - 2] [i_6]))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)9));
                            var_19 = arr_10 [i_0] [i_1] [i_2] [i_5 + 1] [i_7];
                            var_20 = ((/* implicit */long long int) ((unsigned char) (unsigned char)242));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (arr_8 [i_2] [i_1] [(unsigned char)2] [i_5])));
                        }
                    }
                    arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((long long int) var_6)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))))));
                }
            } 
        } 
    } 
    var_22 = ((((/* implicit */long long int) ((/* implicit */int) var_0))) & (var_6));
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 13; i_12 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) arr_34 [i_8] [i_8]);
                                var_24 = var_0;
                            }
                        } 
                    } 
                } 
                var_25 ^= min((((unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (6705245969935595461ULL)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_20 [i_8] [i_9 - 1] [i_8] [i_9 + 1] [i_9])), (min((((/* implicit */long long int) arr_6 [i_8] [i_8] [i_9 - 2])), (var_6)))))));
            }
        } 
    } 
}
