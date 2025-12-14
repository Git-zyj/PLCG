/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135615
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
    var_10 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)16128))))) + (((((/* implicit */unsigned int) ((/* implicit */int) (short)-7683))) | (var_8)))))) > (max((((/* implicit */unsigned long long int) (unsigned short)16128)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (var_4)))))));
    var_11 = ((/* implicit */unsigned char) var_7);
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) 44764050U))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((arr_1 [i_0] [i_0]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) : ((~(((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
        var_14 = ((/* implicit */unsigned short) ((arr_1 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) (unsigned short)0))))))))) : (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_0 [i_0]))), (((/* implicit */long long int) (unsigned short)0))))));
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_8))));
    }
}
