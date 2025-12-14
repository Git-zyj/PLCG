/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154613
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (((~(((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (_Bool)1))))))) ^ (((/* implicit */int) (unsigned short)5943))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)255);
        arr_6 [i_0] = ((/* implicit */_Bool) 17179869183ULL);
    }
    var_16 = (unsigned char)0;
}
