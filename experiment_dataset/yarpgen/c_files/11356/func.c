/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11356
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
    for (signed char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1 + 1] = ((/* implicit */short) ((min((((739056431U) | (var_0))), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) << (((((/* implicit */int) (unsigned short)50080)) - (50078)))))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) 805118976U))) ? ((~(((/* implicit */int) (unsigned short)31970)))) : (((/* implicit */int) ((signed char) (signed char)(-127 - 1)))))))));
                var_11 = ((/* implicit */unsigned long long int) var_2);
            }
        } 
    } 
    var_12 |= ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
    var_13 = ((/* implicit */unsigned int) var_7);
}
