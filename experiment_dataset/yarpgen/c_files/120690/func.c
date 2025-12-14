/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120690
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
    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(7696669350431824669ULL))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_12 = ((12033682218492125725ULL) + (12033682218492125725ULL));
                    arr_6 [i_2] [(_Bool)1] [i_0] |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (10750074723277726946ULL)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)0))));
                        var_13 *= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        arr_10 [i_0] [i_1 - 4] [i_1 - 4] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 15584571628746962684ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9111494614335782413ULL)));
                        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))));
                    }
                }
            } 
        } 
    } 
}
