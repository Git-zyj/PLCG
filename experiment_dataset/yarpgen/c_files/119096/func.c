/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119096
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
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) var_6);
                arr_6 [(unsigned short)11] [i_0] = ((/* implicit */unsigned char) max((arr_3 [i_0 - 3] [i_0]), (arr_3 [(unsigned short)12] [i_1])));
                var_15 = 4169850214U;
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
                            arr_13 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)20294)) | (1087027763)))) ? (((int) arr_9 [i_2 + 1] [i_2] [i_2 + 3])) : (arr_10 [i_0] [i_0 - 2] [i_2] [i_2 + 3] [i_2] [i_3])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (min((((/* implicit */long long int) min((311933334U), (((/* implicit */unsigned int) (signed char)-123))))), (((((/* implicit */_Bool) 3931798069U)) ? (var_11) : (((/* implicit */long long int) -2092521337))))))));
    var_18 = (-((+(var_10))));
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_12))));
}
