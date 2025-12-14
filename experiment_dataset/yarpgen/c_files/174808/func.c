/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174808
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
    var_10 = ((/* implicit */unsigned int) var_8);
    var_11 += var_8;
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
                arr_6 [i_0 + 1] [i_1] = ((/* implicit */unsigned long long int) var_3);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 23; i_2 += 3) 
                {
                    var_13 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        var_14 += (unsigned short)65535;
                        var_15 = ((/* implicit */int) (unsigned short)64358);
                        arr_13 [i_0] [i_1] [i_0] [i_3] &= ((/* implicit */unsigned long long int) min((arr_1 [i_1]), (arr_1 [i_0])));
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 22; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            {
                                var_16 *= ((/* implicit */short) arr_2 [i_5]);
                                arr_20 [i_0 - 4] [i_0 - 4] [i_1] [i_4] [i_5] = ((/* implicit */short) arr_9 [i_2 - 1]);
                                arr_21 [(unsigned short)2] [i_1] [i_2] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_2 + 2])) ? (((((/* implicit */_Bool) arr_11 [i_5] [i_5])) ? (arr_11 [i_2] [i_1]) : (arr_11 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_11 [i_0 - 4] [i_4 + 2])) ? (arr_11 [i_1 + 2] [i_1 + 2]) : (arr_11 [i_0 + 1] [i_2])))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10993)) ? (((/* implicit */long long int) arr_15 [i_2] [i_0])) : (((((/* implicit */_Bool) (unsigned short)38447)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_11 [i_1] [i_5])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)94))) : (3278539785U))))));
                                var_18 ^= ((/* implicit */_Bool) var_3);
                            }
                        } 
                    } 
                    arr_22 [i_1] [(unsigned short)7] [i_1 + 1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_1] [i_2 + 1])) : (((/* implicit */int) max((arr_19 [i_0 + 1] [i_1] [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) arr_2 [i_2 - 1])))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_6 = 2; i_6 < 24; i_6 += 1) 
    {
        var_19 *= ((/* implicit */short) arr_23 [(signed char)0] [i_6]);
        var_20 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((max((arr_3 [i_6 - 1]), (((/* implicit */unsigned short) (_Bool)0)))), (((/* implicit */unsigned short) min((arr_7 [i_6]), (var_9))))))) : (((/* implicit */int) (unsigned short)15459)));
    }
}
