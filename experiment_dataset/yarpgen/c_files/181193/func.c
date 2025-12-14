/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181193
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
    var_18 = ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((arr_3 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0] [i_1])))) : (((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_12 [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (arr_9 [i_0] [i_1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_0] [i_3]))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) (short)-32745))))), (var_10)))));
                            var_19 = ((((/* implicit */int) ((_Bool) var_13))) == (((/* implicit */int) arr_9 [i_0] [i_1])));
                            var_20 = ((/* implicit */unsigned int) var_17);
                        }
                    } 
                } 
            }
        } 
    } 
}
