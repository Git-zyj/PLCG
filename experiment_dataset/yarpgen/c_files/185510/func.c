/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185510
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
    var_17 = ((/* implicit */int) ((((min((var_2), (((/* implicit */unsigned int) 724923344)))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (724923344) : (((/* implicit */int) var_13))))))) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0])))) >> ((((-(((int) var_3)))) + (124)))));
        var_19 *= ((/* implicit */unsigned char) (((((-(((/* implicit */int) arr_1 [i_0])))) + (2147483647))) >> ((((+(max((((/* implicit */unsigned long long int) arr_0 [i_0])), (4365190110017024875ULL))))) - (4365190110017024859ULL)))));
        var_20 = ((/* implicit */unsigned int) (-(min(((-(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((short) var_12)))))));
        var_21 ^= ((/* implicit */unsigned long long int) -724923334);
    }
}
