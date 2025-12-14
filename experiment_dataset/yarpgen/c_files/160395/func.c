/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160395
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
    var_10 &= ((/* implicit */signed char) max((var_7), ((+((+(-2631132238666951873LL)))))));
    var_11 = 2631132238666951869LL;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    var_12 += ((/* implicit */unsigned short) arr_1 [i_0]);
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (2916422388703361951LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                }
            } 
        } 
    } 
}
