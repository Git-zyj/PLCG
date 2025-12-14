/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177492
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
    var_20 |= ((/* implicit */_Bool) (-(min((((/* implicit */int) var_2)), ((+(((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0] [i_0])) < (((/* implicit */int) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (536870911))) > (((/* implicit */int) (short)-1)))))));
                    var_21 = ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (-1100134511)))) ^ (((/* implicit */int) arr_0 [i_2])));
                }
            } 
        } 
    } 
}
