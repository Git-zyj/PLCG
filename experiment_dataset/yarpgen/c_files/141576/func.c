/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141576
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
    var_13 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) var_4)), (max((var_7), (((/* implicit */unsigned long long int) var_9))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) arr_7 [i_0] [i_0]);
                    arr_10 [i_0 + 1] [i_1] [i_0 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) && (((((/* implicit */int) var_5)) >= (arr_7 [i_2] [i_0]))))) ? (((unsigned int) arr_3 [i_0])) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0])) << (((/* implicit */int) var_2)))) / (((/* implicit */int) var_5)))))));
                    arr_11 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((int) min((((var_0) >> (((((/* implicit */int) var_12)) - (63666))))), (((/* implicit */unsigned int) var_3)))));
                    arr_12 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) arr_1 [i_0 + 1]))), ((+(((/* implicit */int) (unsigned short)9342))))));
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */int) ((((((/* implicit */int) max((var_4), (var_12)))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_10))))))) || (((/* implicit */_Bool) var_8))));
}
