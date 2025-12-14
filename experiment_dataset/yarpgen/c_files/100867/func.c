/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100867
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
    var_15 = ((/* implicit */unsigned long long int) (short)729);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] [5] = min((((/* implicit */int) (signed char)11)), (((((/* implicit */int) (signed char)-15)) + (((/* implicit */int) (short)-718)))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */short) (-(5794303440170285141LL)));
                                var_17 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (signed char)7)), (14ULL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 |= ((/* implicit */unsigned long long int) 2080374784);
}
