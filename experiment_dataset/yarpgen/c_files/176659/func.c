/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176659
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [(unsigned char)17] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_0 [i_0])))))), (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */int) var_5)) << (((((/* implicit */int) var_0)) - (181)))))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_0 [i_0])))))) : (((((/* implicit */_Bool) max((var_16), (arr_1 [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) (unsigned char)50)))) : (((/* implicit */int) (unsigned char)206))))));
        var_18 = ((unsigned char) (unsigned char)34);
        arr_4 [(unsigned char)6] = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) / (((/* implicit */int) max(((unsigned char)50), ((unsigned char)53))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)206)))))));
                var_20 = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (unsigned char)0)))))), (((/* implicit */int) max((arr_5 [i_2 - 2] [(unsigned char)10] [i_0]), ((unsigned char)255))))));
            }
            arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_2 [i_1]))) / (((/* implicit */int) (unsigned char)207))));
            var_21 = ((unsigned char) (unsigned char)50);
            arr_12 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) max(((unsigned char)132), (var_3)))))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) ((unsigned char) var_4)))));
            arr_15 [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)89))));
        }
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            var_23 = ((unsigned char) ((unsigned char) ((unsigned char) arr_10 [i_4] [i_4] [i_0])));
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                arr_22 [i_4] [i_4] [(unsigned char)21] [i_0] = ((/* implicit */unsigned char) (-(((((((/* implicit */int) (unsigned char)53)) * (((/* implicit */int) (unsigned char)200)))) * (((/* implicit */int) var_15))))));
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    arr_25 [i_5] [i_4] [i_0] = (i_4 % 2 == 0) ? (((/* implicit */unsigned char) min((((((/* implicit */int) var_4)) >> (((((((/* implicit */_Bool) arr_14 [i_5] [i_4] [i_0])) ? (((/* implicit */int) arr_24 [i_4] [i_0] [i_5] [i_5])) : (((/* implicit */int) arr_9 [i_4] [i_4] [i_6])))) - (222))))), (((/* implicit */int) arr_19 [i_0] [i_4] [i_5] [i_6]))))) : (((/* implicit */unsigned char) min((((((/* implicit */int) var_4)) >> (((((((((/* implicit */_Bool) arr_14 [i_5] [i_4] [i_0])) ? (((/* implicit */int) arr_24 [i_4] [i_0] [i_5] [i_5])) : (((/* implicit */int) arr_9 [i_4] [i_4] [i_6])))) - (222))) + (169))))), (((/* implicit */int) arr_19 [i_0] [i_4] [i_5] [i_6])))));
                    var_24 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_0))) > (((/* implicit */int) max(((unsigned char)11), ((unsigned char)186))))))) % ((+(((/* implicit */int) arr_6 [i_5]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
                        var_26 += ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [(unsigned char)0] [i_5] [i_6])))))));
                    }
                    var_27 = ((/* implicit */unsigned char) (+((((!(((/* implicit */_Bool) (unsigned char)2)))) ? (((/* implicit */int) min((arr_24 [i_4] [i_4] [i_5] [i_6]), ((unsigned char)194)))) : (((/* implicit */int) arr_2 [i_5]))))));
                    arr_30 [i_0] [i_4] [i_5] = ((/* implicit */unsigned char) max(((((!(((/* implicit */_Bool) (unsigned char)120)))) || ((!(((/* implicit */_Bool) (unsigned char)16)))))), ((!(((/* implicit */_Bool) (unsigned char)229))))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    var_28 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0])) > (((/* implicit */int) var_16))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) (unsigned char)159))))));
                    arr_35 [i_0] [i_5] [i_5] [i_5] [i_4] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)21))));
                    var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (unsigned char)244)) ? ((+(((/* implicit */int) arr_17 [(unsigned char)6] [(unsigned char)22])))) : (((/* implicit */int) max((arr_2 [i_0]), (var_2)))))) : (((/* implicit */int) arr_21 [i_0]))));
                }
            }
            /* vectorizable */
            for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                arr_38 [i_0] [i_4] [i_4] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) > (((/* implicit */int) ((unsigned char) var_1)))));
                arr_39 [i_4] [i_4] [i_0] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) var_10)))));
                var_30 = var_6;
            }
            arr_40 [i_4] [(unsigned char)19] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)165)) < (max(((-(((/* implicit */int) var_8)))), (((/* implicit */int) arr_36 [i_4] [i_4] [i_4] [i_0]))))));
        }
    }
    var_31 = var_16;
    var_32 = ((unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)146))))), (((((/* implicit */int) (unsigned char)40)) - (((/* implicit */int) var_7))))));
    var_33 = ((unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)163))))) : (((/* implicit */int) ((unsigned char) (unsigned char)149)))));
    var_34 = var_12;
}
