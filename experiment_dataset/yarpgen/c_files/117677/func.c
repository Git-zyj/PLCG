/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117677
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */short) 5860814112805384473LL);
                var_11 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * ((-(((6191600690441381711ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                var_12 = ((/* implicit */unsigned char) ((_Bool) arr_2 [i_0]));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) max((1437795601), (((/* implicit */int) (signed char)-112))))))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)25500))));
}
