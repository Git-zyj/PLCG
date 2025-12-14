/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121157
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
    var_11 = ((/* implicit */long long int) max((((/* implicit */int) var_2)), (((int) var_2))));
    var_12 = ((/* implicit */short) max(((~(237107359U))), (4057859937U)));
    var_13 = ((/* implicit */unsigned char) 4057859937U);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) ((unsigned char) arr_0 [i_1 + 2])));
                    var_14 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_1 [i_1 + 2] [i_1 + 2]))), (((/* implicit */long long int) min((4057859936U), (((/* implicit */unsigned int) (short)-19597)))))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) ((unsigned int) min(((~(((/* implicit */int) var_3)))), (((/* implicit */int) var_9)))));
                }
            } 
        } 
    } 
}
