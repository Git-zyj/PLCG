/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132803
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
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_12 += ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_2 [i_1] [i_0])) + (max((arr_3 [i_0 - 1] [i_0 - 2]), (arr_3 [i_0 + 1] [i_0 - 1])))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) ((-6906085473252239752LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50)))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((unsigned int) (((((_Bool)0) ? (var_8) : (((/* implicit */unsigned int) var_3)))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)0))))))));
}
