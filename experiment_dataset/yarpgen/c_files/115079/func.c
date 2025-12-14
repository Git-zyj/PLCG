/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115079
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
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_0))));
    var_18 = min((4294967278U), (((/* implicit */unsigned int) (short)-25849)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((((int) arr_1 [i_0])) / (((((/* implicit */int) (unsigned short)3)) << (((2147483647) - (2147483621))))))) ^ ((~(((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_9)) - (53784)))))))));
                arr_6 [i_1] [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) ((var_16) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -713198974)) ? (((/* implicit */unsigned long long int) -713198974)) : (arr_2 [i_0] [i_1] [i_1])))) ? (17U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned int) 1462200704))));
            }
        } 
    } 
}
