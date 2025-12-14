/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168924
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (signed char i_4 = 4; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_4] [(signed char)14] [i_4] [(signed char)14] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_9), (var_11))))));
                                arr_16 [i_2] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_14 [i_2] [i_3 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 1] [(signed char)11] [i_2])) + (((/* implicit */int) arr_14 [i_2] [i_3 + 1] [i_3] [i_4 + 1] [i_4 - 3] [i_4] [i_4]))))));
                                arr_17 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_13 [i_2] [i_2] [i_0])) != (((/* implicit */int) var_7)))))))) ? (min((((((/* implicit */int) (signed char)109)) & (((/* implicit */int) arr_12 [i_2] [(signed char)13] [i_2] [i_3 - 1] [(signed char)14] [i_0])))), (((/* implicit */int) ((((/* implicit */int) (signed char)-110)) == (((/* implicit */int) var_1))))))) : (min((((((/* implicit */int) var_10)) % (((/* implicit */int) arr_9 [i_3] [i_2] [i_1] [i_0])))), ((~(((/* implicit */int) var_3))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        for (signed char i_7 = 4; i_7 < 14; i_7 += 4) 
                        {
                            {
                                arr_26 [i_0] [i_1] [(signed char)12] [i_6] = ((signed char) (signed char)-110);
                                var_18 -= ((signed char) (signed char)80);
                                var_19 = min((((signed char) arr_21 [i_7 + 2] [i_7 - 2] [i_7 - 1] [i_7 - 4])), (min((arr_20 [i_0] [i_1] [i_5] [i_6]), (arr_21 [i_1] [i_5] [i_6] [i_7]))));
                            }
                        } 
                    } 
                } 
                var_20 *= arr_5 [i_0] [i_0] [i_0];
                var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_14))) ? ((~(((/* implicit */int) arr_19 [i_0])))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [(signed char)14] [i_1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0]))))));
                var_22 = ((/* implicit */signed char) max((var_22), (arr_0 [i_0] [i_1])));
            }
        } 
    } 
    var_23 |= var_0;
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) (((~(((/* implicit */int) var_9)))) != (((/* implicit */int) min((var_11), (var_2))))))))))));
}
