/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121466
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
    for (int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) arr_4 [i_0] [i_0]);
                var_17 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (short)5653)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_5 [i_0 + 2] [i_0] [i_0 - 1])))));
                var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-5653)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)31593)) <= (((/* implicit */int) (unsigned short)31614)))))) : (arr_0 [i_0 + 2])))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_13);
}
