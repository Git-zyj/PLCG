/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188566
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
    var_11 = ((/* implicit */unsigned short) ((signed char) (~(((unsigned int) (unsigned char)240)))));
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) -60197987))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] |= ((/* implicit */unsigned short) ((long long int) min((((/* implicit */long long int) arr_2 [i_1 - 2])), (arr_0 [i_1 - 2]))));
                arr_5 [i_0] = (((+(-241303215228037438LL))) & (((/* implicit */long long int) (+((-2147483647 - 1))))));
                arr_6 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 - 1])) > (((/* implicit */int) arr_3 [i_1 - 2]))))), (((arr_1 [i_1 + 1] [i_1]) % (arr_1 [i_1 + 1] [i_1])))));
            }
        } 
    } 
}
