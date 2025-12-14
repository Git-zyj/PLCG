/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166248
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) max((var_15), ((~((((~(var_12))) & (((/* implicit */long long int) (~(var_6))))))))));
                var_16 |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21))) - (((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (unsigned char i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) var_4);
                var_18 -= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (var_3)))))))));
                arr_12 [(signed char)2] [(signed char)3] [i_2] = (+(min((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))) + (-3396589192817140632LL))), (-8663564401154186941LL))));
            }
        } 
    } 
    var_19 = var_12;
}
