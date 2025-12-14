/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179777
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
    var_19 -= var_5;
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 = var_8;
                var_21 *= ((/* implicit */_Bool) max((((var_9) ? (((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (unsigned short)65533)))) : (((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) ((short) ((((/* implicit */int) arr_1 [i_1])) < (((/* implicit */int) arr_2 [i_1]))))))));
            }
        } 
    } 
}
