/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119259
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
    var_19 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) * (max((((unsigned long long int) var_7)), (((unsigned long long int) 1016558696U))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) ((((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (5497587178166337314ULL) : (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]))))) % (min((arr_6 [i_2 - 2] [i_2] [i_2 + 1] [i_2 - 3]), (((/* implicit */unsigned long long int) ((2880622499U) - (1048575U))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_11 [i_2] = ((/* implicit */unsigned int) var_0);
                                arr_12 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2] = ((/* implicit */signed char) 597930261517333409ULL);
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 + 1] [i_2] [i_2] [(unsigned short)10])) ? (var_17) : (((/* implicit */unsigned int) arr_7 [i_3] [i_3] [i_3 - 2] [i_3] [i_3] [i_3 - 2]))))) ? (((/* implicit */unsigned long long int) max((arr_7 [i_0] [i_4] [i_2] [i_3 + 1] [i_4] [i_4]), (arr_7 [i_0] [i_0] [i_1] [i_2] [i_3 - 1] [i_4])))) : (max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_3 - 1] [i_2] [i_0] [i_4] [i_4])), (597930261517333409ULL))))))));
                                arr_13 [i_2] = ((/* implicit */unsigned int) (~((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_9 [i_0] [i_1] [i_2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
