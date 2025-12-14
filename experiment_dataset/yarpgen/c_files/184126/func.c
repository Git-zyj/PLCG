/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184126
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
    for (long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_1] [3] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned int) var_17))) && (((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 + 1] [i_3])))) || (((/* implicit */_Bool) max((arr_8 [i_0] [i_0 - 1] [i_0]), (1440645106))))));
                        arr_11 [i_2] [i_0] = ((/* implicit */unsigned long long int) var_9);
                    }
                } 
            } 
        } 
        var_20 ^= ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((short) arr_7 [i_0] [13U] [(unsigned short)8]))))) ? (((/* implicit */unsigned int) (-(1102761601)))) : (max((((/* implicit */unsigned int) 1102761601)), (arr_1 [i_0 - 2] [i_0 - 2])))));
        arr_12 [i_0] [i_0 + 1] = ((/* implicit */signed char) var_9);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */long long int) var_11);
        arr_16 [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_4] [i_4])) - (max((-1102761589), (1102761601)))));
        arr_17 [i_4] = ((/* implicit */unsigned int) max((var_7), (((/* implicit */short) ((((/* implicit */unsigned int) max((1102761573), (-1102761601)))) != (2884206161U))))));
    }
    var_21 = ((/* implicit */unsigned long long int) 2884206161U);
}
