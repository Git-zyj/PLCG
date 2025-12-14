/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171250
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) ((_Bool) (short)15818)))));
                arr_7 [6LL] &= ((/* implicit */long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) ((((/* implicit */int) var_9)) == (var_13))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) (((-(((var_1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))) * ((+(((/* implicit */int) var_2))))));
    var_18 = ((/* implicit */long long int) var_7);
}
