/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108472
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [(short)12] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0]))));
        var_16 = var_7;
    }
    for (short i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        arr_6 [i_1 - 2] [i_1 - 2] = ((short) ((((/* implicit */int) var_7)) > (((/* implicit */int) arr_1 [i_1 - 2]))));
        var_17 = ((/* implicit */short) ((((/* implicit */int) max((arr_3 [i_1]), (arr_4 [i_1])))) / ((+(((/* implicit */int) arr_4 [i_1]))))));
        arr_7 [i_1 - 2] = ((/* implicit */short) max((((/* implicit */int) (short)-30871)), ((+(((((/* implicit */int) (short)-32742)) * (((/* implicit */int) var_12))))))));
    }
    /* LoopNest 2 */
    for (short i_2 = 4; i_2 < 14; i_2 += 1) 
    {
        for (short i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            {
                var_18 = ((/* implicit */short) max((((((((/* implicit */_Bool) (short)-28565)) ? (((/* implicit */int) arr_1 [i_2 - 2])) : (((/* implicit */int) (short)32765)))) + (((/* implicit */int) arr_13 [i_3] [i_3] [i_3 + 1])))), (((/* implicit */int) arr_15 [i_3] [i_3] [i_3 - 1]))));
                arr_16 [i_3] [i_3 - 1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (short)26215)) ? (((/* implicit */int) (short)-1558)) : (((/* implicit */int) (short)-2828))));
            }
        } 
    } 
}
