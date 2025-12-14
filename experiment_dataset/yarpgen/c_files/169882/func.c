/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169882
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) var_6);
        arr_3 [i_0] = ((/* implicit */short) (-(-1942234173)));
        arr_4 [i_0] [(short)3] = ((((/* implicit */_Bool) 12122209056342242570ULL)) ? (((/* implicit */unsigned int) (+(((int) var_15))))) : ((-(var_2))));
    }
    var_16 = ((/* implicit */unsigned long long int) var_11);
    var_17 = ((/* implicit */_Bool) min((var_14), (((/* implicit */short) var_0))));
}
