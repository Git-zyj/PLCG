/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187420
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
    var_20 = ((/* implicit */signed char) ((short) var_3));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_21 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_0 [i_0] [i_1])))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((((_Bool) (short)-1)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) + (((/* implicit */int) (short)0))))) : (max((6445749405169260246LL), (9223372036854775807LL))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((unsigned int) (short)23340)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (max((arr_4 [i_1] [15U]), (var_10)))))))))));
                                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_0 [i_2 - 2] [i_2 - 2])) * (((/* implicit */int) arr_0 [i_2 - 1] [i_2 + 1])))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [(short)1]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2)))))))));
                                arr_14 [i_0] [i_1] [i_2 - 2] [i_3 + 1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_6 [i_3 + 2] [i_3 + 1])) : (((/* implicit */int) arr_6 [i_3 - 2] [i_3 - 2]))))), (var_15)));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */int) arr_8 [i_0]);
                    arr_15 [i_0] = ((/* implicit */short) max((max((((unsigned long long int) (short)26)), (((/* implicit */unsigned long long int) max((arr_13 [i_1] [(short)7] [i_1] [i_1] [i_0] [(signed char)15]), (((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                }
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((short) (unsigned short)3641))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)40))))) : (arr_1 [i_0]))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [(short)12]))))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-13652)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (2486239199665291669LL)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_17)), (var_4)))) : (((/* implicit */int) (signed char)-81)))))));
}
