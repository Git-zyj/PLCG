/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163507
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    var_17 &= ((/* implicit */unsigned int) (_Bool)1);
                    var_18 = ((/* implicit */unsigned char) ((unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_13 [i_3 - 1] [(unsigned char)8] = ((/* implicit */unsigned char) ((unsigned int) 1122268582U));
                arr_14 [i_3] [i_4] &= ((/* implicit */_Bool) (unsigned char)232);
                arr_15 [i_4] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_15)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                arr_16 [i_3 - 1] [i_3] = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
            }
        } 
    } 
}
