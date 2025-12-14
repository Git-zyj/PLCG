/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157615
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
    var_10 = ((/* implicit */long long int) ((((((/* implicit */int) ((unsigned short) var_3))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (var_5)))))) > (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_11 += ((/* implicit */unsigned short) min((var_7), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0] [i_0]))) || (((/* implicit */_Bool) var_5)))))));
                var_12 = ((/* implicit */unsigned int) (-(((arr_0 [i_0] [i_0 - 1]) - (arr_0 [i_0] [i_0 + 1])))));
            }
        } 
    } 
}
