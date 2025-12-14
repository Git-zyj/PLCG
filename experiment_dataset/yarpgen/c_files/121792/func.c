/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121792
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
    var_11 |= ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((short) var_5))) : ((+(((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) (+(4485842657306225380ULL)));
        arr_3 [i_0] |= ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) 13960901416403326239ULL)));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (13960901416403326244ULL)))) ? ((~((~(((/* implicit */int) arr_4 [i_1])))))) : (((((((/* implicit */int) var_10)) + (2147483647))) >> (((min((var_0), (((/* implicit */unsigned int) (short)19440)))) - (19418U)))))));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10719819338933218074ULL)) || (((/* implicit */_Bool) 1810782275))));
    }
}
