/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181787
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
    var_15 -= ((unsigned char) (_Bool)1);
    var_16 = ((/* implicit */unsigned int) 11807019129227220598ULL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((2612433522U) != (arr_2 [i_0] [i_1]))))));
                var_18 |= arr_1 [(unsigned short)5];
                var_19 |= ((/* implicit */unsigned char) ((2684834088U) >> (((-1LL) + (8LL)))));
            }
        } 
    } 
}
