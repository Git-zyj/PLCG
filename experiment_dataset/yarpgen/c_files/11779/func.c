/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11779
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 = arr_2 [i_0];
                arr_7 [(unsigned char)1] [i_1] = ((/* implicit */unsigned short) arr_1 [(unsigned char)7] [(unsigned char)7]);
                arr_8 [i_0] = (!(((/* implicit */_Bool) max((1322514314U), (2972452982U)))));
                var_19 = var_2;
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned int i_3 = 4; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((((_Bool) 2972452982U)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))) > (min((((var_5) ? (((/* implicit */unsigned int) arr_3 [i_2])) : (arr_6 [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (2972452982U))))))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [(unsigned char)5] [i_2])), (var_16)))) ? ((-(1322514314U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [(unsigned char)15] [12U] [i_2] [i_3 - 4] [(signed char)8] [13U])))))))) ? ((~(((/* implicit */int) min((var_3), (var_11)))))) : (((/* implicit */int) ((1322514313U) == (1322514314U))))));
                            arr_13 [i_0] [i_1] [i_2] [i_3 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((unsigned char) 2972452983U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_1] [i_2] [i_2] [i_2]))))) | (max((var_10), (2972452983U)))))) : (max((((unsigned long long int) 1322514290U)), (((/* implicit */unsigned long long int) 2972453019U))))));
                            var_22 = ((/* implicit */unsigned char) ((2972453005U) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) ((unsigned char) 2972453008U))), (arr_11 [i_3 - 3] [i_3 - 1] [i_3] [i_3] [i_3] [i_3 + 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((((min((2972452982U), (((/* implicit */unsigned int) var_3)))) * (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_11))))))), (((/* implicit */unsigned int) var_13))));
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1322514265U)) ? (1322514297U) : (2972452959U)));
}
