/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125939
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_3] [i_3] [i_2] [i_3] [i_3] [i_4]))));
                                var_18 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_3 [i_1] [i_2 + 1] [i_4]))))));
                                var_19 = ((/* implicit */long long int) arr_4 [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_8 [i_1] [i_2 + 1] [i_1] [i_0])))) ? (((((/* implicit */_Bool) arr_10 [i_1] [i_5])) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_5] [i_6])) : (((/* implicit */int) arr_11 [i_6] [i_1] [i_1] [i_0])))) : (((/* implicit */int) arr_11 [i_0 + 3] [i_1] [i_2] [i_5]))))) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_2 + 1] [i_6] [i_1])) : (((var_16) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_2 + 1] [i_5])))))))));
                                var_21 *= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [11U])) ? (arr_7 [i_0 + 4] [i_2 + 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))))))));
                                arr_19 [i_0] [i_5] [i_2] [i_2] [(_Bool)1] = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [(_Bool)1] [i_5]);
                                var_22 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [i_1] [i_5 - 1] [i_6] [i_6])) : (((/* implicit */int) arr_9 [i_0 + 1] [i_1] [i_5 - 2] [i_6] [i_6] [i_6])))))));
                            }
                        } 
                    } 
                    arr_20 [i_0 + 2] [i_1] [i_2 + 1] = ((/* implicit */unsigned int) min((arr_4 [i_0 + 3]), (arr_4 [i_0 - 1])));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 1 */
    for (long long int i_7 = 3; i_7 < 21; i_7 += 3) 
    {
        var_24 = var_14;
        var_25 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_7 - 1])))))));
    }
    var_26 = ((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) ((var_16) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))))));
}
