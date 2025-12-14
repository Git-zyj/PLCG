/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159292
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)62664)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 382517427)) ? (382517427) : (((/* implicit */int) (unsigned char)185))))) : (2073254215U)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned char i_3 = 4; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_1] [(unsigned char)21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_6)))) ? (arr_5 [i_0] [i_1] [i_0] [i_1]) : (((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) var_5)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_3])) ? (var_7) : (var_10))) < (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 3514081399U)))))))) : (max((arr_5 [i_3 - 2] [i_3 - 1] [i_3 + 2] [i_1]), (((/* implicit */long long int) arr_7 [i_3 - 1] [i_3 - 4] [(short)14] [i_3 - 2]))))));
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -382517427)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(short)20] [i_1] [i_1]))) : (var_7))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) == (arr_5 [i_1] [i_1] [i_1] [i_1]))))))) ? (min((arr_7 [i_3 - 3] [7U] [i_3 - 4] [i_3 - 4]), (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) : (arr_7 [i_2] [i_1] [i_1] [i_3]))))) : (((/* implicit */unsigned int) (-(var_6))))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] [i_1] = arr_3 [i_0] [i_0] [i_1];
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(-382517432)))))))));
}
