/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115383
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
    for (short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) var_1);
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (short)-11986)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)0)))) + (2147483647))) >> (((((/* implicit */int) min((((/* implicit */short) var_3)), (var_1)))) + (24923)))));
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) max((14839648910493268763ULL), (max((var_5), (((/* implicit */unsigned long long int) (unsigned short)17680))))));
}
