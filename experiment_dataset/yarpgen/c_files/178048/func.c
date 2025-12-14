/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178048
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 = max((var_1), (((/* implicit */int) ((arr_2 [i_0] [i_1]) == (((/* implicit */long long int) ((unsigned int) (signed char)89)))))));
                var_15 = ((/* implicit */long long int) var_10);
                var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-4471))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            {
                arr_15 [i_2] [i_2] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3]))) == (min((12458743753471162962ULL), (((/* implicit */unsigned long long int) (short)-4471)))))))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_13 [i_2])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) (short)-4471)))), (((/* implicit */int) arr_9 [i_2])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_0);
}
