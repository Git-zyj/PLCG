/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182504
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
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_5 [i_1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 3])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 4])) : (((/* implicit */int) min(((signed char)-62), ((signed char)-123))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 12; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_15 = ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? ((-(((/* implicit */int) arr_3 [i_0] [i_0])))) : (((/* implicit */int) (signed char)-125)))) / ((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0])))))));
                            var_16 = ((((/* implicit */_Bool) arr_2 [i_2] [i_0])) ? ((-(((/* implicit */int) arr_9 [i_3] [i_0 - 1] [i_0 - 1])))) : (((/* implicit */int) max((arr_3 [i_0 - 2] [i_2 + 1]), (arr_3 [i_0 - 1] [i_2 + 2])))));
                            arr_13 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) arr_4 [i_0]);
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_11 [i_0 - 2])) ? (((/* implicit */int) arr_11 [i_0 - 1])) : (((/* implicit */int) arr_11 [i_0 - 4])))));
            }
        } 
    } 
    var_17 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(var_4)))), (max((((/* implicit */unsigned long long int) max((var_9), ((_Bool)1)))), (((var_5) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
}
