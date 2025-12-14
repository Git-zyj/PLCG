/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155191
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
    var_13 = ((/* implicit */int) (~((+(min((((/* implicit */unsigned int) var_5)), (374951192U)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [7LL] = ((/* implicit */_Bool) min((min((arr_0 [i_1] [i_0]), (((/* implicit */unsigned int) var_12)))), (((arr_1 [i_1 - 1] [i_1]) ? (374951188U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 2] [(_Bool)1])))))));
                    var_14 *= ((/* implicit */long long int) arr_3 [i_0] [(unsigned char)0] [i_2]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) 3008488136780973596ULL))));
}
