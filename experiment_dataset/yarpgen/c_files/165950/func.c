/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165950
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_11))));
    var_14 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_4 [i_0] = arr_2 [i_0] [i_0];
        arr_5 [i_0] = ((/* implicit */signed char) ((unsigned int) arr_1 [i_0]));
        var_15 = ((/* implicit */unsigned int) ((((arr_1 [i_0]) >= (var_0))) || (((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_16 = ((/* implicit */signed char) (((~(arr_6 [i_1]))) >> (((((/* implicit */int) ((signed char) arr_6 [i_1]))) - (43)))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (+(((arr_6 [i_1]) | (arr_8 [i_1] [i_1]))))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_18 = ((/* implicit */signed char) (+(arr_3 [i_2])));
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_4 = 1; i_4 < 8; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    for (unsigned int i_6 = 1; i_6 < 9; i_6 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) ((signed char) 520675966U));
                            var_20 = ((/* implicit */signed char) ((arr_17 [i_2] [i_3] [i_4 + 2] [i_2] [i_6 + 1]) > (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                for (unsigned int i_8 = 3; i_8 < 8; i_8 += 1) 
                {
                    {
                        var_21 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_5)) ? (arr_2 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_3])))))));
                        arr_29 [i_2] [i_3] [i_2] [i_2] [i_3] [i_3] = arr_27 [i_2] [i_2] [10U] [i_2] [i_2] [10U];
                        arr_30 [i_2] [i_7] [i_3] [i_2] = ((/* implicit */signed char) (-(3708411944U)));
                        arr_31 [i_2] [i_3] [i_7] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_28 [i_2] [i_2] [i_7] [i_8])) & (((/* implicit */int) arr_28 [i_2] [i_3] [8U] [i_8]))));
                    }
                } 
            } 
            var_22 = var_1;
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [(signed char)6])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_19 [i_2] [i_2] [i_3] [3U] [i_3])) : (((/* implicit */int) (signed char)15)))))));
        }
        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            arr_34 [i_2] [i_9] [0U] = ((/* implicit */unsigned int) ((signed char) arr_3 [i_2]));
            arr_35 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_2] [i_2])) ? (((/* implicit */int) arr_33 [i_2] [i_9])) : (((/* implicit */int) arr_33 [i_2] [i_2]))));
        }
        for (signed char i_10 = 1; i_10 < 10; i_10 += 2) 
        {
            var_24 ^= ((/* implicit */unsigned int) ((signed char) arr_16 [i_2]));
            var_25 &= arr_20 [i_2] [i_2] [i_2] [i_2] [i_2];
        }
        arr_39 [i_2] = ((/* implicit */signed char) var_7);
        var_26 = ((/* implicit */unsigned int) arr_25 [i_2] [i_2] [i_2]);
        var_27 = ((/* implicit */unsigned int) (!(((arr_36 [i_2] [i_2] [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_2])))))));
    }
}
