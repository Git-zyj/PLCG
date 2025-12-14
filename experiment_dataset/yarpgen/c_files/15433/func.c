/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15433
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
    var_15 &= ((/* implicit */unsigned char) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (var_13))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_1))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((-8235579472246408512LL) ^ (arr_0 [0LL]))));
        var_17 = (short)-24978;
        /* LoopNest 3 */
        for (unsigned int i_1 = 4; i_1 < 8; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) (short)24952);
                        arr_12 [i_3] [i_1 + 1] [(signed char)4] = ((/* implicit */signed char) (+(((/* implicit */int) (short)-24951))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 2; i_4 < 9; i_4 += 2) /* same iter space */
    {
        arr_15 [i_4] [i_4] = ((min((((/* implicit */unsigned long long int) arr_10 [i_4 + 1] [i_4 - 2] [i_4] [i_4] [i_4] [i_4])), (max((var_11), (15280709443055544258ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_4 - 2])) >= (((/* implicit */int) arr_13 [i_4 - 2])))))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (unsigned char)176))))))));
    }
}
