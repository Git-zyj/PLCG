/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104333
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
    var_20 = ((/* implicit */unsigned int) ((short) var_17));
    var_21 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_22 &= ((/* implicit */unsigned long long int) (short)27910);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_23 |= ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_1 - 1]))));
                        var_24 = ((/* implicit */unsigned char) var_3);
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_25 -= ((/* implicit */_Bool) ((unsigned int) arr_7 [i_0] [i_0 - 1] [i_0]));
                        var_26 = ((/* implicit */signed char) ((int) ((unsigned int) (_Bool)0)));
                    }
                }
            } 
        } 
    } 
}
