/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144443
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
    var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12)))) <= (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_13))))))))));
    var_17 = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))))) != (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) var_5)), (var_15)))) <= (((/* implicit */int) var_5)))))));
    var_18 = ((/* implicit */short) min((var_10), ((!(((/* implicit */_Bool) var_6))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 8; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [(_Bool)1] [i_4] [i_3] [i_4] = (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))) <= (arr_10 [i_0] [i_2] [i_3] [i_4]))));
                                arr_12 [i_0] [i_2] [i_0] [i_3] [i_0] [i_0] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_4 [i_0])), (min((((arr_3 [i_4] [(signed char)4] [i_2]) | (arr_10 [i_0] [i_3] [i_2] [i_0]))), (arr_3 [i_0] [i_2] [i_2])))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_10 [i_0] [i_1] [i_1] [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (var_0))))))) ? (((/* implicit */int) min((var_12), (((/* implicit */short) var_2))))) : (var_14)));
}
