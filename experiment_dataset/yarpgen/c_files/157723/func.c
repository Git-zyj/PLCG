/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157723
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_12 [(unsigned short)14] = ((/* implicit */signed char) max((((arr_8 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]) ? (((/* implicit */int) arr_8 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_8 [i_1 - 4] [i_1 - 4] [i_1 - 3] [i_1 - 3])))), (((/* implicit */int) max(((unsigned char)143), (((/* implicit */unsigned char) (_Bool)1)))))));
                            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((signed char) max((arr_4 [i_1 - 4]), (arr_4 [i_1 - 4])))))));
                            var_13 = ((signed char) (~(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [(signed char)1] [(signed char)4])) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [20U] [(unsigned short)2])))))));
                            var_14 = ((/* implicit */unsigned short) max(((((_Bool)1) ? (2281729772U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_1 - 2] [i_1 - 4] [(short)0] [(short)0])))))));
                        }
                        arr_13 [i_3] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) arr_9 [(_Bool)1] [i_2] [i_1 - 4] [i_1 - 1] [i_0])) >= (((/* implicit */int) arr_9 [(_Bool)1] [i_1] [i_1 + 1] [i_1 - 1] [(unsigned char)6])))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            var_16 *= ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0]);
            /* LoopSeq 2 */
            for (signed char i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
            {
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_8 [i_5] [i_5] [i_5 + 1] [i_5])), (arr_17 [i_5 + 1] [i_5 + 1] [i_5 + 1])))) ? (((((/* implicit */_Bool) arr_10 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5] [i_5])) ? (arr_10 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1]) : (arr_10 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_6] [(signed char)10]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5 + 1]))))))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    for (unsigned int i_8 = 3; i_8 < 22; i_8 += 4) 
                    {
                        {
                            var_18 ^= ((/* implicit */short) max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)219))))), ((+(arr_10 [i_8] [i_8 - 2] [i_5 + 1] [i_6] [i_6] [i_5 + 1])))));
                            var_19 = ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) arr_24 [i_5 + 1] [i_5] [i_5 + 1] [i_7] [i_7] [i_8 + 1] [i_8 - 3])))));
                            arr_26 [i_0] [(_Bool)1] [i_5] [i_6] [i_6] [i_7] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_5 + 1] [i_8 - 2] [i_5 + 1] [(unsigned char)10] [i_8 - 2] [(unsigned char)10] [(unsigned char)10])) ? (((/* implicit */int) ((((/* implicit */int) arr_24 [i_5 + 1] [i_8 - 3] [i_8 - 2] [(short)1] [i_8 - 2] [i_8 - 2] [i_8 - 1])) >= (((/* implicit */int) arr_24 [i_5 + 1] [i_8 - 2] [i_8 - 2] [i_8] [i_8 - 1] [i_8 - 1] [(unsigned char)5]))))) : (((((/* implicit */_Bool) arr_24 [i_5 + 1] [i_8 + 1] [i_8] [i_8] [i_8 - 3] [i_8] [i_8 - 2])) ? (((/* implicit */int) arr_24 [i_5 + 1] [i_8 - 1] [i_8 - 1] [(signed char)12] [i_8 + 1] [i_8] [12U])) : (((/* implicit */int) arr_24 [i_5 + 1] [i_8 + 1] [(unsigned short)6] [i_8] [i_8 - 3] [i_8] [i_8]))))));
                            arr_27 [i_0] [i_5] [i_7] [i_8] &= (!(((/* implicit */_Bool) arr_0 [i_5])));
                        }
                    } 
                } 
            }
            for (signed char i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_23 [i_5 + 1] [i_5 + 1])), (((((/* implicit */_Bool) arr_22 [i_0] [(_Bool)1] [i_0] [(signed char)5] [i_0])) ? (((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))))))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((arr_10 [i_5 + 1] [(_Bool)1] [(_Bool)1] [i_5 + 1] [i_5] [i_5]), (((/* implicit */unsigned int) arr_9 [i_5 + 1] [(signed char)5] [i_5 + 1] [i_5] [i_5])))))));
                var_22 = ((/* implicit */signed char) max((((/* implicit */int) arr_16 [i_5 + 1] [i_5 + 1])), (((arr_3 [i_5 + 1]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
            }
        }
        arr_30 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) max((arr_16 [i_0] [i_0]), (arr_16 [i_0] [i_0])))), (((((/* implicit */int) arr_16 [i_0] [(signed char)9])) | (((/* implicit */int) arr_16 [i_0] [i_0]))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_23 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [i_10] [(signed char)13]))))) ? ((~(((/* implicit */int) arr_32 [i_10] [(signed char)16])))) : (((/* implicit */int) max((((/* implicit */short) arr_31 [i_10])), (arr_32 [i_10] [i_10])))))), (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_32 [i_10] [i_10]))))))));
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            for (unsigned short i_12 = 1; i_12 < 22; i_12 += 2) 
            {
                {
                    var_24 += ((/* implicit */signed char) max((max((1348560642U), (((/* implicit */unsigned int) (unsigned short)11)))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_35 [(_Bool)1] [i_12 + 3] [i_12 + 1] [i_12])))))));
                    var_25 -= ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_34 [i_12] [i_12] [i_12 + 3]))) - (((/* implicit */int) ((_Bool) arr_34 [i_12 + 2] [i_12] [i_12 + 3])))));
                }
            } 
        } 
        var_26 = ((((/* implicit */_Bool) ((unsigned short) arr_33 [i_10]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_36 [i_10] [i_10] [i_10])))) : (((arr_36 [i_10] [i_10] [i_10]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_10]))))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        arr_39 [i_13] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_13]))))), (((((/* implicit */_Bool) arr_38 [i_13])) ? (((/* implicit */int) arr_38 [i_13])) : (((/* implicit */int) arr_38 [i_13]))))));
        arr_40 [i_13] [i_13] |= arr_14 [i_13] [i_13] [i_13];
    }
    var_27 = ((/* implicit */unsigned int) var_3);
}
