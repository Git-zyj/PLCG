/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135866
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)35942)) == (((/* implicit */int) max(((unsigned short)4927), (((unsigned short) (unsigned short)18812)))))));
                    arr_9 [i_2] [i_0] [i_0] = (unsigned short)4673;
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)4120)))))));
                        var_17 = max((((unsigned short) var_0)), (arr_5 [i_2 + 1] [i_2 + 1]));
                    }
                    arr_12 [i_0] [i_2] [i_2] [i_2] = (unsigned short)21997;
                }
            } 
        } 
    } 
    var_18 ^= var_12;
}
