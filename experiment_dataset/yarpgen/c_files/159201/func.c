/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159201
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
    var_12 += ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */int) arr_3 [i_0] [2U] [21]);
                arr_4 [i_0] [13] [8U] = ((/* implicit */int) (-(min((arr_0 [i_1 - 3] [i_1 - 1]), (((/* implicit */long long int) -2147483638))))));
            }
        } 
    } 
}
