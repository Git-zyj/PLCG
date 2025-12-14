/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154577
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
    for (int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                var_17 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)117))));
                var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (signed char)-20)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) >= (-5092536980795755535LL))))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_16)), (var_14)))), (min((((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [(signed char)6])), (0ULL)))))));
                var_19 = (+(((/* implicit */int) (unsigned short)46293)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((min((1631015374), (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) (signed char)19))));
}
