/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151701
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_13 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) ((7782143211706563972ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) (!(var_5)))) : (((int) arr_1 [i_1]))))));
                var_14 = ((/* implicit */long long int) max((7782143211706563972ULL), (((/* implicit */unsigned long long int) (signed char)-119))));
                var_15 = ((/* implicit */signed char) (-(max((10664600862002987644ULL), (((/* implicit */unsigned long long int) (unsigned short)18146))))));
                arr_6 [i_0] [i_0] [(short)1] = ((/* implicit */int) arr_2 [i_0] [i_0] [i_1]);
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) min((min((7782143211706563972ULL), (((/* implicit */unsigned long long int) 2275380020754956376LL)))), (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_5 [i_0 - 1]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_1);
}
