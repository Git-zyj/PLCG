/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172222
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
    var_12 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 |= ((/* implicit */unsigned long long int) min(((_Bool)0), ((_Bool)1)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))));
                                var_15 += ((/* implicit */_Bool) min(((signed char)122), (((/* implicit */signed char) (_Bool)1))));
                                arr_12 [i_3] [i_1] [i_1] [(signed char)6] [i_4 - 1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) ((var_7) / (((/* implicit */unsigned int) arr_11 [i_0] [i_0])))))) <= (((/* implicit */int) (!((_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) var_9);
}
