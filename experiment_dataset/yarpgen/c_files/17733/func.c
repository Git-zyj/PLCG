/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17733
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
    var_15 = ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) var_7)), (var_3))));
    var_16 = ((/* implicit */unsigned int) ((-6464634538387988687LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        {
                            arr_11 [i_0] [0ULL] [i_0] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_11), (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                            arr_12 [3] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */long long int) (unsigned char)255);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_1 [(_Bool)1] [i_1]))));
            }
            /* vectorizable */
            for (long long int i_5 = 4; i_5 < 10; i_5 += 4) 
            {
                var_19 = ((/* implicit */_Bool) (-(2097440396419958025ULL)));
                /* LoopSeq 3 */
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    var_20 = ((/* implicit */long long int) (~(arr_14 [i_5 - 2] [i_5 - 4] [i_0 - 1] [i_0])));
                    var_21 |= ((/* implicit */short) (-(arr_2 [i_5] [i_0 + 1] [i_5])));
                }
                for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    arr_20 [i_0] [i_0] [i_5 - 2] [i_5] [i_5] = ((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_5]);
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        arr_24 [i_8] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */_Bool) var_7);
                        arr_25 [i_0] [i_0] = ((/* implicit */unsigned char) 1604787902951139334ULL);
                        arr_26 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_5 + 2] [i_5 - 2])) * (((/* implicit */int) arr_0 [i_5] [i_5 + 2]))));
                        arr_27 [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) arr_5 [i_0] [i_1] [i_8])))));
                    }
                    arr_28 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0] [i_0] [i_7]))));
                    var_22 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)10981))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_31 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))) <= (16349303677289593590ULL)));
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 4; i_10 < 9; i_10 += 4) 
                    {
                        arr_34 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) var_3)))));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */_Bool) 6176915507523620062ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [(unsigned char)2])) ? (6464634538387988685LL) : (-6464634538387988681LL)))) : (var_4)))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((short) var_12)))));
                        arr_35 [(unsigned char)11] [(unsigned char)11] [i_1] [i_0] [i_9] [(unsigned char)11] [i_10] = ((/* implicit */long long int) arr_5 [i_0] [i_0] [i_10]);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_17 [i_0 + 1] [i_1] [i_0 + 1] [i_5 + 2] [i_9] [i_5 + 2]))));
                        var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (1604787902951139341ULL))))));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (arr_33 [i_5] [i_5 + 1] [i_5] [i_9] [i_5 + 1] [i_9] [i_5])));
                        var_28 *= ((/* implicit */unsigned char) arr_9 [i_11] [i_1] [i_1]);
                        var_29 = ((/* implicit */unsigned char) arr_29 [i_0]);
                    }
                    arr_40 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) / (var_3)))) ? (((((/* implicit */_Bool) 13128269682786681065ULL)) ? (((/* implicit */unsigned long long int) arr_37 [i_0] [i_0 + 1] [i_1] [i_1] [i_5] [i_5 - 2] [i_9])) : (arr_8 [i_0] [i_5 - 1] [i_9]))) : (((/* implicit */unsigned long long int) arr_13 [i_0 - 1] [i_0 - 1] [i_5 - 4] [i_9]))));
                    var_30 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_29 [i_1])) : (((/* implicit */int) (unsigned char)5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2738037983243749373LL)) && (((/* implicit */_Bool) -6464634538387988687LL)))))) : ((+(var_8)))));
                }
            }
            /* vectorizable */
            for (unsigned char i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                arr_43 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                var_31 = (unsigned char)96;
            }
            var_32 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_30 [i_0 - 1] [i_1] [i_1] [i_0 + 1])))) ? ((+(((/* implicit */int) max((((/* implicit */unsigned char) arr_41 [i_0] [i_0] [i_0])), (arr_15 [i_1] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)22)) ? (5694666825101816032ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55)))))))))));
            arr_44 [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((12752077248607735565ULL) < (9223372036854775808ULL)))) <= (((/* implicit */int) max((arr_1 [i_0 - 1] [i_1]), (var_11))))))), (arr_33 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0])));
        }
        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))) : (arr_19 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) <= ((+(arr_13 [i_0 - 1] [i_0] [i_0 - 1] [i_0]))))))) : (min((((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0]))))), (((long long int) (_Bool)1))))));
    }
}
