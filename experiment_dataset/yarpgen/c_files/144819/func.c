/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144819
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */short) var_1);
                    var_11 = ((_Bool) arr_5 [i_1]);
                }
            } 
        } 
    } 
    var_12 = ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((((/* implicit */_Bool) ((unsigned char) var_0))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((var_9) | (((/* implicit */long long int) ((((/* implicit */unsigned int) var_8)) - (var_1))))))));
    var_13 = ((/* implicit */short) ((_Bool) (unsigned short)62065));
}
