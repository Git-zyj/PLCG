/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128555
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
    var_11 = -375490445;
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_12 = max((1588008757), (((/* implicit */int) (short)15576)));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) 1909847591)) ? (((/* implicit */int) (short)-32744)) : (((/* implicit */int) (short)-15603)))))));
            var_14 = ((/* implicit */int) arr_1 [(short)5] [i_0]);
            var_15 -= ((/* implicit */short) var_4);
            var_16 = var_5;
        }
        for (int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_17 = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_0 - 1] [i_2] [i_2]))));
            var_18 = ((/* implicit */short) var_9);
        }
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        var_19 -= ((/* implicit */int) (short)32743);
        var_20 = ((/* implicit */int) ((((/* implicit */int) (short)32752)) != (((/* implicit */int) (short)-32743))));
        var_21 = ((/* implicit */int) max((var_21), (((arr_8 [i_3] [i_3]) ^ (((var_4) / (((/* implicit */int) arr_7 [(short)4]))))))));
    }
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((int) (short)27664)))));
}
