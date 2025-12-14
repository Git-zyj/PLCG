/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139964
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
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                var_18 *= ((/* implicit */signed char) (((~(arr_1 [i_0 - 1]))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_1 [i_0 + 2])))));
                arr_4 [i_1] [i_1] = ((/* implicit */signed char) ((max((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2]))) < (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)139)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_8))))) ? (((((/* implicit */int) (unsigned char)139)) << (((((/* implicit */int) var_10)) - (821))))) : ((~(var_16))))))))));
    var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) (unsigned char)138)))), ((-(max((((/* implicit */int) var_12)), (var_14)))))));
}
