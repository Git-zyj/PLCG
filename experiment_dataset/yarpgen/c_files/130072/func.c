/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130072
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((min((arr_5 [i_0] [i_0]), (arr_3 [i_0] [i_1]))) / (((arr_3 [i_0] [i_0]) - (arr_2 [i_0] [i_1]))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_20 = ((/* implicit */long long int) ((4294967295U) ^ (((/* implicit */unsigned int) arr_4 [i_1]))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */int) var_17);
                }
                for (signed char i_3 = 2; i_3 < 19; i_3 += 4) 
                {
                    arr_12 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 + 1]))) : (((/* implicit */int) arr_8 [11] [i_1] [i_3]))));
                    /* LoopNest 2 */
                    for (short i_4 = 2; i_4 < 20; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 2; i_5 < 19; i_5 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)18)), (arr_14 [i_3]))))))), (max((((((/* implicit */int) (short)25804)) + (((/* implicit */int) arr_10 [i_0] [i_1] [i_3] [(unsigned char)10])))), ((+(arr_2 [i_4] [i_1]))))))))));
                                arr_19 [i_4] [i_1] [i_3] [i_0] [17LL] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) ((unsigned char) (signed char)-19)))), (((((/* implicit */_Bool) min((((/* implicit */int) arr_17 [i_0] [(signed char)2] [i_0] [i_0] [i_0])), (arr_4 [13LL])))) ? (((((/* implicit */_Bool) 2097151)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (signed char)127)))) : (((((/* implicit */_Bool) arr_3 [i_0] [(short)1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)4))))))));
                            }
                        } 
                    } 
                }
                var_22 = ((/* implicit */unsigned int) arr_1 [i_0]);
            }
        } 
    } 
    var_23 = var_15;
}
