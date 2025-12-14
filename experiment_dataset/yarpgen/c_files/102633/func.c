/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102633
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
    var_20 = var_3;
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (min((((/* implicit */unsigned int) var_16)), (4294967295U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_17))))))))))));
    var_22 = ((/* implicit */signed char) var_1);
    var_23 = 0U;
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) (+((-(((/* implicit */int) var_9))))));
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_17))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_25 = (-(min((((/* implicit */unsigned int) var_17)), (min((arr_10 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */unsigned int) (signed char)-72)))))));
                                arr_14 [11U] [i_1 + 2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_15))))))) < ((((+(1U))) >> ((~(4294967295U)))))));
                                arr_15 [i_0] [i_1 + 2] [0U] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
