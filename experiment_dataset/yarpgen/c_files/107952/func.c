/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107952
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */short) min((((arr_1 [i_1]) > (arr_1 [i_0]))), (((_Bool) arr_0 [i_1]))));
                var_17 ^= max((((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0])))), ((-(((/* implicit */int) arr_2 [i_1])))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) ((((unsigned int) ((_Bool) (_Bool)1))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_3])) + (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3285309202U)) ? (((/* implicit */int) (short)-5477)) : (arr_1 [i_0])))) ? (((arr_4 [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_1] [i_0] [i_1])))))) ? (((/* implicit */unsigned int) arr_0 [i_2])) : (max((var_13), (((/* implicit */unsigned int) arr_4 [i_1] [i_2])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = var_5;
}
