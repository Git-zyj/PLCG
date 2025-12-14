/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140463
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
    var_17 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (min((((/* implicit */unsigned int) var_12)), (16760832U))))) >> (((min((((((/* implicit */_Bool) (unsigned short)65527)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27435))))), (((/* implicit */unsigned long long int) 903432288U)))) - (903432266ULL)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [18])) + (((/* implicit */int) ((unsigned char) var_9)))))))))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 16; i_1 += 3) 
    {
        var_20 ^= ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 1])) > (((/* implicit */int) var_15)))))) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8))));
        var_21 = ((/* implicit */unsigned int) var_5);
        var_22 = ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) var_10)))));
        var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
        arr_7 [i_1 + 2] |= ((/* implicit */short) (~(((/* implicit */int) var_1))));
    }
    var_24 = ((/* implicit */unsigned char) var_8);
}
