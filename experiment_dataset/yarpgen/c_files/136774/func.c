/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136774
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_1 + 2] [i_1] [i_1] [i_1] [i_1 - 2] [i_1 + 4] [i_1])))))));
                                var_18 = ((/* implicit */unsigned int) max((((/* implicit */signed char) min((arr_3 [i_1 + 3] [i_3 + 1] [i_3 - 1]), (arr_3 [i_1 - 2] [i_3 - 1] [i_3 + 1])))), (((signed char) arr_3 [i_1 - 2] [i_3 + 1] [i_3 + 1]))));
                            }
                        } 
                    } 
                } 
                var_19 -= ((/* implicit */_Bool) ((unsigned long long int) 8784586769417314631LL));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_13);
}
