/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173843
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_4 [i_1]);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) arr_0 [i_0] [(unsigned short)1]))), (var_7)));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((unsigned short) var_9)))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)27195)), (max((((/* implicit */long long int) var_2)), (2380187777581543071LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_2))))) : (var_8)));
}
