/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116224
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
    var_20 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_21 -= ((/* implicit */int) max((((((((/* implicit */long long int) ((/* implicit */int) var_1))) == (arr_3 [i_1]))) ? (arr_4 [i_1 + 1] [i_2 - 2] [i_2 - 2]) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1 + 1] [i_2 - 2] [i_2])) == (((/* implicit */int) arr_0 [i_1 + 1])))))));
                            var_22 = ((/* implicit */unsigned char) max(((((_Bool)1) ? (((long long int) var_9)) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)65)))) == (((var_14) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (var_2) : (((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))))) && (arr_1 [i_1 + 1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (signed char i_5 = 4; i_5 < 14; i_5 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 2; i_6 < 15; i_6 += 2) 
                {
                    for (unsigned char i_7 = 2; i_7 < 16; i_7 += 2) 
                    {
                        {
                            var_24 -= ((long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) -7773673338274206375LL)))))) : (arr_8 [i_4] [i_6 + 1] [i_7 + 1] [i_7 + 1])));
                            var_25 &= ((/* implicit */short) ((unsigned char) arr_18 [i_7] [i_7 - 1] [2U]));
                        }
                    } 
                } 
                arr_24 [i_5] [i_5] [i_4] = ((/* implicit */long long int) arr_4 [i_4] [i_5] [(_Bool)1]);
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 2) 
                    {
                        {
                            arr_31 [i_9 + 3] [i_9] [i_9] [(short)7] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (_Bool)0)), (2416981197U)));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_3 [i_9 + 3]) + (9223372036854775807LL))) >> (((arr_14 [i_5 - 1]) - (7358085334194978109ULL)))))) ? (((((/* implicit */_Bool) max((arr_13 [i_9 + 1]), (((/* implicit */long long int) var_0))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)173)) != (((/* implicit */int) var_5))))) : ((~(((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_29 [i_9 + 2] [i_5] [i_9] [i_8 + 1])) ? (((/* implicit */int) arr_7 [i_9 - 1] [i_5] [2U])) : (((/* implicit */int) var_7))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (short i_12 = 0; i_12 < 16; i_12 += 2) 
            {
                {
                    var_27 = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) var_15)) ? (arr_5 [i_10] [2ULL] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) var_19))))), (arr_3 [i_10]))) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 16; i_14 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) ((var_18) ? (arr_3 [i_10]) : (arr_5 [i_10] [i_11] [i_10])))))));
                                var_29 = ((/* implicit */short) max((max((arr_27 [i_10] [i_13] [i_14]), (arr_27 [i_10] [i_10] [i_10]))), (((unsigned long long int) arr_27 [i_10] [5ULL] [i_12]))));
                                var_30 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_11 [i_10] [i_10] [(unsigned short)19] [i_10] [i_10] [i_10])))), ((+(((/* implicit */int) arr_11 [i_10] [i_11] [i_12] [i_12] [i_13] [i_14]))))))) ? ((-((~(((/* implicit */int) arr_2 [i_13])))))) : (((((/* implicit */_Bool) max(((-2147483647 - 1)), (((/* implicit */int) (short)14369))))) ? (-916033120) : (((/* implicit */int) (unsigned char)41))))));
                            }
                        } 
                    } 
                    arr_43 [i_11] [i_11] [i_11] = (((+(((/* implicit */int) (unsigned char)173)))) > (((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_18)), (arr_15 [(short)10] [(short)10] [i_12])))) : (((((/* implicit */_Bool) 11269137229372097591ULL)) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 21; i_15 += 2) 
    {
        for (short i_16 = 0; i_16 < 21; i_16 += 2) 
        {
            for (long long int i_17 = 0; i_17 < 21; i_17 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_18 = 0; i_18 < 21; i_18 += 4) 
                    {
                        for (unsigned short i_19 = 0; i_19 < 21; i_19 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_4))))));
                                arr_55 [i_15] [i_15] [9ULL] [i_18] [i_19] = ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_16])) : (arr_47 [i_15] [i_15]))))) >> (((((unsigned long long int) min((((/* implicit */unsigned long long int) arr_46 [i_15])), (var_11)))) - (37119ULL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 2; i_20 < 20; i_20 += 4) 
                    {
                        for (signed char i_21 = 0; i_21 < 21; i_21 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) ((short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_12)) : (4410480681012606817LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_12) : (arr_4 [i_20 + 1] [i_20 + 1] [i_15])))))));
                                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_11 [i_20 - 2] [i_20 - 2] [i_20 - 2] [14LL] [(short)2] [i_20 - 2])) : (((/* implicit */int) arr_11 [(_Bool)1] [i_20 + 1] [i_20 - 1] [i_20] [(signed char)15] [i_20 + 1]))))) ? ((~(17472009754963208979ULL))) : (((/* implicit */unsigned long long int) 1099507433472LL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_22 = 2; i_22 < 20; i_22 += 2) 
                    {
                        for (unsigned long long int i_23 = 0; i_23 < 21; i_23 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (1677630759156850065ULL)))) ? (((var_18) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_15])) >> (((((/* implicit */int) arr_59 [i_15] [i_15] [i_15] [i_15] [i_15])) - (12614))))) == ((+(((/* implicit */int) arr_1 [i_15]))))))))))));
                                var_35 = ((/* implicit */unsigned long long int) var_12);
                                var_36 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_51 [i_22 - 2] [i_23] [i_16])) : (((/* implicit */int) var_15)))) % (((((/* implicit */_Bool) arr_52 [(unsigned short)0] [i_15] [(unsigned short)18] [i_17] [i_22 - 2] [i_22 - 1])) ? (((/* implicit */int) arr_49 [i_22 + 1] [i_22 - 2] [i_17] [i_23])) : (((/* implicit */int) arr_52 [i_22] [i_22] [i_22] [(unsigned short)0] [i_22 + 1] [i_22 + 1]))))));
                                var_37 -= ((/* implicit */unsigned int) (+(((int) arr_53 [i_22 - 2] [i_22 - 2] [i_22 - 2] [i_22 + 1] [i_22 - 2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_24 = 1; i_24 < 20; i_24 += 2) 
                    {
                        for (int i_25 = 2; i_25 < 20; i_25 += 2) 
                        {
                            {
                                arr_72 [i_24] [i_16] [i_17] [i_15] [i_16] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 2778718342U)) ? (((/* implicit */int) (unsigned short)38498)) : (((/* implicit */int) (unsigned short)27038)))), (((/* implicit */int) ((arr_8 [i_17] [i_24 + 1] [i_24 + 1] [i_24 + 1]) <= (arr_8 [i_17] [i_24 + 1] [i_24 + 1] [i_17]))))));
                                var_38 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-25871)), (2778718331U)))) ? (arr_70 [i_25 - 1] [i_25 - 2] [i_24 - 1] [i_24 - 1] [i_24 - 1] [i_24 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (arr_44 [i_15])))))))) || (((/* implicit */_Bool) ((arr_6 [i_15] [i_24 - 1] [i_15]) & (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)6))))))))));
                                var_39 -= ((/* implicit */unsigned char) max((min((var_10), (((/* implicit */unsigned long long int) ((arr_71 [i_15]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))))), (((/* implicit */unsigned long long int) var_3))));
                                var_40 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (~(var_12)))))) : (((((/* implicit */_Bool) ((unsigned int) (unsigned short)52021))) ? (arr_56 [i_24] [i_24 + 1] [i_25 - 1] [i_24]) : (((/* implicit */long long int) ((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                                var_41 = ((/* implicit */signed char) var_7);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
