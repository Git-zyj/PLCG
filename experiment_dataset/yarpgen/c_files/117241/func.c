/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117241
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((var_6) + (var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_10)))))))) : (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4)))) + (((long long int) var_13))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) (short)-25374)) ? (-2121992055) : (((/* implicit */int) (short)25374)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_1] [i_1 - 1]))))));
                            arr_12 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) (+(min((((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])), (var_7)))));
                            arr_13 [i_1] = ((/* implicit */unsigned int) min(((+(4ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_16))))))))));
                            arr_14 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) 3U);
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] [6LL] = ((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1]);
            }
        } 
    } 
}
