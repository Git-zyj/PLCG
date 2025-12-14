/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109104
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
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_8 [i_0] [i_0] [i_0] [i_3 - 1] [i_1] = ((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */int) ((short) (_Bool)1))) != (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_6 [i_0] [i_0 + 2] [i_0])))))))), (((signed char) arr_3 [i_2 + 2] [i_0 - 1] [i_2]))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_1 [i_0] [i_0 - 2])))) ? (((((/* implicit */_Bool) 4294967295U)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0 - 2]), (0U))))));
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_3 + 1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3 + 1])))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 1; i_5 < 8; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                arr_19 [i_5 + 2] [i_5] [i_5] [i_0] [i_5 + 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_5 [i_0 + 3]), (((/* implicit */unsigned short) (_Bool)1)))))));
                                var_19 += ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_9 [i_5])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) | (max((((/* implicit */long long int) (short)8301)), (min((18014398507384832LL), (7095278864223241479LL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 10; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        {
                            arr_31 [i_7] [i_8] = ((((/* implicit */unsigned long long int) arr_27 [i_7] [i_8] [i_9] [(unsigned short)3] [i_9] [(unsigned short)3])) > (((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned short)44621))) : (((var_14) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))))))));
                            arr_32 [i_8] [(signed char)7] &= ((/* implicit */unsigned short) max((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    for (short i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 10; i_13 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_9)))))) ? (min((((/* implicit */unsigned long long int) arr_21 [i_7] [i_7])), (10898527038870555216ULL))) : (((/* implicit */unsigned long long int) 9223372036854775789LL))))));
                                arr_41 [(_Bool)1] [i_8] [i_11] [i_12] [i_13] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_13]))) ^ (16596221917695711767ULL))))));
                                var_21 |= ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_7 [i_8] [i_13])), (var_16)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 2; i_14 < 9; i_14 += 4) 
                {
                    for (short i_15 = 2; i_15 < 7; i_15 += 2) 
                    {
                        {
                            var_22 += ((/* implicit */unsigned long long int) arr_33 [i_15] [i_14 - 2] [i_14 + 1]);
                            var_23 = ((/* implicit */long long int) ((unsigned char) ((long long int) var_0)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_16 = 0; i_16 < 23; i_16 += 1) 
    {
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_18 = 2; i_18 < 21; i_18 += 2) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (short i_20 = 2; i_20 < 21; i_20 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) arr_58 [i_17] [i_16] [i_17] [i_17]);
                                var_25 = ((/* implicit */long long int) (+(((((/* implicit */unsigned int) (+(0)))) * (((3598533716U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_17] [i_17])))))))));
                                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) 3092936458U))));
                                arr_61 [i_16] [i_17] [i_18 + 1] [(unsigned char)2] [i_16] = ((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) var_13)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 23; i_21 += 4) 
                {
                    for (signed char i_22 = 0; i_22 < 23; i_22 += 2) 
                    {
                        {
                            var_27 *= ((/* implicit */unsigned short) var_4);
                            arr_67 [i_16] [i_21] [i_16] = ((/* implicit */unsigned char) min((((long long int) (!(((/* implicit */_Bool) arr_62 [i_16] [i_16]))))), (((/* implicit */long long int) ((arr_51 [i_22]) ? (((/* implicit */int) arr_50 [i_16])) : (((/* implicit */int) var_12)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 23; i_23 += 4) 
                {
                    for (long long int i_24 = 0; i_24 < 23; i_24 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)58630)));
                            var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) 3161370163382283536ULL)) || (((/* implicit */_Bool) 3161370163382283536ULL))))), (arr_64 [i_16]))))));
                            var_30 += ((/* implicit */long long int) ((3598533715U) + (((/* implicit */unsigned int) -2136607635))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_25 = 1; i_25 < 19; i_25 += 2) 
    {
        for (signed char i_26 = 4; i_26 < 19; i_26 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_27 = 1; i_27 < 16; i_27 += 2) 
                {
                    for (signed char i_28 = 0; i_28 < 20; i_28 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) 9223372036854775789LL);
                            arr_85 [i_25] [i_26 - 2] [i_27] [i_28] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)-90)), ((unsigned char)8)))), (max((((/* implicit */unsigned int) arr_48 [i_26])), (arr_76 [0U] [i_25]))))), (((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned short)58630)))))))));
                            arr_86 [(short)18] [i_26] [i_26] [i_26] [i_27] [i_28] = ((/* implicit */short) (((-(3598533715U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)248)) ? ((+(((/* implicit */int) arr_56 [i_26] [i_26] [(short)8] [(_Bool)1])))) : (((/* implicit */int) arr_83 [i_25 - 1] [i_26] [i_27 + 1] [i_26 - 2])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_29 = 1; i_29 < 19; i_29 += 4) 
                {
                    for (unsigned short i_30 = 0; i_30 < 20; i_30 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_90 [i_25 + 1] [i_29 + 1] [(_Bool)1] [i_30]))))));
                            var_33 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))), (((((/* implicit */_Bool) 65011712)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_31 = 1; i_31 < 12; i_31 += 4) 
    {
        for (unsigned long long int i_32 = 0; i_32 < 13; i_32 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_33 = 0; i_33 < 13; i_33 += 2) 
                {
                    for (unsigned long long int i_34 = 0; i_34 < 13; i_34 += 2) 
                    {
                        {
                            arr_101 [i_31] [i_32] [i_33] [i_32] [i_32] [i_33] = ((/* implicit */signed char) -1);
                            arr_102 [4U] [4] [4U] [(signed char)8] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 3092936458U)) <= (((max((((/* implicit */unsigned long long int) (short)13703)), (18446744073709551615ULL))) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 3711021956U)), (7095278864223241458LL))))))));
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((unsigned int) (+((-(((/* implicit */int) var_3))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_35 = 0; i_35 < 13; i_35 += 2) 
                {
                    for (int i_36 = 0; i_36 < 13; i_36 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */signed char) ((_Bool) max((((((/* implicit */_Bool) (signed char)-105)) ? (3711021956U) : (((/* implicit */unsigned int) -921780210)))), (((/* implicit */unsigned int) arr_62 [i_35] [i_32])))));
                            arr_107 [i_31] [i_31] [i_31] [i_36] = ((/* implicit */long long int) arr_77 [i_31 - 1] [i_36]);
                            var_36 += ((/* implicit */unsigned short) (~((~(min((((/* implicit */unsigned int) arr_103 [i_31] [i_36])), (3711021956U)))))));
                            arr_108 [i_31] [i_32] = ((/* implicit */unsigned short) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) ((((/* implicit */int) (short)124)) - (((/* implicit */int) (signed char)121))))) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_37 = 0; i_37 < 13; i_37 += 2) 
                {
                    for (signed char i_38 = 0; i_38 < 13; i_38 += 4) 
                    {
                        for (unsigned long long int i_39 = 1; i_39 < 12; i_39 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */signed char) var_16);
                                var_38 = ((/* implicit */int) ((_Bool) (signed char)-82));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
