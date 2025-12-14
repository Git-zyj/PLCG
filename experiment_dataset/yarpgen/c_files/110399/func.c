/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110399
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
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [(signed char)8] [i_1] = ((/* implicit */signed char) arr_5 [i_0 - 2]);
                arr_7 [i_1 - 3] [i_0 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) (unsigned short)37651)) << (((var_3) + (1375930194))))) : (((/* implicit */int) (unsigned char)123))));
                arr_8 [i_0] [i_1] [16] = var_8;
                arr_9 [i_0] [i_1] = ((/* implicit */long long int) var_11);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((unsigned short) 4194303)))) ? (((/* implicit */int) ((signed char) var_5))) : (((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */int) (unsigned short)57830)), (var_8))) : (var_3)))));
}
