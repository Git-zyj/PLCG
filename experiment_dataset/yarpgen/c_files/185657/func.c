/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185657
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
    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)196)))))));
    var_13 = ((/* implicit */signed char) min((17511880075034497259ULL), (((/* implicit */unsigned long long int) var_5))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */int) (~((~(650909574U)))));
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)59782)) ? (10608010529412445012ULL) : (230080010764117095ULL)));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_0))));
}
