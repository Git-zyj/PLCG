/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174008
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
    var_12 += var_0;
    var_13 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) (unsigned char)242);
                arr_5 [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) var_3)), (min((((((/* implicit */int) (unsigned char)39)) / (((/* implicit */int) (unsigned char)216)))), (((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned short)65535))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_2)), ((unsigned char)242)));
}
