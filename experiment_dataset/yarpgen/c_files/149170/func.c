/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149170
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_10 -= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1])) / (((/* implicit */int) arr_3 [i_1]))))), (((((/* implicit */_Bool) -1058250320498221912LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)28770))) : (144115188042301440LL)))));
                var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) arr_2 [i_1]))));
                var_12 = ((unsigned long long int) arr_0 [i_0] [i_1]);
            }
        } 
    } 
    var_13 = ((/* implicit */short) (_Bool)1);
    var_14 = ((/* implicit */unsigned int) var_0);
}
