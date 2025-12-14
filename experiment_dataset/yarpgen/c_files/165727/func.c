/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165727
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))), (((((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0 + 3])) - (11386396314465736279ULL)))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1])) ? (arr_1 [i_0 + 1] [i_0 - 1]) : (arr_1 [i_0 + 1] [i_0 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-5290397048432253793LL)));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_15 = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) ((short) var_7))))));
            arr_6 [i_0 + 1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) (short)32766))))) ? (((max((var_2), (((/* implicit */long long int) 32764)))) / (((/* implicit */long long int) ((unsigned int) arr_4 [i_1] [0LL] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)91), (((/* implicit */unsigned char) var_5))))))));
        }
        var_16 = arr_3 [i_0] [i_0];
        var_17 = ((/* implicit */short) ((_Bool) ((var_10) ^ (var_10))));
    }
    var_18 = ((max((((/* implicit */long long int) (short)32766)), (var_1))) | (((/* implicit */long long int) (~(((/* implicit */int) (short)-11568))))));
    var_19 = ((/* implicit */long long int) var_5);
}
