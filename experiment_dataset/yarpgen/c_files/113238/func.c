/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113238
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
    var_12 = var_3;
    var_13 = ((/* implicit */signed char) (~(min((max((((/* implicit */unsigned long long int) (signed char)-60)), (1611454378410994138ULL))), (((/* implicit */unsigned long long int) (signed char)97))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_14 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)127))));
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((unsigned long long int) var_3)), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_9) : (0ULL)))))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_7 [(signed char)9] [i_1] [i_2] [i_3])))) ? (min((arr_10 [i_4] [i_0] [i_2] [i_0] [i_0]), (18446744073709551615ULL))) : (18446744073709551610ULL))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */signed char) var_0);
            }
        } 
    } 
}
