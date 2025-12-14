/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153305
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_2)))) ^ (((/* implicit */int) (signed char)-28))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (min((((((/* implicit */_Bool) 2493828918U)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (-832399659))), (((((/* implicit */_Bool) 879084114U)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_8))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_6 [(signed char)7] [i_1] [(signed char)5] = ((/* implicit */signed char) var_14);
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-102))))))))));
                }
            } 
        } 
    } 
}
