/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161985
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
    var_16 = ((unsigned long long int) var_13);
    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (var_3)))))))));
    var_18 ^= ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max((var_19), ((unsigned short)40234)));
                arr_6 [i_1] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))))), (65535)));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) 7573264198379528083ULL))));
            }
        } 
    } 
}
