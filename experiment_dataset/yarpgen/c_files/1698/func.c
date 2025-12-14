/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1698
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) -2147483624)))))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60706)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) var_1));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) 0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))) : (((var_2) * (var_10)))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_8 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_18) : (4294967295U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0]))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                arr_12 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */int) ((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0])))))) : (((/* implicit */int) var_7))));
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 18; i_3 += 1) 
                {
                    for (unsigned char i_4 = 3; i_4 < 18; i_4 += 1) 
                    {
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) ((unsigned short) arr_18 [i_0] [i_3 - 1] [i_4 + 1] [i_3 - 1] [i_3 - 1]));
                            arr_21 [i_4] [i_3 - 2] [i_4 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned char)37))))) > (((/* implicit */int) ((arr_14 [i_0] [i_0] [i_3 - 3]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_4 + 1]))))))));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_2)))) ? (var_2) : (((var_9) - (((/* implicit */unsigned int) 0)))));
                            arr_23 [i_4] [i_4] [i_1] [i_4] [i_4 - 2] = ((((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_4 - 3]))));
                        }
                    } 
                } 
            }
            for (int i_5 = 4; i_5 < 18; i_5 += 3) 
            {
                arr_26 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_10) : (arr_15 [i_5 - 3] [i_1] [i_0] [i_1] [i_0] [i_0])))) ? (((arr_25 [i_0] [i_0] [i_0] [i_5 + 1]) << (((arr_16 [i_0] [i_0] [i_0]) - (1248443242U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))))));
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    arr_30 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned char) var_18));
                    arr_31 [i_0] [i_0] [i_5 - 2] [i_6] = (unsigned char)14;
                    arr_32 [i_0] [i_1] [i_5 + 1] [i_0] = ((/* implicit */unsigned char) arr_13 [i_5 - 1] [i_5 + 1]);
                    arr_33 [i_0] [i_1] [i_0] [i_6] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_6] [i_5 - 2] [i_1] [i_0])) ? (((/* implicit */int) arr_19 [(unsigned char)12] [(unsigned char)12])) : (-15))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_11)))))));
                }
                arr_34 [i_0] [i_0] [i_0] = arr_27 [i_0] [i_0] [i_0] [i_0] [i_5 - 4] [i_0];
                arr_35 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_5 - 1] [i_1])) ? (((/* implicit */int) arr_19 [4U] [4U])) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)20302)) : (arr_2 [i_5 + 1])))) : (var_0));
            }
            arr_36 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65532))) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) var_16)) ? (arr_14 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0]))))));
            arr_37 [i_0] [i_1] = (-(((((/* implicit */_Bool) (unsigned char)14)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0]))))));
        }
        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            arr_41 [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) + (-1))) + (((((/* implicit */_Bool) arr_27 [i_0] [i_7] [i_7] [i_7] [i_7] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (arr_2 [i_0])))));
            arr_42 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_7] [i_7] [i_0])) ? (((/* implicit */unsigned int) arr_38 [i_0])) : (var_8)))) ? (((/* implicit */int) ((unsigned char) var_2))) : (arr_38 [i_7])));
            arr_43 [i_0] [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_7])) && (((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_7]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [i_7] [i_7] [i_0] [i_7])) || (((/* implicit */_Bool) 1)))))));
            arr_44 [i_0] [i_0] [i_0] = ((/* implicit */int) var_17);
        }
    }
    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) 
    {
        arr_48 [i_8] [i_8] = arr_47 [i_8];
        /* LoopSeq 1 */
        for (unsigned char i_9 = 1; i_9 < 24; i_9 += 3) 
        {
            arr_53 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_9 + 1] [i_9 - 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)254)) != (((/* implicit */int) arr_50 [i_8]))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (arr_45 [i_8]) : (arr_52 [i_8]))) > (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)249))))))))));
            arr_54 [i_8] = (unsigned char)255;
        }
        arr_55 [i_8] [i_8] = var_17;
    }
    /* LoopNest 3 */
    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 2) 
        {
            for (unsigned int i_12 = 0; i_12 < 15; i_12 += 3) 
            {
                {
                    arr_65 [i_10] [i_10] [i_12] = ((/* implicit */int) ((((((4294967295U) / (var_5))) + (2596269238U))) / (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_18)) ? (var_14) : (var_0))) : (((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                    arr_66 [i_10] [i_11] [i_10] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) var_15)) <= (((/* implicit */int) arr_6 [i_12] [i_11]))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_6 [i_10] [i_11])) : (((/* implicit */int) arr_6 [i_10] [i_11]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) var_12);
}
