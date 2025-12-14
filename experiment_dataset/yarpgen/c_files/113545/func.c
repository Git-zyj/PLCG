/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113545
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_13)))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((unsigned long long int) var_9))))))));
    var_15 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_0))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [6ULL] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [9ULL] [i_1 - 1] [i_2]))) < (min((arr_5 [i_0]), (arr_5 [i_0])))))), (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1]))) & (((long long int) var_7))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((short) var_0));
                                var_17 = ((/* implicit */signed char) var_9);
                                var_18 = ((/* implicit */short) min((arr_5 [i_2]), (((/* implicit */long long int) min((min((arr_11 [(short)8] [(short)8] [(short)9] [(short)8]), (var_8))), (arr_11 [i_0] [i_1 - 1] [i_2] [i_0]))))));
                                var_19 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [4LL] [i_0]);
                                arr_17 [i_0] [i_4] [i_0] [i_3] [(short)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((long long int) var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (max((((/* implicit */long long int) min((arr_2 [i_0]), (((/* implicit */short) var_7))))), (max((arr_5 [i_4]), (((/* implicit */long long int) arr_6 [i_3]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
