/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174861
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_1] &= arr_2 [i_0] [i_1];
                arr_6 [i_0] [i_0] = max((max((min((((/* implicit */unsigned int) arr_4 [(short)7] [i_1])), (var_3))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_2)), (var_1)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_2 [i_1] [(signed char)1]))) ? (((int) arr_4 [i_1] [i_0])) : (((/* implicit */int) ((unsigned char) var_4)))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0] [i_0]);
                        arr_12 [i_0] [i_0] [i_2] [i_1] &= ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-54)) : (var_7))), (((/* implicit */int) ((short) (signed char)-127)))))), (4294967295U)));
                        arr_13 [i_0] [(unsigned char)6] [i_1] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (((((/* implicit */_Bool) arr_1 [i_0] [i_3])) ? (var_3) : (arr_0 [i_0] [0U]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((arr_2 [(signed char)1] [i_1]), (var_5))))))));
                    }
                    for (short i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                    {
                        arr_18 [(unsigned char)5] [(unsigned char)5] [i_4] [(unsigned char)5] [(short)5] = max((((/* implicit */unsigned int) (short)12031)), (215585202U));
                        arr_19 [i_0] [i_0] [i_4] [i_2] [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) var_8)), (((unsigned int) max((((/* implicit */short) var_1)), (var_8))))));
                        arr_20 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_4)) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_0] [i_0])), (var_0))))))), (((((/* implicit */_Bool) min((var_5), (arr_2 [i_2] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) arr_8 [i_0] [i_1] [i_2])), (var_2))))) : (((unsigned int) var_4))))));
                        arr_21 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((signed char) ((arr_4 [i_0] [i_0]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_14 [i_4] [i_1] [i_1] [i_1] [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                    {
                        arr_24 [i_5] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) ((signed char) arr_17 [i_0] [i_1] [i_2] [i_0]));
                        arr_25 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) var_6)) % (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) >= (1909630846U))))));
                        arr_26 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) var_9);
                        arr_27 [i_5] = ((/* implicit */signed char) ((unsigned char) arr_22 [i_5]));
                    }
                    arr_28 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) min((((/* implicit */short) ((signed char) arr_22 [i_0]))), (((short) var_5))))) : (((((/* implicit */_Bool) min((arr_2 [i_1] [i_2]), (((/* implicit */unsigned int) var_1))))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((_Bool) arr_22 [i_1])))))));
                }
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 3; i_7 < 9; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_35 [i_1] [i_7] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_8] [i_0] [i_1] [i_0]))) : (min((var_5), (((/* implicit */unsigned int) arr_3 [i_7] [i_7])))))) == (((/* implicit */unsigned int) ((/* implicit */int) max((arr_15 [i_7 + 1] [i_1] [i_7 + 1] [i_7]), (((/* implicit */signed char) arr_17 [i_7 - 2] [i_6] [i_6] [i_6]))))))));
                                arr_36 [i_0] [i_0] [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) max((((arr_17 [i_7] [i_7 - 2] [i_7] [i_7 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))) : (11U))), (((/* implicit */unsigned int) min((var_8), (((/* implicit */short) arr_17 [i_7] [i_7 - 3] [i_7] [i_7 - 2])))))));
                                arr_37 [i_0] [i_1] [i_1] [i_7] [i_8] [i_8] = ((/* implicit */signed char) max((arr_31 [i_0] [i_0] [i_6] [i_7] [i_6]), (arr_14 [i_0] [i_0] [3] [3] [i_7] [i_0])));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        arr_40 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned short) arr_10 [i_0] [i_1] [i_6] [i_9]))), (min((min((((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_0])), (arr_23 [i_0] [i_1] [i_0] [i_6] [i_1] [i_9]))), (((/* implicit */unsigned int) var_6))))));
                        arr_41 [2U] [i_1] [i_1] [i_6] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((arr_0 [i_0] [i_1]) - (arr_0 [i_9] [i_9])))));
                        arr_42 [i_0] [i_9] [i_9] [i_0] [i_0] [i_9] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_32 [i_6])), (var_6))))) & (((unsigned int) var_3)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (min((var_7), (((/* implicit */int) arr_17 [i_9] [i_1] [i_6] [i_6])))) : (((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_30 [i_0] [i_0] [i_0])))))))));
                    }
                    /* vectorizable */
                    for (signed char i_10 = 4; i_10 < 7; i_10 += 3) 
                    {
                        arr_45 [i_0] [i_10] = ((unsigned short) arr_17 [i_0] [i_1] [i_1] [i_0]);
                        arr_46 [i_10] [i_10] = ((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0] [i_10]);
                    }
                    arr_47 [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_6]);
                }
            }
        } 
    } 
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_7))) && (((/* implicit */_Bool) var_9))));
    var_11 &= ((/* implicit */short) var_3);
}
