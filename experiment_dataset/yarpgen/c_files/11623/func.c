/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11623
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */long long int) arr_5 [i_0 + 2] [i_0 + 3] [i_0 - 2]);
                    arr_8 [i_0] [i_1] = ((/* implicit */long long int) (unsigned short)65530);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) (unsigned char)255);
    var_19 = ((/* implicit */unsigned int) ((unsigned long long int) 8921255563576080896LL));
    var_20 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_11)), (((unsigned long long int) (((_Bool)0) ? (var_2) : (((/* implicit */long long int) var_16)))))));
}
