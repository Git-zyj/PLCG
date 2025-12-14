/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184622
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(363536406U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) (unsigned short)4080)) ? (((/* implicit */unsigned long long int) 1846930452U)) : (4194303ULL)))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? ((~(var_5))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0])))))));
        var_10 ^= ((/* implicit */unsigned char) (unsigned short)65535);
    }
    var_11 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) (_Bool)1))))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)128))))) ? ((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) var_7))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_4)) : (3369621925U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
}
