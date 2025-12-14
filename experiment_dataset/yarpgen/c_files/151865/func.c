/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151865
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
    var_12 = ((/* implicit */unsigned int) 1518719558);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) < (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17873))) <= (17998194275285691470ULL)))), (((((/* implicit */int) (unsigned short)44201)) + (((/* implicit */int) var_3)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_7 [i_1] [i_0] [i_0] = ((/* implicit */int) (!(var_8)));
            var_14 = ((/* implicit */int) arr_4 [i_0]);
            arr_8 [13ULL] [i_0] = ((/* implicit */short) var_3);
            var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) var_7)))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            arr_13 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) | (var_11)));
            arr_14 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (unsigned short)28672))));
        }
    }
    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_16 = ((((/* implicit */_Bool) (unsigned short)12409)) ? (((/* implicit */int) (short)5890)) : (((/* implicit */int) (signed char)10)));
        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-1LL))))));
    }
}
