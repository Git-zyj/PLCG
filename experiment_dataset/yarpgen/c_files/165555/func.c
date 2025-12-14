/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165555
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */int) (signed char)5)) % (((/* implicit */int) (signed char)60)))) - (((/* implicit */int) (signed char)-32)))) * (((((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 2] [i_1 - 1])) % (((/* implicit */int) arr_3 [i_1 + 4] [i_1 - 2] [i_1 + 2]))))));
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */int) (signed char)56)) ^ (((/* implicit */int) var_5)))) : (((((((/* implicit */int) (signed char)-32)) + (2147483647))) << (((((((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 2])) + (71))) - (22)))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [(signed char)6])) >= (((/* implicit */int) (signed char)-32))))) : (((/* implicit */int) (signed char)-72))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0] [(signed char)2]))))) ? (((/* implicit */int) max(((signed char)27), ((signed char)31)))) : (((/* implicit */int) arr_4 [i_0])))) : (min(((~(((/* implicit */int) (signed char)-3)))), (((/* implicit */int) arr_5 [i_1]))))));
                var_12 = ((/* implicit */signed char) ((((((((/* implicit */int) var_3)) < (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) min((var_2), (var_0)))) : (((/* implicit */int) ((signed char) var_4))))) % (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) min((arr_0 [i_1] [i_1 - 1]), (var_6)))) : (((/* implicit */int) var_9))))));
            }
        } 
    } 
    var_13 = var_10;
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_3])) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_11 [(signed char)5]))));
            arr_14 [i_2] = ((signed char) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_2]))));
        }
        var_15 = var_1;
    }
    for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        var_16 = ((signed char) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_16 [i_4])))));
        arr_17 [i_4] = arr_16 [i_4];
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((((((((/* implicit */int) arr_15 [(signed char)3] [(signed char)5])) - (((/* implicit */int) (signed char)37)))) * (((/* implicit */int) max((arr_16 [i_4]), (var_6)))))), (((/* implicit */int) (((~(((/* implicit */int) arr_16 [i_4])))) <= (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (signed char)90)))))))))))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        arr_25 [(signed char)4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((arr_22 [(signed char)14] [i_5] [i_5] [i_6] [i_5] [(signed char)16]), (var_7)))) ? ((+(((/* implicit */int) arr_24 [i_4] [(signed char)11] [(signed char)11] [i_6] [i_7])))) : (((/* implicit */int) var_3)))), (((((/* implicit */int) ((signed char) arr_21 [i_7]))) / (((/* implicit */int) (signed char)-14))))));
                        var_18 = ((/* implicit */signed char) (~(min((((/* implicit */int) arr_18 [(signed char)16] [(signed char)16] [i_6])), (((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) (signed char)-110))))))));
                    }
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        arr_29 [i_8] [i_6] = arr_23 [i_8] [i_5] [i_6] [(signed char)9] [i_5] [i_4];
                        arr_30 [i_8] [i_5] [i_5] [i_4] [(signed char)7] = var_10;
                    }
                    /* vectorizable */
                    for (signed char i_9 = 4; i_9 < 17; i_9 += 1) 
                    {
                        var_19 ^= ((signed char) var_9);
                        /* LoopSeq 3 */
                        for (signed char i_10 = 0; i_10 < 19; i_10 += 3) 
                        {
                            var_20 = var_2;
                            arr_36 [i_4] [i_5] [i_5] [i_9] [i_10] [i_9] = ((signed char) var_7);
                            arr_37 [i_4] [(signed char)18] [i_9] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
                        }
                        for (signed char i_11 = 2; i_11 < 16; i_11 += 4) 
                        {
                            arr_40 [i_9] [(signed char)16] [(signed char)16] [i_9] [(signed char)16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_11] [i_9 - 3] [i_6] [(signed char)5] [i_5] [i_5] [i_4])) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) var_8))));
                            arr_41 [i_4] [i_5] [i_6] [i_9] [i_11 + 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_9 - 4]))));
                            arr_42 [i_4] [i_9] [i_4] [i_4] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_19 [i_4]))))));
                        }
                        for (signed char i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            arr_46 [i_4] [i_9] [i_6] [i_9] [i_12] = (signed char)85;
                            arr_47 [i_4] [i_4] [(signed char)0] [i_6] [i_9] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_9 + 2] [i_9 - 2])) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) var_0))));
                            var_21 = ((/* implicit */signed char) (+(((/* implicit */int) arr_18 [i_9 - 2] [i_9 - 1] [i_9 + 2]))));
                        }
                    }
                    arr_48 [i_6] [i_6] [i_6] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((arr_39 [i_4] [i_4] [i_4] [i_4] [(signed char)12] [i_6]), (var_0)))) ? (((((/* implicit */int) arr_34 [i_5])) ^ (((/* implicit */int) arr_38 [i_4] [(signed char)5] [i_4] [(signed char)5] [i_4] [i_4] [i_4])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_39 [i_4] [i_4] [i_5] [(signed char)16] [i_6] [i_6])) : (((/* implicit */int) arr_20 [i_5] [i_6]))))))));
                    arr_49 [(signed char)17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) arr_24 [i_4] [(signed char)1] [i_5] [i_5] [(signed char)18])) : (((/* implicit */int) (signed char)-45))))) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) min(((signed char)-110), ((signed char)24))))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_43 [i_4] [i_4]))))) > (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_34 [i_6])))))))) - (((((/* implicit */int) min((arr_26 [i_4] [i_4] [i_5] [i_6]), (arr_33 [(signed char)18] [i_5] [i_5] [i_5] [i_5])))) | (((((/* implicit */int) var_2)) / (((/* implicit */int) arr_39 [i_6] [i_6] [i_5] [i_4] [(signed char)5] [i_4]))))))));
                }
            } 
        } 
    }
}
