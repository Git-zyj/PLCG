/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134844
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
    var_15 = ((/* implicit */_Bool) min(((signed char)-14), ((signed char)38)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) arr_1 [i_0]);
                    var_17 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)14)))) / ((+(((/* implicit */int) (signed char)-96)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
                                var_19 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) (signed char)14)) ^ (((/* implicit */int) (signed char)-14)))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_9 [i_0] [4LL] [i_0]) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) arr_10 [i_2 + 2] [i_2 + 3] [i_2 + 2] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (~(262455220)))))) : (max((((/* implicit */long long int) ((_Bool) (signed char)127))), (((((/* implicit */_Bool) arr_6 [i_0] [1U] [i_1] [1U])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3] [i_3])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_7))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_12 [i_5]))));
        var_23 &= ((/* implicit */unsigned short) 18214736389889475593ULL);
    }
}
