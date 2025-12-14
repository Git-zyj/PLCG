/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108754
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
    var_15 = ((/* implicit */short) 4840956793974242238ULL);
    var_16 = ((/* implicit */unsigned short) var_3);
    var_17 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_1 - 1] [i_0] [i_0 + 2] = ((/* implicit */unsigned int) (unsigned char)1);
                var_18 = ((/* implicit */long long int) 72057594037927935ULL);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_19 -= ((/* implicit */long long int) (unsigned char)92);
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (signed char)7))));
                                var_21 = ((/* implicit */unsigned char) 534768879483919751ULL);
                                arr_14 [(_Bool)1] [i_1 + 1] [i_2] [i_3] [i_1 - 2] = ((/* implicit */short) 10658220381271760202ULL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
