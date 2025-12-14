/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110269
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
    var_16 *= ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)0))))), ((-(max((((/* implicit */unsigned int) (signed char)-1)), (var_7)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) ((signed char) ((((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)51)))) / ((-(((/* implicit */int) (_Bool)1)))))));
                                arr_13 [i_0] [(_Bool)1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) (signed char)-64);
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */_Bool) var_6);
                    arr_14 [i_2] [i_1] [(signed char)20] = ((/* implicit */_Bool) max((((signed char) (-(344225450U)))), (((/* implicit */signed char) ((_Bool) (_Bool)1)))));
                }
            } 
        } 
        var_19 &= ((((/* implicit */_Bool) ((signed char) arr_12 [5U] [i_0] [i_0] [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (min((arr_6 [i_0] [(signed char)1] [i_0]), (var_2))) : (((arr_5 [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) : (((var_0) ? (arr_2 [i_0]) : (((var_15) ? (arr_6 [i_0] [i_0] [i_0]) : (var_6))))));
    }
}
