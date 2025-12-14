/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123412
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
    for (short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [(unsigned char)1] [i_0] [i_0] = ((/* implicit */unsigned char) max((arr_1 [i_1] [i_0]), (((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_0 + 1] [i_1 - 1]) ? (((/* implicit */int) arr_4 [i_0] [i_0 + 4] [i_1 + 2])) : (((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_1 + 2])))))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) 12296119874749834719ULL);
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((unsigned long long int) (short)-22434)), (((/* implicit */unsigned long long int) ((_Bool) var_17)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))));
}
