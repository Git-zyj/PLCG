/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121788
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
    var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned char) (short)-3876))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))) : (((var_1) % (var_1))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_13))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_5))));
                    var_17 = ((int) var_10);
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    arr_12 [i_0] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_13)))) / (((/* implicit */int) arr_1 [(short)5] [(short)5]))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1 - 3]))));
                        arr_15 [i_0 - 1] [i_1] [i_3] [i_3] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((743051009646636552LL) >> (((((/* implicit */int) arr_11 [i_1 + 2] [i_1 + 2])) - (69)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_1 - 3]))) : ((+(var_12)))));
                    }
                }
                for (short i_5 = 1; i_5 < 21; i_5 += 3) 
                {
                    var_19 = min((var_6), (((/* implicit */unsigned long long int) ((arr_14 [i_5 + 1] [i_1 - 3]) - (arr_14 [i_5 - 1] [i_1 - 2])))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 4) 
                    {
                        var_20 *= ((/* implicit */signed char) (+(((/* implicit */int) min((arr_11 [i_0 - 1] [i_1 + 2]), (arr_11 [i_0 - 1] [i_1 + 2]))))));
                        arr_23 [i_0] [i_1] [i_5] [i_6] [i_0] [i_6] = ((/* implicit */_Bool) var_12);
                        arr_24 [i_0] [i_1] [15LL] = ((unsigned long long int) arr_17 [i_0] [i_1 - 1] [i_6 - 2]);
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */int) max((var_10), (((/* implicit */unsigned long long int) arr_10 [i_0 + 1] [i_0 + 1]))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_3))));
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 20; i_8 += 4) 
                        {
                            arr_31 [i_0] [i_0] [i_0 - 1] [i_0] [(signed char)15] [i_0] = ((/* implicit */unsigned short) min(((+(max((((/* implicit */unsigned long long int) (short)-9889)), (var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-31786))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1052706570203511391LL)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) (short)9878))))) : (((((/* implicit */_Bool) arr_16 [i_8 - 1] [i_5] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_12))))))));
                            arr_32 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1052706570203511396LL)) ? (((/* implicit */long long int) var_1)) : (arr_10 [(_Bool)1] [i_8])))), (min((arr_27 [i_0] [i_0] [i_5] [i_6] [i_6] [i_6]), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_6] [i_1])))))), (((/* implicit */unsigned long long int) var_11))));
                        }
                    }
                }
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    arr_36 [i_0] [i_1 + 1] = ((/* implicit */signed char) max((max((min((arr_16 [i_0 + 1] [i_1] [i_9] [i_9]), (((/* implicit */unsigned long long int) (short)-1525)))), (((/* implicit */unsigned long long int) (short)9906)))), (((15162005870235349402ULL) * (((/* implicit */unsigned long long int) -4260597659310639952LL))))));
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_9] [i_9])))))))) ? (((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_10 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(582814472)))) ? (((/* implicit */int) max((var_13), (arr_35 [i_0 - 1])))) : (((/* implicit */int) (_Bool)1))))))))));
                    arr_37 [i_0] [i_0] [i_1] [i_9] = ((/* implicit */int) arr_33 [i_0]);
                    var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_11)))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (1280085553667706950LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 3] [i_0]))) & (var_1))))))) ? ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)9878))) : (arr_5 [i_0] [i_1] [i_9]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_9] [i_1 + 2])) ? (((/* implicit */int) arr_0 [i_9] [i_1 + 2])) : (((/* implicit */int) arr_4 [i_1] [i_1 + 2])))))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_10 = 3; i_10 < 8; i_10 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 3; i_11 < 11; i_11 += 4) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                {
                    arr_46 [i_10] = ((/* implicit */signed char) (~(arr_13 [i_10 + 3] [i_10 - 2] [i_10 + 1])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 1; i_13 < 11; i_13 += 4) 
                    {
                        for (signed char i_14 = 1; i_14 < 10; i_14 += 4) 
                        {
                            {
                                arr_52 [i_10] [i_12] [i_12] [i_11] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_10 + 3] [i_11] [i_12] [i_13])) ? (arr_50 [i_14 + 2] [i_14 + 1] [i_14 - 1] [i_14 - 1] [i_14 + 2]) : (arr_42 [i_10])));
                                arr_53 [i_10] [i_10] [i_10] [i_10 - 1] [i_12] &= (~(arr_48 [(unsigned short)5] [i_10] [i_10 + 1] [i_11 - 1]));
                                var_25 = ((/* implicit */unsigned long long int) (((-(arr_30 [i_10] [i_11 - 1] [i_12] [i_10] [i_13] [(unsigned short)9] [i_10]))) == (((/* implicit */unsigned long long int) (-(arr_18 [(short)17]))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_10] [i_11] [i_12])) ? (((/* implicit */unsigned long long int) arr_42 [i_12])) : (arr_27 [i_10] [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1] [i_12]))))));
                }
            } 
        } 
        arr_54 [i_10] = ((/* implicit */unsigned short) ((short) arr_41 [i_10 + 1] [i_10 - 2]));
    }
    for (unsigned short i_15 = 3; i_15 < 8; i_15 += 3) /* same iter space */
    {
        arr_57 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) : (((((/* implicit */_Bool) arr_39 [i_15])) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-5)), (var_1)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_15 + 1] [i_15] [i_15] [i_15]))) : (var_10)))))));
        /* LoopNest 2 */
        for (long long int i_16 = 3; i_16 < 11; i_16 += 2) 
        {
            for (unsigned short i_17 = 3; i_17 < 11; i_17 += 4) 
            {
                {
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (+(((/* implicit */int) ((arr_16 [i_15] [i_15] [i_15] [i_16 - 3]) < (arr_16 [i_15] [i_15] [i_15] [i_16 - 3])))))))));
                    var_28 = ((/* implicit */short) (+(min((((/* implicit */long long int) var_11)), (arr_48 [i_15 - 2] [i_15 - 2] [i_15] [i_15 - 2])))));
                    var_29 = ((/* implicit */unsigned long long int) ((int) max((((/* implicit */long long int) (short)9878)), (3097998558369018989LL))));
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_51 [i_15] [i_17] [i_17 - 2] [(unsigned char)6] [i_17] [i_17] [i_15]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8734)))))) ? (((int) arr_40 [i_15])) : (((/* implicit */int) max((((/* implicit */short) arr_55 [i_15 - 2])), ((short)-5513))))));
                    var_31 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) arr_44 [i_15 + 4] [i_16 - 3] [i_16 + 1] [i_17 - 2])), (1052706570203511367LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) 3713887778U)) ? (((/* implicit */int) (short)-30812)) : (((/* implicit */int) (signed char)42)))))));
                }
            } 
        } 
    }
}
