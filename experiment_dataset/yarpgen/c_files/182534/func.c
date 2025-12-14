/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182534
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
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0 + 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) arr_4 [i_0 + 1] [i_1] [16])))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_14 [(signed char)15] [3] [(signed char)15] [i_2] [i_1 - 2] = (+(((/* implicit */int) ((signed char) arr_8 [i_0 - 1] [i_1 + 4] [i_1 + 3]))));
                            arr_15 [i_0] [i_0] [i_0 + 1] [i_0] [i_1] [i_0 + 3] = arr_8 [i_0] [i_0] [i_0];
                            arr_16 [i_0] [i_1] [i_2] [(signed char)12] [i_1] = ((/* implicit */int) 2858946276U);
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((var_3) + (arr_12 [i_1 + 3] [i_1] [i_1] [i_1 - 2]))) + (((((/* implicit */_Bool) var_7)) ? (arr_12 [i_1 + 3] [i_1] [i_1] [i_1 - 2]) : (arr_12 [i_1 + 3] [15] [i_1 + 3] [i_1 - 2]))))))));
                            arr_17 [i_0] [i_1] [i_2] [i_2] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_3] [i_0])) ? (arr_10 [i_0] [i_3] [i_2] [i_3]) : (arr_10 [i_0] [i_1] [i_2] [i_3])))) ? (((/* implicit */int) arr_7 [i_2] [i_1 + 3])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22))) == (arr_8 [i_0 + 1] [i_0] [i_0 + 1])))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) (signed char)6))))) || (((/* implicit */_Bool) max((arr_3 [i_0] [i_1] [i_3]), (((/* implicit */unsigned int) (signed char)6)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 16; i_4 += 2) 
                {
                    for (signed char i_5 = 1; i_5 < 14; i_5 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2858946260U)) ? (((/* implicit */int) arr_20 [i_0 + 3] [i_1 + 2] [i_4 - 2])) : (((((/* implicit */_Bool) -1743262020)) ? (arr_21 [i_0 + 1]) : (-71527089)))))), ((~(var_2)))));
                            var_17 ^= ((/* implicit */int) arr_7 [i_5] [i_4 - 1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((/* implicit */unsigned int) var_5)) / (var_2)));
    var_19 = ((/* implicit */signed char) var_2);
}
