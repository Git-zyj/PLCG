/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155737
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
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_1] = (-(((((/* implicit */_Bool) arr_3 [i_1])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))));
                        var_10 = ((/* implicit */unsigned int) (short)26995);
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 3; i_4 < 17; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) max((max((((/* implicit */unsigned int) (short)19228)), (1522663804U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_7))))))))));
                                arr_17 [i_1] [i_4 + 3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_8)), (arr_3 [i_1]))))));
                                var_12 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((unsigned char) var_1)), ((unsigned char)205)))) ? (((/* implicit */int) max((((((/* implicit */_Bool) (short)-29052)) && (((/* implicit */_Bool) arr_2 [i_2])))), ((_Bool)1)))) : (max((((/* implicit */int) (_Bool)1)), (((((((/* implicit */int) var_0)) + (2147483647))) << (((63U) - (63U)))))))));
                                arr_18 [i_1] [i_2] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) var_3)))));
                                arr_19 [i_0] [i_1] [(short)13] [(short)2] [i_1] = ((/* implicit */short) ((var_9) & (max((((/* implicit */unsigned int) arr_1 [i_0])), (max((var_5), (((/* implicit */unsigned int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (((~(arr_13 [i_2]))) != (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) arr_11 [(_Bool)1] [(_Bool)1] [i_0 + 1] [i_1] [i_1] [(_Bool)1])), (var_4))))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (short i_8 = 2; i_8 < 22; i_8 += 2) 
            {
                {
                    arr_30 [i_8] [i_7] [i_8] |= ((/* implicit */short) arr_22 [i_6] [i_6]);
                    var_14 &= ((/* implicit */_Bool) max((max((3449004294U), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_29 [i_6] [i_7 - 1]))))))), (((/* implicit */unsigned int) (((-(((/* implicit */int) (_Bool)0)))) != (((/* implicit */int) arr_24 [i_7] [i_7 - 1] [i_8 + 1])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_26 [i_9])) | ((-(var_9)))));
            /* LoopSeq 1 */
            for (int i_11 = 2; i_11 < 22; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_12 = 1; i_12 < 22; i_12 += 1) 
                {
                    for (int i_13 = 2; i_13 < 23; i_13 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */int) var_8);
                            var_17 = ((/* implicit */int) (~(arr_34 [i_12 - 1])));
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_10] [i_11 - 2] [i_11 - 1])) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_9] [i_9] [i_10] [i_10] [i_9])))))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) var_6))))))));
            }
            var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-1930))));
        }
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((int) ((((/* implicit */int) var_7)) % (((/* implicit */int) arr_40 [i_9]))))))));
    }
    for (short i_14 = 0; i_14 < 11; i_14 += 1) 
    {
        var_22 += ((/* implicit */int) max((max((0U), (((/* implicit */unsigned int) arr_43 [(short)4] [i_14])))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_43 [(signed char)4] [i_14])))))));
        var_23 |= ((/* implicit */int) max(((-(arr_8 [i_14]))), (((/* implicit */unsigned int) ((var_9) < (arr_8 [i_14]))))));
        var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)16))));
    }
    var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)248))));
}
