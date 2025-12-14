/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115261
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
    var_12 -= ((/* implicit */signed char) max((var_8), (((((((/* implicit */_Bool) var_2)) ? (var_8) : (var_6))) ^ (((((/* implicit */_Bool) var_10)) ? (var_8) : (var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((1453359082983838824ULL) - (16993384990725712792ULL)));
                arr_6 [i_1] [i_0 - 1] &= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)142))));
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) arr_0 [i_1]))));
            }
        } 
    } 
    var_14 = var_10;
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (unsigned int i_3 = 3; i_3 < 12; i_3 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned int) arr_4 [i_3] [i_3] [i_3]);
                arr_13 [i_2] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(2049011981U)))))))));
            }
        } 
    } 
}
