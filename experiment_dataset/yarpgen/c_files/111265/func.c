/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111265
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
    var_18 = ((/* implicit */int) var_13);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) max((arr_3 [i_0]), (((/* implicit */unsigned long long int) (signed char)18)))));
                    arr_9 [(short)4] [i_1 + 2] [(short)4] |= ((/* implicit */unsigned int) ((unsigned char) var_6));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) ((((int) (short)-32766)) != (((/* implicit */int) (!(((((/* implicit */_Bool) (short)18965)) || (((/* implicit */_Bool) (signed char)(-127 - 1))))))))));
}
