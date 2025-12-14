/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173319
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 1])))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_1 - 1] [i_2 + 1] [i_3]), (((/* implicit */short) arr_7 [i_0] [i_1] [i_2 - 1] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_14)))) : (arr_6 [i_2] [i_0] [i_2] [i_2])))), ((+(arr_1 [i_0]))))))));
                            var_22 = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) 3932160)), (8118350324874693456ULL)))));
                            var_23 = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((max((max((((/* implicit */long long int) arr_2 [i_1])), (var_9))), (((/* implicit */long long int) (+(arr_5 [i_3] [i_1] [i_2] [i_3])))))) << ((((+(((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_2] [i_1])), ((unsigned short)4306)))))) - (172)))))) : (((/* implicit */unsigned short) ((max((max((((/* implicit */long long int) arr_2 [i_1])), (var_9))), (((/* implicit */long long int) (+(arr_5 [i_3] [i_1] [i_2] [i_3])))))) << ((((((((+(((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_2] [i_1])), ((unsigned short)4306)))))) - (172))) + (62))) - (37))))));
                            arr_9 [i_0] [i_1 - 1] [i_2] [i_1] = ((/* implicit */unsigned char) max((arr_6 [i_0] [i_1] [i_1] [i_2 + 1]), (((arr_6 [i_1 + 1] [i_1] [i_1 + 1] [i_2 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)87)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */short) var_11);
}
