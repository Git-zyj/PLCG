/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182942
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) var_9))));
    var_12 -= ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
    var_13 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-24236)))) : (((/* implicit */int) var_6))))) ? (9676253755891704778ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    var_14 = ((/* implicit */signed char) (_Bool)0);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) var_6);
                                arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] [15LL] [3U] &= ((/* implicit */int) arr_5 [(short)7] [(short)7] [i_1]);
                            }
                        } 
                    } 
                    arr_12 [i_2] [7U] [(signed char)17] [i_0] &= arr_8 [i_2] [i_1] [i_1] [18U] [i_0];
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_0 [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [(short)18] [i_1] [i_2])))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [11] [i_2]))));
                }
            } 
        } 
    } 
}
