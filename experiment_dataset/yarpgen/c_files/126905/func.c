/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126905
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((var_4), (var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (max((((/* implicit */long long int) (~(((/* implicit */int) var_9))))), (((((/* implicit */long long int) var_5)) / (var_6))))))))));
    var_21 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)16554)) / (((/* implicit */int) var_3))))) ? (1847270459811975585LL) : (max((0LL), (((/* implicit */long long int) (_Bool)1)))))), (((/* implicit */long long int) ((_Bool) var_3)))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-16562))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((~(((unsigned int) arr_1 [16U])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)-16554))))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))) : (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        arr_4 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_2 [i_1])) - (((/* implicit */int) arr_2 [i_1]))))))) * (((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_9)))))));
        var_25 = ((/* implicit */long long int) ((_Bool) ((unsigned int) arr_2 [i_1])));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 23; i_2 += 2) 
    {
        arr_8 [(unsigned char)16] [(unsigned char)16] &= ((/* implicit */unsigned int) var_17);
        arr_9 [i_2] = var_6;
    }
}
