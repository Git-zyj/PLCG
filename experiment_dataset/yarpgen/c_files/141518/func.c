/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141518
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
    var_16 -= ((/* implicit */unsigned int) (-(10537143936583008909ULL)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (-(var_5)))) && (((2149025242U) < (((/* implicit */unsigned int) 1893127612)))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) min((((unsigned int) arr_3 [i_0 + 1])), (((/* implicit */unsigned int) (!(var_15))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((unsigned int) min((var_8), (arr_7 [i_2] [i_2]))));
                arr_10 [i_2] [i_3] = ((/* implicit */unsigned short) max((arr_8 [12U] [12U] [12U]), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_2] [i_3])))))));
                var_19 &= ((/* implicit */unsigned int) (!(((_Bool) ((arr_0 [i_2] [i_3]) ? (((/* implicit */unsigned long long int) 2149025242U)) : (arr_3 [i_3]))))));
            }
        } 
    } 
}
