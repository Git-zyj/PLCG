/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165642
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 = ((((/* implicit */_Bool) ((arr_4 [11] [i_1]) - (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)7)) + (((/* implicit */int) arr_3 [i_0]))))) ? (max((35184372088832LL), (35184372088832LL))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : ((+(288221580058689536LL))));
                var_16 |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((1442590915) | (2147483645)))) : (min((var_5), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) ((short) (_Bool)1)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] |= ((/* implicit */unsigned long long int) ((arr_8 [i_2] [i_2]) ? (((/* implicit */int) ((unsigned short) 2802757472523386339LL))) : (((((/* implicit */_Bool) var_4)) ? (-2147483645) : (((/* implicit */int) var_13))))));
        arr_10 [i_2] = ((/* implicit */short) var_12);
    }
    var_17 = ((/* implicit */unsigned int) var_11);
}
