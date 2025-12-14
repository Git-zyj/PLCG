/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126355
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))))), ((+(((/* implicit */int) var_0)))))))));
                var_15 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) ((36028797018931200ULL) < (arr_0 [i_0 - 2] [i_0 - 2])))), (min((var_2), (arr_0 [i_0] [i_1]))))), (((((/* implicit */_Bool) (short)-18006)) ? (arr_0 [i_0 - 1] [i_0 - 2]) : (var_9)))));
                var_16 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 1])) ? (arr_4 [i_0 - 2] [i_0 - 2]) : (((/* implicit */unsigned long long int) var_11)))), (min((((/* implicit */unsigned long long int) -49987947)), (var_5)))));
            }
        } 
    } 
    var_17 = (unsigned short)55999;
}
