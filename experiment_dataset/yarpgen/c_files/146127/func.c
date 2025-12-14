/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146127
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
    var_14 -= var_8;
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (~(4203400704U))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)48)) ? (91566592U) : (arr_0 [i_0] [(signed char)14]))))))), ((+(((((/* implicit */_Bool) var_11)) ? (arr_0 [i_0 + 2] [20U]) : (830341969U))))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */unsigned int) var_1);
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */signed char) min(((-(91566570U))), (((/* implicit */unsigned int) var_3))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                arr_14 [i_0] [i_0] = var_1;
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((4203400704U), (2117904222U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 181022183U)))) : (((unsigned int) arr_2 [i_4] [i_3]))))) ? (((/* implicit */int) ((signed char) arr_12 [i_0 + 1] [i_4] [0U]))) : (((/* implicit */int) arr_5 [i_4] [i_3] [i_4] [(signed char)8])))))));
            }
            arr_15 [(signed char)18] [(signed char)18] |= ((/* implicit */unsigned int) arr_7 [16U] [(signed char)20] [16U] [i_3]);
        }
        for (signed char i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)51)))) ? (((/* implicit */int) var_0)) : ((-(((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_10 [i_0] [i_0]))))))));
                arr_22 [i_0] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (+(arr_20 [i_0] [i_0])))))) + (((((/* implicit */_Bool) (-(arr_21 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_5])))))) : (((((/* implicit */_Bool) 4146523609U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_5]))) : (91566570U)))))));
                var_20 = ((/* implicit */unsigned int) arr_19 [i_0] [(signed char)21] [i_0]);
                arr_23 [i_0] [18U] [i_6] |= var_9;
            }
            for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                arr_27 [i_0 + 2] [i_0] [(signed char)14] = ((/* implicit */signed char) ((((unsigned int) var_2)) | ((~(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (6699460U)))))));
                arr_28 [i_0] [i_0] [i_7] = ((unsigned int) ((unsigned int) 33554431U));
                arr_29 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0]);
            }
            for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                arr_34 [i_0] = (signed char)123;
                var_21 = ((/* implicit */signed char) min((var_21), ((signed char)-1)));
                arr_35 [i_0] [(signed char)2] [(signed char)14] [i_8] = ((/* implicit */signed char) arr_21 [i_0] [i_5] [i_5] [i_5]);
                var_22 -= ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) arr_25 [i_8] [i_8] [i_8] [i_0 + 2])))));
            }
            var_23 = (+(1637384388U));
        }
        for (signed char i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
        {
            arr_40 [4U] |= ((signed char) (+(((/* implicit */int) arr_19 [(signed char)6] [14U] [i_9]))));
            arr_41 [i_0] [(signed char)19] [i_9] = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)106))) | (((((/* implicit */_Bool) arr_33 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)69))) : (min((((/* implicit */unsigned int) (signed char)21)), (4288267836U))))));
        }
    }
    for (unsigned int i_10 = 1; i_10 < 20; i_10 += 1) 
    {
        var_24 = arr_43 [i_10];
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_11 = 1; i_11 < 22; i_11 += 4) 
        {
            var_25 = ((/* implicit */unsigned int) ((signed char) arr_45 [i_10]));
            arr_47 [i_10] = ((/* implicit */unsigned int) (signed char)51);
            arr_48 [i_10] [22U] [i_10] = var_1;
        }
    }
    var_26 = ((signed char) ((signed char) 3936348507U));
}
