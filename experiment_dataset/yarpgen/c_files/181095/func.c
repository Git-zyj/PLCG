/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181095
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
    var_15 = var_14;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = min(((short)15989), ((short)24265));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (short i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_16 = ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 3] [i_2] [(short)19] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [(short)5])) : (((/* implicit */int) arr_0 [i_3] [i_3]))))) ? ((-(((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) arr_1 [(short)17] [i_0]))));
                                arr_12 [i_3] [i_4] = ((/* implicit */short) max(((((!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_4])))) ? (((/* implicit */int) ((short) arr_7 [(short)3] [(short)6] [i_0]))) : (((((/* implicit */_Bool) (short)15989)) ? (((/* implicit */int) arr_3 [i_2] [i_1])) : (((/* implicit */int) arr_1 [i_3] [i_3 - 1])))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1 + 1] [i_0])) : (((/* implicit */int) (short)-15983))))));
                                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) min((var_0), ((short)16834)))))), (((/* implicit */int) ((short) arr_9 [i_3] [i_3 + 1] [i_3] [i_3 - 1] [i_3])))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_7 [i_1 - 3] [i_1 - 3] [i_1 - 1])) : (((/* implicit */int) var_14)))) > (((/* implicit */int) ((short) arr_7 [i_1 - 2] [i_1] [i_1 + 1])))));
                var_18 ^= ((/* implicit */short) min((((/* implicit */int) ((short) ((((/* implicit */int) (short)-26756)) / (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))), (max((((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) (short)-866)))), (((((/* implicit */int) (short)32758)) >> (((((/* implicit */int) (short)8059)) - (8030)))))))));
                var_19 = ((/* implicit */short) (-(((/* implicit */int) ((short) arr_10 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_0] [i_0])))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-24266)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_3))))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-27121)) ? (((/* implicit */int) (short)22405)) : (((/* implicit */int) (short)7921)))))) : (((/* implicit */int) max((var_8), (max((var_6), (var_13))))))));
}
