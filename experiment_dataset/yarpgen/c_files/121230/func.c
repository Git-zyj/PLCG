/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121230
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
    for (short i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        var_10 = ((/* implicit */long long int) var_4);
        arr_2 [(short)0] = -2905736472056323316LL;
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((unsigned long long int) 2905736472056323316LL)))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_6), (((/* implicit */short) arr_4 [6ULL]))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_1)))))) : ((~(((/* implicit */int) arr_3 [i_1]))))));
        var_13 = ((/* implicit */signed char) ((long long int) arr_5 [15ULL] [i_1]));
        arr_7 [i_1] = ((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)80)) && (((/* implicit */_Bool) var_3))))))))));
        var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) != (((/* implicit */int) var_9)))))) : (((((((/* implicit */_Bool) arr_3 [2U])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-2905736472056323324LL))) | (-13LL)))));
    }
    for (short i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        var_15 = ((/* implicit */int) min((((((/* implicit */long long int) (+(((/* implicit */int) var_4))))) ^ (((((/* implicit */_Bool) arr_6 [7U])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))))))), (((/* implicit */long long int) (((~(var_0))) > (((/* implicit */long long int) 2087796608)))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_1) + (9223372036854775807LL))) >> (((var_8) - (8462368529780630152LL)))))) && (((/* implicit */_Bool) 2905736472056323315LL))));
    }
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (+(-2087796609))))));
}
