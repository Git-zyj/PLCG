/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156296
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [4U] [i_0] = ((/* implicit */unsigned long long int) max((1329472523U), (0U)));
                    arr_9 [i_0] = ((/* implicit */short) (-((~(((/* implicit */int) ((short) 1329472507U)))))));
                    arr_10 [i_1] [i_2] = ((/* implicit */unsigned int) arr_4 [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_13 = var_6;
}
