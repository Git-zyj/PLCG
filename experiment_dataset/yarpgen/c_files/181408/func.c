/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181408
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
    var_20 = ((/* implicit */unsigned char) var_10);
    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_4)) << (((((long long int) var_5)) - (8653337321305061685LL))))) << (((((/* implicit */int) (unsigned short)25183)) - (25180)))));
    var_22 ^= max((((((/* implicit */_Bool) (~(var_14)))) ? (((((/* implicit */_Bool) var_4)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) var_3)));
    var_23 = max((((/* implicit */short) var_2)), ((short)(-32767 - 1)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [(short)2]))))) : (max((((long long int) (_Bool)0)), (((/* implicit */long long int) var_10))))));
                var_24 += ((/* implicit */unsigned char) max((((/* implicit */int) ((-7092547107246285299LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (540187401)));
            }
        } 
    } 
}
