/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100284
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
    var_18 = var_1;
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_3 [i_0 - 1]))) ? (arr_1 [11ULL]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0 + 1] [i_1])))))));
                var_20 |= ((/* implicit */long long int) ((((((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) (signed char)-101)), (111447065U))))) + (2147483647))) << (((4183520228U) - (4183520228U)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 3) 
        {
            {
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) 4183520215U))));
                var_22 = ((/* implicit */long long int) max((max((3015784841U), (((/* implicit */unsigned int) -673462387)))), (((/* implicit */unsigned int) var_12))));
            }
        } 
    } 
}
