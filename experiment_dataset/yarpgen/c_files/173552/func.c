/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173552
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
    var_10 = ((/* implicit */_Bool) (unsigned short)12865);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)23150))) + (5755786598567226474LL)));
                    arr_9 [(signed char)4] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 3073214927364422015LL)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) (unsigned short)32936))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            var_12 ^= ((/* implicit */short) max((282986484426200989LL), (((/* implicit */long long int) (_Bool)1))));
                            arr_15 [i_0] [i_2 + 2] [i_1] [i_2 + 2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_3 - 2] [i_0 - 1]), (((/* implicit */short) arr_13 [i_2] [i_1]))))) ? (((/* implicit */int) (unsigned short)32936)) : ((~(((/* implicit */int) (signed char)111)))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 1; i_5 < 14; i_5 += 2) 
                        {
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) -5755786598567226454LL)) ? (((/* implicit */int) arr_14 [i_1] [i_3 - 2] [i_3] [i_3] [i_0] [i_1])) : (((/* implicit */int) arr_14 [i_1] [i_3 + 1] [i_3] [i_3] [i_1] [i_1]))));
                            var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)32936))));
                            arr_18 [i_2] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 287396354U)) ? (((/* implicit */int) (short)-21763)) : (((/* implicit */int) (unsigned char)24))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 15; i_6 += 1) 
                        {
                            var_15 = arr_5 [i_3] [i_3] [i_2];
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_3] [i_1 - 2] [i_1])) ? (((/* implicit */int) arr_2 [i_3] [i_2])) : (((/* implicit */int) var_1))))) ? (max((((/* implicit */long long int) (unsigned char)149)), (arr_7 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned short) (-(1521075308U)));
                            var_18 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-113))));
                        }
                        arr_24 [1U] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) (short)-4071)), (-810395866)));
                    }
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_25 [i_0 + 2] [i_0 + 2] [i_1] [i_1 + 1])) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_25 [i_0 - 2] [i_1 + 1] [i_1] [i_1 + 1])), (469702116)))) : (min((var_4), (((/* implicit */unsigned long long int) arr_25 [i_0 + 2] [i_1] [i_1] [i_1 + 1]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            var_20 -= ((/* implicit */long long int) (-((~(arr_6 [i_0] [i_0])))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_9))));
                        }
                    }
                    var_22 ^= ((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [6U]))));
                }
            } 
        } 
    } 
}
