/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164737
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [(unsigned short)12] [i_1] [i_1] = (-((+(var_2))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((min((((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned short)43198)))), (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) (short)-11540)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
                arr_7 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */int) var_10)) > (((/* implicit */int) (unsigned short)36913)))), (((((long long int) var_2)) <= (((/* implicit */long long int) max((arr_3 [7U]), (((/* implicit */unsigned int) var_0)))))))));
                arr_8 [(short)2] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (arr_1 [i_0] [i_1]) : (((/* implicit */int) var_7))))));
            }
        } 
    } 
    var_18 = var_1;
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
    {
        for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) 
        {
            {
                arr_13 [i_2] [i_2] = (~(((/* implicit */int) min((((unsigned short) var_13)), (min((var_10), (((/* implicit */unsigned short) arr_11 [i_2] [i_3] [i_2]))))))));
                var_19 *= ((/* implicit */unsigned short) (!(((((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) <= (min((((/* implicit */unsigned int) var_1)), (var_2)))))));
            }
        } 
    } 
    var_20 += ((/* implicit */int) ((short) var_6));
}
