/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128734
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_10 [i_2 - 1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) max((((unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) arr_1 [i_0]))))), (min((((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))))), (max((((/* implicit */unsigned long long int) var_1)), (var_0)))))));
                    var_14 = ((/* implicit */unsigned long long int) ((unsigned char) ((15944414928680987725ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 2]))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_2);
}
