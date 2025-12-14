/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135642
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
    var_14 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_0))) | (((((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (var_2))) ^ (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
    var_15 *= var_0;
    var_16 |= ((/* implicit */int) var_12);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) | (0LL)))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) < (((/* implicit */int) arr_1 [i_0] [i_0])))))) - ((+(-10LL)))));
        arr_4 [0LL] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)14431))) - (var_2)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) ((unsigned short) (-2147483647 - 1))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((((/* implicit */_Bool) 5555451520075050607ULL)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (-308159209))) : (((/* implicit */int) (unsigned short)14417))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((arr_5 [i_1]) & (arr_5 [i_1])));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14427))) / (var_4)));
    }
}
