/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104171
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_18 ^= (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_19 = ((((/* implicit */int) arr_3 [i_2])) ^ (((/* implicit */int) (_Bool)1)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)4525)) : (((/* implicit */int) var_16)))))))));
                                var_21 ^= ((arr_13 [i_3] [i_3] [i_2] [i_1] [i_0]) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_2] [i_4])) : (((/* implicit */int) arr_13 [i_4] [i_1] [i_2] [i_1] [i_0])));
                                var_22 &= ((short) ((((((/* implicit */int) (short)-4529)) + (2147483647))) << (((((/* implicit */int) (short)4517)) - (4517)))));
                                var_23 = ((/* implicit */_Bool) ((var_1) ? (arr_11 [i_0] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */int) var_14))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_5 = 1; i_5 < 21; i_5 += 2) 
    {
        arr_18 [i_5] [i_5] = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)4517))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (((/* implicit */int) var_2)));
        arr_19 [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) var_1))));
    }
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    var_24 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_25 [i_6] [i_6 + 1])) : (((/* implicit */int) var_12)))), (((((/* implicit */int) (short)4525)) + (((/* implicit */int) (short)-4517))))));
                    var_25 = ((((/* implicit */int) arr_6 [i_6] [(_Bool)1])) >> ((((~(((/* implicit */int) (_Bool)1)))) + (5))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) (((+(((int) var_2)))) - (((/* implicit */int) var_14))));
}
