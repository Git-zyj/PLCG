/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179420
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
    for (unsigned long long int i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_11 ^= ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_5 [i_0 - 4] [i_0 - 2] [i_0 - 4] [i_1 + 4]))))));
                    var_12 *= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) - (((/* implicit */int) ((((/* implicit */_Bool) 4294967278U)) && (((/* implicit */_Bool) ((arr_1 [(signed char)1]) ? (17518263979584775264ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((unsigned char) var_2)))));
}
