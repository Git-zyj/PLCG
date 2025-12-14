/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187829
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
    var_19 = (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)13))))));
    var_20 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                var_21 = (~(((((((/* implicit */_Bool) var_2)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [18U]))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))));
                arr_4 [i_1] = ((/* implicit */_Bool) var_12);
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned char i_3 = 4; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_12 [i_4] [i_3] [i_2] [i_1] [(unsigned short)5])), (var_0)))) ? (((/* implicit */int) (unsigned char)8)) : ((-(((/* implicit */int) arr_8 [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_4 + 3])), (arr_13 [i_0] [i_1] [i_2] [i_2] [i_4 + 3]))))) : ((~(var_5)))));
                                arr_15 [i_1] [i_1] [(short)1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) max((4290772992U), (((/* implicit */unsigned int) var_3)))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_10 [i_0])), (arr_12 [i_0] [i_1 + 1] [i_2] [i_3 - 2] [i_4])))) ? ((~(((/* implicit */int) arr_12 [i_0] [i_1] [(unsigned short)0] [(unsigned short)0] [(unsigned short)0])))) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_2 - 1] [i_4 - 1]))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_10 [i_1])), (arr_8 [i_0])));
            }
        } 
    } 
}
