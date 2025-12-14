/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140206
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
    var_11 |= ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [19LL] = ((/* implicit */short) min((((arr_1 [i_0] [i_1]) + (arr_1 [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_1]) > (((/* implicit */unsigned long long int) 3608305110U)))))));
                var_12 = ((/* implicit */short) (~(((((2718972885U) >> (((((/* implicit */int) (unsigned short)44431)) - (44407))))) << (((((/* implicit */int) (unsigned char)233)) - (216)))))));
                var_13 = ((/* implicit */unsigned int) ((((arr_1 [i_0] [(unsigned char)14]) & (arr_1 [i_0] [i_1]))) | (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_5))))));
            }
        } 
    } 
}
