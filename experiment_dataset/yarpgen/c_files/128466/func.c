/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128466
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
    var_10 = ((/* implicit */int) ((_Bool) var_8));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)15961)) || (((/* implicit */_Bool) var_6))))) == (var_2)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((unsigned char) ((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
                    arr_10 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_5 [i_0])), (arr_0 [i_0] [i_0]))))) : (((unsigned long long int) arr_0 [i_2] [i_1])))), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    }
}
