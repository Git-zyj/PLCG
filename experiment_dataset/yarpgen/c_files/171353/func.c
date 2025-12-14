/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171353
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = max((((int) arr_3 [i_0] [i_1])), ((+(-1680030481))));
                var_11 |= ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))), (((((/* implicit */_Bool) arr_1 [4])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))));
                var_12 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) ((arr_2 [i_1] [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_1] [i_1] [i_0])))))), (((var_4) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0]))) : (max(((-2147483647 - 1)), (((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) min(((~(((/* implicit */int) ((-58009440) <= (((/* implicit */int) var_0))))))), (min((min((2147483647), (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) (_Bool)1)))))))));
}
