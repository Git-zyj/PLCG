/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164911
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((short) arr_5 [i_1]))), (var_16)))) ? (var_3) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) || (arr_5 [i_0]))))));
                arr_7 [i_0] = ((/* implicit */int) arr_1 [i_0]);
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */long long int) arr_9 [i_2] [i_2]);
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (3133977815U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2])))))) ? (((/* implicit */int) (signed char)-21)) : (((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_8 [i_2] [i_2]))))));
        arr_12 [i_2] = ((/* implicit */unsigned int) ((arr_9 [i_2] [i_2]) >= (((/* implicit */int) arr_8 [i_2] [i_2]))));
    }
    /* vectorizable */
    for (short i_3 = 3; i_3 < 12; i_3 += 2) 
    {
        arr_15 [i_3] = ((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 + 1]);
        arr_16 [i_3] = ((/* implicit */unsigned int) (signed char)-102);
        arr_17 [i_3] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_0 [i_3] [i_3])) || (((/* implicit */_Bool) (signed char)-21)))));
    }
    var_20 = (+(((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)20)))) && (((/* implicit */_Bool) var_2))))));
}
