/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153710
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 6; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] [i_2] = max((((((/* implicit */_Bool) 2355066321U)) ? (arr_1 [i_2 - 1]) : (var_1))), (max((((/* implicit */unsigned int) (signed char)6)), (2724827406U))));
                    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) (signed char)4)))), (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) max((var_13), (var_11)));
    /* LoopNest 2 */
    for (signed char i_3 = 4; i_3 < 18; i_3 += 1) 
    {
        for (signed char i_4 = 1; i_4 < 19; i_4 += 3) 
        {
            {
                var_14 |= max((((((/* implicit */_Bool) (signed char)-7)) ? (((unsigned int) (signed char)-53)) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_14 [i_3]) >= (995236962U))))))), (((/* implicit */unsigned int) (((-(2857957067U))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)52))))))))));
                /* LoopNest 3 */
                for (signed char i_5 = 3; i_5 < 20; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        for (signed char i_7 = 1; i_7 < 17; i_7 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) arr_23 [i_3 - 3] [(signed char)2] [i_3 - 3] [i_6] [i_7 - 1]);
                                arr_25 [i_7] [i_3] [i_3] [i_3] [i_5 - 2] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_3])) && (((/* implicit */_Bool) arr_17 [i_4])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (arr_24 [i_3 + 3] [(signed char)9] [i_3 + 3] [i_3] [i_3])))))))));
                                arr_26 [i_6] [i_3] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((+(var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), ((signed char)-7)))))))) ? (((((((/* implicit */_Bool) 2375758350U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3]))) : (1919208960U))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-64))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3562250297U))))))));
                                var_16 = ((/* implicit */unsigned int) (signed char)-12);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
