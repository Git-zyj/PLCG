/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101116
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
    var_11 = var_6;
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) && (((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1] [(unsigned char)14]))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    arr_8 [(unsigned char)23] [i_1] [(unsigned short)6] = ((/* implicit */signed char) min((arr_2 [i_0 + 2]), (((/* implicit */unsigned int) min((arr_6 [i_0] [(_Bool)1] [(_Bool)1]), (((/* implicit */int) var_3)))))));
                    var_13 = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_7 [i_0]))))));
                    var_14 = ((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_1]);
                }
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_0 + 4])), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0]))) : (arr_2 [i_1])))) ? (((((/* implicit */_Bool) arr_7 [(unsigned char)11])) ? (arr_6 [i_0 + 2] [i_0] [(_Bool)1]) : (arr_6 [i_0] [i_0 + 1] [i_0]))) : ((+(arr_0 [(unsigned char)19]))))) : (((/* implicit */int) (!(var_9))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 3; i_5 < 12; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) ((arr_14 [6] [i_4] [i_5] [i_5]) ? (((/* implicit */int) (!(arr_11 [i_3] [i_5])))) : (((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_5 - 1] [i_6])) ? (((/* implicit */int) arr_18 [i_3] [i_4] [(_Bool)1] [i_6 + 1])) : (((/* implicit */int) arr_18 [i_3] [i_4] [i_5 + 1] [i_6]))))));
                            var_17 ^= ((/* implicit */unsigned char) max(((~(((/* implicit */int) var_5)))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                            var_18 = arr_5 [21U];
                            arr_19 [i_3] [i_4] [i_4] [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5] [i_4] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (arr_1 [i_4]))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_3 [(_Bool)1] [i_4] [i_6]))))))));
                            var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? ((-(((/* implicit */int) arr_16 [i_6 + 1] [(signed char)0] [i_5 - 1] [(_Bool)1])))) : ((+(((arr_16 [i_3] [10] [i_3] [(unsigned char)2]) ? (((/* implicit */int) arr_17 [i_3] [i_3] [i_6])) : (((/* implicit */int) var_9))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) max(((+(arr_0 [i_3]))), (((((/* implicit */_Bool) arr_0 [i_4])) ? (arr_0 [i_3]) : (((/* implicit */int) arr_13 [i_3] [i_4] [(unsigned short)6]))))));
            }
        } 
    } 
}
