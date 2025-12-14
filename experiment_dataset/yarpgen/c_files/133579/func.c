/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133579
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */signed char) (+(((var_10) + ((+(2925034935U)))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-95)) && (((/* implicit */_Bool) arr_6 [i_2 + 1] [(signed char)10] [i_0]))))), (min((2925034961U), (var_10)))))));
                    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1])) + ((+(((/* implicit */int) (signed char)-125))))))) & (var_5)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            {
                arr_15 [i_3] |= max((((/* implicit */signed char) ((3312789690U) != (min((((/* implicit */unsigned int) arr_12 [i_3] [i_4])), (var_2)))))), (arr_11 [i_4]));
                var_12 = ((/* implicit */_Bool) 1369932334U);
            }
        } 
    } 
}
