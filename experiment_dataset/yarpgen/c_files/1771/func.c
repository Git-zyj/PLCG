/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1771
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
    var_13 = ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) ((var_4) - (var_0))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (3873993752268688211LL)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned char) var_0)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) arr_3 [i_1] [(unsigned short)15]));
                            /* LoopSeq 2 */
                            for (short i_4 = 2; i_4 < 16; i_4 += 1) 
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */long long int) var_12);
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_4 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 3873993752268688211LL)) ? (((/* implicit */int) var_1)) : (arr_11 [i_4] [i_0] [i_0] [(unsigned short)6]))), (((/* implicit */int) ((unsigned short) var_12)))))) ? ((~(((/* implicit */int) (short)24559)))) : (((arr_11 [i_4 - 2] [i_0] [i_0] [i_0]) & (((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-24570))))))));
                            }
                            for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
                            {
                                arr_20 [i_0] [(signed char)6] [i_0] [i_0] [12] = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) (short)-10688)) ? (18446744073709551615ULL) : (arr_5 [i_0] [i_0])))))));
                                arr_21 [i_0] = ((/* implicit */unsigned char) 1569198198);
                                arr_22 [i_0] [(short)18] [i_3] [i_3] [i_5] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_18 [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 2] [i_3 + 1] [i_3] [i_3 - 1])) ? (((/* implicit */int) (short)24557)) : (((/* implicit */int) (_Bool)0)))), ((+(((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))));
                                arr_23 [(unsigned short)6] [i_2] [i_0] [i_3] [i_5] = ((((/* implicit */_Bool) min((arr_3 [i_3 + 2] [i_1]), (arr_3 [i_3 + 2] [i_1])))) ? (max((arr_3 [i_3 - 1] [i_1]), (arr_3 [i_3 - 1] [0ULL]))) : (((((/* implicit */_Bool) arr_3 [i_3 - 1] [i_1])) ? (arr_3 [i_3 - 2] [(unsigned char)11]) : (arr_3 [i_3 - 2] [i_1]))));
                            }
                        }
                    } 
                } 
                arr_24 [i_0] = arr_1 [i_0];
                arr_25 [i_0] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)242)))) % ((~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
}
