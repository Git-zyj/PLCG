/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112258
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
    var_16 *= ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [(unsigned short)1] [10U])) + (2147483647))) >> (((arr_0 [(unsigned short)6]) + (5119243390987225309LL)))))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            arr_7 [i_0] [4LL] [i_0] = ((/* implicit */unsigned char) (-(arr_2 [i_0])));
            var_18 *= ((/* implicit */unsigned int) ((unsigned short) var_7));
        }
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */long long int) var_1);
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_2] [i_2]))));
        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2])) - (((/* implicit */int) arr_9 [i_2]))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) arr_1 [(signed char)9] [(signed char)9])) / (((/* implicit */int) arr_1 [i_2] [i_2]))))));
    }
}
