/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122222
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
    var_10 = ((/* implicit */unsigned int) var_6);
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) min((((/* implicit */long long int) (+(var_4)))), (min((5408760044884161139LL), (((/* implicit */long long int) 1240308597)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = (unsigned char)25;
                            arr_11 [i_0] [i_0] [i_0] [i_0] [(unsigned short)11] = ((/* implicit */long long int) (+(((int) min((((/* implicit */signed char) (_Bool)1)), (var_8))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_4 = 4; i_4 < 13; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        arr_17 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)29)) ? (2121918994244208360ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [(unsigned char)1] [(unsigned char)1])))))));
                        var_13 = ((/* implicit */unsigned short) 1865391967U);
                    }
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [15]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) : (((var_1) ? (((/* implicit */long long int) var_4)) : (arr_6 [i_0])))));
                }
                for (short i_6 = 3; i_6 < 15; i_6 += 3) 
                {
                    var_15 = ((/* implicit */unsigned short) (-(var_3)));
                    var_16 = ((/* implicit */unsigned long long int) -1542410525);
                }
                /* vectorizable */
                for (unsigned char i_7 = 2; i_7 < 16; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            {
                                var_17 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_7] [i_7 + 1] [i_8] [i_9]))) / (((((/* implicit */_Bool) var_8)) ? (-1000595573601246194LL) : (((/* implicit */long long int) -1240308597))))));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) arr_15 [0LL] [0LL] [13ULL] [i_9] [i_9]))) - ((~(137243033939503395ULL)))));
                            }
                        } 
                    } 
                    arr_26 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_7] [i_0] [i_0] [7] [i_0]))) / (((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0] [i_7])) ? (arr_4 [i_7]) : (((/* implicit */long long int) var_5))))));
                }
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) (-(max((var_0), (((/* implicit */int) arr_19 [i_11]))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(unsigned short)5])))) | (((/* implicit */int) arr_2 [i_0] [i_10]))))) ? (var_5) : (((unsigned int) (!(((/* implicit */_Bool) (signed char)81)))))));
                            arr_33 [i_0] [i_0] [i_10] [i_11] |= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_23 [i_1] [(unsigned short)12] [i_1]))))));
                            var_21 -= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [(_Bool)1]))));
                            arr_34 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (unsigned char)29))));
                        }
                    } 
                } 
                arr_35 [i_0] = ((((/* implicit */_Bool) max((12540209293413604746ULL), (((/* implicit */unsigned long long int) arr_16 [i_0] [2U] [2U] [i_1]))))) ? ((+(((/* implicit */int) arr_24 [i_0] [i_1])))) : ((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_0] [i_0] [i_1])))));
            }
        } 
    } 
    var_22 *= ((/* implicit */_Bool) var_7);
}
