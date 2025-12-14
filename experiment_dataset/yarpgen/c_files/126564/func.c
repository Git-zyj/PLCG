/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126564
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
    var_19 = (~(((/* implicit */int) var_0)));
    var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((var_11) == (((/* implicit */long long int) ((/* implicit */int) (short)-17735)))))))), (min((((var_18) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) var_14))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 4; i_2 < 17; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_0] [17] [i_3] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_10 [(unsigned char)11] [3] [i_2 - 2] [7ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_13)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 2])))))));
                                var_21 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_12)))) <= ((-(arr_10 [(short)14] [(_Bool)1] [(short)14] [i_3]))))))));
                                var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((arr_1 [i_0 + 2]) >= (((/* implicit */int) arr_7 [i_0] [i_2 + 2] [i_4]))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) != (arr_3 [i_1]))))) : (((unsigned long long int) (_Bool)1))))));
                                arr_15 [i_0 + 2] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0 + 2] [i_2 - 4] [i_3] [i_4 + 2])) * (((/* implicit */int) ((_Bool) (signed char)127)))))) ? (((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (var_18)))) : (((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */unsigned short) ((short) (+(((/* implicit */int) (short)32139)))));
                    var_23 = ((/* implicit */_Bool) ((int) ((((/* implicit */int) ((var_4) <= (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [(unsigned char)5] [i_2 - 2] [i_0])))))) | (((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 2])))));
                }
                var_24 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 - 1])), ((unsigned short)0)))) : (((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]))));
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) (short)1))))))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) (-((((+(((/* implicit */int) var_17)))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
}
