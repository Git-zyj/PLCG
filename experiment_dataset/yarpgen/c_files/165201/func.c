/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165201
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
    var_10 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) var_7)))), ((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))));
                arr_5 [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2] [i_1 - 2])))), (((/* implicit */int) min((arr_2 [i_1 - 1] [i_1 + 1] [i_1 - 1]), (arr_4 [i_1 - 2] [i_1 + 1] [i_1 - 2]))))));
            }
        } 
    } 
}
