/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119807
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_17 *= ((/* implicit */short) max((((arr_1 [i_0 + 1] [i_0 - 1]) | (arr_1 [i_0 + 1] [i_0 + 1]))), (((((/* implicit */long long int) -1)) & (arr_1 [i_0 + 2] [i_0 + 1])))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((short) arr_1 [i_0 - 1] [i_0 - 1]));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 15; i_1 += 2) 
    {
        arr_5 [(unsigned short)2] [10] &= ((/* implicit */unsigned long long int) ((_Bool) arr_3 [i_1 + 2]));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            var_18 = ((long long int) (~(((/* implicit */int) (unsigned char)224))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 3; i_3 < 13; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        var_19 = ((/* implicit */signed char) arr_12 [i_4] [i_4] [i_1] [i_1] [i_2] [i_1]);
                        var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [(short)16])) < ((+(((/* implicit */int) arr_4 [i_2] [i_4]))))));
                    }
                } 
            } 
        }
        arr_14 [i_1] [i_1] = ((arr_9 [i_1 + 1] [i_1]) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1]))));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    {
                        arr_23 [i_7] [i_1] = ((/* implicit */signed char) ((arr_15 [i_1 + 2] [i_1 + 2]) ? (((/* implicit */int) arr_15 [i_1 + 1] [i_1 - 2])) : (var_16)));
                        arr_24 [i_1] [i_1] [i_1] [i_7] = ((/* implicit */unsigned short) arr_3 [i_5]);
                        arr_25 [i_1] [i_6] [i_5] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_17 [i_1])) : (var_16)))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (+(arr_27 [i_8] [i_8]))))));
        var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned short) var_9))), (min((max((arr_27 [i_8] [i_8]), (arr_27 [i_8] [i_8]))), (max((arr_27 [i_8] [i_8]), (((/* implicit */unsigned int) var_16))))))));
    }
}
