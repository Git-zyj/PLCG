/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169667
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
    var_13 |= var_7;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_9 [(signed char)4] [i_1] [(signed char)4] = arr_3 [i_0] [i_0];
                    arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) min((((signed char) arr_7 [i_0] [i_1] [i_2] [i_1])), (arr_5 [i_0] [i_0])))) | (((/* implicit */int) (signed char)-54))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-1))));
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (signed char i_5 = 3; i_5 < 12; i_5 += 4) 
            {
                {
                    arr_18 [i_3] [(signed char)5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_3] [i_4] [i_3] [i_3]))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            {
                                var_15 = ((signed char) var_12);
                                var_16 = ((signed char) min((var_5), (var_3)));
                                var_17 = arr_17 [i_3] [i_3] [i_3];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
