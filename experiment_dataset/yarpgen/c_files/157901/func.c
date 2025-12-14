/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157901
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
    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)))) & (max((var_1), (((/* implicit */int) var_11))))));
    var_20 += ((/* implicit */long long int) var_12);
    var_21 = var_7;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 8; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) (~((((-(289934965851095062LL))) - (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_3] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_3] [i_1]))) : (-5769731506958635762LL)))))));
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) var_11)) != (((/* implicit */int) arr_0 [i_1])))))))) ? (arr_6 [i_0] [i_1] [i_3] [i_4 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
                            }
                        } 
                    } 
                    arr_11 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((arr_9 [i_1] [i_0] [i_1] [i_0] [i_2 - 1] [i_2]), (((/* implicit */long long int) var_14))))) ? (((/* implicit */int) arr_5 [i_1] [(unsigned char)8] [i_1])) : (max((((/* implicit */int) arr_10 [i_2] [i_0] [i_1] [i_1])), (var_1)))))));
                    var_24 = arr_9 [i_1] [i_1] [i_2 - 1] [i_1] [i_2] [i_1];
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (((max((var_17), (var_10))) ? ((~(var_1))) : (max((221933978), (-1314494323)))))));
}
