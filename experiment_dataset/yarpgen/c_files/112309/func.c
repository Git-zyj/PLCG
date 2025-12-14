/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112309
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] [i_3] [i_0] = max((min((arr_0 [i_0 + 1]), (min(((signed char)-116), ((signed char)-95))))), (max((min((var_4), ((signed char)-89))), (arr_8 [i_0] [i_0]))));
                                arr_15 [i_0] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) max(((signed char)99), (arr_7 [i_0] [i_0] [i_2] [i_3] [i_4] [i_3])))) << (((((((/* implicit */int) (signed char)-89)) + (114))) - (9))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = var_8;
    /* LoopSeq 4 */
    for (signed char i_5 = 1; i_5 < 21; i_5 += 3) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_5 + 3])) ^ (((((/* implicit */int) (signed char)-89)) | (((/* implicit */int) (signed char)(-127 - 1)))))))) ? (((((/* implicit */int) arr_17 [i_5 - 1])) << (((((/* implicit */int) arr_18 [i_5])) - (66))))) : ((~(((/* implicit */int) arr_16 [i_5 + 1] [i_5 + 2])))))))));
        var_21 += ((/* implicit */signed char) ((((((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (signed char)80)))) < (((((/* implicit */int) arr_17 [i_5 - 1])) * (((/* implicit */int) (signed char)72)))))) ? ((~(((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) arr_16 [i_5] [i_5 + 2])) : (((/* implicit */int) arr_16 [i_5] [i_5])))))) : (((((/* implicit */_Bool) ((signed char) var_13))) ? (((((/* implicit */int) (signed char)25)) >> (((((/* implicit */int) (signed char)70)) - (58))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) var_17))))))));
    }
    for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        var_22 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) arr_21 [i_6])) : (((/* implicit */int) arr_8 [i_6] [i_6])))) : ((+(((/* implicit */int) arr_18 [i_6]))))))));
        arr_22 [i_6] [i_6] = arr_4 [i_6];
        /* LoopNest 2 */
        for (signed char i_7 = 4; i_7 < 14; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)119))))) ? (((((/* implicit */int) arr_24 [i_6] [i_7 + 3] [i_6])) % (((/* implicit */int) arr_24 [i_6] [i_7 - 1] [i_8])))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) (signed char)-117)))) < (((((/* implicit */_Bool) arr_5 [i_6] [i_8])) ? (((/* implicit */int) arr_4 [i_6])) : (((/* implicit */int) arr_8 [i_6] [i_6])))))))));
                    var_24 = ((/* implicit */signed char) max((((/* implicit */int) arr_24 [i_7 - 1] [i_7 - 3] [i_7 + 3])), (((((/* implicit */_Bool) arr_24 [i_7 - 2] [i_7 - 2] [i_7 + 1])) ? (((/* implicit */int) arr_24 [i_7 - 2] [i_7 - 4] [i_7 + 1])) : (((/* implicit */int) arr_24 [i_7 + 1] [i_7 - 4] [i_7 - 2]))))));
                }
            } 
        } 
    }
    for (signed char i_9 = 3; i_9 < 15; i_9 += 4) 
    {
        var_25 = ((signed char) (!(((/* implicit */_Bool) arr_9 [i_9] [i_9] [i_9 - 3] [i_9] [i_9 + 2]))));
        arr_29 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) arr_1 [i_9] [(signed char)6])) : (((/* implicit */int) arr_2 [i_9 - 3] [i_9])))), (((/* implicit */int) arr_10 [i_9 + 2] [i_9 - 2] [i_9 - 2] [i_9 - 2]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) max((arr_13 [i_9] [i_9] [i_9 + 1] [i_9] [i_9]), ((signed char)50)))))))));
        arr_30 [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */int) arr_28 [i_9 + 2] [i_9 + 2])) : (((/* implicit */int) (signed char)-17)))) | (((((/* implicit */_Bool) arr_28 [i_9 - 1] [i_9 + 1])) ? (((/* implicit */int) arr_28 [i_9 - 2] [i_9 - 3])) : (((/* implicit */int) (signed char)41))))));
    }
    for (signed char i_10 = 0; i_10 < 19; i_10 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)67))))) ? (((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) max((arr_8 [i_10] [i_11]), ((signed char)-24)))) : (((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) arr_10 [i_10] [i_10] [i_11] [i_11])))))) : (((/* implicit */int) (signed char)-64))));
            var_27 = ((/* implicit */signed char) max((var_27), (arr_12 [i_10] [i_11] [i_10] [i_10] [i_10])));
            /* LoopNest 3 */
            for (signed char i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                for (signed char i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    for (signed char i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        {
                            var_28 = ((signed char) min((max(((signed char)127), (var_16))), (max((arr_17 [i_14]), (arr_12 [i_10] [i_10] [i_12] [i_13] [i_14])))));
                            var_29 ^= ((/* implicit */signed char) min((((/* implicit */int) max((max(((signed char)19), (arr_5 [i_11] [i_12]))), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_10])) && (((/* implicit */_Bool) arr_41 [i_10] [i_11] [i_12] [i_11] [i_11])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_10] [i_10])) ? (((/* implicit */int) arr_10 [i_11] [i_12] [i_13] [i_14])) : (((/* implicit */int) (signed char)114))))) ? (((/* implicit */int) min((var_2), (arr_8 [i_10] [i_10])))) : ((~(((/* implicit */int) var_16))))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_15 = 0; i_15 < 19; i_15 += 1) 
        {
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_15] [i_15] [i_15] [i_15] [i_10] [i_15])) && (((/* implicit */_Bool) min((((signed char) arr_45 [i_15] [i_10] [i_10] [i_10] [i_10])), ((signed char)6))))));
            /* LoopSeq 1 */
            for (signed char i_16 = 4; i_16 < 16; i_16 += 2) 
            {
                arr_53 [i_16] [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */int) var_2)) + (((/* implicit */int) arr_34 [i_10])))) > (((/* implicit */int) arr_42 [i_10]))))) >= (((((/* implicit */_Bool) arr_3 [i_10])) ? (((((/* implicit */_Bool) arr_7 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (signed char)-39)))) : (((((/* implicit */int) (signed char)92)) & (((/* implicit */int) (signed char)78))))))));
                var_31 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_16] [i_16 - 1] [i_16 + 3] [i_16]))));
                /* LoopSeq 2 */
                for (signed char i_17 = 0; i_17 < 19; i_17 += 3) 
                {
                    var_32 = max((min(((signed char)127), ((signed char)27))), (arr_10 [i_17] [i_17] [i_16 - 1] [i_16 + 2]));
                    arr_58 [i_15] [i_16] [i_16] [i_17] [i_17] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_56 [i_16])) ^ (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) arr_10 [i_17] [i_16] [i_15] [i_10]))))))) ? (((((/* implicit */_Bool) min((arr_11 [i_17] [i_16] [i_16] [i_15] [i_15] [i_10]), (var_13)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_16]))))) : (((/* implicit */int) (signed char)-111)))) : ((~(((/* implicit */int) (signed char)92))))));
                    arr_59 [i_10] = arr_40 [i_10] [i_10] [i_10] [i_17];
                    arr_60 [i_16] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [i_16] [i_17] [i_17] [i_16 - 1] [i_16])) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) arr_13 [i_17] [i_17] [i_17] [i_16 - 4] [i_16])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)32)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_41 [i_17] [i_17] [i_17] [i_16 - 4] [i_15])) : (((/* implicit */int) (signed char)76))))));
                }
                for (signed char i_18 = 0; i_18 < 19; i_18 += 3) 
                {
                    var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_18] [i_15] [i_16] [i_15] [i_15] [i_10])) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) (signed char)(-127 - 1))))), (((((/* implicit */int) arr_32 [i_16 - 4])) >> (((((/* implicit */int) (signed char)116)) - (87))))))))));
                    var_34 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (signed char)77))))) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) arr_57 [i_16 - 4] [i_16] [i_16 - 4] [i_16 - 3])))), (((/* implicit */int) ((signed char) max(((signed char)-79), (arr_45 [i_18] [i_16] [i_10] [i_10] [i_10])))))));
                }
            }
        }
        arr_63 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) (signed char)106)))))) ? (max((((/* implicit */int) (signed char)10)), (((((/* implicit */int) arr_4 [i_10])) | (((/* implicit */int) arr_56 [i_10])))))) : (((/* implicit */int) (signed char)76))));
        /* LoopNest 2 */
        for (signed char i_19 = 0; i_19 < 19; i_19 += 3) 
        {
            for (signed char i_20 = 0; i_20 < 19; i_20 += 4) 
            {
                {
                    arr_68 [i_10] [i_19] [i_10] = (signed char)94;
                    var_35 = ((signed char) ((((/* implicit */_Bool) arr_16 [i_10] [i_19])) ? (((/* implicit */int) arr_16 [i_20] [i_19])) : (((/* implicit */int) arr_16 [i_10] [i_10]))));
                    var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)86), ((signed char)-117)))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_10])) != (((/* implicit */int) arr_4 [i_10]))))) : (((((/* implicit */int) ((signed char) (signed char)127))) * (((/* implicit */int) max((arr_50 [i_10] [i_19] [i_20]), (var_13)))))))))));
                }
            } 
        } 
    }
}
