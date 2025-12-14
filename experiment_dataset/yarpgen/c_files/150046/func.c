/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150046
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
    var_14 -= ((/* implicit */_Bool) var_7);
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (2689240766U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) == (var_7)));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [(signed char)4] |= ((/* implicit */short) var_11);
                var_16 += ((/* implicit */unsigned short) 160802229811534446ULL);
                var_17 *= ((/* implicit */signed char) arr_0 [i_1]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_3);
    var_19 = max(((unsigned char)181), (((/* implicit */unsigned char) var_4)));
}
