/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173761
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
    var_18 -= ((/* implicit */_Bool) var_11);
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_3))));
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_10))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))) | (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-28216))))) < (var_11)))) : (((/* implicit */int) ((18446744073709551604ULL) <= (((((/* implicit */_Bool) 30ULL)) ? (16ULL) : (18446744073709551604ULL))))))));
        var_22 = ((/* implicit */_Bool) max((max((((/* implicit */int) var_5)), (var_7))), (((/* implicit */int) ((((/* implicit */int) ((arr_3 [i_0]) <= (var_16)))) < (((/* implicit */int) var_3)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0] [i_0])) | ((-(((/* implicit */int) var_2))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 3; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) var_10);
                        var_24 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) var_17))))));
                    }
                } 
            } 
        } 
        arr_16 [i_0] = ((/* implicit */unsigned int) (-((-(arr_14 [i_0] [i_0])))));
    }
    /* LoopSeq 1 */
    for (signed char i_4 = 3; i_4 < 16; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        var_25 = (+(((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) arr_17 [i_4])) : (((/* implicit */int) arr_20 [i_4])))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_4 - 3])) ? (((/* implicit */int) arr_17 [i_4 - 1])) : (((/* implicit */int) var_13))));
                        var_27 = ((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_4] [i_4 - 3] [i_4 - 3] [i_4]))));
                    }
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) arr_20 [i_4])))) : (((var_17) ? (arr_18 [i_4 - 2]) : (((/* implicit */int) arr_21 [i_6] [i_6] [i_6] [i_5]))))));
                    arr_27 [i_4] [i_6] = ((((/* implicit */_Bool) max(((-(18446744073709551604ULL))), (((/* implicit */unsigned long long int) arr_19 [i_4 - 1]))))) ? (((/* implicit */int) max((arr_20 [i_4]), (arr_20 [i_4])))) : (((((/* implicit */_Bool) arr_23 [i_4 - 3] [i_4 - 2] [i_4 - 2] [i_4])) ? (((/* implicit */int) arr_24 [i_4])) : (((/* implicit */int) arr_19 [i_4])))));
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) arr_22 [(_Bool)1] [(_Bool)1] [i_6] [(_Bool)1]))));
                }
            } 
        } 
        arr_28 [2U] |= ((/* implicit */long long int) (-(((/* implicit */int) var_15))));
        /* LoopNest 3 */
        for (signed char i_8 = 2; i_8 < 16; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                for (long long int i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_24 [i_4])) < ((+(((/* implicit */int) arr_20 [i_4]))))))) | ((~(arr_33 [i_4] [i_4] [i_4] [(unsigned short)8] [i_9])))));
                        arr_36 [i_4] [i_9] = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_35 [i_4] [i_4] [i_4] [i_10]))))));
                        arr_37 [i_4] [(unsigned char)6] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_8 - 1])) | (((/* implicit */int) arr_26 [i_8] [i_4] [i_4] [i_8 - 1] [i_4] [i_10]))))) ? (((/* implicit */int) arr_29 [i_8 - 1] [i_8] [i_4])) : (((/* implicit */int) max((arr_19 [i_4 + 1]), (((/* implicit */signed char) ((arr_21 [i_4] [i_8 - 1] [i_4] [i_10]) || (((/* implicit */_Bool) var_11))))))))));
                    }
                } 
            } 
        } 
        arr_38 [i_4] = ((/* implicit */unsigned short) arr_25 [i_4] [i_4] [i_4] [i_4 - 3]);
    }
}
