/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148345
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
    var_10 = ((/* implicit */unsigned short) ((var_8) ? (var_9) : (var_9)));
    var_11 = ((/* implicit */int) var_7);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [14ULL] = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_7)), (max((var_0), (var_0)))));
        arr_4 [i_0] [i_0] = min((arr_1 [i_0]), (var_5));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) var_2))));
                    arr_12 [i_0] [i_1] [i_1] [i_1] = min((((/* implicit */unsigned short) (unsigned char)251)), (max(((unsigned short)45046), (((/* implicit */unsigned short) (short)-21254)))));
                }
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) (unsigned short)7687)), (3641198971750775127ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2029879905U))))));
    }
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) var_0);
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) min((((/* implicit */unsigned long long int) arr_15 [i_3])), (var_0))))));
    }
}
