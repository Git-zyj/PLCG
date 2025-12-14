/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1072
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
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0 + 1] [i_0 - 2] = ((/* implicit */unsigned char) ((short) var_5));
        arr_3 [8U] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1]))))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_1] [i_1]))) : (((/* implicit */int) arr_0 [i_1] [i_1]))));
        arr_8 [4U] = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1])))));
        arr_9 [i_1] [i_1] = arr_1 [i_1];
    }
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned int) ((short) min((((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_11 [i_2])))), (((/* implicit */int) ((short) arr_10 [i_2]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            arr_15 [i_2] [i_3] = ((/* implicit */int) (~(arr_13 [i_2])));
            arr_16 [i_2] [i_2] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) arr_10 [i_2]))));
            arr_17 [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2])) ? (((/* implicit */int) arr_14 [i_2] [i_3])) : (((/* implicit */int) arr_14 [i_2] [i_3]))));
        }
        arr_18 [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_2]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_6))))))))));
        /* LoopSeq 3 */
        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
        {
            arr_21 [i_2] [i_4] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_11 [(short)20])) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) arr_11 [i_2])))), (((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_11 [i_2]))))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 2; i_5 < 20; i_5 += 3) 
            {
                for (unsigned short i_6 = 3; i_6 < 20; i_6 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_7 = 1; i_7 < 21; i_7 += 3) 
                        {
                            arr_29 [i_7 + 1] [i_5] [i_4] [i_4] [5] [i_5] [i_2] = ((/* implicit */unsigned short) ((arr_27 [i_6] [i_6 - 1] [i_6] [i_6 - 2] [(unsigned char)11]) ? (((/* implicit */int) arr_27 [i_6] [i_6 - 1] [i_6] [i_6 + 1] [(_Bool)1])) : (((/* implicit */int) arr_27 [i_6] [i_6 + 2] [i_6] [i_6 - 1] [i_6]))));
                            arr_30 [i_2] [i_5] [i_2] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_5 + 2] [i_6]))));
                        }
                        arr_31 [i_6] [i_4] [i_4] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((var_10) || (((/* implicit */_Bool) arr_24 [i_2] [i_4])))))));
                    }
                } 
            } 
        }
        for (signed char i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
        {
            arr_34 [i_8] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_27 [i_2] [i_8] [i_2] [i_2] [(_Bool)1])), (((((/* implicit */_Bool) min((((/* implicit */short) arr_33 [i_2])), (arr_28 [(signed char)20] [i_2] [i_2] [(short)17] [i_8] [i_8])))) ? (((/* implicit */int) ((unsigned char) arr_13 [i_2]))) : (((/* implicit */int) var_1))))));
            arr_35 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) var_5)))))))));
        }
        for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            arr_38 [i_9] [i_9] = ((/* implicit */signed char) max((max((var_14), (((/* implicit */int) arr_26 [i_9] [i_9] [i_9] [i_9] [i_9])))), (min((((/* implicit */int) ((signed char) var_17))), (((((/* implicit */_Bool) arr_11 [13])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_2] [i_9]))))))));
            arr_39 [i_2] [i_2] [i_9] = ((/* implicit */signed char) min((max((min((arr_13 [i_2]), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) << (((((/* implicit */int) var_17)) - (20403)))))))), (((/* implicit */unsigned int) arr_32 [i_9] [i_2]))));
            arr_40 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) max((((/* implicit */short) arr_27 [i_2] [i_2] [i_2] [i_2] [i_9])), (arr_28 [i_2] [i_9] [i_2] [i_2] [i_2] [i_2])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_19 [i_2]))))));
        }
        arr_41 [i_2] [i_2] |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)78)) ? (arr_13 [(signed char)6]) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned short)52434)))))))));
    }
    var_18 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) (short)-26723))))) ? (((/* implicit */int) (!(var_11)))) : ((+(((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (min((((/* implicit */int) var_5)), (var_14))) : (((/* implicit */int) (!(var_1))))))));
}
