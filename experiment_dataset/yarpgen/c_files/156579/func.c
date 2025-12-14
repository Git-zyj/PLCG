/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156579
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
    var_18 -= ((/* implicit */long long int) ((unsigned int) max((max((((/* implicit */long long int) (signed char)-85)), (6622882601379414475LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 3173259057U))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4] [i_3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (-(((unsigned long long int) ((int) arr_12 [i_4] [i_3] [i_2] [i_1] [5U])))));
                                var_20 = ((/* implicit */_Bool) (short)-14);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) var_9);
}
