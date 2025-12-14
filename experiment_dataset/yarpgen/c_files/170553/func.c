/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170553
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
    var_14 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_15 *= ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) <= (((var_12) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1])))))));
                var_16 *= arr_3 [(_Bool)1] [i_0 - 1] [i_0 - 1];
                var_17 -= ((/* implicit */int) min((arr_1 [i_0] [i_0 + 1]), (((/* implicit */unsigned short) var_8))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_6 [i_2]))) ? (((unsigned int) arr_5 [i_2] [i_2])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3])))));
                var_19 *= ((/* implicit */unsigned char) arr_4 [i_2] [i_2]);
            }
        } 
    } 
}
