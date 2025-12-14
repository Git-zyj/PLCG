/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102589
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((1424121303) % (1424121312)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1424121303)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1424121303)) ? (arr_7 [i_1] [14U] [i_1 + 1]) : (arr_7 [i_1] [i_1] [i_1 + 3]))))));
                                var_15 = ((/* implicit */unsigned char) (~((~(max((((/* implicit */unsigned int) var_10)), (arr_10 [i_0] [i_0] [(unsigned char)8] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_7);
}
