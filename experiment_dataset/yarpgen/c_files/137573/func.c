/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137573
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) (!(((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) 9179786302815945986LL))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_12 [i_4] [i_3] [i_1] [i_1] [i_1] [21LL] = ((/* implicit */signed char) var_13);
                                arr_13 [8] &= var_14;
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_4 [i_0] [i_1 - 1] [i_3 - 1] [i_3]), (((/* implicit */short) arr_9 [i_1] [i_2 + 2])))))));
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((unsigned int) (short)4661)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))), ((+(var_2)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 11; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            for (int i_7 = 1; i_7 < 13; i_7 += 2) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) min((((/* implicit */short) var_15)), ((short)4688))))))) ? (((((/* implicit */_Bool) ((int) 484994873))) ? (max((var_4), (arr_8 [13LL] [i_6]))) : (((/* implicit */int) (!(((/* implicit */_Bool) -484994874))))))) : (((((/* implicit */_Bool) min((arr_3 [i_5] [5U]), (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) 2581901084U)) ? (var_3) : (((/* implicit */int) var_5)))) : (-484994882)))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) arr_8 [i_5] [i_6])) ? (6965021607690085118ULL) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6] [i_6] [i_6] [i_5 - 2]))))))));
                    arr_21 [i_6] = ((/* implicit */unsigned int) var_14);
                }
            } 
        } 
    } 
}
