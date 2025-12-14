/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171717
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8601)) > (((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) (short)28910))))));
                var_10 = ((/* implicit */unsigned int) max((var_10), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1 + 1]))))) ? (((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_1 [i_0] [i_1]))))))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0] [i_0]))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8601))) : (3716976535U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */short) min((max((((unsigned int) (short)-8602)), (var_2))), (((/* implicit */unsigned int) max((((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((((/* implicit */int) (short)32767)) - (32755))))), (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) (short)-32764))))))))));
}
