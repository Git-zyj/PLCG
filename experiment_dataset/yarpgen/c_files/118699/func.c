/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118699
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
    var_13 = ((/* implicit */long long int) var_10);
    var_14 = ((/* implicit */long long int) (+(var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (-(var_12)))))));
                var_15 = ((/* implicit */unsigned int) arr_4 [i_1] [(signed char)14] [i_1]);
            }
        } 
    } 
}
