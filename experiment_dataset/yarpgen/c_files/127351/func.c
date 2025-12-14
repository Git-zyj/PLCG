/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127351
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [4U] [i_2] [i_1] = ((/* implicit */unsigned long long int) (short)-21744);
                    arr_7 [i_0 - 1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) var_1);
                    arr_9 [6U] [6U] [(unsigned char)14] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-5)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) (short)-5)))));
}
