/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163682
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
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) var_8);
                    arr_9 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) var_11));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) max((((/* implicit */signed char) arr_3 [i_0] [i_0] [i_0])), (var_15)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [(unsigned short)14] [i_0] [i_0] [i_0] = (~(((/* implicit */int) ((signed char) arr_12 [i_0] [i_1] [i_0] [i_1] [i_1] [i_0]))));
                                arr_18 [i_0] [(signed char)14] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_16 [i_2] [i_2] [i_2] [i_3] [i_0]) ? (((int) arr_16 [i_0] [i_1] [i_2] [i_1] [i_0])) : (((/* implicit */int) ((signed char) var_10)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-51)))))));
                                arr_19 [i_0] [i_0] [i_0] [11LL] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) var_15);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */long long int) var_17);
    }
    for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        arr_23 [(short)15] = ((/* implicit */int) arr_21 [i_5]);
        arr_24 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_21 [i_5])) ? (((/* implicit */int) arr_21 [i_5])) : (((/* implicit */int) arr_21 [i_5])))) : ((-(((/* implicit */int) arr_21 [i_5]))))));
        var_21 = ((/* implicit */unsigned int) arr_21 [i_5]);
        var_22 = ((/* implicit */short) var_0);
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 14; i_6 += 3) 
    {
        for (int i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            {
                arr_32 [i_6] = ((/* implicit */signed char) arr_21 [i_7]);
                var_23 = ((/* implicit */unsigned int) min((max((arr_31 [i_6] [i_6 + 2]), (arr_31 [i_6] [i_6 + 2]))), (((/* implicit */int) min((arr_21 [i_6 + 2]), (arr_21 [i_6 + 3]))))));
            }
        } 
    } 
}
