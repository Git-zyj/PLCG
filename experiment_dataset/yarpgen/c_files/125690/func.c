/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125690
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
    var_13 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)8191)) : (((((/* implicit */int) var_3)) * (((/* implicit */int) var_6)))))), (((/* implicit */int) var_6))));
    var_14 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_15 -= ((/* implicit */unsigned char) arr_2 [i_0]);
                var_16 = ((/* implicit */int) max((((((/* implicit */_Bool) 2656236790U)) ? (3786242782U) : (((/* implicit */unsigned int) ((/* implicit */int) ((3786242782U) != (508724514U))))))), (((/* implicit */unsigned int) (_Bool)1))));
            }
        } 
    } 
}
