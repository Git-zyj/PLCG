/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104050
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
    var_13 = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned long long int) var_5)))))), (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = (((~(((/* implicit */int) (signed char)-100)))) >= (((/* implicit */int) ((signed char) (_Bool)0))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */short) var_8);
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_5);
}
