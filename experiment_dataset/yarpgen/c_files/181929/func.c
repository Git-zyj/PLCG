/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181929
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) (-((+((-(((/* implicit */int) var_7))))))));
        arr_2 [i_0] = ((/* implicit */signed char) -2147483630);
        var_19 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (_Bool)1)))), ((-(-2147483630)))));
        arr_3 [i_0] [i_0] = (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) & (4194303U))));
    }
    var_20 = ((/* implicit */_Bool) ((min((min((5101557137285695212ULL), (((/* implicit */unsigned long long int) var_14)))), (max((((/* implicit */unsigned long long int) var_6)), (16322743286977344619ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)23)))));
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (short i_2 = 3; i_2 < 12; i_2 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) var_7))))), (min((((/* implicit */long long int) (signed char)71)), (var_13))))), (((/* implicit */long long int) max(((!(((/* implicit */_Bool) var_17)))), ((!(((/* implicit */_Bool) var_10)))))))));
                arr_8 [i_1] [i_2] = ((/* implicit */unsigned long long int) (signed char)-17);
                var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-22))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_3 = 3; i_3 < 11; i_3 += 2) 
                {
                    var_23 = ((/* implicit */short) (-(((((/* implicit */_Bool) (short)-8)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)14))))));
                    var_24 = ((/* implicit */signed char) (-(arr_1 [i_1] [i_1])));
                }
                /* LoopNest 2 */
                for (short i_4 = 4; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned int i_5 = 2; i_5 < 12; i_5 += 3) 
                    {
                        {
                            arr_20 [i_2] [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_7 [i_5] [i_5 - 2] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5] [i_5 + 1] [i_5 - 2] [i_5 + 1]))) : (0ULL))), (((((/* implicit */unsigned long long int) ((13U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101)))))) - (min((((/* implicit */unsigned long long int) 1446717474U)), (13345186936423856403ULL)))))));
                            var_25 = (+(min((((var_0) + (((/* implicit */int) arr_19 [i_2] [i_2] [(short)2] [i_2])))), (((/* implicit */int) max((((/* implicit */short) (signed char)83)), ((short)-13998)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */short) 2739697712U);
    var_27 = var_15;
}
