/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105812
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) max((((/* implicit */int) arr_1 [i_0])), ((+(((((/* implicit */int) (unsigned short)65526)) / (((/* implicit */int) (unsigned char)118))))))));
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (unsigned char)116))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_13 &= ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [21])));
        arr_5 [i_1] [(unsigned short)8] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)158))) : (3841358417U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
    }
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)97)))))));
    var_15 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_0 [i_2])) ? (max((arr_8 [i_2]), (arr_0 [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) (unsigned char)139)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_4 = 2; i_4 < 11; i_4 += 2) 
            {
                arr_17 [i_2] [10ULL] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(824436117)))) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) (signed char)-16))))));
                /* LoopSeq 3 */
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    arr_21 [i_5] [11] = arr_1 [(unsigned char)14];
                    var_16 |= ((((/* implicit */_Bool) arr_20 [(unsigned char)8] [i_4 - 2] [i_2] [i_5])) ? (((arr_20 [i_2] [i_4 - 1] [i_4] [i_4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (arr_20 [10U] [i_4 - 2] [i_4] [i_4]));
                    arr_22 [i_2] [i_2] [i_2] [i_5] [i_2] = ((unsigned long long int) min((var_11), ((~(((/* implicit */int) (unsigned char)100))))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned int) var_0);
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_4 - 2] [i_4] [i_4 - 2] [i_4])) ^ (((/* implicit */int) arr_14 [i_4 - 2] [(unsigned char)2] [i_4 - 2] [(unsigned char)2]))));
                    }
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_19 [i_2] [i_3] [i_4] [i_6]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        arr_30 [(unsigned char)7] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_15 [i_8] [i_4 + 1] [i_3] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_8] [i_3]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_20 [8U] [i_4] [i_8] [(_Bool)1])))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((_Bool) arr_27 [i_2]))) : (((/* implicit */int) var_0))));
                        arr_31 [i_8] = ((/* implicit */unsigned char) arr_23 [i_4] [i_4] [(signed char)11] [i_4] [i_4]);
                        arr_32 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)165)) >= (((/* implicit */int) (short)10522))));
                    }
                    for (short i_9 = 1; i_9 < 11; i_9 += 1) 
                    {
                        arr_35 [i_9 + 1] = ((/* implicit */unsigned int) var_2);
                        arr_36 [i_4] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)114))));
                    }
                    arr_37 [i_2] [(unsigned char)2] [i_2] [(unsigned char)2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_8 [5U]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (signed char)120))));
                }
                for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    arr_40 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)19586)), (((var_1) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) (signed char)113))))))) != (min((var_7), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_6 [i_2])), (arr_18 [i_3]))))))));
                    arr_41 [i_10] [i_10] [i_10] [i_10] [(short)7] = ((/* implicit */unsigned char) min((var_5), (((/* implicit */unsigned short) arr_18 [i_2]))));
                    arr_42 [(unsigned short)0] [i_3] [i_4 - 2] [i_10] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_18 [i_2])), (min((((/* implicit */unsigned long long int) (_Bool)1)), (393583609194154127ULL))))) >= (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (unsigned char)156)), (4294967295U))), (((/* implicit */unsigned int) arr_19 [i_10] [i_2] [i_2] [i_4 + 1])))))));
                }
                arr_43 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_10);
            }
            var_21 = ((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)81)));
            arr_44 [i_2] [(unsigned char)10] [(unsigned char)10] = ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */unsigned int) 432583056)) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3]))) | (var_7))));
        }
        arr_45 [7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((7U), (((/* implicit */unsigned int) (_Bool)1)))))));
    }
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        arr_50 [i_11 - 1] [i_11] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)-2337)) : (((/* implicit */int) (_Bool)1))));
        arr_51 [i_11] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_47 [i_11 - 1])))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) arr_47 [(short)13])) : (max((1503789353), (arr_49 [i_11])))))) : (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (arr_4 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)136)), ((unsigned short)9828)))))))));
    }
    var_22 = var_1;
}
