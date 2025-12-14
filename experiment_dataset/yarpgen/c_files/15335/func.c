/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15335
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
    var_19 = ((/* implicit */int) var_2);
    var_20 += ((/* implicit */int) min(((~(max((((/* implicit */long long int) -1191086297)), (1895503801420636657LL))))), (((/* implicit */long long int) (signed char)31))));
    var_21 = ((/* implicit */int) min((var_21), (var_6)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((((/* implicit */_Bool) arr_2 [i_2] [(_Bool)1])) ? (((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251)))))) ? (arr_6 [i_0] [13]) : (((/* implicit */long long int) arr_1 [i_1 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_2])))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_23 -= ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]);
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((/* implicit */_Bool) max((arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_2 [i_1] [3])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_18 [i_2] [i_2] |= ((/* implicit */_Bool) ((((var_3) ? ((+(arr_2 [i_2] [i_2]))) : (((/* implicit */unsigned int) arr_12 [i_0] [i_2] [i_2] [(signed char)4] [i_6])))) ^ (var_2)));
                                var_25 *= ((var_15) < ((+(arr_10 [i_2]))));
                                arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_5] [11U] [i_6]))) ^ (-4743758636080412714LL))) : ((+(2055601525563505349LL)))))) ? (((/* implicit */long long int) arr_2 [i_1] [i_5])) : (6733406926278157694LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 |= ((/* implicit */unsigned int) (~(var_15)));
}
