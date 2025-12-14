/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105427
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
    var_12 = ((/* implicit */unsigned int) (-(var_7)));
    var_13 = min((((/* implicit */long long int) max((min(((unsigned short)42216), ((unsigned short)23296))), (((/* implicit */unsigned short) (short)-26125))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23319)) || (((/* implicit */_Bool) (unsigned char)13))))), (var_2))));
    var_14 ^= ((/* implicit */signed char) -2312408585701503357LL);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) var_8);
                var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((((/* implicit */int) (unsigned char)248)) < (((/* implicit */int) arr_0 [i_0]))))))), ((((!(((/* implicit */_Bool) 1915509538)))) ? ((~(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)13), (((/* implicit */unsigned char) (_Bool)0))))))))));
            }
        } 
    } 
}
