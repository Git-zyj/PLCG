/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162634
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_16 = -9223372036854775778LL;
                    var_17 *= ((/* implicit */unsigned long long int) ((((long long int) (~(var_13)))) == (6152826755429917528LL)));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */long long int) 289626213U);
    }
    var_18 &= ((/* implicit */long long int) ((((/* implicit */int) (short)-22201)) / (((/* implicit */int) (short)22202))));
}
