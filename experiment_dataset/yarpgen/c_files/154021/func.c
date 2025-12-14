/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154021
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        var_13 += ((/* implicit */signed char) ((((((/* implicit */int) (signed char)119)) | (((/* implicit */int) arr_0 [i_3 - 1])))) >> (((((((/* implicit */int) arr_8 [i_1] [i_1])) <= (((/* implicit */int) var_8)))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_4))))) : (((/* implicit */int) ((signed char) (signed char)-120)))))));
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) max(((signed char)119), (arr_7 [i_0] [i_1] [i_1])))) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_3 + 1] [i_3 - 1]))))) ? ((((~(((/* implicit */int) (signed char)3)))) & (((((/* implicit */int) (signed char)127)) ^ (((/* implicit */int) arr_1 [i_3])))))) : (((/* implicit */int) (signed char)107))));
                        var_15 = ((/* implicit */signed char) ((((/* implicit */int) max((var_2), (arr_7 [i_2] [i_3 - 1] [i_3 - 1])))) / (((/* implicit */int) ((signed char) var_12)))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 1; i_4 < 14; i_4 += 2) 
                    {
                        var_16 = arr_9 [i_2];
                        arr_13 [i_0] [i_0] [i_2] [i_2] = (signed char)127;
                    }
                    var_17 = arr_1 [(signed char)11];
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) min((((((/* implicit */_Bool) (signed char)33)) && (((/* implicit */_Bool) (signed char)94)))), (((((/* implicit */int) var_0)) > (((/* implicit */int) var_4))))))) : (((((/* implicit */int) min((var_8), (var_12)))) | (((/* implicit */int) (signed char)37))))));
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */int) var_8)) != (max(((+(((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) var_1)))))))));
}
