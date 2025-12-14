/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152387
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (+((-(4155838466384489759ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [10])))))) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (4155838466384489747ULL))))) ^ (min((arr_3 [5] [(_Bool)1]), (((/* implicit */long long int) arr_2 [i_0] [3ULL] [i_1]))))))));
                arr_4 [i_0] [20ULL] [(signed char)4] = ((/* implicit */int) 1861719963743250106ULL);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 18; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) max(((+(((arr_2 [1ULL] [22] [23LL]) ^ (-1))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [4] [i_3])) ? (((/* implicit */unsigned long long int) arr_11 [(signed char)19] [i_4] [5LL] [i_2])) : (arr_9 [i_2] [i_2] [i_3])))) ? ((-(((/* implicit */int) (_Bool)1)))) : (max((var_4), (arr_2 [22] [i_4] [i_3])))))));
                            var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) arr_7 [i_2 - 1] [i_3])) : (arr_10 [i_2] [17LL] [i_5 + 1]))))));
                        }
                    } 
                } 
                arr_14 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [7] [i_3] [i_3 + 2])))))));
                var_17 = ((/* implicit */int) (+(((var_1) / (max((arr_9 [8ULL] [i_3] [i_3]), (((/* implicit */unsigned long long int) var_0))))))));
                var_18 = ((arr_0 [i_2] [i_2]) >> (((min((arr_9 [i_2 - 1] [(_Bool)1] [(signed char)4]), (((/* implicit */unsigned long long int) arr_5 [i_3 + 3] [(signed char)13])))) - (8890901958247438876ULL))));
            }
        } 
    } 
}
