/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174143
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
    var_11 *= ((/* implicit */unsigned long long int) ((max(((+(((/* implicit */int) var_2)))), (((((/* implicit */int) var_9)) * (((/* implicit */int) var_2)))))) * (((/* implicit */int) var_4))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) var_5)) << (((((((/* implicit */int) (signed char)-21)) + (49))) - (20)))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((((/* implicit */int) var_4)), (-780162261)))))) ? (((/* implicit */unsigned long long int) (~((-(var_3)))))) : (var_0)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) ((unsigned char) max(((+(arr_0 [i_0 - 1]))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_2)), (var_4)))))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_9)))) >= (((/* implicit */int) (short)32747)))))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            {
                                arr_14 [i_1] [i_5] [(unsigned short)9] [i_1] = ((/* implicit */long long int) ((min((((((/* implicit */int) (unsigned short)19221)) >> (((((/* implicit */int) var_7)) - (46))))), ((+(((/* implicit */int) var_1)))))) * (((/* implicit */int) (unsigned short)48548))));
                                var_16 = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_5 [i_1])) ^ (((/* implicit */int) arr_5 [i_1]))))));
                                var_17 = ((/* implicit */unsigned char) (-(((long long int) var_2))));
                                var_18 = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) (unsigned char)255))), ((-(((/* implicit */int) var_1))))));
                                var_19 += ((/* implicit */int) arr_6 [i_1 + 1]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) (unsigned char)154);
                        var_21 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) max(((unsigned char)74), ((unsigned char)179)))) ? (2822110418863353216ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)185))))));
                        var_22 ^= arr_2 [17LL] [17LL];
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */int) min((var_23), (min((((/* implicit */int) (unsigned char)198)), (-1184394283)))));
                                var_24 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_1 - 2] [i_1] [i_1 - 1] [i_7])) && (((/* implicit */_Bool) arr_16 [i_1 + 1] [i_1] [i_1 - 1] [i_3]))))) ^ (((/* implicit */int) (unsigned char)255)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_22 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_18 [i_1] [i_1] [(signed char)19] [i_1])) : (2147483647))))));
    }
    for (unsigned long long int i_9 = 4; i_9 < 10; i_9 += 4) 
    {
        arr_26 [i_9] [i_9] = ((/* implicit */unsigned int) var_6);
        var_25 = ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) arr_5 [i_9 + 1])))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
    {
        arr_29 [(unsigned char)11] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967274U)))))) >= (arr_11 [i_10] [i_10] [i_10] [i_10])));
        var_26 |= ((/* implicit */unsigned short) ((signed char) ((unsigned char) var_4)));
    }
}
