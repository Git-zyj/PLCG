/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10615
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
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_10 ^= ((/* implicit */unsigned short) (~(((max((var_9), (arr_2 [i_0]))) ^ (((/* implicit */int) var_4))))));
                arr_5 [i_0] [i_0] [i_1] |= ((/* implicit */int) min((((/* implicit */long long int) 3661800853U)), (max((((/* implicit */long long int) max(((short)0), (((/* implicit */short) var_4))))), (max((var_3), (((/* implicit */long long int) 582946509U))))))));
            }
        } 
    } 
    var_11 = max((((/* implicit */long long int) var_8)), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)219)))))) % (var_3))));
}
