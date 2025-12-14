/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166478
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_1 - 2] [i_1] [i_2] [(short)12] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) << ((((+(((/* implicit */int) arr_4 [i_1 - 2] [i_1 + 1])))) + (92)))));
                            arr_12 [i_2] = ((/* implicit */signed char) max((((/* implicit */int) (signed char)28)), ((-(((/* implicit */int) arr_10 [i_2] [i_0 + 1] [i_2] [i_0 + 1] [i_3 + 2] [i_3]))))));
                            arr_13 [(signed char)4] [(signed char)4] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_3 - 1] [i_3] [i_1 - 1] [(signed char)20]))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-34))))) : (((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_3 + 1] [i_3 + 2])) ? (arr_7 [i_0] [i_2] [i_3 + 2] [i_2]) : (arr_7 [i_0] [i_2] [i_3 + 2] [i_3 + 2])))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0]);
                arr_15 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned long long int) var_3);
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_11);
}
