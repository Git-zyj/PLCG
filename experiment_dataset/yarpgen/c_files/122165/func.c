/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122165
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (var_8))), (((/* implicit */int) min((var_1), (((/* implicit */signed char) var_0)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */_Bool) arr_7 [i_1] [(unsigned char)0]);
                        /* LoopSeq 4 */
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_10))));
                            arr_13 [i_0 + 1] [i_0 + 1] [i_2] [2LL] [i_4] = ((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]);
                            var_14 = ((/* implicit */short) (unsigned short)27893);
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_8))));
                            var_16 = ((/* implicit */long long int) ((((var_3) * (var_3))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 - 1] [i_0 + 1])))));
                        }
                        for (long long int i_5 = 1; i_5 < 10; i_5 += 3) 
                        {
                            var_17 += ((/* implicit */int) (signed char)-114);
                            var_18 = arr_12 [i_0 - 1] [i_1 + 1] [i_5 + 2] [i_5] [i_5 - 1];
                            var_19 = ((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned char)4] [i_0 - 1] [i_2] [(unsigned short)5]);
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)328)) / ((-(((/* implicit */int) (unsigned char)31))))))) ? (((/* implicit */int) arr_0 [i_3] [i_1])) : (((/* implicit */int) var_6)))))));
                        }
                        for (signed char i_6 = 1; i_6 < 11; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_6)), ((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4823))) / (-6528187780288112972LL)))))));
                            var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_0 + 1]))));
                            var_23 = ((/* implicit */long long int) (unsigned short)4826);
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_6 - 1] [i_6])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) (unsigned char)55))))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(unsigned char)3] [i_0 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 1; i_7 < 9; i_7 += 4) 
                        {
                            var_25 |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)37643)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))));
                            var_26 &= ((((/* implicit */_Bool) -9089322161114993336LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)64870)));
                            var_27 &= ((/* implicit */unsigned short) ((var_2) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0]))));
                        }
                    }
                }
            } 
        } 
    } 
    var_28 *= ((/* implicit */unsigned char) var_9);
}
