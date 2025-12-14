/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185912
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1]))))))))));
                var_16 = ((/* implicit */unsigned long long int) (unsigned char)107);
                var_17 = ((/* implicit */unsigned long long int) ((unsigned char) (signed char)65));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (~((-(((/* implicit */int) (unsigned char)7)))))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (signed char i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_11 [i_4] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_6]))), (((/* implicit */unsigned int) ((var_9) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))))))))))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)46570)))) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) ((arr_16 [i_3] [i_3] [i_3] [i_3] [i_3]) && (((/* implicit */_Bool) arr_2 [i_5])))))));
                            }
                            for (signed char i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)54))));
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((short) arr_14 [i_7] [i_3] [i_2]))))) ? (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) 896634305U)), (8796025913344ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) min((((/* implicit */signed char) arr_16 [i_7] [i_5] [i_4] [i_3] [13U])), (((signed char) (_Bool)1)))))));
                            }
                            for (signed char i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
                            {
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (+(min((min((345141995U), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) ((unsigned char) (signed char)88))))))))));
                                var_25 = ((/* implicit */signed char) (_Bool)1);
                                arr_24 [i_5] [i_5] [i_2] = ((/* implicit */signed char) min((((/* implicit */short) (_Bool)1)), (((short) (unsigned char)147))));
                            }
                            for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) 
                            {
                                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2])) || (((((/* implicit */_Bool) arr_1 [i_5])) || (((/* implicit */_Bool) arr_7 [i_4] [i_4]))))));
                                arr_27 [0U] [i_5] [i_4] [i_5] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) 398736361))) || (((_Bool) var_1))));
                            }
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)55308)), (0LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((signed char) var_6))) : ((-(((/* implicit */int) var_6))))))) : (((arr_9 [i_2] [i_2]) * (((/* implicit */unsigned int) arr_12 [i_2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned int i_12 = 0; i_12 < 23; i_12 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 2) 
                        {
                            {
                                var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_41 [i_10] [i_14] [i_14] [i_13]), (arr_41 [i_10] [i_11] [i_14] [i_14])))) || (((((/* implicit */_Bool) arr_33 [i_10] [i_11] [i_11] [i_13])) || (((/* implicit */_Bool) arr_33 [i_10] [(unsigned char)15] [i_10] [i_13]))))));
                                var_29 = ((/* implicit */_Bool) 268435455LL);
                                arr_42 [i_10] [(short)9] [i_12] [i_11] [i_10] = ((/* implicit */long long int) -2120192038);
                                var_30 = ((/* implicit */unsigned char) max((4294967295U), (((/* implicit */unsigned int) arr_31 [i_10] [i_10]))));
                                arr_43 [i_10] = ((/* implicit */unsigned int) arr_37 [i_10] [i_11] [i_12] [i_10]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_15 = 0; i_15 < 23; i_15 += 3) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 23; i_16 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)40)), ((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))))))));
                                arr_50 [i_12] [i_11] [i_12] [i_16] [16U] |= ((/* implicit */int) min((((/* implicit */short) (signed char)-30)), (max((((/* implicit */short) (signed char)115)), (var_14)))));
                                var_32 = ((/* implicit */short) (~(255)));
                            }
                        } 
                    } 
                    arr_51 [i_10] [i_11] [i_12] [(unsigned short)0] &= ((/* implicit */unsigned short) max((var_9), (max((arr_28 [i_11] [(signed char)6]), (arr_28 [i_10] [(_Bool)1])))));
                    /* LoopSeq 3 */
                    for (unsigned int i_17 = 0; i_17 < 23; i_17 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (arr_44 [i_12] [i_12] [i_10] [18])))) ? (((/* implicit */int) min(((_Bool)0), ((_Bool)0)))) : (((/* implicit */int) ((unsigned short) (signed char)115)))));
                        /* LoopSeq 1 */
                        for (signed char i_18 = 0; i_18 < 23; i_18 += 2) 
                        {
                            arr_58 [i_10] [i_11] [i_12] [i_12] [i_17] [i_17] [i_10] = 1049209103U;
                            arr_59 [i_10] [i_11] [i_12] [i_12] [i_18] [i_18] [i_17] = max((((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (arr_56 [i_10] [i_11] [i_18] [i_17] [i_18])))), (((var_1) ? (((/* implicit */int) arr_56 [i_10] [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) var_14)))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_19 = 0; i_19 < 23; i_19 += 3) 
                    {
                        var_34 = (unsigned short)52145;
                        var_35 &= (!(((/* implicit */_Bool) arr_29 [i_11] [i_19])));
                    }
                    for (unsigned int i_20 = 0; i_20 < 23; i_20 += 3) 
                    {
                        arr_67 [i_10] [20LL] [20LL] [i_10] [i_20] [i_20] = ((/* implicit */unsigned char) (_Bool)1);
                        var_36 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) 3306740055U))))))));
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) 4135316394U))) ? (((((/* implicit */_Bool) arr_47 [i_10] [i_11] [18U] [i_20] [18U] [0])) ? (arr_47 [i_10] [i_11] [16U] [22] [i_20] [i_20]) : (arr_47 [i_10] [i_11] [12U] [i_20] [i_20] [20ULL]))) : (arr_47 [i_20] [i_20] [14] [14] [i_10] [i_10]))))));
                        arr_68 [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) arr_32 [i_10]);
                        var_38 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                }
            } 
        } 
    } 
    var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) (unsigned short)41036))));
}
