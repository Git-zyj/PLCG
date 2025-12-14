/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125262
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
    var_12 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) var_5)), (var_6)))))) ? ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)7)))))) : ((+((+(((/* implicit */int) (unsigned short)14898))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((short) (-(((/* implicit */int) arr_2 [i_0 + 1])))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) var_1);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */int) ((signed char) arr_6 [i_1]))) : (((/* implicit */int) var_9))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) ((signed char) (signed char)-1));
        arr_10 [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_7 [i_1] [i_1]))));
        var_13 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)127)))));
        arr_11 [i_1] [i_1] = ((/* implicit */_Bool) (signed char)-123);
    }
    var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
}
