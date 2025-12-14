/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175573
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
    var_10 = ((/* implicit */short) max((max(((+(var_3))), (((/* implicit */unsigned long long int) (-(3644133205917506809LL)))))), (((((2951259557798145151ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28054))))) - (max((((/* implicit */unsigned long long int) var_4)), (var_2)))))));
    var_11 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_7)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) != ((-(3644133205917506809LL)))));
        var_12 = ((/* implicit */unsigned char) arr_1 [i_0]);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_8 [i_0] [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    for (int i_4 = 2; i_4 < 16; i_4 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_14 = ((/* implicit */short) arr_7 [i_1] [i_1]);
                            var_15 = ((/* implicit */int) 0U);
                            arr_18 [i_0] [i_3] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) 2372575087U);
                        }
                    } 
                } 
                arr_19 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (_Bool)1)), (3860586348U)));
                var_16 += (+(max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) (unsigned short)64520))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_3))))));
            }
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                arr_22 [i_5] [i_5] = ((/* implicit */int) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_5 [i_0 - 2]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0))))))) > (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_0)))))))));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((3759070363U) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6597069766656ULL)) ? (((/* implicit */int) (unsigned short)59937)) : (-2021613816)))))) ? (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_7 [i_0] [i_1])))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)-32763)) : (((/* implicit */int) arr_21 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1]))))))) : ((-(var_8))))))));
                arr_23 [i_5] [i_5] [i_0] [i_5] = ((/* implicit */unsigned char) var_2);
                /* LoopNest 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (short i_7 = 1; i_7 < 17; i_7 += 4) 
                    {
                        {
                            var_18 = min((((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_1] [i_1]))))) % (((var_8) ^ (((/* implicit */unsigned long long int) arr_25 [i_1] [i_5] [i_5])))))), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_17 [i_6] [i_6])))), (((/* implicit */int) var_9))))));
                            var_19 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_16 [i_0] [i_0]))))))), ((-((((_Bool)1) ? (arr_26 [i_1] [i_1] [i_1] [i_1] [i_7] [i_1] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))))));
                            arr_28 [i_0] [i_0] [i_5] [i_0] [i_7 + 2] [i_1] [i_5] = (~((+(((((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_7 + 1])) | (arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_7] [i_7 + 2]))))));
                            arr_29 [i_5] [i_1] [i_5] = ((/* implicit */unsigned long long int) min((min((max((var_5), (((/* implicit */int) arr_13 [i_0] [i_1] [i_5] [i_6] [i_5])))), (((/* implicit */int) ((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))), (((((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */int) (unsigned short)65535)) : (var_5))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_5 + 1] [i_1] [i_0])))))))));
                        }
                    } 
                } 
            }
            for (short i_8 = 3; i_8 < 18; i_8 += 4) 
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 4; i_9 < 17; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */short) (-((-((((_Bool)0) ? (((/* implicit */int) arr_14 [i_0 + 2] [i_1] [i_0 + 2] [i_0 + 2] [i_10])) : (((/* implicit */int) (unsigned char)45))))))));
                            var_22 = ((/* implicit */signed char) (+(((/* implicit */int) (short)18813))));
                            arr_37 [i_0] [i_9] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)15777))));
                        }
                    } 
                } 
            }
            var_23 = ((/* implicit */short) arr_11 [i_0]);
            var_24 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_1)) ? (((arr_11 [i_1]) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775797LL))) + (38LL))))) : (arr_31 [i_0] [i_0])))));
            arr_38 [i_0] &= ((/* implicit */short) arr_26 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]);
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 3) 
            {
                for (short i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    {
                        arr_45 [i_0] [i_0] [i_12] [i_0] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_21 [i_0] [i_11] [i_0] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_12]))) : (var_3))), (((/* implicit */unsigned long long int) arr_15 [i_13] [i_12] [i_11] [i_0 + 1]))))) ? ((+((-(((/* implicit */int) var_4)))))) : (((/* implicit */int) (short)29462))));
                        arr_46 [i_0 + 1] [i_0 + 1] [i_11] [i_13] = ((/* implicit */int) 1922392209U);
                        var_25 = ((/* implicit */unsigned char) var_9);
                        var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)65535))));
                    }
                } 
            } 
            arr_47 [i_11] [i_11] = (~(((((arr_11 [i_11]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_11] [i_11]))))) ? (((/* implicit */unsigned long long int) (-(arr_8 [i_11] [i_0])))) : (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0] [i_0 - 1] [i_0]))))))));
        }
        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 19; i_15 += 2) 
            {
                for (unsigned short i_16 = 0; i_16 < 19; i_16 += 3) 
                {
                    {
                        arr_54 [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((min((arr_49 [i_0] [i_14]), (((/* implicit */unsigned long long int) arr_17 [i_15] [i_16])))) <= (((/* implicit */unsigned long long int) arr_15 [i_0] [i_14] [i_15] [i_15])))))));
                        var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_40 [i_14] [i_15])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_59 [i_0] [i_14] [i_15] [i_0] [i_17] [i_17] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [i_0] [i_15]))));
                            var_28 *= ((/* implicit */_Bool) (unsigned short)13);
                            var_29 = ((/* implicit */int) var_8);
                            var_30 *= var_3;
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_0] [i_0])) != (((/* implicit */int) arr_56 [i_0] [i_0] [i_0] [i_16] [i_17]))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_18 = 2; i_18 < 17; i_18 += 2) 
            {
                var_32 -= ((/* implicit */unsigned int) var_8);
                var_33 = ((/* implicit */int) arr_39 [i_0] [i_14] [i_14]);
                var_34 = ((/* implicit */unsigned short) arr_58 [i_0] [i_14] [i_14] [i_14] [i_14]);
                /* LoopSeq 4 */
                for (unsigned long long int i_19 = 2; i_19 < 18; i_19 += 4) 
                {
                    var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)28054)) & (((/* implicit */int) arr_2 [i_14]))))), (min((((/* implicit */unsigned long long int) (unsigned short)16447)), (arr_64 [i_0] [i_0] [i_0] [i_19 - 2] [i_0]))))))));
                    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_19] [i_18] [i_14] [i_0])) ? (23ULL) : (1726482505240506578ULL)));
                    arr_65 [i_0] [i_0] [i_0] [i_0] [i_18] [i_0] = ((/* implicit */unsigned long long int) var_7);
                }
                /* vectorizable */
                for (long long int i_20 = 0; i_20 < 19; i_20 += 3) 
                {
                    var_37 = ((/* implicit */unsigned long long int) var_1);
                    arr_68 [i_0] [i_14] [i_18] [i_20] = ((/* implicit */unsigned short) (short)0);
                }
                for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 3) 
                {
                    arr_71 [i_0] [i_0] [i_18] [i_21] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)33995))))) ? (3830768694664618228ULL) : (arr_49 [i_0] [i_0])))) ? (68719475712ULL) : (((/* implicit */unsigned long long int) 657590470)));
                    arr_72 [i_0 + 1] [i_21] [i_21] = ((/* implicit */unsigned long long int) arr_40 [i_21] [i_0]);
                }
                /* vectorizable */
                for (unsigned char i_22 = 3; i_22 < 17; i_22 += 2) 
                {
                    arr_75 [i_0] [i_0] [i_14] [i_14] [i_18 - 1] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (arr_49 [i_0] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_14] [i_14] [i_0 + 2] [i_14])))));
                    var_38 = ((/* implicit */unsigned int) (((+(var_8))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26440)))));
                }
            }
            /* LoopNest 3 */
            for (unsigned short i_23 = 0; i_23 < 19; i_23 += 3) 
            {
                for (unsigned long long int i_24 = 1; i_24 < 15; i_24 += 2) 
                {
                    for (unsigned long long int i_25 = 0; i_25 < 19; i_25 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_67 [i_0] [i_0] [i_23] [i_24 + 3] [i_0] [i_0]))));
                            var_40 -= arr_69 [i_0] [i_0] [i_0] [i_24 + 1];
                        }
                    } 
                } 
            } 
        }
    }
    var_41 = ((/* implicit */unsigned char) max((7753412747429055599ULL), (18446744073709551590ULL)));
}
