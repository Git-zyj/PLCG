/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142990
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((signed char) (unsigned char)211));
        var_12 = ((/* implicit */long long int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_7 [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_1)) : (1957503644))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))));
        var_14 = ((/* implicit */int) min((var_14), (((int) arr_6 [i_1]))));
        arr_9 [9U] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)15))));
    }
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_15 = ((/* implicit */int) arr_6 [i_2]);
        arr_12 [i_2] [4U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)87)) && (((/* implicit */_Bool) 9223301668110598144ULL))));
        var_16 = ((/* implicit */unsigned int) arr_5 [(unsigned char)0]);
    }
    var_17 = ((/* implicit */int) ((2841889617U) >= (((/* implicit */unsigned int) ((min((((/* implicit */int) (signed char)87)), (-1957503646))) + (((/* implicit */int) max(((unsigned char)218), ((unsigned char)210)))))))));
}
