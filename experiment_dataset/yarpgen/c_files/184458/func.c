/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184458
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) var_1);
                    var_13 += ((/* implicit */unsigned long long int) max((-1862827490629073742LL), (0LL)));
                    var_14 -= ((/* implicit */long long int) arr_4 [i_2] [i_1] [4ULL]);
                    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) 0LL))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32191))) : (0LL)));
    var_17 = ((/* implicit */unsigned short) var_11);
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */unsigned long long int) var_6)) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) -6962349363465312077LL)) : (var_3)))))));
}
