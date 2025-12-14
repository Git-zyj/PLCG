/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102316
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_2] = ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */int) arr_2 [i_0])) : (var_3))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(signed char)5] [(signed char)5] [(signed char)5] [i_2])))))))));
                    arr_8 [i_2] [i_1] [i_1] [i_2] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 576460752303423232LL)) ? (((/* implicit */int) var_9)) : ((((_Bool)0) ? (-953245828) : (((/* implicit */int) (short)0))))))) ^ (((11097120963218977671ULL) << (((((/* implicit */int) arr_3 [i_2 + 4] [i_2 + 3] [i_2])) - (48))))));
                    arr_9 [i_2] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (7349623110490573944ULL) : (7349623110490573945ULL)))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16)))) : (((((/* implicit */int) var_12)) + (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (_Bool)0))));
    var_20 = ((/* implicit */signed char) ((var_7) & (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        for (short i_4 = 2; i_4 < 10; i_4 += 4) 
        {
            {
                var_21 = ((/* implicit */long long int) var_10);
                var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((((!(((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3])))) ? (7349623110490573944ULL) : ((-(7349623110490573945ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_3] [15ULL])))));
                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_4 - 1] [i_4] [i_4 - 2]))) / (7349623110490573944ULL))))));
            }
        } 
    } 
}
