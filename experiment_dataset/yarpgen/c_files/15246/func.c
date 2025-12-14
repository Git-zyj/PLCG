/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15246
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
    var_10 = ((/* implicit */short) min((var_2), (var_1)));
    var_11 |= ((/* implicit */long long int) var_6);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = (~(min((((var_1) >> (((((/* implicit */int) arr_1 [(signed char)8])) - (164))))), (((/* implicit */long long int) arr_2 [i_0] [(unsigned char)2])))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_11 [i_1] [i_2] [i_2] [i_4])) : (((/* implicit */int) (signed char)114)))) | (max((((/* implicit */int) (unsigned char)48)), (arr_2 [i_3] [i_4]))))), (((int) arr_14 [i_4] [i_3] [i_2] [i_2] [i_2] [i_1] [i_0]))));
                            arr_15 [i_2] [i_2] [i_2] [i_1] [i_0] [i_2] [i_0] = ((/* implicit */signed char) min((var_9), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2]))));
                        }
                    } 
                } 
            } 
            arr_16 [i_1] [i_1] = ((/* implicit */int) arr_9 [i_1]);
        }
        arr_17 [i_0] = ((/* implicit */long long int) max((3584867144U), (((/* implicit */unsigned int) (unsigned char)48))));
    }
    /* vectorizable */
    for (long long int i_5 = 2; i_5 < 21; i_5 += 4) 
    {
        arr_21 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_5] [i_5 + 1])) ? (arr_20 [3] [i_5 + 1]) : (arr_20 [i_5] [i_5 + 1])));
        var_13 += ((/* implicit */long long int) (~((+(var_6)))));
    }
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(var_2))), (max((var_1), (((/* implicit */long long int) var_3))))))) ? ((+(((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) : (min((((/* implicit */unsigned int) ((var_6) & (((/* implicit */int) var_8))))), (((var_9) >> (((((/* implicit */int) (unsigned char)212)) - (186))))))))))));
}
