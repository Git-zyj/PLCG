/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139888
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [0LL] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1])) || (((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 3])))))));
                    arr_9 [i_1] [i_1] [i_1] |= ((unsigned char) var_1);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 2; i_3 < 13; i_3 += 1) 
    {
        for (unsigned int i_4 = 2; i_4 < 12; i_4 += 3) 
        {
            {
                var_12 = ((/* implicit */short) arr_1 [i_3]);
                var_13 ^= ((/* implicit */unsigned char) ((_Bool) ((int) arr_3 [i_4] [i_3 + 2])));
                var_14 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_11 [i_3 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20600)) ? (1350125082) : (1350125082))))))) : (((/* implicit */int) arr_12 [i_4 + 3]))));
            }
        } 
    } 
}
