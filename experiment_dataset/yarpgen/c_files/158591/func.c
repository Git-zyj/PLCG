/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158591
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
    var_18 = ((/* implicit */unsigned int) var_16);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_19 += max((((/* implicit */unsigned int) (short)-16340)), (1228188541U));
                    var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_0] [i_1 + 1] [i_0])) : (((/* implicit */int) (unsigned char)95)))), (((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) ? (((/* implicit */int) arr_1 [i_0])) : ((((_Bool)0) ? (((/* implicit */int) (unsigned short)65519)) : (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_13);
}
