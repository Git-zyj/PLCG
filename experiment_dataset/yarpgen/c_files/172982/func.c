/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172982
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
    var_18 = ((/* implicit */int) var_15);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_0] = min((((((/* implicit */_Bool) ((arr_4 [i_0]) >> (((((/* implicit */int) var_0)) + (30621)))))) ? ((+(2147483625))) : (((((/* implicit */_Bool) -1794465526)) ? (arr_1 [i_1]) : (((/* implicit */int) var_8)))))), (min((arr_3 [i_0 - 1] [i_1]), ((+(arr_1 [i_1]))))));
                arr_7 [i_1] = arr_5 [i_0] [i_0];
            }
        } 
    } 
    var_19 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_17)) ? (var_17) : (((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) max((var_13), (var_16)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) min(((short)512), (var_15)))))) : (((/* implicit */int) var_16)));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 15; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 16; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_20 = var_17;
                                var_21 = ((int) min((arr_18 [i_4 - 1] [i_3] [i_2 + 3] [i_3] [i_4 + 2] [i_4] [i_2 - 2]), (arr_18 [i_4 - 1] [i_3] [i_2 + 2] [i_5] [1] [i_6] [i_5])));
                            }
                        } 
                    } 
                } 
                var_22 = var_16;
                /* LoopNest 3 */
                for (short i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    for (int i_8 = 4; i_8 < 17; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */short) max((var_23), (var_10)));
                                arr_27 [i_2] [i_3] [i_7] [i_8] [i_9] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_25 [i_2 + 3] [i_7] [i_8 - 2])) ? ((~(arr_21 [i_2 + 2] [i_2 + 2] [i_8] [i_8]))) : (((((/* implicit */int) (short)-15466)) % (((/* implicit */int) (short)-21739)))))) | (((((/* implicit */_Bool) min((var_11), ((short)(-32767 - 1))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */int) arr_22 [i_3] [i_2] [i_3] [i_2] [i_2] [12]);
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */int) (short)8023)) >> (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)(-32767 - 1))) : (573651665))) + (32787)))));
}
