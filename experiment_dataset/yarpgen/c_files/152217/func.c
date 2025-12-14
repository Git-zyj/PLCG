/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152217
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (max((arr_5 [i_0 + 3]), (((/* implicit */unsigned long long int) arr_8 [i_2 + 1] [i_0 + 3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_0 + 2] [i_0 - 2]) == (arr_8 [i_0 - 1] [i_0 - 1])))))));
                    arr_9 [i_1] [i_1] [i_0 - 1] [i_0 - 1] = ((/* implicit */short) min((min((arr_8 [i_0 - 2] [i_0 + 3]), (arr_8 [i_0 - 2] [i_0 + 3]))), (max((max((arr_2 [i_1]), (arr_2 [i_1]))), (arr_8 [i_0 - 2] [i_1])))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) ((unsigned long long int) var_6));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (((((/* implicit */_Bool) var_4)) ? (max((24ULL), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (var_3)))))))));
}
