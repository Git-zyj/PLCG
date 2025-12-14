/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15721
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_2] [2ULL] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) ((short) (unsigned char)124))), ((+(((/* implicit */int) arr_2 [i_1] [i_2]))))));
                    arr_10 [i_2] = ((/* implicit */unsigned int) (((~(((/* implicit */int) min(((short)-1), ((short)1562)))))) != (((/* implicit */int) (!(((_Bool) arr_4 [0U] [i_1] [2ULL])))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))));
    var_18 -= ((/* implicit */unsigned char) var_11);
    var_19 = ((/* implicit */unsigned int) var_5);
}
