/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16405
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [(short)8] = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
        var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (4169716908125560942ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112)))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] [i_1 + 1] = ((/* implicit */short) (~(((/* implicit */int) (short)-25496))));
            arr_7 [(signed char)1] [(signed char)1] = ((/* implicit */short) var_15);
        }
        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) var_3)))))));
    }
}
