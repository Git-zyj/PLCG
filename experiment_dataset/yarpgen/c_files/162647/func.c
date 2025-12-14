/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162647
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
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_1] [i_4] &= ((/* implicit */signed char) (!((!((!(((/* implicit */_Bool) 10U))))))));
                                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) 10U))))))))))));
                                var_12 -= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned short)16))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_13 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_1] [13]))))))))));
                                var_14 |= ((/* implicit */signed char) (~((~((~(((/* implicit */int) arr_17 [4ULL]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        for (short i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned char) (-((+((+(var_6)))))));
                                var_16 *= ((/* implicit */unsigned long long int) (+((-((+(1609197894)))))));
                                var_17 |= ((/* implicit */signed char) (-((+((+(((/* implicit */int) arr_10 [15LL] [i_9] [i_8] [i_1] [i_0]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 2; i_11 < 13; i_11 += 3) 
                {
                    for (unsigned long long int i_12 = 4; i_12 < 14; i_12 += 1) 
                    {
                        {
                            var_18 -= (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(-1609197907))))))));
                            var_19 *= ((/* implicit */unsigned char) (!((!((!(((/* implicit */_Bool) arr_33 [i_0] [i_11] [i_1] [i_0]))))))));
                            var_20 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0 - 1] [i_1 - 2] [i_11] [i_1 - 2]))))))))));
                            var_21 -= ((/* implicit */short) (!(((/* implicit */_Bool) (+((-(arr_0 [i_0]))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_13 = 3; i_13 < 13; i_13 += 3) 
                {
                    for (long long int i_14 = 1; i_14 < 14; i_14 += 4) 
                    {
                        for (unsigned int i_15 = 1; i_15 < 14; i_15 += 3) 
                        {
                            {
                                var_22 *= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)1))))))))));
                                var_23 ^= ((/* implicit */long long int) (~((~((~(((/* implicit */int) var_9))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 1) 
    {
        for (unsigned char i_17 = 2; i_17 < 21; i_17 += 4) 
        {
            for (unsigned int i_18 = 1; i_18 < 23; i_18 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_19 = 0; i_19 < 24; i_19 += 2) 
                    {
                        for (signed char i_20 = 0; i_20 < 24; i_20 += 3) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((~(-1609197895))))))));
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)0))))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 0; i_21 < 24; i_21 += 1) 
                    {
                        for (unsigned char i_22 = 0; i_22 < 24; i_22 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_61 [i_17] [i_21] [i_18] [i_17]))))))))))));
                                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)21))))))))))));
                                var_28 *= ((/* implicit */unsigned int) (-((-((-(((/* implicit */int) var_0))))))));
                                var_29 -= ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-3))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_23 = 0; i_23 < 24; i_23 += 1) 
                    {
                        for (unsigned long long int i_24 = 0; i_24 < 24; i_24 += 1) 
                        {
                            {
                                arr_69 [i_16] [i_16] |= ((/* implicit */unsigned int) (+((+((+(((/* implicit */int) var_10))))))));
                                arr_70 [i_18] [i_17 + 3] [i_18] [i_23] [i_18] [i_17] [i_16] |= ((/* implicit */int) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) arr_60 [i_16] [i_17] [i_17] [i_23])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_25 = 0; i_25 < 24; i_25 += 4) 
                    {
                        for (unsigned long long int i_26 = 3; i_26 < 21; i_26 += 4) 
                        {
                            {
                                arr_75 [i_16] [i_16] [i_16] [22] [i_16] &= ((/* implicit */short) (~((-((-(arr_53 [i_16] [i_17] [i_17] [i_26])))))));
                                var_30 += ((/* implicit */signed char) (!((!((!(((/* implicit */_Bool) var_5))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_27 = 1; i_27 < 14; i_27 += 1) 
    {
        for (unsigned char i_28 = 0; i_28 < 15; i_28 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_29 = 3; i_29 < 14; i_29 += 3) 
                {
                    for (int i_30 = 0; i_30 < 15; i_30 += 2) 
                    {
                        for (unsigned long long int i_31 = 2; i_31 < 13; i_31 += 2) 
                        {
                            {
                                var_31 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                                var_32 += ((/* implicit */unsigned int) (+((-((+(((/* implicit */int) var_10))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_32 = 0; i_32 < 15; i_32 += 4) 
                {
                    for (signed char i_33 = 0; i_33 < 15; i_33 += 4) 
                    {
                        for (short i_34 = 0; i_34 < 15; i_34 += 1) 
                        {
                            {
                                var_33 -= (-((~((~(14306254112381689689ULL))))));
                                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (~((~((~(14306254112381689696ULL))))))))));
                                arr_97 [i_27] [i_27] [i_28] [5ULL] [i_33] [i_34] |= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)233)))))))));
                                var_35 ^= ((/* implicit */int) (-(12ULL)));
                                var_36 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) arr_73 [(short)22] [i_27] [i_28] [i_27] [i_33] [(short)22] [i_33])))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_35 = 0; i_35 < 15; i_35 += 4) 
                {
                    for (unsigned short i_36 = 3; i_36 < 13; i_36 += 2) 
                    {
                        {
                            var_37 -= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 14306254112381689696ULL)))))));
                            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (~((~((~(var_2))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_37 = 1; i_37 < 15; i_37 += 3) 
    {
        for (unsigned char i_38 = 1; i_38 < 15; i_38 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_39 = 0; i_39 < 17; i_39 += 4) 
                {
                    for (unsigned int i_40 = 0; i_40 < 17; i_40 += 3) 
                    {
                        {
                            arr_114 [i_37] [8U] [i_39] [i_40] &= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (+(arr_103 [i_37] [i_37]))))))));
                            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) (-((-((+(((/* implicit */int) var_10)))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_41 = 0; i_41 < 17; i_41 += 3) 
                {
                    for (unsigned int i_42 = 2; i_42 < 16; i_42 += 1) 
                    {
                        {
                            var_40 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) arr_57 [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] [i_37 + 1])))))))));
                            var_41 *= (+(((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)0))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_43 = 0; i_43 < 17; i_43 += 4) 
                {
                    for (unsigned int i_44 = 0; i_44 < 17; i_44 += 1) 
                    {
                        for (signed char i_45 = 0; i_45 < 17; i_45 += 1) 
                        {
                            {
                                var_42 *= ((/* implicit */short) (+((-((-(var_6)))))));
                                var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)125))))))))))));
                                var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
