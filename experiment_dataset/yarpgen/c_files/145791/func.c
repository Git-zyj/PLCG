/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145791
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7719795426328651223LL)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (18446744073709551613ULL)))) ? (((unsigned long long int) 4294967295U)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (626659331U))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))));
    var_17 = ((/* implicit */short) (~(((((((/* implicit */_Bool) (unsigned short)25798)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (2749097846U))) << (((((/* implicit */int) var_14)) + (56)))))));
    var_18 = ((/* implicit */unsigned long long int) 536203381U);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) var_2);
        var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 192611282)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))))) : (((1U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_21 &= ((/* implicit */short) var_13);
            var_22 = ((/* implicit */int) 2749097839U);
        }
        /* vectorizable */
        for (unsigned int i_2 = 3; i_2 < 17; i_2 += 4) 
        {
            var_23 += ((/* implicit */signed char) 5632246266033159292ULL);
            arr_10 [i_0] [i_2] = ((/* implicit */unsigned short) var_11);
        }
    }
}
