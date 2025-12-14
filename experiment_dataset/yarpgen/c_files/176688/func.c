/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176688
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [9LL]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [(unsigned short)10])) : (((/* implicit */int) (short)-29743)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [(short)0])) : (((/* implicit */int) (_Bool)1))))));
        var_21 += ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) arr_0 [16U])) : (((/* implicit */int) arr_0 [(_Bool)1])))));
        arr_2 [8ULL] &= ((/* implicit */unsigned long long int) arr_1 [i_0 - 1]);
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) (((((+(((/* implicit */int) (_Bool)1)))) >> (((((((/* implicit */_Bool) arr_3 [(unsigned char)3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (935120205173675996LL))) + (115LL))))) >= (((/* implicit */int) arr_3 [i_1]))));
        arr_6 [3LL] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) > (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (1482524663U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))))), (((max((((/* implicit */long long int) (_Bool)1)), (3302131794109517185LL))) & (((/* implicit */long long int) ((1482524690U) | (2812442633U))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 4; i_2 < 11; i_2 += 2) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_14 [i_1] = ((/* implicit */short) arr_4 [i_1] [i_1]);
                    arr_15 [i_1] [i_2] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11963177774913682680ULL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)32767))));
                }
            } 
        } 
        arr_16 [i_1] = ((/* implicit */_Bool) arr_1 [i_1]);
    }
}
