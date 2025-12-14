/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166264
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
    for (long long int i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) var_2);
                var_16 = max((((/* implicit */unsigned long long int) 1199120692U)), (min((18446744073709551614ULL), (((/* implicit */unsigned long long int) 1199120708U)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((3095846569U) - (((/* implicit */unsigned int) min((((1051128394) - (((/* implicit */int) (short)(-32767 - 1))))), ((~(((/* implicit */int) (short)32767)))))))));
    /* LoopSeq 1 */
    for (signed char i_2 = 2; i_2 < 18; i_2 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) (+(min((((1199120714U) - (3095846587U))), (((/* implicit */unsigned int) arr_8 [i_2 - 2] [i_2 - 2]))))));
        var_19 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)1536))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (var_13))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (((var_14) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (((~(((/* implicit */int) ((signed char) (short)-32763))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-9)) - (((/* implicit */int) var_4)))))))))))));
    }
    var_21 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 3 */
    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */int) ((max((((/* implicit */unsigned int) (short)32767)), (((1199120729U) - (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) - (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-121)), (((((/* implicit */int) (unsigned short)43930)) - (((/* implicit */int) var_3)))))))));
        arr_14 [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((min((((/* implicit */int) var_5)), (var_11))) - ((((-2147483647 - 1)) + (((/* implicit */int) (unsigned short)60392))))))) - (min((var_2), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)24549)))))))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_6)), ((((~(3095846581U))) - (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)26418))))))))))));
        arr_15 [i_3] = ((/* implicit */short) (((-((+(((/* implicit */int) var_8)))))) - (max((min((((/* implicit */int) (short)-32766)), (2147483647))), (((((/* implicit */int) arr_1 [0LL])) - (((/* implicit */int) var_4))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 2; i_5 < 20; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                {
                    var_23 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((signed char) 3095846588U))), (((((/* implicit */unsigned long long int) arr_24 [i_4] [(unsigned short)7] [i_4] [i_4])) - (var_14))))), (((/* implicit */unsigned long long int) min((min((arr_17 [i_5]), (((/* implicit */long long int) 3095846587U)))), (((-5846913291682279371LL) + (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                    var_24 *= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) - (((/* implicit */int) (short)-32203))))), (arr_19 [6ULL] [i_4] [i_5])));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        for (int i_8 = 1; i_8 < 19; i_8 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_4] [i_4] [i_4] [i_4] [i_4]))) - (arr_19 [i_4] [i_5] [i_4])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [(unsigned short)14] [i_4] [7ULL]))) ^ (arr_29 [i_4] [i_4] [i_4] [i_7] [i_8])))))));
                                var_26 = ((/* implicit */int) 18446744073709551593ULL);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */short) ((((arr_24 [i_4] [i_5 - 1] [i_5 - 1] [i_6]) - (((long long int) 3095846581U)))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 3095846596U)) - (arr_19 [i_4] [i_5] [i_4]))))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_9 = 2; i_9 < 20; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                for (unsigned short i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    {
                        arr_40 [i_4] [i_9] = ((/* implicit */unsigned short) arr_34 [i_4]);
                        var_28 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)32766)), (min((max((((/* implicit */long long int) var_1)), (7201453667794934012LL))), (((/* implicit */long long int) max(((unsigned short)39118), (((/* implicit */unsigned short) (signed char)48)))))))));
                        var_29 = ((/* implicit */unsigned short) min(((((+(((/* implicit */int) arr_33 [i_4] [i_4] [i_4])))) - ((+(((/* implicit */int) (short)6180)))))), (((/* implicit */int) var_6))));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((min((((/* implicit */unsigned long long int) var_8)), (var_14))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)32512), ((short)32753))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - (((/* implicit */int) (short)-29765))))) - (2687595452U)))))))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((long long int) ((unsigned short) ((arr_29 [i_4] [i_4] [i_4] [(short)13] [i_4]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))))));
    }
    for (signed char i_12 = 0; i_12 < 19; i_12 += 4) 
    {
        var_32 = ((/* implicit */short) ((arr_17 [i_12]) - (((/* implicit */long long int) arr_42 [i_12] [i_12]))));
        var_33 += ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) - (max((((/* implicit */unsigned long long int) (unsigned short)26418)), (var_14)))))));
        /* LoopNest 2 */
        for (unsigned short i_13 = 4; i_13 < 18; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 3) 
            {
                {
                    var_34 -= ((((min((((/* implicit */long long int) (short)32767)), (9223372036854775794LL))) - (((/* implicit */long long int) ((/* implicit */int) var_5))))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_32 [i_12]))))))))));
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        for (int i_16 = 1; i_16 < 18; i_16 += 2) 
                        {
                            {
                                var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) 16657997105044757328ULL))));
                                var_36 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_55 [i_12] [i_13] [i_14])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_17 = 0; i_17 < 19; i_17 += 2) 
                    {
                        for (long long int i_18 = 1; i_18 < 18; i_18 += 4) 
                        {
                            {
                                arr_60 [i_17] [i_13] [i_13] = max((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-32761))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (arr_29 [i_12] [i_12] [i_12] [i_17] [i_12]))))), (((/* implicit */unsigned long long int) var_9)));
                                var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((((var_13) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_13 - 1] [i_14] [i_17] [i_17]))))) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) - (var_12)))))) - (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_38 [i_12] [i_12] [i_12] [i_12])), (-5987824147827502015LL))), (5987824147827502015LL)))))))));
                                arr_61 [i_13] [i_13] [i_14] [i_13] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)127), (((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_42 [i_14] [i_14]))))))))) - (min(((+(var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)6155)) - (((/* implicit */int) (short)23461)))))))));
                                var_38 = ((/* implicit */signed char) ((-9223372036854775794LL) + (((/* implicit */long long int) ((/* implicit */int) (short)32758)))));
                                arr_62 [i_13] = ((/* implicit */unsigned short) ((short) (short)32761));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_19 = 0; i_19 < 19; i_19 += 3) 
                    {
                        for (signed char i_20 = 0; i_20 < 19; i_20 += 3) 
                        {
                            {
                                var_39 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-((~(((/* implicit */int) var_7))))))), (9223372036854775807LL)));
                                var_40 = min((((/* implicit */int) (short)(-32767 - 1))), ((-(-2048711161))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_41 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_14)))))))) - (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6178))) - (0ULL))) - (((/* implicit */unsigned long long int) arr_24 [i_12] [i_12] [i_12] [5]))))));
        arr_70 [i_12] = ((/* implicit */long long int) min(((unsigned short)8369), (((/* implicit */unsigned short) (short)-32048))));
    }
}
