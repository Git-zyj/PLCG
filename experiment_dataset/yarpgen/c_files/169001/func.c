/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169001
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (+(min((((/* implicit */int) (signed char)60)), (((((/* implicit */int) arr_4 [i_0])) * (((/* implicit */int) arr_0 [(_Bool)1] [i_0]))))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_3] [i_2] [i_3] [(_Bool)1] [i_4] &= arr_1 [i_2];
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [(signed char)3] [i_1])) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_3] [i_0]))))) <= (((((/* implicit */int) arr_8 [i_3] [(signed char)4] [i_3 + 2])) << (((((/* implicit */int) (signed char)92)) - (72)))))));
                            var_20 = ((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)60)) >> (((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [(unsigned char)17])) - (118)))))));
                        }
                        for (signed char i_5 = 4; i_5 < 20; i_5 += 3) 
                        {
                            var_21 *= (((-(((/* implicit */int) arr_11 [(signed char)18] [i_5] [i_5 - 3] [i_5 - 3] [i_5 - 2] [i_2])))) == (((/* implicit */int) ((((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5 - 2] [i_2])) != (((/* implicit */int) arr_11 [i_5] [i_5 - 3] [i_5] [i_5 - 2] [i_5 - 2] [i_2]))))));
                            arr_17 [(unsigned char)7] [i_3] [i_1] [i_1] [(unsigned char)16] [i_0] = ((/* implicit */signed char) (+((-((-(((/* implicit */int) arr_16 [i_3]))))))));
                        }
                        arr_18 [i_1] [(signed char)7] [(signed char)3] [i_3] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (-((-((-(((/* implicit */int) (unsigned char)152))))))));
                        arr_19 [i_1] [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */signed char) max(((-(((((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_2] [i_3])) + (((/* implicit */int) (signed char)17)))))), (((((/* implicit */int) max((arr_12 [i_1] [i_2] [i_1]), (arr_4 [i_1])))) >> (((((/* implicit */int) arr_7 [(unsigned char)0] [i_3 - 1] [i_1] [i_3 + 3])) + (112)))))))) : (((/* implicit */signed char) max(((-(((((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_2] [i_3])) + (((/* implicit */int) (signed char)17)))))), (((((/* implicit */int) max((arr_12 [i_1] [i_2] [i_1]), (arr_4 [i_1])))) >> (((((((/* implicit */int) arr_7 [(unsigned char)0] [i_3 - 1] [i_1] [i_3 + 3])) + (112))) - (71))))))));
                    }
                } 
            } 
            arr_20 [i_1] = ((/* implicit */_Bool) (((((-(((/* implicit */int) (unsigned char)0)))) / (((/* implicit */int) (((_Bool)1) || (arr_3 [i_0] [i_0])))))) - (max((((/* implicit */int) ((unsigned char) (_Bool)1))), (((((((/* implicit */int) (signed char)-36)) + (2147483647))) >> (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_1]))))))));
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned char i_8 = 2; i_8 < 20; i_8 += 1) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_6] [i_8 + 1] [i_7]);
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!(arr_3 [i_8 - 1] [i_6]))))));
                        arr_27 [i_0] [i_0] [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_26 [i_8] [i_7] [i_0] [i_0])) >> ((((-(((/* implicit */int) (signed char)35)))) + (40)))));
                        var_24 = ((/* implicit */unsigned char) (_Bool)0);
                    }
                } 
            } 
            arr_28 [i_6] = ((/* implicit */signed char) (_Bool)0);
        }
        for (signed char i_9 = 3; i_9 < 20; i_9 += 3) 
        {
            arr_31 [(signed char)2] [(signed char)7] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) max((arr_13 [i_0] [i_0] [i_9 + 1] [(signed char)10]), (((/* implicit */unsigned char) (signed char)-13))))) != (((/* implicit */int) max(((signed char)65), (arr_16 [i_0]))))))) <= ((-(((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_9 - 1] [i_9] [i_0])) == (((/* implicit */int) arr_5 [i_0] [i_0])))))))));
            /* LoopSeq 1 */
            for (unsigned char i_10 = 0; i_10 < 21; i_10 += 1) 
            {
                arr_35 [i_10] [i_9] [i_9] [i_0] = ((/* implicit */_Bool) (((~(((/* implicit */int) max((arr_0 [(_Bool)1] [i_9]), (((/* implicit */unsigned char) (signed char)-107))))))) | (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_12 [i_0] [i_0] [i_9]))))), (arr_22 [i_0] [i_9 - 2] [i_9]))))));
                var_25 *= ((/* implicit */unsigned char) (((-((-(((/* implicit */int) (signed char)19)))))) <= (((((/* implicit */int) arr_4 [i_9 - 2])) >> (((((/* implicit */int) min((arr_9 [i_0] [i_9 - 3] [i_9] [(signed char)13] [i_10]), (arr_2 [(signed char)0] [i_0] [(signed char)0])))) - (60)))))));
            }
        }
        var_26 = ((/* implicit */unsigned char) (signed char)97);
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) max((var_27), (((((((/* implicit */int) arr_9 [i_11] [i_11] [i_11] [i_11] [i_11])) ^ (((/* implicit */int) arr_37 [(signed char)11] [i_11])))) == (((/* implicit */int) ((((/* implicit */int) (signed char)-13)) != (((/* implicit */int) (_Bool)0)))))))));
        var_28 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) arr_11 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])) > (((/* implicit */int) arr_5 [i_11] [i_11])))));
    }
    var_29 &= ((/* implicit */signed char) ((((/* implicit */int) var_15)) + (((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
    {
        var_30 *= ((/* implicit */unsigned char) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_7 [i_12] [(signed char)10] [(_Bool)1] [(signed char)10]))));
        arr_40 [i_12] = ((/* implicit */_Bool) arr_33 [i_12] [i_12]);
        var_31 = ((/* implicit */unsigned char) max(((((-(((/* implicit */int) arr_15 [(signed char)0] [i_12])))) - (((/* implicit */int) min((arr_12 [(_Bool)1] [i_12] [(_Bool)1]), ((signed char)-79)))))), (max((((((/* implicit */int) (unsigned char)31)) + (((/* implicit */int) arr_15 [(signed char)14] [i_12 + 1])))), (((/* implicit */int) arr_1 [i_12]))))));
    }
    var_32 = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) var_6))), ((+((-(((/* implicit */int) (signed char)8))))))));
}
