/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188649
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
    var_12 = ((/* implicit */unsigned short) min(((~((-(((/* implicit */int) (signed char)-82)))))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) << (((/* implicit */int) ((_Bool) var_3)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_6 [i_0 - 3] [19] [i_2] = ((/* implicit */int) var_7);
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) max((((/* implicit */unsigned int) (_Bool)0)), (4290162050U)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_9)))))) - (((((_Bool) (_Bool)1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)127))))));
    var_14 &= ((/* implicit */short) max((((/* implicit */unsigned char) (signed char)-66)), ((unsigned char)157)));
}
