/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181745
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
    for (short i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 = ((((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_0 - 4] [i_0])) : (((/* implicit */int) arr_2 [i_0 - 1])))) * (((((/* implicit */_Bool) arr_3 [i_1 + 2] [(unsigned char)11])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_0 - 1])))));
                var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)41077))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) var_10);
    var_15 = ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)46842))) - (-579837370429523147LL))) * (((/* implicit */long long int) ((min((((/* implicit */int) var_9)), (2147483638))) * (((/* implicit */int) var_10))))));
}
