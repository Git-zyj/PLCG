/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171636
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */short) 3045299441U);
                arr_5 [(unsigned char)12] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) ^ (((/* implicit */int) arr_3 [i_0] [i_0] [0ULL]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)10535)) / (((/* implicit */int) arr_1 [i_1] [12ULL]))))) : (((((((/* implicit */_Bool) var_2)) ? (131071LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) 11785286886424839180ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3337306621U))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) * (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_10 = ((/* implicit */int) var_9);
    var_11 = ((((/* implicit */_Bool) max((17452199983117761804ULL), (((/* implicit */unsigned long long int) ((((var_0) + (9223372036854775807LL))) >> (((((/* implicit */int) var_5)) + (28180))))))))) ? (((((/* implicit */_Bool) ((var_7) / (((/* implicit */long long int) ((/* implicit */int) (short)-19653)))))) ? (((6661457187284712413ULL) / (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((var_0) / (((/* implicit */long long int) max((((/* implicit */unsigned int) var_4)), (var_1))))))));
    var_12 = ((/* implicit */long long int) var_5);
}
