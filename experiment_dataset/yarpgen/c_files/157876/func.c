/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157876
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
    for (int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) max((var_12), (((((/* implicit */_Bool) min((arr_2 [i_1 - 1]), (arr_2 [i_1 - 2])))) ? ((+(arr_2 [i_1 + 1]))) : (((/* implicit */long long int) (-(arr_3 [0]))))))));
                                var_13 += ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) % (((/* implicit */int) max(((short)-2013), (((/* implicit */short) (signed char)19)))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */int) min((var_14), (arr_13 [i_0] [i_0] [i_0] [6U] [i_2] [i_2 + 1])));
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2 + 2] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 + 1] [i_1] [i_1 + 1]))))) : (((((/* implicit */int) arr_11 [i_2 + 2] [i_0] [i_0] [i_1])) * (((/* implicit */int) (!(var_6))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_1);
}
