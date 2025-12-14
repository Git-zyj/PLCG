/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134650
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
    var_16 = ((/* implicit */unsigned short) -1849729065);
    var_17 = ((/* implicit */_Bool) ((unsigned short) var_15));
    var_18 = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) var_6)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) -863970795);
                arr_5 [i_1 - 3] = ((/* implicit */unsigned short) ((863970791) < (-915678955)));
                var_20 ^= (!(((/* implicit */_Bool) var_3)));
            }
        } 
    } 
}
