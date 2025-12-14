/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151404
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) (signed char)82)) / (((/* implicit */int) max((var_13), (var_10)))))) : (((/* implicit */int) var_12))));
            var_16 = ((/* implicit */signed char) ((((/* implicit */int) max((var_1), (((/* implicit */signed char) ((((/* implicit */int) (signed char)82)) != (((/* implicit */int) arr_2 [i_0])))))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12))))))))));
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)(-127 - 1)), ((signed char)-40)))) ? (((/* implicit */int) min(((signed char)40), ((signed char)-83)))) : (((/* implicit */int) min(((signed char)116), ((signed char)-123))))));
                            arr_13 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_3 + 2])) < (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((signed char) arr_8 [i_0] [i_1 - 1] [(signed char)12] [(signed char)0] [i_3] [i_4])))))));
                            var_18 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) min((var_10), ((signed char)1)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4])) : (((/* implicit */int) var_4)))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        {
                            var_19 &= ((/* implicit */signed char) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min(((signed char)-96), (var_2)))))), (((((/* implicit */int) arr_8 [(signed char)11] [(signed char)11] [i_7] [i_7] [i_1] [(signed char)3])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [(signed char)17] [i_6] [(signed char)12])))))))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_8))) ? (((/* implicit */int) min(((signed char)122), ((signed char)123)))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_7] [(signed char)11] [i_6]))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_8 = 2; i_8 < 17; i_8 += 1) 
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-118)))))))) ? ((+(((((/* implicit */int) arr_15 [i_0] [i_8] [(signed char)12])) % (((/* implicit */int) arr_18 [(signed char)11] [i_8] [i_8] [(signed char)17])))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) >= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (signed char)-84)))))))));
            /* LoopSeq 3 */
            for (signed char i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
            {
                var_22 += arr_26 [i_0];
                var_23 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) arr_9 [i_0] [i_0] [i_8] [(signed char)16] [i_9] [i_9])))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)7)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) arr_20 [i_9] [i_9] [i_9] [i_9]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [(signed char)8] [(signed char)8])) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (signed char)7)))) : (((((((/* implicit */_Bool) (signed char)-62)) && (((/* implicit */_Bool) arr_2 [i_8])))) ? (((/* implicit */int) max(((signed char)112), (arr_2 [i_9])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_8 - 2] [i_8 - 2])))))))));
            }
            /* vectorizable */
            for (signed char i_10 = 0; i_10 < 18; i_10 += 1) /* same iter space */
            {
                var_25 *= ((/* implicit */signed char) ((((/* implicit */int) (signed char)127)) + (((((/* implicit */_Bool) arr_15 [i_0] [(signed char)15] [i_10])) ? (((/* implicit */int) arr_10 [(signed char)13] [(signed char)13] [i_10] [i_10])) : (((/* implicit */int) arr_10 [i_0] [i_0] [(signed char)7] [i_0]))))));
                var_26 = (signed char)-64;
            }
            for (signed char i_11 = 0; i_11 < 18; i_11 += 4) 
            {
                arr_33 [i_0] [i_8] [i_8] [i_11] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)62))))) ? (((/* implicit */int) (signed char)-55)) : ((~(((/* implicit */int) (signed char)111)))))), (((/* implicit */int) min((arr_20 [i_8 + 1] [i_0] [i_11] [i_11]), ((signed char)112))))));
                arr_34 [i_0] [i_8 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_28 [i_0] [i_0] [(signed char)12] [i_11]))));
                var_27 = ((/* implicit */signed char) max((max((((/* implicit */int) max((arr_16 [(signed char)15] [i_8 - 1] [(signed char)2]), (var_6)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (signed char)6)))))), (((/* implicit */int) arr_28 [i_0] [i_8] [(signed char)3] [i_0]))));
            }
            arr_35 [(signed char)1] [(signed char)1] [i_8 - 2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_14 [i_8]))));
            arr_36 [i_0] [i_0] [i_8] = ((/* implicit */signed char) max((((((/* implicit */int) ((signed char) (signed char)127))) != (((/* implicit */int) (signed char)-65)))), (((((/* implicit */int) max((arr_16 [i_0] [i_8 + 1] [i_8]), (var_14)))) != (((/* implicit */int) (signed char)-10))))));
            arr_37 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) var_14)) & (((/* implicit */int) max((var_7), (arr_11 [i_0] [i_0] [i_8])))))) : (((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) min((var_1), ((signed char)83)))) : (((/* implicit */int) (signed char)-58))))));
        }
        arr_38 [i_0] = min((max(((signed char)125), ((signed char)84))), ((signed char)(-127 - 1)));
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)112))) ? (((/* implicit */int) ((((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) (signed char)127)))) < (((/* implicit */int) var_8))))) : (((/* implicit */int) arr_0 [i_0]))));
        var_29 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)32)))), (((/* implicit */int) arr_26 [i_0])))) != (((/* implicit */int) min((max((arr_20 [i_0] [i_0] [i_0] [i_0]), ((signed char)92))), (max((var_7), ((signed char)-66))))))));
    }
    /* LoopSeq 1 */
    for (signed char i_12 = 0; i_12 < 17; i_12 += 4) 
    {
        var_30 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)44))));
        var_31 = (signed char)-64;
        var_32 = arr_41 [i_12] [i_12];
    }
    var_33 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) max((var_10), (var_11)))) <= (((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_15)))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-83)) * (((/* implicit */int) (signed char)12))))) ? (((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (signed char)29))))))));
    var_34 = var_8;
}
