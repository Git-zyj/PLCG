/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117325
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)0));
        var_13 = ((/* implicit */unsigned int) ((unsigned long long int) 0U));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((short) var_9));
    }
    for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) min((3610175005U), (4294967286U))))));
        arr_9 [i_1] = min((((/* implicit */unsigned int) ((unsigned char) var_3))), (684792290U));
        var_15 = ((/* implicit */long long int) var_2);
    }
    var_16 = ((/* implicit */signed char) var_4);
}
