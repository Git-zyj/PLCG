/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130522
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 8; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_9 [i_3] [i_4 + 1] [i_2] [(unsigned short)4] [i_3] [0U]), (((/* implicit */unsigned short) var_12))))) << (((((((/* implicit */int) ((short) var_17))) + (4142))) - (14))))))));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (arr_10 [i_2 + 1] [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)77)))))))))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [6LL]))) : (var_17))))))));
                arr_14 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((var_5), ((unsigned short)18273)))) ? (((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_1] [(short)4] [i_1] [(signed char)3])) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (2901625207U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21315)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (var_14)))) ? (max((((/* implicit */long long int) var_4)), (var_19))) : (((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
}
