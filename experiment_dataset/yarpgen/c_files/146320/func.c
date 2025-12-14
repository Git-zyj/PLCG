/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146320
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
    var_14 |= ((/* implicit */unsigned int) var_2);
    var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) var_2)), (var_12)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_16 -= ((/* implicit */_Bool) 0ULL);
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((((((/* implicit */int) var_8)) + (2147483647))) >> (((arr_5 [i_1 + 2] [i_1 + 1] [i_1 + 2]) + (1107523202))))) - (arr_5 [i_1 + 3] [i_1 - 1] [i_1 + 2]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_0);
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65526)));
}
