/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147255
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
    var_19 = ((/* implicit */_Bool) (~(var_7)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_20 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_0 [i_1 - 3] [i_1 + 1])) + (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 3])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 8; i_4 += 3) 
                        {
                            {
                                arr_11 [i_4] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */int) max((var_0), ((signed char)40)));
                                var_21 = arr_5 [i_1];
                            }
                        } 
                    } 
                }
                for (long long int i_5 = 4; i_5 < 8; i_5 += 3) 
                {
                    arr_15 [i_0] [i_1] [i_5 - 1] = ((/* implicit */unsigned long long int) ((signed char) var_18));
                    var_22 = (~(((/* implicit */int) arr_12 [i_5 - 3] [i_1 - 2] [i_1])));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */short) ((int) 63682409));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 11220798315203698262ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [(unsigned char)8]))) : (7225945758505853334ULL)));
                            arr_22 [i_1] [i_1] = ((/* implicit */unsigned short) arr_2 [i_0]);
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)11160))));
                            var_26 = ((((/* implicit */_Bool) arr_14 [i_0] [i_1 + 1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)44))))) : (6494620746653849011ULL));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_8] [i_1 - 1]))));
                            arr_26 [i_0] [i_1 - 2] [i_1] [i_6] [i_5 - 2] [i_1] = ((/* implicit */unsigned char) arr_4 [i_1 + 1] [i_1 + 1]);
                        }
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */long long int) (-(7225945758505853353ULL)));
                            var_29 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_25 [i_1 + 1] [(short)6] [i_5 + 2] [i_6] [i_9])))), (((/* implicit */int) ((((/* implicit */int) arr_25 [i_1 - 1] [(_Bool)1] [i_5 - 2] [i_5] [i_5])) != (((/* implicit */int) arr_25 [i_1 - 2] [4ULL] [i_1] [i_1 - 2] [i_9])))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            var_30 = ((unsigned char) 1656320242);
                            arr_33 [i_0] [i_1] [i_5 - 4] [i_6] [i_10] = ((/* implicit */_Bool) ((short) arr_28 [i_0] [i_1] [i_5 - 4] [i_6] [i_10]));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_5] [i_6] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13))));
                            var_32 = var_6;
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    arr_38 [i_0] [i_1] = ((/* implicit */signed char) (unsigned short)22672);
                    /* LoopSeq 2 */
                    for (short i_12 = 0; i_12 < 10; i_12 += 2) /* same iter space */
                    {
                        arr_41 [i_0] [i_1] [i_1] [i_11] [i_11] [i_12] = ((signed char) ((_Bool) var_6));
                        arr_42 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_6 [i_1] [i_1 + 1] [i_11] [i_12]);
                        var_33 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)42863))))) ? (((arr_20 [i_12] [i_12] [i_1] [i_11] [i_1] [i_1] [i_0]) * (arr_19 [i_0] [i_1] [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_12] [i_11] [i_11] [i_1 - 3] [i_1]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10)))))));
                        arr_43 [i_0] [i_1 - 3] [i_1] [i_12] = ((/* implicit */long long int) min((arr_27 [i_1 - 1] [i_1] [i_1] [i_11] [i_11]), (((/* implicit */unsigned char) (((+(7871947842422441543ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                    }
                    for (short i_13 = 0; i_13 < 10; i_13 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_7)));
                        var_35 = ((/* implicit */unsigned long long int) var_11);
                        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) max((((/* implicit */short) (signed char)68)), ((short)-1560))))));
                    }
                    var_37 = ((/* implicit */short) ((((((/* implicit */int) arr_10 [i_1 - 3] [i_1 - 4] [i_1 + 1] [i_1 - 2] [i_1 - 2])) == (63682398))) ? (((/* implicit */long long int) ((/* implicit */int) min((((unsigned char) var_15)), (((/* implicit */unsigned char) arr_14 [i_1] [i_1] [i_1])))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))) | (arr_30 [i_0] [i_1 + 1] [i_11])))));
                }
                for (int i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    var_38 = ((/* implicit */_Bool) (unsigned char)44);
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 10; i_16 += 3) 
                        {
                            {
                                var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) (-(((((/* implicit */int) max((arr_36 [i_0] [i_1] [i_14] [i_16]), (((/* implicit */unsigned short) arr_53 [i_0] [i_0] [i_1] [i_14] [i_15] [i_16] [i_16]))))) * (((/* implicit */int) var_11)))))))));
                                var_40 += ((/* implicit */unsigned char) var_16);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 10; i_17 += 3) 
                    {
                        for (signed char i_18 = 0; i_18 < 10; i_18 += 1) 
                        {
                            {
                                var_41 = ((/* implicit */int) 0ULL);
                                arr_62 [i_0] [i_1 - 2] [i_1] [i_17] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) arr_39 [i_0] [i_0]))))) >> (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) arr_49 [i_14] [i_17] [i_18])))))) : (arr_35 [i_1 - 2] [i_1] [i_14])))));
                            }
                        } 
                    } 
                }
                var_42 = ((/* implicit */unsigned long long int) var_12);
                /* LoopSeq 3 */
                for (unsigned char i_19 = 0; i_19 < 10; i_19 += 3) 
                {
                    arr_65 [i_0] [i_1] = ((/* implicit */_Bool) ((((_Bool) (signed char)-76)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_1])) || (((/* implicit */_Bool) arr_17 [i_1])))))) : (((long long int) var_14))));
                    arr_66 [i_1] [i_1 + 1] [i_19] = ((/* implicit */unsigned char) ((max((min((((/* implicit */int) arr_14 [i_1] [i_1 - 1] [i_1])), (arr_57 [i_0] [i_0] [i_1 - 2] [i_19]))), (((/* implicit */int) var_13)))) % (((/* implicit */int) min((((/* implicit */short) arr_51 [i_1] [i_1 - 1] [i_19])), ((short)-2198))))));
                }
                /* vectorizable */
                for (unsigned short i_20 = 3; i_20 < 9; i_20 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            {
                                var_43 = ((/* implicit */unsigned char) (+(((unsigned long long int) var_1))));
                                var_44 += ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)30301)) >> (((((/* implicit */int) var_9)) - (4280)))))) : (arr_70 [i_0] [i_1 - 4] [i_20 - 1] [i_21]));
                                var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) var_14))))))));
                            }
                        } 
                    } 
                    var_46 = ((/* implicit */signed char) (+(var_2)));
                    var_47 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)44))));
                }
                /* vectorizable */
                for (unsigned long long int i_23 = 3; i_23 < 8; i_23 += 3) 
                {
                    var_48 = ((/* implicit */unsigned long long int) arr_36 [i_23 - 2] [i_23 - 3] [i_23 - 2] [i_23 - 1]);
                    arr_78 [i_1] [i_1 - 1] [i_1] = ((/* implicit */_Bool) var_18);
                    /* LoopNest 2 */
                    for (unsigned int i_24 = 0; i_24 < 10; i_24 += 3) 
                    {
                        for (unsigned long long int i_25 = 1; i_25 < 9; i_25 += 3) 
                        {
                            {
                                var_49 = arr_72 [i_1 - 2] [i_23 + 2] [i_24] [i_1] [i_25] [i_25 - 1];
                                var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) (unsigned char)249))));
                                arr_84 [i_0] [i_1] [i_23] [i_24] [i_25 - 1] = ((/* implicit */short) arr_13 [i_25 + 1] [i_1 - 4] [i_23 - 2]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_26 = 0; i_26 < 10; i_26 += 2) 
                    {
                        for (short i_27 = 1; i_27 < 6; i_27 += 2) 
                        {
                            {
                                var_51 = ((/* implicit */unsigned short) ((arr_46 [i_27 + 3] [i_1] [i_1 - 2] [i_23 - 1]) || (((/* implicit */_Bool) (signed char)-89))));
                                var_52 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_15))));
                                var_53 = ((/* implicit */short) ((arr_85 [i_1 - 2] [i_1] [i_27 + 3] [i_1]) ? (((/* implicit */int) arr_67 [i_1 - 4] [i_23] [i_27 + 3] [i_26])) : (((/* implicit */int) arr_85 [i_1 - 4] [i_0] [i_27 + 4] [i_1]))));
                                var_54 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (arr_57 [i_1 - 4] [i_1 - 4] [i_23 - 3] [i_27 + 1]) : (((/* implicit */int) arr_58 [i_1 - 2] [i_1])));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_55 = ((/* implicit */unsigned short) (unsigned char)44);
}
