/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1361
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
    var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (max((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                var_21 &= ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) | (arr_4 [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) max((arr_1 [(short)3]), (((/* implicit */unsigned short) arr_2 [13LL] [(unsigned short)11]))))) & (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)25599)))))))));
                var_22 = ((/* implicit */short) arr_1 [i_1]);
            }
        } 
    } 
    var_23 = var_1;
    var_24 += min((var_10), (var_10));
}
