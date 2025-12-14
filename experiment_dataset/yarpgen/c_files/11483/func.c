/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11483
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
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) var_6))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_13 += ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)21615)))))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 23256610U)) ? (((/* implicit */unsigned long long int) var_2)) : (8755861049247046918ULL)))) ? (((/* implicit */unsigned long long int) -851597091)) : (arr_1 [i_0] [(unsigned short)3])));
        var_15 = ((/* implicit */int) 2896406542U);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_6 [i_1])))) * (2047U)));
                    var_17 ^= (unsigned short)2;
                    arr_9 [i_3] [(short)1] [i_3] [5LL] = ((/* implicit */short) (-(4271710678U)));
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (arr_2 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)28)))));
    }
}
