/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105010
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) arr_1 [i_1]);
                arr_4 [6ULL] [i_0] [i_1] &= ((/* implicit */int) var_0);
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) (unsigned short)22334);
                            arr_9 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-8677433211725802387LL))) * (((/* implicit */long long int) max((arr_8 [i_0] [i_1] [i_1 - 1] [i_0] [i_1 + 1]), (var_6))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 14; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 3) 
        {
            {
                arr_14 [i_5] [(short)12] = ((/* implicit */short) arr_11 [i_4 - 1] [13LL]);
                arr_15 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4 + 1] [i_4 + 1]))) : (12191870012816159362ULL))))) ? (max((((/* implicit */long long int) var_4)), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_12 [i_4 - 2] [i_4] [i_4 - 1]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_8) + (((/* implicit */long long int) ((int) var_4)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))));
    var_15 = ((/* implicit */short) var_5);
}
