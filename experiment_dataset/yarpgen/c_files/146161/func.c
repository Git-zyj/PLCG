/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146161
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
    var_14 = ((/* implicit */long long int) var_11);
    var_15 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)30266)), (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_11))))))));
    var_16 = ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) ((_Bool) var_13))), (var_0)))), (max((((/* implicit */long long int) var_3)), (var_9)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_0 - 1]);
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) (short)31808);
                var_17 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))))) ? (min((var_4), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_9) > (((/* implicit */long long int) arr_13 [i_1 + 1] [(_Bool)1] [i_1 + 1] [i_4])))) ? (((/* implicit */int) min((((/* implicit */short) var_1)), ((short)15718)))) : (((/* implicit */int) arr_15 [i_0] [i_1 - 1] [i_0 + 2] [i_0 - 1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1004004994U)) || (((/* implicit */_Bool) (short)-1))))) : ((~(((/* implicit */int) arr_11 [i_1 - 3] [i_0 - 1]))))));
                                arr_16 [i_1] [(unsigned char)3] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((arr_12 [i_4] [i_3] [i_2 - 1] [i_1 - 4] [17ULL] [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_0 + 3] [i_3] [i_2 - 1] [i_0 + 3]))))) ? (min((((/* implicit */unsigned long long int) var_8)), (arr_12 [i_0] [18LL] [i_0 + 3] [i_0] [i_0] [i_0]))) : (max((((/* implicit */unsigned long long int) (unsigned short)37160)), (5918931536776315508ULL)))))));
                                arr_17 [(unsigned char)3] [8] [i_1] [(short)6] [i_3] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((unsigned char) arr_15 [i_4] [i_2] [i_1] [i_0 - 1]))) >> (((((((/* implicit */_Bool) var_4)) ? (5331115571170531185ULL) : (arr_1 [i_2 - 3] [i_1]))) - (5331115571170531185ULL))))) > (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) 1ULL)) || (((/* implicit */_Bool) arr_1 [i_3] [i_3]))))), (min((((/* implicit */unsigned char) arr_0 [i_0])), ((unsigned char)2))))))));
                                var_19 = ((/* implicit */unsigned int) arr_15 [i_2 - 2] [i_1 + 1] [i_0] [i_0 + 3]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
