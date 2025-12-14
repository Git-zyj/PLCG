/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126706
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */signed char) (~((~(((/* implicit */int) var_8))))));
                                arr_12 [i_4] [i_1] [i_1] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) min(((signed char)81), ((signed char)-62))))));
                                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) ((signed char) arr_2 [i_0] [i_2]))) : ((+(((/* implicit */int) var_4))))));
                                arr_13 [i_4] [i_1] [i_2] [i_3] [i_4] = min(((short)14280), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18285)) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) var_1)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_5 = 2; i_5 < 9; i_5 += 2) 
                    {
                        var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-46)))))));
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) (signed char)127)))))))));
                        var_14 = ((/* implicit */short) var_7);
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-68)) ? (((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5 - 1])) ? (((/* implicit */int) arr_15 [i_5 + 1] [i_5 - 1] [i_5 - 2] [i_5 - 1])) : (((/* implicit */int) arr_15 [i_5 - 2] [i_5 - 1] [i_5 - 2] [i_5 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5 + 1] [i_5 + 1] [i_5 - 2] [i_5 + 1]))))))))));
                    }
                    for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        arr_19 [i_0] [i_0] [i_2] [i_6] &= ((/* implicit */short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_1] [i_6]))))), (min(((signed char)2), ((signed char)7)))));
                        var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_11 [(short)7] [i_6])) : (((/* implicit */int) (signed char)68))));
                        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)69)) ? ((-(((/* implicit */int) arr_17 [i_2])))) : (((/* implicit */int) ((signed char) var_7)))));
                    }
                    for (short i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) min((var_18), (((signed char) min((((/* implicit */int) (signed char)68)), ((~(((/* implicit */int) var_3)))))))));
                        /* LoopSeq 3 */
                        for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_2] [i_7] [(short)0] [i_8] = ((/* implicit */short) min(((-(((/* implicit */int) (signed char)-96)))), ((-(((/* implicit */int) (signed char)-108))))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_8] &= ((/* implicit */short) (~(((/* implicit */int) ((signed char) var_5)))));
                            arr_27 [i_0] [(signed char)1] [i_2] [i_7] [i_8] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */short) arr_6 [i_0] [i_0] [i_0])), (var_3))))));
                        }
                        for (signed char i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (arr_4 [i_0] [i_1] [i_0])));
                            arr_30 [(signed char)7] [(signed char)7] [(short)5] [i_7] [i_9] [(signed char)9] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_6 [i_0] [(short)2] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(signed char)3] [i_2] [(signed char)3])))))));
                        }
                        for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            arr_33 [i_7] [i_7] [i_0] [i_1] [i_0] |= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1))))))));
                            arr_34 [i_0] [(signed char)8] [(signed char)8] [(signed char)5] [(signed char)8] = ((/* implicit */signed char) var_4);
                        }
                    }
                    arr_35 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_8 [i_0] [i_2]);
                    var_20 = ((/* implicit */signed char) max((((/* implicit */int) arr_20 [(signed char)4] [(signed char)2] [(signed char)4] [(signed char)2] [(signed char)4] [i_1])), ((-(((/* implicit */int) arr_10 [(signed char)0] [i_1] [(signed char)0]))))));
                    var_21 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_23 [(short)7] [i_0] [i_1] [i_1] [i_1] [(short)1] [(signed char)7])) ? (((/* implicit */int) arr_14 [i_2] [(signed char)6] [i_1] [i_0] [i_0])) : (((/* implicit */int) (short)26688)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) var_4);
    var_23 = ((/* implicit */signed char) (short)-18120);
}
