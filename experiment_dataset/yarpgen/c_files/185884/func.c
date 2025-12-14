/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185884
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) var_7))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)45985)), (268435456U)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_16 [4] [i_3] [i_2] = ((/* implicit */unsigned int) min(((~((+(arr_14 [i_3] [i_3] [i_3] [i_3] [i_3 - 4]))))), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1]))));
                                var_13 = ((/* implicit */_Bool) var_0);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */int) (unsigned char)165)) <= (((/* implicit */int) ((min((arr_6 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned long long int) var_8)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1])))))))))));
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) arr_3 [i_0 - 1] [i_2])))) : (((/* implicit */int) arr_5 [i_0] [i_2]))));
                }
            } 
        } 
    } 
}
