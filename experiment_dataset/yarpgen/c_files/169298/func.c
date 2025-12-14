/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169298
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
    var_19 = ((/* implicit */int) var_0);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) ((short) ((((arr_0 [i_0] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) var_4))))) ? (var_12) : (((/* implicit */unsigned long long int) (-(arr_0 [i_0] [i_0])))))));
        var_21 = var_3;
        var_22 ^= ((/* implicit */unsigned long long int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_23 = ((/* implicit */signed char) (-(var_11)));
                    var_24 = ((/* implicit */unsigned long long int) arr_5 [i_0] [(short)3] [i_0] [i_0]);
                    var_25 = ((/* implicit */short) arr_4 [i_1] [(signed char)0]);
                }
            } 
        } 
    }
}
