/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1003
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_12 = (-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-107)))));
                arr_6 [(signed char)12] [15] = ((/* implicit */int) (!(((/* implicit */_Bool) (((((~(((/* implicit */int) (signed char)6)))) + (2147483647))) << (((((((/* implicit */_Bool) 1073676288)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (signed char)-6)))) - (6))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))), (((unsigned int) min(((signed char)15), (((/* implicit */signed char) var_0)))))));
}
