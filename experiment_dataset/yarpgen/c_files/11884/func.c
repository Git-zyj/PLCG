/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11884
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
    var_19 = var_2;
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            var_20 = ((/* implicit */short) (~(((/* implicit */int) (short)-18397))));
            arr_4 [(unsigned char)18] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 - 1]))));
        }
        var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (-631747229) : (((/* implicit */int) arr_3 [i_0] [i_0])))) > (((/* implicit */int) var_16))));
    }
}
