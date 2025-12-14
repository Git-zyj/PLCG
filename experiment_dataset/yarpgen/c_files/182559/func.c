/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182559
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
    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        var_20 |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [(_Bool)1]))));
        var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_1 [6U])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))) && (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) && (((/* implicit */_Bool) arr_1 [i_0]))))));
        var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 1])) < (((/* implicit */int) arr_0 [i_0 + 1])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */signed char) arr_2 [i_1] [i_1]);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] [i_3] = (i_1 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_3 [i_1])))) ? (((((arr_6 [i_2] [i_3]) + (9223372036854775807LL))) >> (((arr_7 [i_1]) + (1496273470))))) : (((/* implicit */long long int) arr_7 [i_1]))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_3 [i_1])))) ? (((((arr_6 [i_2] [i_3]) + (9223372036854775807LL))) >> (((((arr_7 [i_1]) + (1496273470))) - (2038313953))))) : (((/* implicit */long long int) arr_7 [i_1])))));
                    arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_3])) - (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_3]))));
                    var_23 *= ((/* implicit */signed char) (+((-(((((/* implicit */_Bool) arr_5 [i_1] [i_3])) ? (arr_3 [i_1]) : (((/* implicit */int) arr_8 [i_2] [i_2]))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned long long int) arr_13 [i_4]);
        var_24 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 268435200LL)) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) (unsigned short)21))));
    }
    var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
    var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_5))));
    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_16))));
}
