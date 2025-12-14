/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184113
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) min((min((arr_1 [i_0]), (arr_1 [i_0]))), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (34359738367ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)153))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_15), (((/* implicit */unsigned short) var_7)))))))))));
                    var_18 = ((/* implicit */short) min((((arr_2 [i_0] [i_1]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) ((((/* implicit */int) min((arr_0 [i_2]), (arr_0 [i_1])))) > (((/* implicit */int) arr_4 [i_1] [i_0])))))));
                }
            } 
        } 
    } 
    var_19 ^= ((/* implicit */unsigned int) var_1);
}
