/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14539
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
    var_18 = var_13;
    var_19 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (unsigned char)85)) % (((((/* implicit */int) var_16)) + (((/* implicit */int) (unsigned char)182)))))));
    var_20 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 -= ((/* implicit */_Bool) ((unsigned char) ((_Bool) min((((/* implicit */unsigned int) (short)1681)), (arr_1 [i_1])))));
                var_22 -= (signed char)-94;
            }
        } 
    } 
}
