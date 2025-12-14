/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160796
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
    var_16 = max((var_7), (var_2));
    var_17 = ((/* implicit */long long int) (-(((/* implicit */int) var_14))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_11 [i_3] [(signed char)0] [i_4] &= ((/* implicit */unsigned char) arr_10 [i_0] [i_2 + 1] [i_4 - 2] [i_0] [i_4]);
                                var_18 += var_14;
                            }
                        } 
                    } 
                    arr_12 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)56)) - (((/* implicit */int) (unsigned char)185))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) (signed char)-73))));
                }
            } 
        } 
    } 
}
