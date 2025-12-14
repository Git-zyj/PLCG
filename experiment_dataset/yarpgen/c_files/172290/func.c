/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172290
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0] [i_1])) << (((/* implicit */int) var_12)))) < (((((/* implicit */int) (short)-4)) ^ (((/* implicit */int) (short)0))))));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((unsigned int) arr_3 [i_1]))) / (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | ((-9223372036854775807LL - 1LL))))));
            arr_6 [0U] &= ((/* implicit */unsigned int) var_3);
        }
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            var_19 = ((/* implicit */short) max((var_19), (arr_1 [(unsigned short)10] [(unsigned short)10])));
            arr_10 [i_0] [i_0] = ((((/* implicit */int) (short)-32761)) ^ (((/* implicit */int) var_7)));
        }
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_20 = ((/* implicit */_Bool) var_3);
        var_21 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13792))) : (4294967295U)));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_11 [i_3] [i_3]))))) ? (((int) (short)13787)) : (var_14)));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        var_23 += ((/* implicit */short) var_5);
        var_24 = ((/* implicit */short) ((arr_2 [(short)11] [i_4]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_8 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_14 [i_4]))))) : (((((/* implicit */_Bool) var_7)) ? (arr_4 [i_4]) : (((/* implicit */unsigned int) var_11))))));
    }
    var_25 = ((/* implicit */short) var_12);
    var_26 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) var_17))))), (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_4))))));
}
