/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126675
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) arr_5 [i_0] [i_2] [i_4]);
                                arr_15 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_8 [i_4])))) ? (((/* implicit */int) min((arr_8 [i_1 + 1]), (arr_8 [i_4])))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)255))))));
                                arr_17 [i_1] [i_3] [i_3] [i_2] [i_2] [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) 1712448084)) && (((/* implicit */_Bool) (signed char)-6))))), ((unsigned short)65535)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        arr_20 [i_1] [i_1] [i_1] [(unsigned short)5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)47)))))) | (((/* implicit */int) ((((/* implicit */int) max((arr_0 [i_1 - 1] [i_1 - 1]), (((/* implicit */short) (signed char)3))))) < (((/* implicit */int) (unsigned char)6)))))));
                        arr_21 [i_1] [5ULL] [(unsigned char)8] [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                        arr_22 [5] [i_1] [5] [(unsigned short)11] [i_5] = ((/* implicit */unsigned short) (unsigned char)173);
                    }
                }
            } 
        } 
    } 
    var_18 = ((((((/* implicit */unsigned int) ((/* implicit */int) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)48))))))) ^ (var_8))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))));
    var_19 |= ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
    /* LoopNest 3 */
    for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 3; i_10 < 12; i_10 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (-(arr_31 [i_6] [i_6] [i_7] [i_8] [i_8] [(unsigned char)7])));
                                arr_38 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)3)) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)18)), (3588037048U))))));
                                var_21 = ((((int) (signed char)-5)) - (((((/* implicit */_Bool) var_12)) ? (max((arr_34 [6] [(unsigned char)6] [i_8] [i_9] [i_9]), (arr_34 [i_7] [i_8] [i_8] [i_7] [i_6]))) : (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) (signed char)-19))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 1279084537U)) ? (((/* implicit */int) arr_33 [i_6] [i_8] [i_7] [1ULL] [i_7] [i_8])) : (((/* implicit */int) arr_33 [i_6] [i_8] [i_6] [(unsigned char)11] [i_8] [i_8])))));
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 11; i_11 += 1) 
                    {
                        for (int i_12 = 3; i_12 < 11; i_12 += 4) 
                        {
                            {
                                arr_44 [i_6] [i_7] [(unsigned char)11] [i_8] [i_6] [i_8] = ((/* implicit */unsigned char) ((((int) arr_34 [i_12 + 2] [i_12] [i_8] [i_12] [i_12 - 3])) > ((+(((/* implicit */int) arr_35 [6ULL] [3] [i_12 - 3] [i_12 + 1] [i_12 + 1] [i_12 + 4]))))));
                                var_23 = (~(((/* implicit */int) var_0)));
                                arr_45 [i_12 - 1] [i_8] [11ULL] [i_8] [(unsigned short)6] [i_8] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((1682903449), (((/* implicit */int) (signed char)7))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_35 [i_6] [i_6] [(unsigned char)2] [(unsigned char)2] [i_12 - 2] [i_7]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 2; i_13 < 13; i_13 += 3) 
                    {
                        for (signed char i_14 = 0; i_14 < 15; i_14 += 3) 
                        {
                            {
                                arr_54 [i_6] [i_14] [i_8] [i_13] [i_14] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_42 [i_13 + 1] [i_13 - 1] [i_13 - 2] [i_13 + 1] [i_13 - 2] [i_13])))) * (((/* implicit */int) arr_27 [(unsigned short)4] [3] [i_6]))));
                                var_24 = ((/* implicit */signed char) (((+(((/* implicit */int) var_2)))) / ((+((+(((/* implicit */int) var_6))))))));
                                arr_55 [i_6] [i_7] [i_8] [i_13] [i_13] [i_8] = ((/* implicit */_Bool) arr_26 [i_8] [i_6]);
                                arr_56 [i_8] [i_7] [i_7] [i_13] [(_Bool)1] = ((/* implicit */unsigned short) arr_51 [i_14] [i_13 + 2] [i_8] [(_Bool)1] [i_6]);
                                arr_57 [i_7] [i_7] [i_8] [(short)14] [i_6] [i_6] |= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)255)) == (((((/* implicit */int) arr_47 [i_6] [i_13 - 1] [i_8] [(unsigned short)14] [i_6] [i_6])) % (((/* implicit */int) arr_47 [i_6] [i_7] [i_8] [i_13 - 1] [i_14] [i_6]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
