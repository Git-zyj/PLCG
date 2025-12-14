/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136161
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
    var_11 ^= ((/* implicit */_Bool) var_7);
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) arr_0 [i_0] [5ULL]);
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */long long int) 1234254295U);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9849239008988017367ULL)) && (((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1] [i_3] [i_4]))))), (((((/* implicit */_Bool) 9849239008988017361ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 4] [i_4] [i_4] [i_4]))) : (8597505064721534235ULL)))));
                            var_15 ^= (~(((((/* implicit */_Bool) arr_7 [i_0])) ? ((+(3060713000U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)31202))))))));
                            var_16 = ((/* implicit */long long int) arr_7 [4]);
                        }
                        var_17 = var_3;
                    }
                } 
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        var_18 = ((/* implicit */int) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_5] [i_5]))) : ((~(((unsigned long long int) arr_1 [i_5] [(short)10]))))));
        var_19 += ((/* implicit */short) var_8);
        var_20 = ((/* implicit */unsigned int) ((short) ((long long int) min((arr_0 [i_5] [i_5]), (((/* implicit */short) (_Bool)1))))));
        var_21 = ((/* implicit */long long int) arr_7 [i_5]);
    }
    /* vectorizable */
    for (signed char i_6 = 3; i_6 < 13; i_6 += 1) 
    {
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((arr_16 [i_6 + 1]) == (arr_16 [i_6 - 1]))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned short i_8 = 3; i_8 < 14; i_8 += 1) 
            {
                {
                    var_23 = ((/* implicit */long long int) ((arr_16 [i_6 + 1]) + (arr_16 [i_6 + 2])));
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_6] [i_6] [12] [i_9] [i_7] [i_9])) || (((/* implicit */_Bool) 1234254301U))));
                        var_25 = ((/* implicit */int) (signed char)23);
                    }
                    var_26 = ((/* implicit */long long int) var_9);
                }
            } 
        } 
    }
}
