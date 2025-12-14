/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142958
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] |= ((long long int) ((((/* implicit */_Bool) 1138934571)) ? (((/* implicit */unsigned long long int) ((int) 1475014244))) : (9850021309915874028ULL)));
                    arr_9 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) 1475014258)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_2] [i_1] [i_4] = ((/* implicit */_Bool) (unsigned short)9657);
                                var_20 = max((((((/* implicit */_Bool) var_5)) ? (5867581691435437571ULL) : (5867581691435437558ULL))), (((/* implicit */unsigned long long int) ((unsigned short) arr_17 [i_0] [i_3 - 2] [i_1] [i_1] [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = var_14;
}
