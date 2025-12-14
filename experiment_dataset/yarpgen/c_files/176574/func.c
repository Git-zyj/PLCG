/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176574
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
    var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((var_15) / (((/* implicit */unsigned int) var_16))))))))) / (var_15)));
    var_20 = ((/* implicit */int) var_15);
    var_21 = var_10;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_1] = ((/* implicit */unsigned int) arr_3 [i_2] [i_2]);
                    var_22 |= ((arr_4 [i_0] [i_1] [i_2]) - (((/* implicit */int) ((((/* implicit */unsigned int) arr_4 [4] [i_1] [i_1])) > (var_10)))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        arr_12 [i_2] [i_1] [11U] [i_3] = ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_7))))) % (((/* implicit */int) var_4)));
                        arr_13 [i_0] [i_1] = ((/* implicit */int) ((((((/* implicit */int) var_0)) * (((/* implicit */int) var_4)))) == (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)24492)) / (181317750)))) && (((/* implicit */_Bool) ((var_15) | (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) (short)-24512)) <= (181317731))))));
    }
    for (int i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */int) var_5)) <= (63)));
        var_24 = ((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4]);
    }
    var_25 = var_5;
}
