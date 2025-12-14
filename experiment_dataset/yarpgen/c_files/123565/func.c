/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123565
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
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_9)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_21 *= ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0 - 2])))))));
    }
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 4978243644328074745LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_17)))) % (((((/* implicit */int) var_2)) | (((/* implicit */int) var_8))))))))))));
    /* LoopNest 2 */
    for (long long int i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        for (short i_2 = 3; i_2 < 14; i_2 += 1) 
        {
            {
                var_23 = ((/* implicit */long long int) arr_0 [10ULL]);
                var_24 = ((/* implicit */short) (+((+(((/* implicit */int) var_5))))));
            }
        } 
    } 
}
