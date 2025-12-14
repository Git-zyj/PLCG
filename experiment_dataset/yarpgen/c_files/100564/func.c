/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100564
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (var_7)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(18014398509416448ULL)))) ? (((/* implicit */long long int) ((unsigned int) var_9))) : ((~(((((/* implicit */_Bool) var_1)) ? (var_0) : (var_0)))))));
                    arr_8 [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) min((arr_6 [i_1]), (arr_6 [i_1])))) ? (max((((/* implicit */unsigned int) ((unsigned short) var_9))), (var_5))) : (((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_3 [i_1]), (var_1))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (_Bool)1)))))), ((signed char)48)));
}
