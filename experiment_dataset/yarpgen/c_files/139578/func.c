/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139578
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
    var_11 = ((signed char) var_2);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = max((((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_3 [i_1 + 1]))))), (arr_6 [i_1 - 1] [i_1 - 1]));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (signed char)103)))), (((/* implicit */int) (signed char)-55))))) ? (((((/* implicit */_Bool) min(((signed char)20), (arr_0 [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-101))))) : (((/* implicit */int) ((signed char) arr_7 [i_0] [i_0] [i_0] [(signed char)24]))))) : (((((((((/* implicit */int) arr_5 [i_2] [i_2])) + (2147483647))) << (((((/* implicit */int) arr_2 [i_2] [i_0])) - (127))))) << (((((/* implicit */int) max(((signed char)-22), ((signed char)32)))) - (32)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_17 [i_4] [i_4] [i_2] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)-101), ((signed char)122)))) ? (((/* implicit */int) var_7)) : ((((+(((/* implicit */int) arr_4 [(signed char)1] [i_1] [i_1])))) ^ ((~(((/* implicit */int) (signed char)15))))))));
                                var_12 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_3])) ? (((/* implicit */int) arr_14 [i_4] [i_0] [(signed char)4] [i_0] [(signed char)10])) : (((/* implicit */int) (signed char)11))))) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((((/* implicit */int) var_2)) / (((/* implicit */int) arr_11 [i_0] [i_1] [i_3] [i_4 - 3])))))) : (((((/* implicit */int) (signed char)113)) / (((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) var_0))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
