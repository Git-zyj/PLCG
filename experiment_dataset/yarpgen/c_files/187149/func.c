/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187149
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
    var_12 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_13 = ((5334855492647579590LL) >= (-1LL));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((((/* implicit */long long int) ((/* implicit */int) var_2))) != (arr_1 [i_0]))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1])))))));
            }
        } 
    } 
    var_14 = var_4;
    /* LoopNest 3 */
    for (short i_2 = 3; i_2 < 12; i_2 += 3) 
    {
        for (short i_3 = 2; i_3 < 12; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                {
                    var_15 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) || (((/* implicit */_Bool) arr_8 [i_3 - 1] [i_2 - 3])))))));
                    arr_12 [i_2 + 1] [i_3 + 1] [i_3] &= ((/* implicit */_Bool) (-((+(((/* implicit */int) (short)32741))))));
                }
            } 
        } 
    } 
}
