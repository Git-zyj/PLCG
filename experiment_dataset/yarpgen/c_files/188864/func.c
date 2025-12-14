/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188864
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
    var_10 = ((/* implicit */short) min((var_9), (min((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59623))) : (var_0))), (min((((/* implicit */unsigned long long int) var_8)), (var_9)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1] [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1 + 1] [i_1])))), (max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1 + 1] [i_1])), (17ULL)))));
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551597ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)22712))));
            }
        } 
    } 
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) | (258853483U)))) ? ((+((~(var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_8))))));
}
