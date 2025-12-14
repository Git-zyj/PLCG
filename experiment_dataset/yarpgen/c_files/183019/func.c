/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183019
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((1184830861) > (((/* implicit */int) var_11)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((var_7), ((short)834))))))) ? (((/* implicit */int) var_17)) : (min((((((/* implicit */_Bool) var_16)) ? (var_10) : (((/* implicit */int) (short)32049)))), (min((-1348811929), (((/* implicit */int) (short)1982))))))));
    var_21 |= ((/* implicit */signed char) ((short) var_2));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1348811915)) ? (((/* implicit */int) arr_1 [i_0] [2U])) : (((/* implicit */int) arr_1 [6U] [i_0]))));
        arr_2 [i_0] = arr_0 [i_0];
        var_23 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 623387511)) ? (((/* implicit */int) arr_1 [(short)10] [i_0])) : (((/* implicit */int) (_Bool)1)))) - (((((/* implicit */int) var_19)) | (((/* implicit */int) arr_1 [i_0] [10U]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_24 -= ((/* implicit */unsigned char) max((((/* implicit */short) min((arr_4 [i_1] [i_1]), (((/* implicit */signed char) (_Bool)0))))), (((short) (short)0))));
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 162314410U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (var_6))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))))) * (min((((((/* implicit */_Bool) arr_4 [(unsigned char)6] [(short)22])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (3920125109U))), (((/* implicit */unsigned int) min((arr_4 [(short)21] [i_1]), (arr_4 [15U] [i_1]))))))));
        var_25 = ((/* implicit */signed char) min((max((arr_3 [(_Bool)1]), (arr_3 [i_1]))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1]))))) || (((/* implicit */_Bool) 1644160044)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [(signed char)0] [i_1])) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : ((+(((/* implicit */int) var_5))))));
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) arr_13 [i_1] [i_5]))));
                            var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((((((/* implicit */int) var_11)) + (2147483647))) >> (((-194152933) + (194152944))))) : (((/* implicit */int) ((_Bool) var_12)))));
                        }
                    } 
                } 
            } 
            arr_20 [i_1] [i_1] = ((/* implicit */signed char) ((((int) 910734920U)) >= ((~(((/* implicit */int) var_2))))));
        }
    }
    for (short i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
    {
        var_29 += ((((arr_14 [i_6]) < (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_1))))))) || (((/* implicit */_Bool) var_0)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_7 = 1; i_7 < 15; i_7 += 1) 
        {
            arr_27 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_6] [i_7 - 1] [i_7])) ? (arr_10 [i_6] [(unsigned char)7] [i_7]) : (arr_10 [i_6] [i_6] [i_7])));
            var_30 |= ((/* implicit */int) ((signed char) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_16 [i_6])))));
            var_31 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_17 [i_6] [21U] [(unsigned char)5] [i_7] [i_7] [i_7])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)0)))) & (((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) var_0)) + (1311)))))));
            var_32 += ((/* implicit */unsigned int) arr_3 [i_7 - 1]);
        }
    }
    for (short i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
    {
        var_33 |= ((/* implicit */unsigned int) max((((-1348811915) / (((/* implicit */int) ((arr_22 [i_8]) < (((/* implicit */int) var_9))))))), (((int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_9)))))));
        arr_30 [i_8] = ((/* implicit */int) var_0);
    }
}
