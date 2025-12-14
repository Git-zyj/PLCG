/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107693
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
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])))) <= (((/* implicit */int) max((arr_3 [i_0 + 1] [i_0 - 1]), ((unsigned char)255))))));
        var_13 = ((/* implicit */_Bool) (~((~(3429373331U)))));
        var_14 = ((/* implicit */signed char) max((((arr_1 [i_0]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0] [i_0 - 1])))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (arr_0 [i_0] [i_0 + 1]) : (((/* implicit */int) var_5))))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min((((/* implicit */long long int) (+(((int) var_4))))), (((((/* implicit */_Bool) (short)11026)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0 + 1]))))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_6 [i_1])))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                {
                    arr_12 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-31984)) ? (((/* implicit */int) (short)-11026)) : (((int) var_4))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        for (int i_5 = 2; i_5 < 15; i_5 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_4]))) & (((((/* implicit */_Bool) (unsigned char)8)) ? (-1363697580087388044LL) : (-1363697580087388029LL))))))));
                                var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)4096))))) ? (1363697580087388043LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)246))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 4; i_8 < 15; i_8 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) (_Bool)1);
                    var_21 |= ((/* implicit */unsigned int) arr_5 [i_7]);
                }
            } 
        } 
        var_22 = ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_7 [i_6] [i_6]))))));
    }
    for (short i_9 = 0; i_9 < 15; i_9 += 1) 
    {
        arr_33 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_9] [i_9] [i_9])))) - (((var_3) ? (((/* implicit */int) arr_9 [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_9 [i_9] [i_9] [i_9]))))));
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1363697580087388047LL)) ? (602713341U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) ? (((arr_15 [i_9] [(signed char)14] [(unsigned char)9]) ? (((/* implicit */long long int) ((/* implicit */int) (short)11012))) : (6283316950169574377LL))) : (((((/* implicit */_Bool) (unsigned char)13)) ? (2274875839814961390LL) : (((/* implicit */long long int) arr_18 [i_9] [i_9] [i_9] [i_9] [i_9] [(_Bool)1] [i_9])))));
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_14 [i_9] [i_9]), (arr_14 [i_9] [i_9])))) ? (min((arr_14 [i_9] [i_9]), (arr_14 [i_9] [i_9]))) : (((/* implicit */int) (_Bool)0))));
    }
    /* LoopNest 3 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (short i_11 = 1; i_11 < 20; i_11 += 4) 
        {
            for (unsigned char i_12 = 4; i_12 < 18; i_12 += 1) 
            {
                {
                    arr_40 [i_11] [i_11] = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_39 [i_10] [i_11 - 1] [i_12])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 1; i_13 < 20; i_13 += 2) 
                    {
                        for (long long int i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            {
                                arr_46 [i_11] = arr_42 [i_10] [i_10] [i_10] [i_13] [i_14];
                                arr_47 [i_10] [i_10] [i_12] [i_13] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 602713341U)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)-32765))))) * (((((/* implicit */_Bool) -571423381)) ? (8589803520LL) : (arr_39 [i_12] [i_11 + 1] [i_13 + 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 21; i_15 += 4) 
                    {
                        for (unsigned short i_16 = 2; i_16 < 20; i_16 += 1) 
                        {
                            {
                                arr_55 [(unsigned char)8] [i_11] [i_12 + 3] [i_15] [i_15] = var_3;
                                arr_56 [i_15] [i_11] = ((/* implicit */short) var_7);
                                var_25 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) -8292409682552294565LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)38))) : (34932142U))), (4294967283U)));
                                arr_57 [i_16] [i_11] [i_15] [i_12] [i_11] [i_10] = ((/* implicit */int) (((+((-(2252921276U))))) - (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-38)))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned long long int) 1095759407U);
                }
            } 
        } 
    } 
}
