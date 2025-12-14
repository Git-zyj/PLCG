/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111981
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) var_8);
                var_18 = ((/* implicit */unsigned int) max(((~((~(((/* implicit */int) (unsigned char)128)))))), ((~((~(-674890128)))))));
                arr_7 [i_0] = var_12;
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 2; i_2 < 17; i_2 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) (unsigned char)123);
            var_20 = ((/* implicit */long long int) min((max(((~(var_1))), (min((var_7), (((/* implicit */unsigned int) -674890119)))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_16)))))));
            var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_5)), ((unsigned char)96))))))), (max(((+(((/* implicit */int) (unsigned char)86)))), (((/* implicit */int) (unsigned char)144))))));
            /* LoopSeq 3 */
            for (int i_4 = 2; i_4 < 20; i_4 += 4) 
            {
                var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */short) max((((/* implicit */signed char) var_11)), ((signed char)123)))), (max((((/* implicit */short) (_Bool)0)), (max(((short)7168), ((short)-12545)))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 3; i_5 < 19; i_5 += 2) 
                {
                    for (unsigned char i_6 = 1; i_6 < 19; i_6 += 2) 
                    {
                        {
                            arr_22 [i_3] [i_3] [i_5] [i_6 + 1] [i_2] [i_5] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1710298408U)))))));
                            arr_23 [i_2] [i_3] [5U] [i_5] [i_2] [4] = ((/* implicit */int) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_8)), (var_9))))))));
                            var_23 = ((/* implicit */short) 674890118);
                            var_24 = ((/* implicit */unsigned char) max((((/* implicit */int) max(((short)7188), (((/* implicit */short) var_15))))), ((~(((/* implicit */int) var_15))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_7 = 2; i_7 < 18; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17))));
                            var_26 = ((/* implicit */long long int) (~(-674890133)));
                        }
                    } 
                } 
                arr_31 [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                arr_32 [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */int) var_17);
            }
            for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                arr_35 [i_2 - 1] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) (unsigned char)163)))), ((~(((/* implicit */int) (short)-12546))))));
                var_27 = ((/* implicit */int) (unsigned char)92);
                var_28 = ((/* implicit */unsigned short) (-((-(min((((/* implicit */unsigned long long int) (short)-7176)), (var_17)))))));
            }
            arr_36 [i_2] = ((/* implicit */unsigned long long int) max((var_10), (max((var_7), (((/* implicit */unsigned int) (short)7172))))));
        }
        /* vectorizable */
        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                /* LoopSeq 3 */
                for (signed char i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-1))));
                    var_30 = ((/* implicit */unsigned char) (short)-7173);
                    var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)255))));
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) var_14))));
                }
                for (long long int i_14 = 0; i_14 < 21; i_14 += 2) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
                    arr_46 [i_11] [i_11] [i_12] [i_12] = (-(((/* implicit */int) (signed char)76)));
                    var_34 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
                    var_35 = ((/* implicit */unsigned char) var_14);
                }
                for (long long int i_15 = 0; i_15 < 21; i_15 += 2) /* same iter space */
                {
                    var_36 -= ((/* implicit */unsigned long long int) (~(-2141504644)));
                    var_37 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)57904))));
                    var_38 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)119))));
                    arr_49 [i_11] [i_11] = ((/* implicit */short) (~(400729678)));
                    var_39 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
                }
                var_40 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_16))));
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned short i_17 = 0; i_17 < 21; i_17 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */_Bool) var_17);
                            var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7)))))));
                        }
                    } 
                } 
                arr_56 [i_11] [i_11] [i_11] = ((/* implicit */int) (-((+(var_1)))));
            }
            for (short i_18 = 0; i_18 < 21; i_18 += 3) 
            {
                arr_60 [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-7180))));
                arr_61 [i_2] [(unsigned short)7] [i_11] [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)7))));
            }
            var_43 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (short)32761))))));
        }
        for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 3) 
        {
            /* LoopSeq 4 */
            for (signed char i_20 = 0; i_20 < 21; i_20 += 1) 
            {
                arr_68 [i_2] [i_19] [i_20] = ((/* implicit */signed char) var_1);
                arr_69 [i_2 + 4] [i_2] [i_2] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (max((((/* implicit */unsigned long long int) var_12)), (4366055986682508663ULL)))));
            }
            for (unsigned short i_21 = 0; i_21 < 21; i_21 += 3) 
            {
                var_44 = var_2;
                arr_72 [i_2] [i_2] |= min((max((((/* implicit */int) (unsigned char)49)), (2147483647))), ((-(((/* implicit */int) (short)-7172)))));
                var_45 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (4294967295U)))))))));
                var_46 &= ((/* implicit */unsigned int) (unsigned short)7638);
            }
            for (unsigned char i_22 = 4; i_22 < 19; i_22 += 1) /* same iter space */
            {
                var_47 = ((/* implicit */int) (!(((/* implicit */_Bool) min((max(((unsigned short)7638), (((/* implicit */unsigned short) var_13)))), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)-12)), (var_13)))))))));
                arr_75 [i_22] [i_22] [i_22] = ((/* implicit */unsigned int) (-(max(((-(((/* implicit */int) var_15)))), ((+(((/* implicit */int) (unsigned char)205))))))));
                var_48 -= ((/* implicit */int) (-((~(4294967280U)))));
            }
            for (unsigned char i_23 = 4; i_23 < 19; i_23 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_24 = 0; i_24 < 21; i_24 += 1) 
                {
                    for (unsigned char i_25 = 3; i_25 < 20; i_25 += 4) 
                    {
                        {
                            var_49 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))))), (min((((/* implicit */unsigned short) var_16)), (var_9)))));
                            var_50 = ((/* implicit */signed char) var_17);
                        }
                    } 
                } 
                var_51 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */short) var_8)), (var_3)))), ((~(var_17))))))));
            }
            var_52 = ((/* implicit */unsigned short) max((((/* implicit */short) (signed char)-12)), ((short)7190)));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_26 = 1; i_26 < 20; i_26 += 4) 
        {
            for (unsigned short i_27 = 0; i_27 < 21; i_27 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_28 = 4; i_28 < 19; i_28 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_29 = 0; i_29 < 21; i_29 += 1) 
                        {
                            var_53 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                            var_54 = ((/* implicit */long long int) (~(((/* implicit */int) var_13))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_30 = 0; i_30 < 21; i_30 += 3) /* same iter space */
                        {
                            var_55 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)15))));
                            var_56 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)205))));
                            var_57 = ((/* implicit */unsigned short) 32760);
                        }
                        for (unsigned short i_31 = 0; i_31 < 21; i_31 += 3) /* same iter space */
                        {
                            var_58 = ((/* implicit */short) max((((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) (unsigned short)61524)))), ((!(((/* implicit */_Bool) 1185002700U))))))), (max((var_6), (max((((/* implicit */unsigned short) (unsigned char)238)), (var_14)))))));
                            arr_98 [(short)20] [i_26] [i_26] [i_2 - 2] [17] = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned char)137)), (2384284232U)));
                            var_59 = ((/* implicit */int) max(((+(max((((/* implicit */unsigned long long int) (unsigned char)255)), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16)))))));
                        }
                    }
                    arr_99 [i_26] [(unsigned char)13] [i_2] [i_26] = ((/* implicit */long long int) min(((~(18446744073709551615ULL))), (max((var_17), (((/* implicit */unsigned long long int) (signed char)-115))))));
                    arr_100 [i_2] [6U] [i_26] [i_27] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned int) var_16)), (2857678377U)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_32 = 0; i_32 < 23; i_32 += 1) 
    {
        var_60 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-8))));
        arr_103 [i_32] = ((/* implicit */unsigned short) var_12);
        arr_104 [i_32] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)249))));
    }
}
