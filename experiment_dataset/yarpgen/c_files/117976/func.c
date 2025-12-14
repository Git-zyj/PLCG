/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117976
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
    var_17 &= ((/* implicit */unsigned int) (((+((+(((/* implicit */int) var_13)))))) | ((+(((/* implicit */int) (signed char)116))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_1] [(signed char)6] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)94))) != (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (arr_4 [(signed char)0] [i_1])))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [6U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 3] [(signed char)4] [i_1 - 1]))) : (arr_2 [6U]))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (signed char)112))))))))));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_1] [i_2])) ? (3630578952U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))))));
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1])) : (((/* implicit */int) (signed char)-123))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))) ^ (arr_6 [i_1] [i_0] [i_3] [i_4])))));
                        var_19 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_1] [8U] [8U] [i_1 - 3] [i_3])) + (((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 + 2]))));
                    }
                    arr_16 [i_0] [i_1] [i_3] = ((/* implicit */signed char) ((unsigned int) 4294967295U));
                }
            }
        } 
    } 
}
