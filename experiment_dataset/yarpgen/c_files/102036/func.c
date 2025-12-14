/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102036
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
    var_18 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) ((var_16) ^ (((/* implicit */int) var_0))))), (var_14))), (((/* implicit */long long int) var_7))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1] = ((/* implicit */_Bool) (+(min((arr_7 [i_0] [i_1] [i_3 - 1] [i_3 - 1]), (arr_7 [(_Bool)1] [i_1] [i_3 + 2] [(short)6])))));
                            arr_11 [i_1] = ((/* implicit */int) arr_5 [i_3] [i_2] [1ULL] [1ULL]);
                            arr_12 [i_0] [i_1] = ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (18015314696992090417ULL))), (((/* implicit */unsigned long long int) ((var_3) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3]))))))))) || (((/* implicit */_Bool) (short)-495)));
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) var_16);
                arr_13 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0])) < (((/* implicit */int) (short)-497))))), (((((var_7) + (2147483647))) >> (((var_4) + (690324995)))))))));
                arr_14 [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) min(((~(((/* implicit */int) arr_2 [i_0] [i_1])))), (((/* implicit */int) (_Bool)1))))), (max((arr_3 [i_1]), (arr_3 [i_1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((min((var_16), (max((var_7), (var_4))))) + (2147483647))) >> (((((/* implicit */int) var_1)) + (3124)))));
}
