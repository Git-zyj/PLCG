/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175751
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
    var_10 = ((short) var_3);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) && (((/* implicit */_Bool) 9223372036854775807LL))))), ((+(((/* implicit */int) var_1)))))))));
        var_11 = ((/* implicit */int) arr_0 [i_0]);
        var_12 ^= ((var_3) % (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 12424256899611279713ULL))))) + (((/* implicit */int) (signed char)68))))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) min((((min((((/* implicit */unsigned int) var_0)), (arr_5 [i_1]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_4 [5LL] [i_1])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1])))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_3 [i_1])), (575649081U)));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_13 = (unsigned short)46406;
        var_14 *= ((/* implicit */unsigned char) var_5);
        var_15 = ((/* implicit */short) arr_4 [(_Bool)1] [i_2]);
        arr_11 [i_2] [10U] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (arr_5 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_5 [i_2])))));
    }
    var_16 |= ((/* implicit */short) var_5);
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_4)))))));
}
