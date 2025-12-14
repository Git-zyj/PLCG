/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171436
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
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 323010998))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_1 [i_0])), (((unsigned int) arr_5 [i_1 + 3] [i_1 - 1] [i_1 + 2]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                arr_14 [i_2 - 1] [i_3] [i_2] = ((/* implicit */long long int) min((arr_12 [(unsigned char)8] [i_3]), (((/* implicit */int) (_Bool)1))));
                var_16 -= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_3])), (var_5)))))));
            }
        } 
    } 
}
