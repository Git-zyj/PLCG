/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121675
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
    var_11 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] = (+(((/* implicit */int) arr_4 [i_1])));
                    var_12 = ((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1] [i_2]);
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((unsigned char) arr_5 [i_0] [i_1]))));
                    var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_8 [i_0 + 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3935252404962132976LL)) ? (((/* implicit */int) (short)-32752)) : (((/* implicit */int) (unsigned short)59243)))))));
                }
            } 
        } 
    } 
    var_15 = (+(((/* implicit */int) (short)-26674)));
}
