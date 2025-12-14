/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124090
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 -= ((/* implicit */short) (((~(var_9))) - (((/* implicit */long long int) ((/* implicit */int) var_0)))));
        var_11 = ((/* implicit */int) arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? ((+(arr_3 [i_1] [i_1]))) : (((unsigned int) arr_2 [i_1]))));
        arr_6 [i_1] = ((/* implicit */unsigned int) ((var_4) & (min(((~(var_4))), (((/* implicit */int) arr_2 [(signed char)14]))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)15))));
                    var_13 = ((/* implicit */long long int) arr_8 [i_1] [i_1] [i_1]);
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_0 [0U] [(signed char)9]))));
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((0) + (((/* implicit */int) (unsigned short)59350))))))))));
                }
            } 
        } 
        var_16 &= ((/* implicit */signed char) var_2);
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        var_17 -= ((/* implicit */unsigned char) ((1247725987991544574ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7667)))));
        var_18 = ((/* implicit */signed char) ((((unsigned int) var_1)) | (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))));
        var_19 = ((/* implicit */unsigned short) (+(var_9)));
    }
    for (long long int i_5 = 1; i_5 < 6; i_5 += 1) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned short) ((int) var_9));
        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_1))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_6 = 2; i_6 < 8; i_6 += 2) 
        {
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) 3856808936276449162ULL)) ? (17199018085718007041ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18362))))))));
            var_22 = ((var_9) & (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)166))))));
        }
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            arr_24 [8LL] [4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_5 + 3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)12415))));
            var_23 += ((/* implicit */signed char) (+(((/* implicit */int) arr_12 [2] [i_5 + 4] [2]))));
        }
    }
    var_24 = ((/* implicit */unsigned long long int) var_0);
    var_25 = ((/* implicit */int) (~(var_6)));
}
