/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144889
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
    var_19 = ((/* implicit */_Bool) min((var_19), (((((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? ((+(((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) var_15)))))) >= (((/* implicit */int) (unsigned char)130))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 += ((/* implicit */signed char) min((var_5), (((/* implicit */long long int) min(((!((_Bool)1))), ((!(((/* implicit */_Bool) arr_0 [i_0])))))))));
                                arr_13 [i_1] [i_1] [i_2] [i_0 - 2] [i_1] = ((((/* implicit */_Bool) (signed char)-44)) ? (((var_6) * (((/* implicit */int) ((unsigned char) (unsigned short)59650))))) : (((((/* implicit */int) max((var_11), ((unsigned short)5885)))) + (((/* implicit */int) min((var_12), ((signed char)90)))))));
                                arr_14 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_5 [i_1])))) ? (min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_12 [i_4]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 + 1] [i_1] [i_2])))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) (short)-1)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) max((((((/* implicit */int) var_7)) + ((~(var_6))))), (((/* implicit */int) (signed char)0))));
}
