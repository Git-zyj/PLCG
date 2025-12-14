/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18861
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
    var_17 = var_0;
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_9 [i_1 + 4] [i_0] [i_1 + 4] [i_1] = ((/* implicit */unsigned long long int) min((min((var_8), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) min((arr_6 [i_0 - 1]), (arr_6 [i_0 - 1]))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((arr_4 [i_0]), (((/* implicit */signed char) (_Bool)1))))), (min((((/* implicit */long long int) var_3)), (arr_10 [i_2 - 1] [i_0] [i_2 + 1] [i_2 + 1])))));
                        arr_12 [i_0] [i_0] [2] [i_3] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) var_7)), (arr_10 [i_2 + 1] [i_0] [i_2 - 1] [i_2 + 1]))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)249)), (92768792U))))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min(((unsigned short)6959), (((/* implicit */unsigned short) (_Bool)1)))))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) var_5);
}
