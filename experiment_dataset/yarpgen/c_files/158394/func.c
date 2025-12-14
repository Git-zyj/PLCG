/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158394
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
    var_13 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_3] [i_0] [i_0] = ((/* implicit */short) ((unsigned short) arr_7 [i_0 + 1] [i_1] [i_3 - 1] [i_3]));
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 1290541359U))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_3] [i_0 + 1] [i_0 + 1] [i_3]))))) : ((~(((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_2] [i_3] [i_0])) ? (arr_3 [i_2] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2745)))))))));
                                arr_13 [i_3] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */short) max((var_10), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3]))) : (arr_4 [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((unsigned int) arr_3 [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    var_15 = max((max((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_2]))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (arr_4 [i_0] [i_0]))))));
                }
            } 
        } 
    } 
}
