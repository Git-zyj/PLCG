/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140054
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
    var_13 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) != (16141006306075086173ULL))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)46))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
                }
            } 
        } 
    } 
}
