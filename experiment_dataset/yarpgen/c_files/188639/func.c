/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188639
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
    var_10 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) max((((long long int) var_0)), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0 + 1])) ^ (((/* implicit */int) arr_2 [i_0 + 1] [i_1 + 1])))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */long long int) var_1);
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 12; i_2 += 4) 
    {
        for (unsigned int i_3 = 2; i_3 < 12; i_3 += 2) 
        {
            {
                arr_10 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_3 [i_2 + 2] [i_3 - 2]))) ? (max((((/* implicit */long long int) (signed char)123)), (arr_3 [i_2 - 3] [i_3 + 1]))) : (max((arr_3 [i_2 - 3] [i_3 - 1]), (((/* implicit */long long int) (signed char)-123))))));
                arr_11 [i_3] = ((/* implicit */long long int) var_4);
                arr_12 [i_2] [i_3] = ((/* implicit */_Bool) ((unsigned short) min((arr_3 [i_3 - 2] [i_2 - 1]), (((/* implicit */long long int) var_4)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            {
                arr_18 [i_5] [i_4] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [i_4] [i_4])) : (((/* implicit */int) arr_15 [i_5]))))) ? (min((var_0), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) var_7)))));
                var_13 = ((/* implicit */short) ((long long int) ((unsigned short) 4093566273352325495LL)));
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_5))));
            }
        } 
    } 
}
