/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105990
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 6; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_12 [i_3] [i_3] [i_3] [i_0] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_0]))) % (var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 1] [i_2] [i_2 + 1]))))) : ((((_Bool)1) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_0])) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_2 + 4] [i_2 - 3])))));
                            var_20 += ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_1 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)3)) : (((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */int) (_Bool)1)) : (arr_13 [i_0] [i_4])))))) && ((_Bool)0)));
                                var_21 = ((/* implicit */long long int) min((((min((var_2), (arr_8 [i_0] [i_0] [i_0]))) ? (max((arr_2 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)6005)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0])) || (((/* implicit */_Bool) -9223372036854775803LL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 3) 
        {
            var_22 = ((/* implicit */signed char) var_9);
            var_23 = ((/* implicit */signed char) arr_23 [i_7] [i_8] [i_7]);
            /* LoopNest 3 */
            for (int i_9 = 2; i_9 < 12; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    for (signed char i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) ((long long int) arr_25 [(unsigned char)11] [i_8] [i_9]));
                            var_25 = ((/* implicit */int) ((signed char) ((arr_27 [i_8 + 2] [i_9 + 1] [i_11] [i_11]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59519))))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) max((((/* implicit */long long int) (short)-1)), (-9223372036854775803LL))))));
            var_27 |= ((/* implicit */long long int) ((((var_5) << (((arr_27 [i_7] [i_7] [i_7] [i_7]) - (2308948832U))))) + (((/* implicit */unsigned int) arr_28 [i_8] [i_8] [i_7] [i_7]))));
        }
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            for (signed char i_13 = 0; i_13 < 14; i_13 += 2) 
            {
                for (unsigned int i_14 = 0; i_14 < 14; i_14 += 2) 
                {
                    {
                        arr_40 [i_13] [i_14] = ((/* implicit */short) var_11);
                        var_28 -= ((/* implicit */unsigned char) -1LL);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
    {
        var_29 = ((/* implicit */unsigned short) arr_42 [i_15]);
        /* LoopSeq 2 */
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
        {
            arr_45 [i_15] [i_15] |= ((/* implicit */unsigned char) var_6);
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) arr_44 [i_15 + 1]))));
            var_31 = ((/* implicit */unsigned int) arr_44 [i_15]);
        }
        for (long long int i_17 = 0; i_17 < 24; i_17 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_18 = 0; i_18 < 24; i_18 += 2) 
            {
                for (unsigned int i_19 = 1; i_19 < 23; i_19 += 4) 
                {
                    {
                        var_32 = ((/* implicit */_Bool) var_12);
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) arr_51 [i_15] [i_19]))));
                    }
                } 
            } 
            var_34 = ((/* implicit */unsigned short) var_8);
            /* LoopNest 3 */
            for (unsigned short i_20 = 0; i_20 < 24; i_20 += 2) 
            {
                for (long long int i_21 = 1; i_21 < 22; i_21 += 3) 
                {
                    for (short i_22 = 2; i_22 < 23; i_22 += 3) 
                    {
                        {
                            arr_62 [i_15] [i_15 + 1] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */signed char) arr_57 [i_15] [i_15] [i_20] [i_20] [i_22]);
                            arr_63 [i_15] [i_17] [i_20] [i_21 + 2] [i_22] = ((/* implicit */long long int) ((((/* implicit */int) arr_52 [i_21 + 1] [i_21 - 1] [i_21 + 1] [i_21 + 2] [i_21])) * (((/* implicit */int) arr_52 [i_21 - 1] [i_21 + 2] [i_21 - 1] [i_21 - 1] [i_21 + 2]))));
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-9223372036854775803LL) : (((/* implicit */long long int) ((/* implicit */int) (short)15)))))) ? (var_16) : (((/* implicit */long long int) -1601035715))));
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_15 + 1] [i_20] [i_21 + 1] [i_15 + 1])) ? (arr_50 [i_15 + 1] [i_15] [i_15] [i_15 + 1]) : (arr_48 [i_15 + 1] [i_21 - 1])));
                        }
                    } 
                } 
            } 
            var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) (_Bool)1))));
        }
        /* LoopNest 2 */
        for (unsigned int i_23 = 1; i_23 < 23; i_23 += 3) 
        {
            for (unsigned short i_24 = 0; i_24 < 24; i_24 += 3) 
            {
                {
                    var_38 = ((/* implicit */long long int) arr_67 [i_15]);
                    arr_68 [i_15 + 1] [i_15] [i_15 + 1] = ((/* implicit */long long int) arr_56 [i_15] [i_23 + 1] [i_24] [i_15]);
                }
            } 
        } 
    }
    for (int i_25 = 0; i_25 < 11; i_25 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_26 = 0; i_26 < 11; i_26 += 3) 
        {
            var_39 = ((/* implicit */unsigned char) ((((((arr_59 [i_25]) + (9223372036854775807LL))) << (((9223372036854775802LL) - (9223372036854775802LL))))) % (arr_59 [i_25])));
            arr_73 [i_25] [i_26] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_70 [i_25]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_65 [i_26] [i_25]) > (arr_65 [i_25] [i_26]))))) : (arr_50 [i_25] [i_25] [i_25] [i_25])));
            var_40 = ((/* implicit */_Bool) (-(((((arr_72 [i_25] [i_25] [i_25]) & (((/* implicit */unsigned long long int) var_8)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_25] [i_25] [i_25])))))));
        }
        for (unsigned char i_27 = 0; i_27 < 11; i_27 += 2) 
        {
            var_41 = ((/* implicit */int) var_17);
            /* LoopNest 2 */
            for (signed char i_28 = 0; i_28 < 11; i_28 += 4) 
            {
                for (short i_29 = 0; i_29 < 11; i_29 += 3) 
                {
                    {
                        var_42 += ((/* implicit */unsigned int) 1601035693);
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_25])) && (((/* implicit */_Bool) arr_53 [i_25] [i_25] [i_25] [i_25] [i_25]))));
                        var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_80 [i_25] [i_27] [i_28] [i_29]), ((short)3)))) | (((/* implicit */int) arr_55 [i_29]))))) && (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (((unsigned int) arr_55 [i_25]))))));
                    }
                } 
            } 
        }
        arr_83 [i_25] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_10)), (arr_72 [i_25] [i_25] [i_25])));
    }
    /* vectorizable */
    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
    {
        var_45 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 5369318855571589743ULL)) || (((/* implicit */_Bool) -3093476362267088854LL)))))) != (arr_51 [i_30] [i_30]));
        arr_86 [i_30] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65509))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_31 = 0; i_31 < 10; i_31 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_32 = 3; i_32 < 7; i_32 += 2) 
        {
            var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) arr_3 [6ULL])) : (((/* implicit */int) arr_3 [(signed char)2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_6)))))) : (max((max((arr_81 [i_32] [10] [i_32] [i_32]), (((/* implicit */long long int) arr_42 [(unsigned short)3])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_61 [i_31] [i_31] [i_31] [i_32] [i_32] [i_32 + 2])) || (((/* implicit */_Bool) arr_28 [i_31] [i_31] [i_31] [(_Bool)1]))))))))))));
            var_47 = ((/* implicit */unsigned char) var_16);
        }
        arr_92 [i_31] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) (signed char)36))))) * (((var_19) << (((/* implicit */int) var_13))))));
        var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) (signed char)-14))));
        var_49 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (unsigned short)43437)) ? (9223372036854775791LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned long long int i_33 = 0; i_33 < 13; i_33 += 3) 
    {
        var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) var_7))));
        var_51 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)569))) % (17776248299452323624ULL)));
        var_52 += ((/* implicit */unsigned short) arr_35 [i_33] [i_33] [i_33]);
    }
}
