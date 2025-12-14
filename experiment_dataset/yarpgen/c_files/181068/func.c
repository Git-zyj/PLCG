/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181068
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
    var_10 = ((/* implicit */unsigned short) ((unsigned char) max((var_8), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), (var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_5 [(unsigned short)0] [(unsigned char)8] [(unsigned short)0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [(_Bool)1] [i_3] [i_1])) ^ (876007020)))) : (max((758989061U), (((/* implicit */unsigned int) 994070142)))))))))));
                                var_12 = ((/* implicit */unsigned char) (!(((((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_0] [(unsigned char)10])), (arr_5 [i_0] [i_1] [(_Bool)1])))) < (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_10 [i_4] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))))));
                                var_13 = ((/* implicit */signed char) max(((-(((arr_12 [i_0] [i_1] [i_2] [i_1] [i_3] [i_4]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_0] [i_4]))))))), (((/* implicit */unsigned long long int) var_4))));
                                var_14 = ((/* implicit */unsigned short) ((_Bool) (!(arr_2 [i_0]))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 1])) ? (((/* implicit */int) min((arr_6 [i_0] [(short)6] [(short)8] [(short)8]), (arr_2 [i_0])))) : (((/* implicit */int) arr_10 [i_0] [i_0] [(signed char)4])))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
            }
        } 
    } 
}
