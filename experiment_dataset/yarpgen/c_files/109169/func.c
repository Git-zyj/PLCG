/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109169
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
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_15 -= ((/* implicit */unsigned int) ((((((/* implicit */int) ((unsigned short) 11020891624942133924ULL))) % (max((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2])), (var_7))))) << (((((/* implicit */int) arr_0 [i_0] [i_0])) - (26346)))));
        var_16 = ((/* implicit */unsigned short) var_11);
        var_17 = ((/* implicit */int) ((signed char) arr_1 [i_0 - 1]));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */long long int) ((_Bool) arr_5 [i_1]));
            arr_8 [i_2] = ((/* implicit */unsigned int) 7425852448767417691ULL);
        }
        arr_9 [i_1] = ((/* implicit */signed char) (-(108999040525076777ULL)));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */int) arr_3 [i_1])) >= (arr_2 [i_1] [i_1]))))));
        arr_10 [0U] [i_1] = arr_4 [i_1];
    }
    var_19 = ((/* implicit */unsigned char) var_9);
}
