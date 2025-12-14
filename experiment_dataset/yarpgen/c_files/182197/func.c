/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182197
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)14))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((((int) var_7)) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_1])) + (94)))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_3), (var_1)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)0)) != (((/* implicit */int) (signed char)97))))) : ((-(((/* implicit */int) (signed char)-14)))))) >= (((/* implicit */int) ((signed char) min((var_10), (((/* implicit */signed char) var_2))))))));
    var_16 = ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) (signed char)66)))) : ((~(((/* implicit */int) var_14)))));
    /* LoopNest 2 */
    for (signed char i_2 = 3; i_2 < 12; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            {
                arr_11 [i_3] [i_2] &= arr_1 [i_3];
                arr_12 [i_2] [i_2] = ((signed char) (-(((/* implicit */int) arr_2 [i_2 - 2]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) var_11);
                var_18 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_7 [i_4] [i_5]))))));
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4])) ? (arr_8 [i_4]) : (((/* implicit */int) arr_3 [(signed char)4] [i_5] [i_4]))))) ? (((/* implicit */int) ((arr_13 [i_4]) <= (((/* implicit */int) arr_14 [i_4]))))) : (((/* implicit */int) arr_1 [i_4])))))))));
                var_20 = ((/* implicit */signed char) var_5);
                var_21 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_4]))))))))));
            }
        } 
    } 
}
