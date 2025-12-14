/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141631
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
        arr_5 [i_0] = ((/* implicit */int) ((short) max(((-2147483647 - 1)), (((/* implicit */int) arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_17 = ((short) max((0LL), (((/* implicit */long long int) min((-2147483647), (((/* implicit */int) (short)-22352)))))));
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) arr_3 [i_0] [i_0])))));
        }
    }
    var_18 = ((/* implicit */short) (+((-2147483647 - 1))));
}
