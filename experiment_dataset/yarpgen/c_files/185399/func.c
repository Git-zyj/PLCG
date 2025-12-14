/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185399
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
    var_13 = min((((((var_11) / (var_9))) * (((((/* implicit */_Bool) 2833609227U)) ? (var_5) : (var_9))))), (var_1));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_14 = 2833609225U;
        var_15 = ((/* implicit */unsigned int) max((var_15), (min((((3637510567U) / (var_7))), (((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))))));
        var_16 += arr_0 [i_0];
    }
    for (unsigned int i_1 = 3; i_1 < 15; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */_Bool) (~(arr_3 [i_1])))) ? (((4294967295U) | (arr_0 [i_1]))) : (max((4294967295U), (0U))))) : (arr_1 [i_1] [i_1]));
        var_17 = (-(950683107U));
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 1461358079U))) ? (arr_4 [15U]) : (var_10)))) ? (arr_4 [i_1]) : (var_10));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            var_19 = ((unsigned int) ((var_8) >> (((max((1461358070U), (1461358065U))) - (1461358049U)))));
            arr_9 [i_1] [i_2] [i_2] = arr_8 [i_1 + 1];
            /* LoopSeq 2 */
            for (unsigned int i_3 = 1; i_3 < 14; i_3 += 3) 
            {
                arr_14 [i_2] [7U] [12U] [i_2] = arr_12 [3U] [i_2] [i_2];
                var_20 += (+(3536384201U));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967287U)) && (((/* implicit */_Bool) 1475257329U))));
            }
            /* vectorizable */
            for (unsigned int i_4 = 2; i_4 < 14; i_4 += 3) 
            {
                var_22 = ((((/* implicit */_Bool) arr_15 [14U] [i_2] [i_2] [i_2 + 2])) ? (arr_15 [i_1 + 1] [i_2 - 1] [i_2] [i_4]) : (var_5));
                arr_19 [i_2] [i_2] [i_2] = (~((~(2177710433U))));
                arr_20 [6U] [i_2] [2U] [i_2] = ((((/* implicit */_Bool) var_10)) ? (2833609227U) : (arr_16 [i_2] [i_2 - 1] [i_4 - 1]));
                var_23 = ((unsigned int) arr_13 [i_1] [i_1 + 1]);
                var_24 = (-(2801585208U));
            }
        }
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            var_25 = ((/* implicit */unsigned int) max((var_25), (((unsigned int) max((arr_12 [i_1 + 1] [i_1 + 1] [i_1 - 2]), (arr_12 [i_1 + 1] [i_1 - 1] [i_1 - 2]))))));
            var_26 = var_12;
            var_27 = (-(228478386U));
            var_28 = ((/* implicit */unsigned int) min((var_28), (arr_0 [i_1])));
            var_29 += 4294967278U;
        }
    }
    for (unsigned int i_6 = 3; i_6 < 15; i_6 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_7 = 2; i_7 < 14; i_7 += 3) 
        {
            var_30 = ((/* implicit */unsigned int) max((var_30), (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 2; i_8 < 14; i_8 += 2) 
            {
                var_31 |= ((((/* implicit */_Bool) 228478392U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) <= (2801585208U))))) : ((+(arr_4 [i_6]))));
                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3)))))));
            }
            var_33 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (arr_24 [i_7 + 2]) : (2147483648U))) < (arr_7 [i_7 - 1] [i_7 + 2] [0U])));
        }
        /* vectorizable */
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            var_34 = ((unsigned int) arr_23 [i_6 - 2]);
            var_35 = var_10;
            var_36 = 3926967494U;
        }
        var_37 = ((((var_2) < (arr_1 [i_6 - 3] [i_6 - 2]))) ? (((var_5) - (arr_30 [i_6]))) : (min((4294967273U), (arr_26 [i_6] [5U] [i_6]))));
        var_38 = (-(3925542647U));
        var_39 = ((unsigned int) min((13U), (0U)));
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
    {
        var_40 = (~(1013521799U));
        var_41 *= (~(((((/* implicit */_Bool) 4294967295U)) ? (4186112U) : (arr_35 [i_10]))));
        /* LoopSeq 1 */
        for (unsigned int i_11 = 1; i_11 < 18; i_11 += 3) 
        {
            var_42 = arr_33 [i_10];
            var_43 = ((/* implicit */unsigned int) min((var_43), (((arr_38 [i_11 + 1]) << (0U)))));
        }
    }
    var_44 = var_3;
    var_45 = ((/* implicit */unsigned int) (+(((((/* implicit */int) ((2833609210U) <= (var_3)))) >> (((var_10) - (2365289058U)))))));
}
