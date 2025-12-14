/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131803
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (1561641834360690094ULL)))));
                                arr_10 [i_4] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) & (((((/* implicit */_Bool) max((var_5), (265621992)))) ? (((((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_4])) - (arr_2 [i_0] [i_0] [i_0]))) : (arr_2 [i_4] [i_1] [i_2])))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */int) (signed char)64);
            }
        } 
    } 
    var_18 = -231073857;
}
