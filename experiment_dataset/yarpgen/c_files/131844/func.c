/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131844
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_11 *= ((/* implicit */short) ((((/* implicit */_Bool) 623892263354452935LL)) && (((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                    arr_9 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */int) -8460296829916905284LL);
                }
            } 
        } 
        var_12 = ((/* implicit */unsigned char) (_Bool)1);
        var_13 = ((/* implicit */unsigned long long int) (short)-880);
    }
    var_14 = ((/* implicit */unsigned int) var_5);
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
}
