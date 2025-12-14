/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146122
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
    var_19 = ((2059167902513722702LL) / (-580879200433336167LL));
    var_20 = ((/* implicit */_Bool) min((var_20), ((_Bool)1)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((((/* implicit */long long int) (_Bool)1)), (7892741243521577418LL))))));
                arr_8 [i_0] [16LL] [9] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (-1641671814)))), (max((((/* implicit */int) min(((_Bool)1), (var_7)))), (((((/* implicit */_Bool) 7892741243521577442LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 3; i_4 < 13; i_4 += 2) 
            {
                {
                    var_22 = ((/* implicit */int) var_18);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_5 = 1; i_5 < 14; i_5 += 2) 
                    {
                        arr_18 [i_4] [9LL] [12] [i_5 + 1] = ((arr_14 [i_5 + 2] [(signed char)5] [i_4 - 3] [i_5 + 1]) || (((/* implicit */_Bool) var_2)));
                        arr_19 [i_4] [i_3] [i_4 - 3] [i_5 + 1] [i_5] = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */int) arr_14 [i_2] [i_3] [i_4 + 1] [i_4 + 3])) : (((/* implicit */int) arr_16 [i_5 + 1] [15LL] [i_5 + 2] [i_5]))));
                        var_23 = ((/* implicit */long long int) ((-1641671835) | (1641671809)));
                    }
                    arr_20 [i_4] = ((/* implicit */_Bool) arr_7 [i_2] [i_3] [i_4]);
                }
            } 
        } 
    } 
}
