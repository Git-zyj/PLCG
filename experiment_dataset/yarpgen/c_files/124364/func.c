/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124364
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [(unsigned char)5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((int) arr_0 [(unsigned short)1]))));
        arr_4 [i_0] [21ULL] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_0 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) arr_1 [(_Bool)1]))));
        arr_6 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
    }
    for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        var_15 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)34249))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)239)))))))));
    }
    var_16 = ((/* implicit */short) var_10);
}
