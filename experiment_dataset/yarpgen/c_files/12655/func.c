/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12655
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
    var_11 = ((/* implicit */short) (+(((((/* implicit */int) (signed char)0)) / (((/* implicit */int) (unsigned char)210))))));
    var_12 = var_1;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [4LL] = arr_1 [i_0];
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_13 ^= ((/* implicit */short) ((arr_3 [i_1]) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1])))));
            var_14 = ((/* implicit */long long int) var_1);
        }
    }
}
