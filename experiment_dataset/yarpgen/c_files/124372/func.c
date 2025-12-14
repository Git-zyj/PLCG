/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124372
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
    var_11 = ((/* implicit */unsigned int) ((signed char) var_9));
    var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? ((-(((/* implicit */int) (unsigned char)119)))) : (((((/* implicit */int) var_8)) / (((/* implicit */int) var_2))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) var_9))), (min((((/* implicit */unsigned short) var_5)), (var_10)))))) : (((((/* implicit */_Bool) ((unsigned short) 453624629054007433ULL))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) var_8)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) max((min((((/* implicit */short) arr_6 [i_0] [i_1] [i_1] [i_1])), (arr_3 [i_1] [i_0]))), (((/* implicit */short) arr_6 [i_0] [i_2 + 1] [i_2 + 3] [i_2 + 3])))))));
                    arr_8 [i_0] = arr_3 [i_0] [i_0];
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned char) arr_6 [i_0] [i_2 - 1] [i_2] [i_2]))), (min((arr_4 [i_2 - 2] [i_2 - 2] [i_2 - 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (arr_5 [i_0] [i_0]) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1])))))))));
                }
            } 
        } 
    } 
}
