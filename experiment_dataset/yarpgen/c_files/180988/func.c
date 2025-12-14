/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180988
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
    var_13 = ((/* implicit */unsigned short) max((var_6), (((/* implicit */long long int) ((signed char) 16ULL)))));
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))))) ? (max((max((var_7), (((/* implicit */long long int) var_11)))), (var_6))) : (((/* implicit */long long int) var_5))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */long long int) var_5)) / (var_7)));
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)29636)))) : (arr_6 [i_0] [i_0 - 2] [i_0 - 2] [i_0])))) ? (max((arr_6 [i_0] [(short)10] [16] [i_0 - 3]), (arr_6 [i_0] [i_0] [i_0] [i_2]))) : (((/* implicit */unsigned long long int) ((unsigned int) ((arr_2 [i_0] [i_2]) << (((((/* implicit */int) arr_1 [i_2] [i_0])) - (71)))))))));
                    var_16 -= ((/* implicit */int) ((((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_2])) <= (((/* implicit */int) arr_4 [i_0] [i_0 + 1] [(unsigned short)14])))) ? (((arr_4 [i_0] [i_0 - 3] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_6 [i_0] [i_0 - 3] [i_1] [i_2 + 1]))) : (max((arr_6 [(unsigned short)4] [i_0 - 4] [i_1] [i_2 - 1]), (((/* implicit */unsigned long long int) var_1))))));
                    arr_10 [i_1 + 2] = ((/* implicit */short) arr_8 [11] [i_0]);
                }
            } 
        } 
    } 
}
