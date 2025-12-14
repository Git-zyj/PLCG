/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106748
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
    for (int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 116890260))) ? (((/* implicit */unsigned long long int) -116890245)) : (((((/* implicit */_Bool) 9223372036854775806LL)) ? (arr_3 [i_0 - 1] [i_1 + 1] [i_1 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2] [i_1] [i_0])))))));
                var_19 &= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)41))) != (1625238349410291243LL))))) : (arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
                /* LoopSeq 1 */
                for (short i_2 = 4; i_2 < 19; i_2 += 3) 
                {
                    var_20 = ((/* implicit */unsigned short) var_9);
                    var_21 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((-1519646754) % (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */long long int) arr_5 [i_0 + 2] [i_1] [i_1 + 2] [i_2 + 1])), (-1625238349410291243LL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((unsigned int) (unsigned char)89));
                                var_23 = ((((/* implicit */_Bool) max((((signed char) 191806036U)), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_3] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))))))) ? (((((/* implicit */_Bool) ((unsigned short) -3179176123463193581LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29558))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) -116890231)) : (arr_9 [i_0] [i_0] [i_0 + 3] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((325431146), (((/* implicit */int) (short)1008))))) & (1625238349410291243LL)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_24 = (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)226)), (var_2)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)54))) : (1625238349410291215LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1)))))))) : (var_2));
    var_25 = ((/* implicit */unsigned long long int) (unsigned short)35851);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
        var_27 = ((int) arr_5 [i_5] [i_5] [i_5] [i_5]);
    }
}
