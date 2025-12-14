/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112647
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_11)), (max((min((4294967291U), (4294967288U))), (((/* implicit */unsigned int) var_4)))))))));
    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) max((var_16), ((unsigned char)31)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned char) arr_1 [i_0 - 1]);
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55555)))))) ? (((((/* implicit */_Bool) (unsigned char)245)) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))))) : ((~(arr_5 [(unsigned char)12] [i_1 - 1] [(unsigned char)12] [i_2])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 4; i_3 < 15; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_0] [i_0] [(unsigned short)2] [i_1] = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0])) << (((((/* implicit */int) arr_3 [i_0 + 1] [i_0])) - (41952)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0])) << (((((((((/* implicit */int) arr_3 [i_0 + 1] [i_0])) - (41952))) + (19755))) - (20))))));
                        arr_10 [i_2] [i_3] [i_3] [i_0] = ((arr_0 [i_0] [i_3 + 3]) - (arr_0 [i_0] [i_3 + 2]));
                    }
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_0] [i_4] = arr_8 [(unsigned char)11] [i_1] [i_2] [i_4];
                        var_21 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 + 2] [i_0 - 2] [i_0 - 2]))));
                        arr_14 [i_0 + 1] [i_1] [i_2] [6U] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_0] [i_1 + 2]))));
                    }
                }
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 1; i_6 < 17; i_6 += 3) 
                    {
                        arr_20 [(unsigned char)11] [i_0] [(unsigned char)11] [(unsigned char)11] = ((/* implicit */unsigned char) ((min((arr_5 [i_1] [i_6 - 1] [i_1 - 1] [i_6]), (((/* implicit */unsigned int) min(((unsigned char)40), (arr_8 [i_6] [i_6] [i_6] [i_6])))))) >> (((min((((5U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4340))))), (arr_7 [i_0] [i_1 + 1] [i_5] [i_6] [i_1 - 1]))) - (4321U)))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [(unsigned short)1] [i_0] [i_6]))))) : (((/* implicit */int) arr_8 [i_0] [(unsigned short)9] [i_5] [(unsigned char)7]))));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 1; i_7 < 16; i_7 += 2) 
                        {
                            var_23 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) + (4294967295U)));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_5] [i_0])) >= (((/* implicit */int) (unsigned char)9))));
                            var_25 = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0] [i_0 - 1]);
                        }
                        for (unsigned char i_8 = 4; i_8 < 17; i_8 += 4) 
                        {
                            var_26 = arr_7 [i_0] [i_1] [i_1 - 1] [i_1] [i_1];
                            var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_24 [i_0] [i_1] [14U] [i_8 - 4] [i_1] [14U]), (arr_24 [(unsigned short)8] [(unsigned char)0] [i_5] [i_6] [i_8] [i_8])))) ? (((/* implicit */int) max(((unsigned short)65535), ((unsigned short)55555)))) : (((/* implicit */int) arr_15 [i_0 + 1] [i_1] [i_8] [i_8]))))) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) (unsigned short)0)))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            var_28 *= max((arr_0 [(unsigned char)8] [i_9]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_6 - 1] [(unsigned char)10]))))));
                            var_29 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned short)14288)), (arr_24 [i_5] [i_1] [i_5] [i_5] [(unsigned char)16] [i_6])));
                        }
                    }
                    arr_28 [i_0] [i_0 - 1] [i_1] [(unsigned char)15] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)18)) ^ (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [(unsigned char)3] [(unsigned char)5]))));
                    var_30 = ((/* implicit */unsigned int) min(((unsigned short)6199), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_0] [i_0 + 1] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_1])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)4340)))) / (((/* implicit */int) (unsigned short)7))));
                                var_32 = min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_21 [i_5] [i_10] [i_5] [i_0] [i_5])) ? (((/* implicit */int) (unsigned short)40949)) : (((/* implicit */int) arr_30 [i_0] [i_0] [i_5] [i_5] [i_11])))) <= (((/* implicit */int) max(((unsigned char)168), ((unsigned char)47))))))), ((~((-(arr_17 [i_0] [i_1] [i_0] [i_10]))))));
                                var_33 = ((/* implicit */unsigned short) arr_25 [i_0] [i_10]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 18; i_13 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)48))));
                                var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)10)) != (((/* implicit */int) arr_21 [i_0] [i_0] [16U] [i_12] [(unsigned short)10]))))), (((((/* implicit */_Bool) arr_2 [i_12] [i_13])) ? (arr_7 [i_12] [i_1] [i_5] [i_12] [(unsigned char)16]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))), (((/* implicit */unsigned int) min((arr_26 [i_1] [i_1] [i_12] [i_12]), (max((arr_2 [i_12] [i_13]), ((unsigned char)69)))))))))));
                                var_36 += ((/* implicit */unsigned short) arr_21 [i_0] [i_0] [i_5] [i_12] [i_12]);
                                var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (!(((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))) + (2651172933U))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0] [i_12] [i_5] [i_12] [i_13]))))))))));
                                var_38 -= min((min((min((((/* implicit */unsigned short) (unsigned char)207)), ((unsigned short)24307))), (((/* implicit */unsigned short) (unsigned char)168)))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)13093)) || (((/* implicit */_Bool) (unsigned char)48))))));
                            }
                        } 
                    } 
                }
                arr_40 [i_0] = ((/* implicit */unsigned int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (unsigned char i_14 = 1; i_14 < 14; i_14 += 4) 
                {
                    for (unsigned char i_15 = 1; i_15 < 16; i_15 += 4) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            {
                                arr_49 [i_0] [i_0] = (unsigned char)133;
                                arr_50 [i_0] [i_1] [i_14] [i_15] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)65)))), ((~(((/* implicit */int) (unsigned char)245))))))) ? ((+(arr_29 [i_15 - 1] [i_0] [i_14 + 1] [i_0 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65521)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
