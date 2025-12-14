/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164732
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */_Bool) arr_4 [i_0] [i_1 - 2]);
                var_13 = ((/* implicit */short) (unsigned short)16935);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            {
                var_14 &= ((/* implicit */unsigned long long int) (+(min((max((((/* implicit */long long int) var_9)), (-2826259210698041134LL))), (((/* implicit */long long int) var_8))))));
                var_15 = ((-9093956103908786817LL) + (((((/* implicit */_Bool) ((9093956103908786819LL) + (-9093956103908786817LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_2] [i_3]))))) : (-9093956103908786817LL))));
                arr_12 [i_2] [i_2] [i_2] = (~(((/* implicit */int) min((((/* implicit */short) arr_10 [i_2] [i_2] [i_3])), ((short)21913)))));
                arr_13 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_9)), ((signed char)19)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((max((((/* implicit */long long int) var_1)), (var_5))) - (11665LL)))))) : ((~(9093956103908786803LL)))));
            }
        } 
    } 
}
