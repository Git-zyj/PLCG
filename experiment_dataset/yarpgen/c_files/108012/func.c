/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108012
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
    var_18 = ((/* implicit */_Bool) ((unsigned char) (unsigned short)34707));
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_11)))))) * (((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) var_11);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((((((/* implicit */long long int) ((/* implicit */int) arr_2 [9LL] [i_0 + 1]))) + (((-444389302350890742LL) - (((/* implicit */long long int) ((/* implicit */int) (short)8262))))))) + (9223372036854775807LL))) >> (((((/* implicit */long long int) ((/* implicit */int) var_1))) + (((long long int) arr_3 [i_0] [i_0])))))))));
            var_22 = ((/* implicit */long long int) arr_2 [i_0] [i_0 + 1]);
        }
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        arr_8 [i_2] |= ((/* implicit */_Bool) arr_2 [(unsigned short)24] [(signed char)21]);
        var_23 = arr_3 [(short)24] [i_2];
        var_24 = ((/* implicit */unsigned short) ((long long int) max((arr_5 [i_2] [i_2]), (arr_5 [(short)4] [i_2]))));
    }
    var_25 ^= ((/* implicit */_Bool) var_5);
}
