/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176687
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
    var_12 = ((/* implicit */int) var_8);
    var_13 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */int) (unsigned char)57)) & (((/* implicit */int) (unsigned short)2040))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [(unsigned short)15] = ((/* implicit */unsigned short) ((((var_5) - (((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_3]))))) + (((((/* implicit */unsigned long long int) arr_3 [i_1])) - (var_2)))))));
                            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((max((((((/* implicit */unsigned long long int) var_7)) ^ (10376437892203972034ULL))), (((/* implicit */unsigned long long int) arr_4 [i_0])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                            arr_11 [(unsigned char)0] [i_1] [i_2] [i_1 - 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [(unsigned short)5] [i_1])) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        }
                    } 
                } 
                arr_12 [i_0 + 1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(_Bool)1] [i_0 + 2] [i_1])))))));
            }
        } 
    } 
}
