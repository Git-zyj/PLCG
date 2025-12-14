/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111835
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
    for (long long int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_16 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)27826)));
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_11))));
                    var_18 ^= ((/* implicit */long long int) max((7812359682612995549ULL), (((((/* implicit */_Bool) ((10634384391096556066ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37701)))))) ? (15222630174717314218ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_2))));
}
