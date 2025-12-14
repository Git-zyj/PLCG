/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112055
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
    var_12 = ((/* implicit */short) ((int) max((min((((/* implicit */int) (_Bool)1)), (-1))), (((((/* implicit */int) var_6)) * (17))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [(_Bool)1] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3145728LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_5 [(short)5] [9U] [6]))))))))));
                    arr_8 [(short)11] [(unsigned short)7] [i_1] [i_2] = max(((((_Bool)1) || ((_Bool)1))), ((!(((/* implicit */_Bool) 6598117794695328377ULL)))));
                }
            } 
        } 
    } 
}
