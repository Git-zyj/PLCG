/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152710
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (0)))) < (-1)))) % (((/* implicit */int) var_6))));
    var_19 = ((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))))), ((~(var_7))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) ((unsigned short) ((arr_0 [i_0 + 2] [i_1 + 1]) & (arr_0 [i_0 - 2] [i_1 + 4]))));
                var_21 += ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)125)) << (((((/* implicit */int) arr_1 [i_0 - 1] [i_1 - 2])) - (14763)))));
            }
        } 
    } 
}
