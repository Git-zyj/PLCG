/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113180
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
    var_15 = ((/* implicit */signed char) min((var_15), (((signed char) (signed char)-100))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((((/* implicit */int) min((arr_10 [i_2] [i_1] [i_0]), (arr_7 [i_3] [i_2] [i_0] [i_0])))), (((((/* implicit */int) (signed char)3)) | (((/* implicit */int) (signed char)83)))))))));
                            var_17 = ((/* implicit */signed char) max((var_17), (max(((signed char)23), ((signed char)-87)))));
                            var_18 -= ((signed char) ((((/* implicit */int) ((signed char) (signed char)108))) <= (((/* implicit */int) var_13))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_1] [i_0])))))));
                var_20 = (signed char)-48;
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (signed char i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] |= ((signed char) ((((/* implicit */int) arr_15 [i_5] [i_5] [(signed char)15] [i_5 + 2])) > (((/* implicit */int) arr_7 [i_5] [i_5 + 1] [i_5] [i_5 + 2]))));
                            arr_18 [i_5] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) arr_9 [i_5 + 1] [i_0] [i_0] [i_5])) : (((/* implicit */int) (signed char)-6)))), (((/* implicit */int) max(((signed char)20), (arr_7 [i_5 + 3] [i_5 + 3] [i_4] [i_5 - 1]))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_8 [i_1] [i_5 + 2] [i_5] [i_5]), (max(((signed char)-11), ((signed char)33)))))) == (((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) arr_7 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])) : (((/* implicit */int) var_5))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 4; i_6 < 15; i_6 += 1) 
                {
                    for (signed char i_7 = 3; i_7 < 14; i_7 += 3) 
                    {
                        {
                            var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)62), ((signed char)-54)))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((var_2), (var_14)))) || (((/* implicit */_Bool) min((var_3), (var_7))))))) : (((/* implicit */int) ((signed char) arr_24 [i_0] [i_1] [i_6] [i_7 + 1] [i_6 - 3] [i_7 - 3])))));
                            var_23 = ((/* implicit */signed char) max((var_23), (((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6] [i_1] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */int) (signed char)53)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-26)))))))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) ((signed char) (signed char)-56))) : (((/* implicit */int) (signed char)35))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) arr_25 [i_1] [i_1])) : (((/* implicit */int) var_1)))), (((/* implicit */int) max(((signed char)-15), ((signed char)-36))))))) ? ((((+(((/* implicit */int) (signed char)48)))) / ((+(((/* implicit */int) (signed char)54)))))) : (((/* implicit */int) (signed char)-1))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_8 = 1; i_8 < 15; i_8 += 1) 
    {
        for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            for (signed char i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        for (signed char i_12 = 1; i_12 < 15; i_12 += 4) 
                        {
                            {
                                var_26 -= min((max((var_12), (arr_35 [i_11] [i_9] [(signed char)6] [(signed char)6]))), (min(((signed char)-54), ((signed char)33))));
                                var_27 -= ((signed char) var_3);
                            }
                        } 
                    } 
                    var_28 |= ((/* implicit */signed char) min((min(((+(((/* implicit */int) var_11)))), (((/* implicit */int) (signed char)95)))), (max((((/* implicit */int) min(((signed char)-18), ((signed char)-4)))), ((+(((/* implicit */int) arr_31 [(signed char)14] [i_9] [i_9] [i_9]))))))));
                    arr_38 [i_8] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)48)) / (((/* implicit */int) (signed char)-35))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((signed char) ((signed char) (signed char)43))))));
                    var_29 = var_5;
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_13 = 0; i_13 < 23; i_13 += 4) 
    {
        for (signed char i_14 = 1; i_14 < 21; i_14 += 4) 
        {
            for (signed char i_15 = 3; i_15 < 21; i_15 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_16 = 3; i_16 < 22; i_16 += 4) 
                    {
                        for (signed char i_17 = 2; i_17 < 22; i_17 += 3) 
                        {
                            {
                                var_30 = ((signed char) ((((/* implicit */_Bool) max((arr_49 [i_14] [i_14] [i_14] [i_14] [i_14]), (arr_48 [i_13] [i_15] [i_14] [i_13])))) ? (((/* implicit */int) ((signed char) (signed char)-9))) : (((/* implicit */int) min((var_7), ((signed char)-110))))));
                                var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)-6), ((signed char)-82)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)19), ((signed char)-54))))))) : (((/* implicit */int) var_11)))))));
                                var_32 |= ((/* implicit */signed char) min(((-(((/* implicit */int) var_14)))), ((~(((/* implicit */int) arr_40 [i_15 - 2]))))));
                                var_33 = ((signed char) ((((/* implicit */_Bool) ((signed char) (signed char)25))) ? (((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */int) arr_46 [(signed char)3] [(signed char)16] [i_15] [i_14] [(signed char)16])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) min((arr_48 [i_13] [i_14 + 2] [i_14 + 2] [i_14 + 2]), ((signed char)-37))))));
                            }
                        } 
                    } 
                    var_34 = arr_40 [i_15 + 2];
                }
            } 
        } 
    } 
}
