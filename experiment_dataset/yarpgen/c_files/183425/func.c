/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183425
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            {
                var_16 = var_1;
                arr_5 [i_0] [i_0] = (signed char)-1;
                arr_6 [i_0] = (signed char)3;
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                {
                    arr_13 [i_2] = arr_10 [i_2];
                    arr_14 [i_2] [i_2] [(signed char)11] [i_3] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4 + 1] [(signed char)10] [i_4 + 1] [i_2]))))) : (((((((/* implicit */int) arr_7 [(signed char)8])) >> (((/* implicit */int) arr_4 [i_3] [(signed char)4])))) / ((-(((/* implicit */int) var_14))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_21 [(signed char)0] [i_2] [i_3] [i_2] = ((/* implicit */signed char) max((max((((((((/* implicit */int) var_10)) + (2147483647))) >> (((((/* implicit */int) var_0)) + (65))))), (((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (signed char)81)))))), (((((/* implicit */int) ((signed char) arr_3 [i_5] [i_5]))) * (((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) (signed char)-11))))))));
                                arr_22 [i_3] [i_3] [i_2] [i_3] [i_3] = (signed char)32;
                                arr_23 [i_2] [i_3] [i_4 + 1] [i_2] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) var_10)))) != (((/* implicit */int) ((((/* implicit */int) (signed char)-34)) >= (((/* implicit */int) arr_3 [i_4 + 1] [i_6]))))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)21)) << (((((/* implicit */int) (signed char)-50)) + (70)))));
                }
            } 
        } 
    } 
}
