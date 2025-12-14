/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124503
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
    var_17 = ((/* implicit */_Bool) ((short) 923097607U));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) arr_3 [i_1] [i_0]);
                var_19 ^= ((/* implicit */unsigned int) arr_2 [i_0]);
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) ((_Bool) (signed char)83)))))));
                                var_21 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0]))))));
                            }
                        } 
                    } 
                } 
                var_22 -= ((/* implicit */_Bool) ((unsigned char) arr_6 [i_1] [i_0] [i_0] [i_0]));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((((/* implicit */long long int) 865298765U)), (-7237134617506284573LL)));
}
