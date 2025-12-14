/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110232
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
    var_12 |= ((/* implicit */unsigned short) var_11);
    var_13 = ((/* implicit */short) var_5);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (_Bool)1);
                    arr_8 [i_0] [i_1] [i_2] |= ((/* implicit */_Bool) (+(var_9)));
                    var_14 -= (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-77))))));
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (~((~(min((arr_3 [i_2] [i_1 - 1]), (1730416056U))))))))));
                }
            } 
        } 
    } 
}
