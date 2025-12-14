/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126036
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
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_13 = ((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7551))));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                var_14 ^= ((/* implicit */unsigned char) 4294967295U);
                var_15 = ((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_0]))));
                arr_8 [i_0] [i_1] [i_2] = var_5;
            }
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (~(-488762679))))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
            }
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                arr_14 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_4] [i_1] [i_0] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_10))))) ? (3273698005U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(short)11] [i_4]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0]))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)1)))))))));
                var_19 = ((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_4]);
                var_20 = ((/* implicit */short) arr_3 [i_0] [(signed char)6]);
            }
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_6))));
                var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_11))));
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_8))));
                var_24 ^= ((/* implicit */unsigned short) var_8);
            }
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (short)16519))));
        }
        for (unsigned short i_6 = 2; i_6 < 14; i_6 += 3) 
        {
            var_26 *= ((/* implicit */signed char) var_9);
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_7 = 1; i_7 < 14; i_7 += 3) 
            {
                var_27 = ((/* implicit */signed char) ((unsigned char) (_Bool)1));
                var_28 = ((/* implicit */signed char) var_5);
                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) arr_2 [i_7 - 1] [i_6 + 1] [i_6]))));
                var_30 = ((((/* implicit */int) (short)16519)) <= ((-(((/* implicit */int) var_3)))));
                var_31 = ((/* implicit */unsigned short) (short)16523);
            }
            for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)48728)) ? (4120254231U) : (4120254231U)))) * (((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))))))));
                var_33 = ((/* implicit */unsigned long long int) var_7);
            }
            for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_10 = 4; i_10 < 13; i_10 += 3) 
                {
                    arr_29 [i_0] [i_0] = ((/* implicit */short) (signed char)-56);
                    var_34 = ((/* implicit */int) ((unsigned char) arr_25 [i_10 - 1]));
                    arr_30 [i_10] = ((/* implicit */unsigned long long int) arr_2 [i_0] [(_Bool)1] [i_0]);
                }
                var_35 = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0]);
                var_36 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_6 - 1] [i_6 - 1])) * (((/* implicit */int) arr_3 [i_6 + 1] [i_6 - 2]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)23451))))) : ((-(arr_24 [i_0] [i_6 - 2] [i_9])))));
                var_37 = ((/* implicit */int) var_3);
            }
        }
        for (short i_11 = 0; i_11 < 15; i_11 += 1) 
        {
            var_38 = ((/* implicit */int) var_5);
            var_39 = ((/* implicit */_Bool) arr_6 [i_0] [i_11]);
            /* LoopSeq 1 */
            for (int i_12 = 0; i_12 < 15; i_12 += 3) 
            {
                var_40 = ((/* implicit */short) var_5);
                arr_38 [i_11] [i_11] [(unsigned short)4] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [8LL] [i_12])) < (((/* implicit */int) arr_2 [i_12] [i_11] [i_0])))))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-16519)) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((var_8) >= (min((((/* implicit */unsigned long long int) arr_26 [(signed char)14] [i_12])), (arr_31 [i_0] [i_0] [i_12]))))))));
            }
            var_41 += ((/* implicit */unsigned int) var_9);
        }
        /* vectorizable */
        for (short i_13 = 0; i_13 < 15; i_13 += 3) 
        {
            var_42 = ((/* implicit */short) ((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)-16519)))) : (((8796084633600ULL) << (((/* implicit */int) (_Bool)1))))));
            var_43 *= ((/* implicit */signed char) (-(arr_13 [i_13] [i_13] [i_0] [i_0])));
            var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) var_2))));
        }
        var_45 -= ((/* implicit */unsigned long long int) ((short) var_4));
        var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) (unsigned short)43596))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_14 = 0; i_14 < 23; i_14 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_15 = 0; i_15 < 23; i_15 += 1) 
        {
            for (short i_16 = 0; i_16 < 23; i_16 += 3) 
            {
                for (int i_17 = 0; i_17 < 23; i_17 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_18 = 0; i_18 < 23; i_18 += 1) 
                        {
                            arr_57 [i_14] [i_14] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_47 *= ((((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */int) arr_56 [i_17] [i_16] [i_15] [i_14])))) >= (((/* implicit */int) (signed char)63)));
                            var_48 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (var_7)))) / (((unsigned long long int) var_3))));
                            var_49 = ((/* implicit */_Bool) ((-1) * (((/* implicit */int) (signed char)119))));
                        }
                        var_50 += ((/* implicit */int) ((((/* implicit */int) (short)-16510)) == (((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) var_5))), (((unsigned short) var_3)))))));
                        var_51 = arr_51 [i_14] [i_15] [i_15] [i_16] [i_16] [i_17];
                    }
                } 
            } 
        } 
        arr_58 [i_14] = ((/* implicit */long long int) 31457280);
        arr_59 [i_14] = ((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) (unsigned short)65535)))));
    }
    /* vectorizable */
    for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 1) 
    {
        arr_63 [i_19] = (_Bool)1;
        var_52 *= ((/* implicit */short) ((((/* implicit */_Bool) ((6106352351925296238ULL) ^ (((/* implicit */unsigned long long int) arr_10 [i_19] [8] [i_19]))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_26 [i_19] [i_19]))))) : (((/* implicit */int) var_0))));
        var_53 = ((/* implicit */signed char) (~(((/* implicit */int) (short)20148))));
        var_54 = ((/* implicit */int) max((var_54), (((/* implicit */int) var_9))));
        var_55 = ((/* implicit */short) 941948563U);
    }
    var_56 = ((/* implicit */signed char) var_5);
    var_57 = ((/* implicit */unsigned long long int) min((var_57), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-16519)))))));
}
