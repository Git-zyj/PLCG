/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156590
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
    var_16 |= var_14;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_4);
                    arr_11 [i_0] = ((/* implicit */int) (!(((0) == (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)9] [(unsigned short)9])) || (((/* implicit */_Bool) 0)))))))));
                    arr_12 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)54020))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) var_2);
}
