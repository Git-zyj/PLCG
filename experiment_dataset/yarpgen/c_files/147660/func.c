/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147660
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
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_14 -= ((/* implicit */unsigned short) ((int) (_Bool)1));
                arr_6 [i_0] [(signed char)2] [(signed char)3] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? ((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_0)))), (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((((4084477896U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))))) << (max((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_7))))));
    var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3426084421123709912LL)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (-1358912360))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((_Bool) var_12))) : (max((((/* implicit */int) var_11)), (var_13)))))));
}
