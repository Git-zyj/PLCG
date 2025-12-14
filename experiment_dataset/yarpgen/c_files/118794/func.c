/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118794
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)115)) & (((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)22))))));
                arr_6 [i_1] [(signed char)13] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-117)) > ((~(((/* implicit */int) (signed char)113))))));
                var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((signed char) (signed char)127))) : (((/* implicit */int) var_16))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        for (signed char i_3 = 1; i_3 < 18; i_3 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) max((var_18), (var_7)));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        {
                            var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)73), ((signed char)(-127 - 1))))) ? (((((/* implicit */int) var_0)) + (((/* implicit */int) (signed char)3)))) : (((/* implicit */int) (signed char)-5))));
                            var_20 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-70))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) (((((~(((/* implicit */int) (signed char)-13)))) >= (((((/* implicit */_Bool) arr_9 [(signed char)1] [i_3 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-121)))))) ? (((((/* implicit */int) (signed char)-57)) - (((/* implicit */int) (signed char)78)))) : (max((((((/* implicit */int) (signed char)-60)) / (((/* implicit */int) (signed char)-1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
            }
        } 
    } 
}
