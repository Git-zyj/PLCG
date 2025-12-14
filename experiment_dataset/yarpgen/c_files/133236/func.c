/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133236
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
    var_13 = ((/* implicit */signed char) min((max((((/* implicit */long long int) var_5)), (var_1))), (((9223372036854775807LL) << (((((((/* implicit */int) (unsigned short)25941)) + (((/* implicit */int) var_5)))) - (26013)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned short) (!(((((/* implicit */long long int) 8323072)) < (arr_6 [i_0] [(short)1])))));
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 878392432)) ? (((/* implicit */unsigned int) 8323072)) : (4233461964U)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_17 [i_3] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) arr_12 [i_0] [i_3] [i_3] [i_4])))));
                                arr_18 [(unsigned short)3] [(signed char)3] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(_Bool)1] [4LL] [i_1] [i_0]))))) <= (((/* implicit */int) arr_9 [(signed char)9] [(unsigned char)6] [i_1] [i_0])))) ? ((-(((((/* implicit */_Bool) 878392432)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) <= (0))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (var_1)))) || (((/* implicit */_Bool) var_8)))));
            }
        } 
    } 
}
