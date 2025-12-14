/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141257
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_2 [i_1 - 2])))) ? ((+(((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 3])))) : (((/* implicit */int) var_0))));
                    arr_11 [i_0] [i_1 + 1] [i_1] [i_1] = ((/* implicit */unsigned int) var_8);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        arr_16 [i_2] = ((/* implicit */unsigned char) var_7);
                        arr_17 [i_0] [i_1 - 4] [i_1] [i_1 - 4] [i_1] = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_3]);
                        arr_18 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) max((arr_13 [i_0] [i_1] [i_2] [5LL] [i_2]), (((/* implicit */long long int) var_2))));
                        arr_19 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 - 4] [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_1 - 4] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_5 [i_1 - 4] [i_1 - 4] [i_1 - 3]))))));
                        arr_20 [i_0] [i_1] = ((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0]);
                    }
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_7))) ? (max((((unsigned int) var_0)), ((-(var_13))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_12))))))))));
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)-33)), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)960))) + (var_4))) * (((/* implicit */unsigned long long int) var_9))))));
}
