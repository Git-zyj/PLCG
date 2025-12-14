/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176566
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
    var_18 = ((/* implicit */signed char) var_9);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), ((signed char)-1)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) var_16);
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)32))));
                    arr_7 [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))));
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_0] [i_0]))));
        arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)1)) ^ (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
    }
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 1; i_4 < 8; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                {
                    arr_15 [i_3] = ((/* implicit */unsigned char) ((signed char) (signed char)127));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_4 [i_3] [i_4] [i_3])))))));
                }
            } 
        } 
        var_23 = ((/* implicit */signed char) min((var_23), (((signed char) ((signed char) ((signed char) var_17))))));
        var_24 ^= ((/* implicit */signed char) ((((/* implicit */int) (signed char)118)) <= (min((((/* implicit */int) arr_3 [(unsigned char)3] [(unsigned char)3] [(unsigned char)3])), (((((/* implicit */int) arr_11 [(unsigned char)8])) / (((/* implicit */int) arr_12 [i_3] [i_3] [i_3]))))))));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        var_25 = ((/* implicit */signed char) (unsigned char)64);
        var_26 = var_0;
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)18)))))));
        /* LoopSeq 2 */
        for (unsigned char i_7 = 4; i_7 < 14; i_7 += 3) 
        {
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)192))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_6])))))));
            var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
            var_30 += ((/* implicit */unsigned char) ((((((/* implicit */int) arr_16 [i_6])) + (2147483647))) >> (((((/* implicit */int) var_0)) - (159)))));
        }
        for (unsigned char i_8 = 1; i_8 < 15; i_8 += 3) 
        {
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_8])) ? (((/* implicit */int) arr_17 [i_8 + 2])) : (((/* implicit */int) arr_23 [i_8]))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    {
                        var_32 = var_5;
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_6] [i_6] [i_9] [i_9])) ? (((/* implicit */int) arr_27 [i_8 - 1] [i_8] [i_8])) : (((/* implicit */int) arr_18 [i_8]))));
                        var_34 ^= arr_17 [i_6];
                    }
                } 
            } 
            var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_6] [i_8] [i_6] [i_6] [i_6])) ? ((-(((/* implicit */int) arr_25 [i_6] [i_6])))) : ((+(((/* implicit */int) arr_28 [i_8 + 2] [i_8 - 1] [i_6])))))))));
        }
        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_6])) || (((/* implicit */_Bool) arr_19 [i_6])))))));
    }
    /* LoopSeq 1 */
    for (signed char i_11 = 0; i_11 < 25; i_11 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_12 = 2; i_12 < 24; i_12 += 3) 
        {
            for (unsigned char i_13 = 3; i_13 < 24; i_13 += 3) 
            {
                {
                    var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_34 [(signed char)4] [i_13 + 1]))))) || (((/* implicit */_Bool) arr_37 [i_11])))))));
                    arr_41 [(signed char)13] [i_12] [i_13] [i_11] = ((/* implicit */signed char) var_11);
                }
            } 
        } 
        var_38 = ((/* implicit */unsigned char) (signed char)-73);
    }
}
