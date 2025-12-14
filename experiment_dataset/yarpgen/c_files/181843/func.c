/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181843
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((int) (signed char)-30)) : (((/* implicit */int) min((var_5), (var_12))))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28489))) | (var_6))) | (((/* implicit */unsigned long long int) ((var_18) >> (((((/* implicit */int) var_12)) - (77)))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)115)), (var_8)))) ? (max((17355589489250951836ULL), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (((/* implicit */short) (signed char)-83))))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_21 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_4 [i_0 - 2] [i_1])), (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned int) arr_0 [(signed char)6]))))) : ((~(2100802898191367702ULL)))))));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (short)-9875))));
            }
        } 
    } 
    var_23 += ((/* implicit */unsigned int) ((_Bool) 2100802898191367708ULL));
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    arr_15 [i_4] [i_4] [i_4] = arr_7 [i_4] [i_2];
                    var_24 = ((/* implicit */signed char) (~(((arr_4 [i_2] [i_3]) ^ (arr_4 [i_2] [i_4])))));
                }
            } 
        } 
    } 
}
