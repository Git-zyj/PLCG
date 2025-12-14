/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119065
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (var_5) : (((/* implicit */int) (short)-21682))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((signed char) 870226004));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)42)) >= (((/* implicit */int) (signed char)27))));
            var_14 = ((int) arr_4 [i_0] [i_0] [i_0]);
            var_15 = ((/* implicit */int) arr_5 [i_0]);
        }
        var_16 = ((/* implicit */_Bool) ((int) arr_6 [i_0] [i_0]));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) var_4)) == (((/* implicit */int) (short)17615)))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((signed char) arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        arr_10 [i_2] = 2381620519U;
        var_19 = ((/* implicit */unsigned int) arr_8 [i_2]);
        arr_11 [i_2] [i_2] = (+(var_11));
    }
}
