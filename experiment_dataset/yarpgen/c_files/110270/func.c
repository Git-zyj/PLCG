/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110270
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [(unsigned short)0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0] [i_0])), (var_1))))));
                    arr_7 [i_0] = (_Bool)1;
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)7113)) : (((/* implicit */int) var_2)))) / (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_1)))))), ((+((+(((/* implicit */int) var_6))))))));
    var_18 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_11))))));
    var_19 = var_4;
}
