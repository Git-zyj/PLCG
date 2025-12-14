/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100189
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_15 = arr_4 [i_0 + 1] [i_1 - 2];
                var_16 = ((/* implicit */signed char) max((var_16), (var_10)));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((((/* implicit */int) (signed char)-118)) + (138)))))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) (signed char)109))));
        arr_10 [i_2] |= (signed char)87;
        var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((((/* implicit */int) var_6)) & (((/* implicit */int) (signed char)-73)))) : (((/* implicit */int) var_4))));
    }
    for (signed char i_3 = 1; i_3 < 7; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */int) min((var_2), (var_0)))) : (((((/* implicit */int) var_1)) + (((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            arr_17 [i_3] = var_2;
            var_18 -= ((signed char) ((((/* implicit */_Bool) arr_16 [(signed char)4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_16 [i_3]))))) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) var_9))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_4))));
            arr_18 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) arr_6 [i_3] [i_4])))) : (((/* implicit */int) var_4))));
        }
        for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    {
                        arr_26 [i_3] [i_5] [i_3] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (signed char)-119))))) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) (signed char)-127))))) ? (((((/* implicit */_Bool) arr_2 [i_3 - 1])) ? (((/* implicit */int) arr_2 [i_3 - 1])) : (((/* implicit */int) arr_2 [i_3 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */int) min(((signed char)-64), (arr_6 [i_3 + 4] [i_3 + 1])))) + ((~(((/* implicit */int) (signed char)12)))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-70)) : ((-(((/* implicit */int) arr_25 [i_3] [i_7] [i_8]))))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (signed char)123)))))));
                            arr_29 [i_3] [i_3] [i_3] [i_6] [i_7] [i_8] [i_8] = var_8;
                            var_24 ^= ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))));
                        }
                        for (signed char i_9 = 2; i_9 < 9; i_9 += 2) /* same iter space */
                        {
                            arr_32 [i_3] [i_3] [i_3] [i_9] = (signed char)-17;
                            var_25 = ((/* implicit */signed char) ((((((/* implicit */int) arr_11 [i_3] [i_9 + 1])) * (((/* implicit */int) (signed char)71)))) / (((((/* implicit */_Bool) arr_24 [i_5] [i_3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)12))))));
                            var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)63)) ? (((((/* implicit */_Bool) arr_8 [i_5] [i_3 + 3])) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) max((arr_5 [i_3 - 1] [i_9]), (var_8))))));
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)122)) ? (((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) (signed char)104)))) : (((/* implicit */int) max((var_3), ((signed char)122)))))), (((/* implicit */int) min((((signed char) var_8)), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-8)) || (((/* implicit */_Bool) var_6)))))))))))));
                            var_28 += ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_2))))) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) min((var_1), (var_14)))) ? (((((/* implicit */int) arr_5 [i_3] [i_6])) * (((/* implicit */int) (signed char)94)))) : (((/* implicit */int) arr_24 [i_6] [i_9]))))));
                        }
                        for (signed char i_10 = 2; i_10 < 9; i_10 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */signed char) min((var_29), (var_0)));
                            var_30 *= ((signed char) var_11);
                            arr_36 [i_10] [i_3] [i_7] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_3] [i_3] [i_3] [i_10 + 2] [i_3])) || (((/* implicit */_Bool) var_8)))))));
                        }
                    }
                } 
            } 
            var_31 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((/* implicit */int) arr_16 [(signed char)4])) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))) : (((/* implicit */int) min(((signed char)5), ((signed char)-127))))))));
            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)122)) + (((/* implicit */int) (signed char)-65))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((var_3), (arr_15 [(signed char)0] [i_3] [(signed char)0])))))), (((((/* implicit */_Bool) arr_28 [i_3] [i_3] [i_3] [i_5] [i_5] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_34 [i_5] [i_5] [i_3 - 1] [i_5] [(signed char)8])))))))));
            var_33 += var_12;
        }
    }
}
