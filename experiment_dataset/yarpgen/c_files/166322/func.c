/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166322
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
    var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) 529027698U))))))))));
    var_12 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) (+(min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_10)), (529027698U)))), ((+(-1626498980436646514LL)))))));
                var_14 = ((/* implicit */unsigned int) var_4);
            }
        } 
    } 
}
