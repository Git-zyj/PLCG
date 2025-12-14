/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140782
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) (unsigned short)37910);
                    arr_10 [i_0 + 4] [i_1 - 1] [i_0] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)32759)) && (((/* implicit */_Bool) 1746343592)))))) : (-8542703042525682255LL))))));
                }
            } 
        } 
    } 
}
