/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165459
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2 - 1] = ((/* implicit */signed char) ((unsigned short) max((arr_5 [i_2 - 3] [6ULL] [10ULL] [i_2]), (arr_5 [i_2 + 2] [19ULL] [i_0] [19ULL]))));
                    var_18 = ((/* implicit */short) arr_2 [i_0]);
                    var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) arr_5 [i_2 + 2] [i_2 - 2] [i_2 + 1] [i_2 - 4]))), (1208468770991613100ULL)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) var_11);
}
