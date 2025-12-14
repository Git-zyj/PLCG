/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128583
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_4))) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (min((((/* implicit */unsigned long long int) var_1)), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)26297)))))))));
        var_10 = ((/* implicit */int) ((((/* implicit */_Bool) -718325213)) ? (((((/* implicit */_Bool) ((var_2) % (arr_0 [i_0])))) ? (((long long int) arr_1 [i_0 - 1])) : (((/* implicit */long long int) arr_2 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))) || (((/* implicit */_Bool) (unsigned short)21073))))))));
        var_11 |= ((/* implicit */short) (((((((+(var_5))) + (((/* implicit */long long int) ((/* implicit */int) max(((short)-26297), (((/* implicit */short) (unsigned char)222)))))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */long long int) arr_2 [i_0])))) + (60369746056611539LL)))));
    }
    var_12 &= ((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((((/* implicit */int) var_4)) % (((/* implicit */int) (short)26296))))), (max((var_8), (var_8))))) & (((long long int) min((var_9), (-347454566))))));
}
