/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180436
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
    var_11 = ((/* implicit */signed char) (~(((((/* implicit */int) max(((signed char)-59), (var_0)))) << (((((/* implicit */int) (signed char)(-127 - 1))) + (137)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_12 = var_6;
        var_13 = var_7;
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_14 = (signed char)15;
        var_15 = ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)-59)) & (((/* implicit */int) (signed char)100))))));
        var_16 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) var_10)))));
    }
    for (signed char i_2 = 2; i_2 < 24; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 3; i_3 < 24; i_3 += 4) 
        {
            var_17 *= ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) arr_10 [(signed char)6])) < (((/* implicit */int) arr_10 [(signed char)20]))))), (((((/* implicit */int) (signed char)100)) + (((/* implicit */int) max((var_7), ((signed char)99))))))));
            arr_11 [(signed char)24] [i_2] [i_3 - 2] = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) var_4)))))))), (((((/* implicit */int) arr_8 [i_2] [i_3 - 2])) / (((/* implicit */int) var_10))))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_10 [i_2]), (var_2)))) ? (((((/* implicit */int) var_4)) / (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_10 [i_2]))));
            arr_12 [i_2] = ((/* implicit */signed char) max((max((((((/* implicit */int) var_6)) + (((/* implicit */int) arr_10 [i_2])))), (((/* implicit */int) max(((signed char)99), ((signed char)-3)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (signed char)59))))))));
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            var_19 *= ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_4])) / (((/* implicit */int) arr_14 [i_2] [i_4]))));
            /* LoopSeq 1 */
            for (signed char i_5 = 2; i_5 < 24; i_5 += 3) 
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_4] [i_5 - 2])) * (((/* implicit */int) (signed char)-73))));
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        {
                            var_21 *= ((/* implicit */signed char) (+(((((/* implicit */int) arr_9 [i_2] [i_4] [i_2])) - (((/* implicit */int) var_1))))));
                            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_2]))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) (~((-(((/* implicit */int) var_4))))));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    for (signed char i_9 = 2; i_9 < 22; i_9 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */int) (signed char)82)) >> (((((/* implicit */int) arr_22 [i_2] [i_4] [(signed char)9] [(signed char)9] [(signed char)14])) + (121))))))));
                            var_25 = arr_8 [i_5 + 1] [i_9 + 3];
                            var_26 *= ((/* implicit */signed char) ((((/* implicit */int) arr_25 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2])) >= (((/* implicit */int) arr_22 [i_5] [i_5] [i_5 + 1] [i_5] [i_9 - 1]))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (signed char i_10 = 2; i_10 < 23; i_10 += 4) 
            {
                for (signed char i_11 = 2; i_11 < 23; i_11 += 4) 
                {
                    for (signed char i_12 = 3; i_12 < 22; i_12 += 2) 
                    {
                        {
                            var_27 = ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))));
                            arr_32 [i_2] [i_4] [(signed char)15] [i_10] [i_11] [i_12] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)-65))))));
                        }
                    } 
                } 
            } 
        }
        var_28 *= arr_13 [(signed char)6];
    }
    for (signed char i_13 = 2; i_13 < 24; i_13 += 1) /* same iter space */
    {
        arr_37 [(signed char)9] = (signed char)3;
        /* LoopNest 2 */
        for (signed char i_14 = 1; i_14 < 24; i_14 += 1) 
        {
            for (signed char i_15 = 1; i_15 < 21; i_15 += 4) 
            {
                {
                    var_29 = (signed char)95;
                    arr_42 [(signed char)5] [(signed char)5] [(signed char)5] [i_15] = ((signed char) ((((/* implicit */int) arr_10 [(signed char)22])) - (((/* implicit */int) (signed char)-99))));
                    var_30 = arr_39 [i_13];
                    var_31 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) < (((((/* implicit */int) arr_41 [i_13 - 2])) >> (((((/* implicit */int) (signed char)-12)) + (21)))))));
                }
            } 
        } 
    }
    var_32 = var_1;
    var_33 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) * ((~(((/* implicit */int) (signed char)34))))));
    var_34 = ((/* implicit */signed char) min((var_34), (((signed char) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((((/* implicit */int) (signed char)0)) * (((/* implicit */int) var_4)))))))));
}
