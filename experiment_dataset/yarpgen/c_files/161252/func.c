/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161252
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
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0 + 1] [i_0 + 1]));
        arr_4 [i_0] = ((/* implicit */short) (~(-1323652960)));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((short) arr_1 [i_1] [i_1]));
        arr_8 [i_1] = ((unsigned long long int) ((((/* implicit */_Bool) 1323652946)) ? (1323652936) : (1323652946)));
        var_10 += ((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_1])) >= (((/* implicit */int) var_3))));
        var_11 = ((/* implicit */long long int) arr_1 [i_1] [i_1]);
    }
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_2 - 1])) ? (-1323652973) : (1236804654)));
        arr_12 [i_2 - 1] [i_2] = ((/* implicit */long long int) ((var_4) == (((/* implicit */int) ((((/* implicit */int) (unsigned char)244)) >= (-1323652973))))));
        var_12 = ((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 - 1]))) : (var_1));
        var_13 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_2 - 1])) != (((/* implicit */int) var_3))));
    }
    var_14 = ((/* implicit */short) min((var_2), (((/* implicit */long long int) 482474151))));
    var_15 &= ((/* implicit */unsigned int) min((482474150), (((/* implicit */int) (unsigned short)7946))));
}
