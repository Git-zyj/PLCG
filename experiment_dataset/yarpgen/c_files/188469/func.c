/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188469
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
    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((((/* implicit */int) (unsigned char)18)) ^ (min((((/* implicit */int) (signed char)9)), (min((arr_2 [i_0]), (((/* implicit */int) (_Bool)1)))))));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((((/* implicit */int) var_2)) % ((+((-2147483647 - 1)))))) <= (min((var_8), ((-2147483647 - 1)))))))));
            }
        } 
    } 
}
