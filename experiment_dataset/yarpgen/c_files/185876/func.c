/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185876
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (short)-29698))));
                var_14 = ((/* implicit */unsigned int) ((1255356355) / ((((+(((/* implicit */int) (short)-8992)))) + (((/* implicit */int) (signed char)37))))));
                arr_4 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)57956)) && ((!(((/* implicit */_Bool) (~(1662316156))))))));
                arr_5 [i_0] |= ((/* implicit */unsigned int) 8448829273046211168ULL);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (unsigned char)37);
    /* LoopNest 2 */
    for (short i_2 = 3; i_2 < 15; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            {
                var_16 ^= ((/* implicit */short) ((unsigned long long int) ((((((/* implicit */_Bool) 1599140231U)) || (((/* implicit */_Bool) (unsigned char)44)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4502096975290390702LL)) && (((/* implicit */_Bool) 0U)))))) : (3926142387U))));
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    var_17 |= ((/* implicit */unsigned long long int) (unsigned char)244);
                    /* LoopSeq 4 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (110485467U)));
                        var_19 = ((/* implicit */unsigned char) arr_10 [i_3] [i_4] [1U]);
                        var_20 -= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) > (((((/* implicit */long long int) (+(924187673U)))) | (((long long int) 9927482646580983445ULL))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_21 |= ((/* implicit */short) (+(((/* implicit */int) arr_10 [8U] [0U] [8U]))));
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            arr_22 [i_2] [i_3] [i_4] [i_6] [i_3] [i_7] = (((-(-1088310956))) / (((/* implicit */int) arr_7 [i_2 + 1])));
                            var_22 -= ((arr_20 [i_2] [(unsigned char)14] [i_3] [i_3] [i_7] [(unsigned short)12] [i_7]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_2] [i_2 - 2]))) < (((((/* implicit */_Bool) (unsigned short)52302)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34170))) : (4640462711443253457LL))))))));
                        }
                        arr_23 [i_2] [i_3] [i_3] [i_6] [(_Bool)1] = ((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2] [(unsigned short)0]);
                        var_23 += ((/* implicit */signed char) 754802366U);
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) 1566156582U);
                        arr_27 [i_3] [i_3] [i_3] [i_4] [i_3] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) 1514290787)) && (((/* implicit */_Bool) (-2147483647 - 1)))));
                        arr_28 [i_2] [i_3] [i_3] [i_4] [i_2] [i_8] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_4] [6ULL]))) * (652704913U)));
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_3] [i_2] [i_3] [(unsigned short)9] [(_Bool)1] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2 - 2] [i_3])) ? (arr_8 [i_3]) : (((/* implicit */int) ((arr_16 [i_2] [i_3] [i_2] [i_9] [(signed char)1] [i_4]) >= (0U))))));
                        var_25 = ((/* implicit */short) (unsigned short)65535);
                    }
                    /* LoopNest 2 */
                    for (signed char i_10 = 2; i_10 < 12; i_10 += 4) 
                    {
                        for (unsigned char i_11 = 4; i_11 < 13; i_11 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) ((((arr_24 [i_10 - 2] [i_11 + 1] [i_10 - 2] [i_11] [i_3]) & (arr_24 [i_10 + 1] [i_11 - 4] [i_11] [i_11 - 4] [i_3]))) >> (((17594436723814338198ULL) - (17594436723814338140ULL)))));
                                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3] [(unsigned short)10] [(unsigned short)10]))) / (((8631104692945052121LL) - (4395492363757784164LL))))) : (((/* implicit */long long int) ((unsigned int) ((short) -691763840863218871LL))))));
                                arr_39 [i_3] = ((/* implicit */int) arr_10 [i_3] [i_4] [i_3]);
                            }
                        } 
                    } 
                }
                for (short i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 1; i_14 < 14; i_14 += 1) 
                        {
                            {
                                var_28 += ((/* implicit */unsigned long long int) 262144);
                                var_29 ^= ((/* implicit */unsigned short) ((((((8946716349214783479LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-1))))) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-66))))) + (6546030848341724746LL)))));
                                var_30 = ((/* implicit */unsigned long long int) arr_13 [i_3]);
                            }
                        } 
                    } 
                    arr_50 [i_3] = ((/* implicit */signed char) (+((-(arr_16 [i_2 + 1] [(short)4] [i_2] [i_2] [(unsigned char)6] [i_2])))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_15 = 0; i_15 < 16; i_15 += 3) 
                {
                    var_31 = ((/* implicit */int) arr_44 [(_Bool)1] [i_2] [i_3] [i_3] [i_3] [(signed char)14]);
                    var_32 = ((/* implicit */signed char) 2521064800036308019LL);
                    arr_53 [i_2] [(signed char)2] |= ((/* implicit */unsigned int) (!(((((((/* implicit */_Bool) 18446744073709551599ULL)) || (((/* implicit */_Bool) arr_14 [i_2] [i_2 - 2] [i_3] [i_15])))) && (((((/* implicit */_Bool) (unsigned char)247)) && (((/* implicit */_Bool) arr_41 [(unsigned char)12] [i_3] [i_15] [(unsigned char)12]))))))));
                }
                for (unsigned char i_16 = 0; i_16 < 16; i_16 += 3) 
                {
                    var_33 *= ((/* implicit */int) ((((15872U) << (((arr_9 [(unsigned short)8] [i_3]) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) arr_34 [12U] [i_3] [12U])))))) < (((/* implicit */unsigned int) arr_51 [i_2] [(unsigned short)2] [14ULL] [14ULL]))));
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 16; i_17 += 3) 
                    {
                        for (unsigned int i_18 = 1; i_18 < 15; i_18 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) arr_41 [(_Bool)1] [i_18 + 1] [(_Bool)1] [(_Bool)1])) * (((/* implicit */int) arr_41 [2] [i_18 + 1] [i_18] [2])))));
                                arr_63 [i_3] [i_3] = ((-1219658865) / (((((/* implicit */int) arr_3 [i_17] [i_3])) + (((/* implicit */int) (signed char)1)))));
                            }
                        } 
                    } 
                    var_35 *= ((/* implicit */_Bool) (signed char)87);
                }
            }
        } 
    } 
}
