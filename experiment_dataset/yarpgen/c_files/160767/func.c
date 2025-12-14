/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160767
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
    var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) ((unsigned int) var_14))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min(((unsigned short)23836), ((unsigned short)128)));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_5 [17ULL] [(unsigned short)5] [i_0])) * (((/* implicit */int) arr_5 [i_1] [i_0] [i_0]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_7);
}
