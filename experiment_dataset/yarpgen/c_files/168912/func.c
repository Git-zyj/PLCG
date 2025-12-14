/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168912
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        var_11 = ((/* implicit */unsigned char) -1949118811);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_12 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2003820062U)) ? (-1756515290) : (730909545)))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            arr_9 [i_1] [i_2] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((1949118811) - (1949118811)))))) : (((unsigned int) 1949118815))));
            arr_10 [i_1] = ((/* implicit */short) arr_7 [i_1] [i_2] [i_2]);
        }
    }
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) -5713955142856608598LL))));
}
