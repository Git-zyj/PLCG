/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177930
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) ((unsigned int) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_7))))));
        arr_3 [i_0] = ((/* implicit */signed char) var_7);
        var_20 = ((/* implicit */short) (((((~(10U))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))))) ? (min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)14175))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((var_1), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) != (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))))));
        var_21 = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (var_17)))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_22 = ((/* implicit */unsigned int) arr_5 [i_0] [i_0]);
            arr_8 [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_1]))))) ? (((unsigned long long int) ((_Bool) 4294967267U))) : (((/* implicit */unsigned long long int) var_5)));
        }
    }
    var_23 &= min((((int) ((short) var_17))), (((/* implicit */int) (((-(18446744073709551614ULL))) >= (((/* implicit */unsigned long long int) ((int) (unsigned short)43297)))))));
}
