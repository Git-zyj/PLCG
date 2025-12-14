/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112776
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */long long int) var_8);
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                var_19 += ((/* implicit */unsigned short) 268435448U);
                var_20 = ((/* implicit */_Bool) min((var_20), ((!(((/* implicit */_Bool) (+(arr_10 [i_2]))))))));
                var_21 = max((var_9), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0)))), (min((((/* implicit */int) arr_8 [(signed char)5])), (-1)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_6);
}
