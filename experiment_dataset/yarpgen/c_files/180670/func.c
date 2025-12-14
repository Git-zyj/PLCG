/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180670
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
    var_10 = ((/* implicit */int) var_3);
    var_11 |= (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_12 |= ((/* implicit */long long int) var_4);
                var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_5 [i_0 - 1])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((short) (unsigned short)22))) : (((/* implicit */int) arr_0 [i_1] [i_0 - 1]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_1)) | (((int) var_8))))));
}
