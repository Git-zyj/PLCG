/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171616
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
    var_15 += (short)-1467;
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) max((var_16), (((short) ((short) max(((short)-11266), ((short)2727)))))));
                var_17 = (short)32766;
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */short) max((var_18), (min((arr_7 [(short)8] [(short)8] [(short)8] [i_0]), (((short) var_7))))));
                                arr_11 [i_0] [i_1] [i_3] [i_0] [i_4] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_2] [(short)11])) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_14)) : ((+(((/* implicit */int) (short)-29882)))))), (((/* implicit */int) (short)-88))));
                                var_19 -= ((/* implicit */short) max((((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1] [i_2] [i_1])) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) (short)93)))), ((~(((((/* implicit */_Bool) (short)21366)) ? (((/* implicit */int) (short)-88)) : (((/* implicit */int) var_5))))))));
                                var_20 = ((/* implicit */short) min(((-(((/* implicit */int) (short)17480)))), (((/* implicit */int) (short)2774))));
                                var_21 = (short)1811;
                            }
                        } 
                    } 
                } 
                arr_12 [i_0 - 1] [i_0] [i_1 + 1] = max((((short) (short)-30908)), (max((arr_9 [i_0] [i_0] [i_1] [i_1] [i_1 - 1]), (var_10))));
            }
        } 
    } 
}
