/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170333
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_18 |= ((/* implicit */unsigned long long int) ((unsigned int) min((-1950675195), (((/* implicit */int) (unsigned char)55)))));
                var_19 = min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (short)-27292))))), (max((arr_1 [i_0]), (arr_2 [i_0]))));
            }
        } 
    } 
    var_20 -= min((var_12), (((var_8) - (((unsigned long long int) (unsigned char)108)))));
    var_21 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) < (min((0ULL), (((/* implicit */unsigned long long int) var_17))))))) < (((/* implicit */int) var_13))));
}
