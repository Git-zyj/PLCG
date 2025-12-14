/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113803
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_11)))) ? (((((/* implicit */int) var_13)) | (((/* implicit */int) (unsigned short)59184)))) : ((~(((/* implicit */int) var_14))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [(signed char)6] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1])) ? (((((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])) * (((/* implicit */int) arr_5 [4] [4])))) : (((/* implicit */int) max(((unsigned short)6336), ((unsigned short)16220))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 1])) + (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                            arr_15 [i_3] [i_0] [i_2] [(short)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((arr_13 [i_0] [i_1] [(unsigned short)0] [(unsigned short)0] [i_2] [(unsigned short)0]), (((/* implicit */int) arr_3 [i_1] [i_2] [i_1])))), (((/* implicit */int) var_2))))) ? (min((((/* implicit */long long int) max((arr_8 [2ULL] [2ULL] [i_3]), (var_3)))), ((-(arr_11 [i_0]))))) : (min((var_11), (((/* implicit */long long int) ((var_19) ? (((/* implicit */int) (short)-7398)) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))))))));
                            arr_16 [i_0] [i_3] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [(signed char)3] [(signed char)3] [i_2]) ? (((/* implicit */int) min(((signed char)112), (((/* implicit */signed char) arr_10 [(unsigned char)7] [i_2] [i_1] [i_0]))))) : (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))));
    var_22 = ((/* implicit */unsigned short) ((unsigned long long int) 4125543251U));
}
