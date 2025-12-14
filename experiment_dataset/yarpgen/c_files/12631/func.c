/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12631
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
    var_12 += ((/* implicit */_Bool) (+(((max((5358035342752694710LL), (((/* implicit */long long int) (_Bool)0)))) * (max((var_8), (((/* implicit */long long int) var_3))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_4 [3LL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [(short)11])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_3 [i_1] [i_1] [(short)3]))));
                var_13 -= ((/* implicit */signed char) min((((((((/* implicit */_Bool) (short)31831)) ? (((/* implicit */int) (short)31810)) : (var_6))) << (((var_8) + (5785736379509249380LL))))), (((/* implicit */int) var_5))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        for (short i_3 = 3; i_3 < 11; i_3 += 3) 
        {
            for (short i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [i_2] [2LL] = ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_2]))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 9; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_9))));
                                arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2]))))))) << (((((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_2 [i_2])))) >> (((((/* implicit */int) var_1)) - (14391)))))));
                                arr_22 [i_2] [i_2] [0] = ((/* implicit */short) max((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)31))))) ? (207907811766632397LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) (+(((/* implicit */int) (short)-31817)))))));
                            }
                        } 
                    } 
                    arr_23 [i_2] [(short)7] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) -5358035342752694710LL)) ? (((/* implicit */int) (short)-31819)) : (((/* implicit */int) (short)-31836))));
                }
            } 
        } 
    } 
}
