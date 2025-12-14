/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125015
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
    var_20 ^= ((/* implicit */signed char) var_12);
    var_21 = ((/* implicit */int) ((var_8) ? (((/* implicit */long long int) var_14)) : (((var_1) << (((((/* implicit */int) max((var_18), (var_18)))) - (67)))))));
    var_22 ^= ((/* implicit */_Bool) min((((((/* implicit */long long int) -1)) - (-6778252128495292030LL))), (((/* implicit */long long int) var_12))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                var_23 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) - (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) - (((/* implicit */int) arr_2 [i_0]))))) : (((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [12] [8])))))))) ? (((/* implicit */int) arr_2 [i_1])) : (((((/* implicit */int) arr_4 [i_1 - 2] [i_1 + 2] [i_1 + 2])) + (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 2] [i_1 + 2]))))));
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_13))) ? (((((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) << (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_0])) : (((/* implicit */int) arr_2 [i_0])))) - (27717))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_1 [i_1 - 2])) : (max((((/* implicit */long long int) var_5)), (var_1))))))));
                var_25 ^= ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 2] [i_1 + 2])))), (((/* implicit */int) ((unsigned short) -6778252128495292030LL)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (int i_3 = 3; i_3 < 12; i_3 += 4) 
        {
            for (signed char i_4 = 2; i_4 < 12; i_4 += 1) 
            {
                {
                    var_26 *= ((/* implicit */unsigned int) var_19);
                    var_27 -= ((/* implicit */unsigned short) (!((_Bool)1)));
                }
            } 
        } 
    } 
}
