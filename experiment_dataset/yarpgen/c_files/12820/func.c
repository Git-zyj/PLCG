/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12820
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
    var_18 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_19 |= ((/* implicit */_Bool) max(((unsigned short)38065), (((/* implicit */unsigned short) var_1))));
                arr_4 [i_0] = ((/* implicit */_Bool) (short)0);
                var_20 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (+(2147483647)))), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (-((~(var_8))))))));
                var_21 = ((/* implicit */unsigned short) (short)-6592);
            }
        } 
    } 
}
