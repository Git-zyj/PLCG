/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112013
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
    var_13 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (unsigned short)2702)) ? (((/* implicit */long long int) -375734864)) : (var_6))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((var_8), (var_8))))));
                    var_15 = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_2] [i_0]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (unsigned short)47006))))));
}
