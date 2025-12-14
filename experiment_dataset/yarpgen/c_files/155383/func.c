/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155383
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) ((signed char) var_7))) * (((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (signed char)-12)))))) : (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_0))))))))));
    var_16 = ((/* implicit */signed char) var_10);
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_12)) | ((+(((((/* implicit */int) var_12)) - (((/* implicit */int) var_11))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_18 += ((/* implicit */unsigned short) max((((/* implicit */int) min(((unsigned short)44019), (((/* implicit */unsigned short) (signed char)117))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) arr_1 [i_0]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? ((~(((/* implicit */int) arr_8 [i_0] [i_1] [(signed char)11] [(unsigned short)5])))) : (((/* implicit */int) (signed char)125))));
                                var_20 = ((/* implicit */signed char) min((((/* implicit */int) arr_4 [i_0])), (((((/* implicit */int) arr_4 [i_0])) | (((/* implicit */int) max((var_1), (arr_3 [i_0] [i_2]))))))));
                            }
                        } 
                    } 
                    arr_11 [i_2] = var_5;
                    /* LoopSeq 4 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        arr_15 [i_5] = ((/* implicit */signed char) min((((/* implicit */int) var_12)), ((((!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_5] [i_2])))) ? (((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (signed char)-57)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))));
                        arr_16 [i_5] [i_5] [i_0] [i_2] [i_5] = ((/* implicit */unsigned short) max((arr_10 [i_0]), (arr_7 [i_0])));
                        arr_17 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)40791)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)106), (var_5)))))))));
                    }
                    for (signed char i_6 = 2; i_6 < 24; i_6 += 3) 
                    {
                        arr_20 [(unsigned short)8] [(unsigned short)3] [i_2] [i_6] = ((/* implicit */signed char) max(((~(((/* implicit */int) var_8)))), (((/* implicit */int) var_10))));
                        arr_21 [i_0] [i_0] [(signed char)24] [i_0] = ((/* implicit */unsigned short) min(((signed char)57), ((signed char)54)));
                        var_21 = ((/* implicit */unsigned short) (signed char)-79);
                        arr_22 [i_6 - 1] [i_2] [i_1] [(signed char)21] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_18 [i_1] [i_6 - 1] [i_6 - 2] [i_6 - 2])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_18 [i_0] [i_6 + 1] [i_6 + 1] [i_6])), (arr_14 [i_6] [i_6 - 1] [i_6 - 1] [(signed char)19])))) : (((/* implicit */int) var_4))));
                    }
                    /* vectorizable */
                    for (signed char i_7 = 2; i_7 < 24; i_7 += 3) 
                    {
                        var_22 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-126))));
                        arr_26 [(signed char)24] [(signed char)15] [i_7] &= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)57)) & (((/* implicit */int) arr_14 [i_7 + 1] [(unsigned short)4] [i_7 + 1] [i_7 + 1]))));
                    }
                    for (signed char i_8 = 1; i_8 < 24; i_8 += 1) 
                    {
                        arr_30 [i_0] [i_8] [(unsigned short)7] [(signed char)13] = var_10;
                        var_23 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_0] [i_8 + 1] [(unsigned short)16] [i_1])))))));
                    }
                }
            } 
        } 
    } 
    var_24 = var_13;
}
