/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156925
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
    var_15 = ((/* implicit */signed char) var_13);
    var_16 = ((/* implicit */signed char) var_6);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) (short)5745))))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)35937)) ? (((/* implicit */int) (unsigned short)60967)) : (((/* implicit */int) (unsigned short)60970))));
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_5)))))), ((+(((/* implicit */int) var_13)))))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_11))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_11))));
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((_Bool) arr_2 [i_2 + 1])))));
            var_23 ^= ((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) var_1))));
        }
    }
    /* vectorizable */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)60967)) - (60946))))))));
        arr_8 [i_3] = ((/* implicit */signed char) var_1);
        /* LoopSeq 3 */
        for (signed char i_4 = 1; i_4 < 21; i_4 += 3) /* same iter space */
        {
            arr_12 [i_4] [i_4] = ((/* implicit */signed char) arr_9 [i_4]);
            var_25 = var_14;
            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_11 [i_3] [i_3] [i_3])) - (30)))))))));
            arr_13 [i_3 - 1] [i_3] = var_7;
        }
        for (signed char i_5 = 1; i_5 < 21; i_5 += 3) /* same iter space */
        {
            var_27 += ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) arr_7 [i_3 - 1])))));
            arr_16 [i_3] [i_5 + 2] [i_5 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5 - 1] [i_5 + 2])) ? ((~(((/* implicit */int) arr_9 [i_3])))) : (((((/* implicit */_Bool) (unsigned short)60967)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))));
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                var_28 = ((/* implicit */signed char) (~(((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_6)) - (197)))))));
                arr_19 [i_6] = ((/* implicit */unsigned short) var_10);
            }
            for (short i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                var_29 = ((/* implicit */signed char) (-(((/* implicit */int) arr_11 [i_5 + 2] [i_3 - 1] [i_3 - 1]))));
                arr_22 [i_3] [i_3] [i_7] [(_Bool)1] = (unsigned char)251;
            }
            /* LoopSeq 3 */
            for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                arr_27 [i_8] = ((/* implicit */signed char) var_2);
                /* LoopSeq 4 */
                for (short i_9 = 2; i_9 < 21; i_9 += 1) 
                {
                    arr_30 [i_8] [i_5 + 2] [i_8] [i_3] = ((/* implicit */unsigned char) (!(arr_18 [i_3 - 1] [i_5 + 2] [i_5 - 1] [i_9 - 2])));
                    arr_31 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (unsigned short)60965)) : (((/* implicit */int) (unsigned short)60975))));
                }
                for (signed char i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    arr_35 [i_8] [(unsigned short)19] [(short)6] [(unsigned short)19] [(short)13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [(unsigned short)1] [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_15 [(unsigned char)19] [(unsigned char)19] [(_Bool)1])) : (((/* implicit */int) arr_24 [i_10] [(unsigned char)2] [i_5] [i_3 - 1]))))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) arr_14 [i_10] [i_3 - 1]))))));
                    arr_36 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)1053)) ? (((((/* implicit */int) arr_11 [i_3 - 1] [i_8] [i_8])) >> (((((/* implicit */int) var_9)) - (105))))) : ((+(((/* implicit */int) var_5))))));
                    var_30 *= (unsigned char)251;
                    /* LoopSeq 2 */
                    for (signed char i_11 = 3; i_11 < 19; i_11 += 4) 
                    {
                        var_31 ^= ((short) ((((/* implicit */int) arr_39 [i_3 - 1] [i_10])) >> (((((/* implicit */int) var_9)) - (83)))));
                        var_32 ^= ((/* implicit */short) var_0);
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_6 [i_3 - 1] [i_3 - 1])) + (118)))));
                    }
                    for (signed char i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        var_34 *= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_11))) >> (((((/* implicit */int) var_8)) - (218)))));
                        arr_43 [i_3] [i_3] [i_8] [i_3] [i_12] = ((/* implicit */signed char) var_12);
                    }
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    var_35 += ((/* implicit */unsigned char) (((+(((/* implicit */int) var_11)))) >> (((/* implicit */int) arr_17 [(signed char)6]))));
                    var_36 = var_9;
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    arr_48 [(unsigned char)10] [i_5] [i_5] [i_5] [(signed char)20] [i_5] &= ((/* implicit */signed char) (unsigned short)60975);
                    var_37 = var_14;
                }
            }
            for (unsigned char i_15 = 1; i_15 < 22; i_15 += 4) 
            {
                var_38 += ((/* implicit */signed char) arr_21 [i_3]);
                var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? ((~(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) (unsigned short)60967)) : (((/* implicit */int) (short)15345))))));
                arr_51 [i_15] = ((/* implicit */unsigned char) arr_38 [i_15 + 1] [(_Bool)1]);
            }
            for (signed char i_16 = 0; i_16 < 23; i_16 += 1) 
            {
                var_40 += ((/* implicit */short) ((_Bool) ((((/* implicit */int) arr_18 [(unsigned char)6] [i_5] [i_16] [i_16])) >> (((/* implicit */int) arr_17 [(unsigned short)4])))));
                var_41 += ((/* implicit */_Bool) arr_42 [i_3 - 1] [i_5]);
                /* LoopSeq 1 */
                for (unsigned char i_17 = 3; i_17 < 20; i_17 += 1) 
                {
                    arr_56 [i_3] [i_3] = (signed char)96;
                    var_42 = (signed char)-76;
                }
            }
        }
        for (signed char i_18 = 1; i_18 < 21; i_18 += 3) /* same iter space */
        {
            arr_60 [(unsigned char)4] = ((/* implicit */unsigned char) var_7);
            var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-24))))) ? ((-(((/* implicit */int) arr_18 [(unsigned short)17] [(unsigned short)17] [i_18] [i_18 - 1])))) : (((/* implicit */int) var_7)))))));
            arr_61 [i_18] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) var_9)))) >> ((((+(((/* implicit */int) var_0)))) - (32642)))));
        }
    }
}
