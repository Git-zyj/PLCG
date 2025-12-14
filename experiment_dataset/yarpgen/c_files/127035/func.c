/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127035
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
    var_10 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))) + (((/* implicit */int) ((short) (signed char)117))))) >= (((((/* implicit */int) var_5)) % (((/* implicit */int) ((-4965819115720690015LL) <= (((/* implicit */long long int) var_1)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 1])) ? (4965819115720690015LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1])))))) ? (max(((-(10728336596029114978ULL))), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1 + 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned short i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_12 *= ((/* implicit */unsigned long long int) min((((1616835309U) % (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) + (16777208)))))), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) var_0))))))));
                                arr_12 [i_0] [i_0] [(signed char)11] [i_2] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [(signed char)7] [(unsigned short)0] [(short)2] [i_2])) ? (((((/* implicit */int) arr_9 [i_2] [i_3] [i_3 - 1] [i_3] [i_3 - 2])) * (((/* implicit */int) var_4)))) : (((/* implicit */int) ((unsigned short) -16777208)))));
                                arr_13 [i_4] [i_2] [(signed char)2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) var_6);
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)47019)) ? (((/* implicit */int) max(((signed char)35), (((/* implicit */signed char) arr_0 [i_4]))))) : (((/* implicit */int) ((signed char) arr_10 [i_4] [i_0] [i_2] [i_0] [i_0]))))) > (((((/* implicit */_Bool) ((16777208) + (((/* implicit */int) (unsigned short)60971))))) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_2 - 1] [i_4] [i_4 + 1])) : (((int) arr_0 [i_2])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_5 = 2; i_5 < 20; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                {
                    arr_22 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_6])) ? (arr_17 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_6])) || (((/* implicit */_Bool) arr_17 [i_6]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 2; i_8 < 20; i_8 += 2) 
                    {
                        for (short i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) ((short) arr_16 [i_6] [i_6] [i_6 - 1]));
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((arr_17 [i_9]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    arr_27 [i_6] [i_7] = ((/* implicit */unsigned short) arr_18 [i_5] [i_6] [(signed char)6]);
                    arr_28 [i_6] [20U] [i_6] = ((/* implicit */short) ((signed char) arr_17 [i_6]));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 22; i_11 += 2) 
            {
                for (signed char i_12 = 2; i_12 < 20; i_12 += 1) 
                {
                    {
                        arr_37 [i_5] = ((/* implicit */short) (signed char)52);
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_23 [i_5] [i_11])))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned int) ((((7718407477680436644ULL) != (14869934618385751454ULL))) ? (arr_14 [i_5 - 2] [i_5]) : (((/* implicit */unsigned long long int) (~(arr_34 [13U] [i_5] [i_5] [2ULL] [i_5]))))));
    }
    var_18 = ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (long long int i_13 = 0; i_13 < 25; i_13 += 1) 
    {
        for (unsigned int i_14 = 2; i_14 < 23; i_14 += 1) 
        {
            for (signed char i_15 = 3; i_15 < 23; i_15 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) var_2)) & (((/* implicit */int) (unsigned short)18516)))) : ((((((~(((/* implicit */int) arr_42 [i_13] [(signed char)12] [i_13])))) + (2147483647))) >> (((/* implicit */int) (short)7))))));
                    var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_44 [i_13] [i_13] [i_13]))))), (((((/* implicit */_Bool) arr_38 [i_13])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) var_2))))) : (min((((/* implicit */unsigned long long int) arr_43 [i_13] [i_13])), (arr_40 [(unsigned short)13])))))));
                }
            } 
        } 
    } 
}
