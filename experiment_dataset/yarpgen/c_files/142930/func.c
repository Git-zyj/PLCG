/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142930
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) var_1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((var_0) >= (((2707154571857087753LL) & ((~(var_0))))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_13 &= arr_6 [8U];
                            arr_8 [i_0] [i_0] = ((/* implicit */signed char) (~((~(((/* implicit */int) (unsigned short)62132))))));
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) arr_7 [6ULL] [6ULL] [i_1] [i_2] [i_3]))));
                            arr_9 [(short)20] [i_2] [i_1] [(short)20] |= ((/* implicit */signed char) arr_3 [(unsigned short)18] [i_2]);
                        }
                    } 
                } 
            }
        } 
    } 
}
