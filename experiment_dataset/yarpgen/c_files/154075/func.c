/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154075
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
    var_18 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) arr_0 [i_0]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    var_20 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        arr_11 [i_3] [1U] [i_1] [i_1] = (-((-(var_12))));
                        arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) (unsigned char)52);
                        var_21 = ((/* implicit */unsigned long long int) ((arr_4 [i_2 + 1] [i_2 - 1] [i_2 - 1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_1] [i_0] [i_2 - 2])))));
                    }
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 82502687))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)19478)) ? (((/* implicit */int) (short)-22)) : (((/* implicit */int) (short)-31108)))))));
                }
                /* vectorizable */
                for (long long int i_4 = 2; i_4 < 22; i_4 += 4) 
                {
                    arr_17 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(arr_15 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 1])));
                    arr_18 [i_0] [i_0] [(unsigned short)10] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_4 - 1])) / (((/* implicit */int) arr_1 [i_4 + 1]))));
                }
                var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) (((+(arr_4 [i_1] [i_1] [i_1]))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_17))))))), (107160)));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (39881286)))) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (var_10))) : (((/* implicit */long long int) ((var_16) & (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_11))))))))));
}
