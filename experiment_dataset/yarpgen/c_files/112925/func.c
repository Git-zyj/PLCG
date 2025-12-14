/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112925
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])) != (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1])))))));
                    arr_8 [i_0] [i_1] [i_0] [(signed char)3] = ((/* implicit */short) max((arr_4 [i_1 - 1]), (arr_6 [i_0] [i_1] [i_2])));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_5 [i_1] [i_1] [(unsigned char)4])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_3]))))));
                        var_11 = arr_4 [i_1 + 1];
                        var_12 = ((/* implicit */unsigned char) max((var_12), (arr_10 [i_0])));
                        var_13 += ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_0] [i_1 + 1])) & (((/* implicit */int) arr_1 [i_1 - 1] [i_3])))) * (((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) var_7))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [(unsigned char)10])), ((-(((/* implicit */int) var_2)))))))));
        var_15 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) arr_3 [i_4] [i_4] [i_4])) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4]))))))));
        var_16 = ((/* implicit */signed char) arr_9 [i_4] [i_4] [i_4] [i_4]);
    }
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            {
                var_17 ^= ((/* implicit */unsigned char) arr_2 [i_5]);
                arr_19 [i_5] [i_6] = ((/* implicit */short) ((unsigned char) ((((((/* implicit */_Bool) arr_12 [i_5])) || (((/* implicit */_Bool) arr_13 [i_5])))) ? (((/* implicit */int) arr_12 [i_6])) : (((/* implicit */int) arr_13 [i_6])))));
            }
        } 
    } 
}
