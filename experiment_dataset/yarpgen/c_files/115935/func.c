/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115935
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 = (+(((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? ((+(arr_4 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))));
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_4 [i_0] [i_1] [2ULL]))) ? (((/* implicit */int) max((arr_3 [i_0]), (arr_3 [i_0])))) : (((/* implicit */int) ((signed char) max((18446744073709551615ULL), (arr_2 [7] [i_0] [i_0])))))));
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((unsigned int) ((var_2) ? (2147483647) : (((/* implicit */int) arr_3 [(_Bool)1]))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (~(var_11)));
}
