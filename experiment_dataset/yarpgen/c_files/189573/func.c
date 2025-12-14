/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189573
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((unsigned char) (+((-(-113724672)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 2] [i_1 + 1])) != ((-((((_Bool)1) ? (1504293355) : (113724657)))))));
                var_15 = ((/* implicit */unsigned long long int) ((8989018099309894680LL) > (((/* implicit */long long int) 1686128078))));
                arr_6 [(_Bool)1] = -113724672;
            }
        } 
    } 
    var_16 = 1504293355;
}
