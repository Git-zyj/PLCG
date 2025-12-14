/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102248
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned short) var_6)), (var_1))), (((/* implicit */unsigned short) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1147010416219489002ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -8016981767007388901LL)))))) : (var_2)))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (signed char)105))))) : (((((/* implicit */_Bool) max(((short)-6949), (((/* implicit */short) (signed char)-105))))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) (signed char)-112))))))));
    var_18 = ((/* implicit */long long int) (unsigned short)65535);
    var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-99))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (unsigned short)17211)))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (329979041)))) ? (max((1879048192), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_3))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_2 [i_1 + 1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? ((((_Bool)1) ? (((/* implicit */long long int) 3758059256U)) : (arr_2 [i_1 - 2] [i_0 - 1]))) : (((/* implicit */long long int) 4294967295U))));
                    arr_9 [i_1 + 1] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)105)) << (((arr_4 [i_1] [i_1]) - (1757164391569627649ULL)))))) ? (((((/* implicit */_Bool) -547717930029381895LL)) ? (2147483647) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_8 [i_0] [i_0])))), ((+(((/* implicit */int) ((short) 0)))))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_0] [i_3] [i_0 - 1] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)51)), (arr_8 [i_0] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)60))))) : (arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 1]))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 2; i_4 < 8; i_4 += 2) 
            {
                arr_16 [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4 + 4] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32765))) : (arr_2 [i_4 - 1] [i_0 + 2])))) ? ((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_0 + 1] [i_4 + 4])))) : (((/* implicit */int) arr_0 [i_0 + 2]))));
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((max((arr_2 [i_0] [3ULL]), (((/* implicit */long long int) (unsigned char)56)))), (((/* implicit */long long int) 2824891494U))))), (min((((/* implicit */unsigned long long int) var_2)), (((unsigned long long int) arr_4 [i_0] [i_0]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        var_22 = (unsigned short)65535;
                        arr_22 [i_0] [i_3] [i_5] [i_5] [i_4 + 1] [i_4 + 1] [i_0 - 1] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_0] [i_3] [i_4 + 4] [i_3])) > (((/* implicit */int) var_1)))) ? ((~(arr_17 [i_5] [i_3] [i_4 + 3] [i_5] [i_5]))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-7050)))))));
                    }
                    arr_23 [i_0] [i_5] [i_5] [i_5] [i_0 + 1] = ((/* implicit */signed char) arr_6 [i_0 + 2] [i_0 + 2] [i_5]);
                    /* LoopSeq 4 */
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned int) (~(min((var_12), (7293934308601983652LL)))));
                        arr_26 [i_3] [i_5] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_24 [i_0] [i_4] [i_4] [i_5] [i_0 - 1] [i_5])), (min((arr_6 [i_3] [i_4] [i_3]), (((/* implicit */long long int) var_2))))))) ? (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (short)7050)))), (arr_14 [i_0] [i_0] [i_5] [i_7])))) : (((((/* implicit */_Bool) min((-7293934308601983652LL), (((/* implicit */long long int) var_10))))) ? (((((/* implicit */_Bool) -7293934308601983665LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))) : (arr_1 [i_0 + 2] [i_7]))) : (((/* implicit */unsigned long long int) arr_3 [i_0 + 1]))))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_19 [i_5] [i_5] [i_5]), (((/* implicit */long long int) (unsigned short)0))))) ? (arr_14 [i_3] [i_3] [i_0] [i_3]) : (((/* implicit */int) min((((/* implicit */short) (signed char)-99)), ((short)-31328))))))) ? ((~(min((((/* implicit */int) (unsigned char)204)), (2076699508))))) : (((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 2] [i_0 + 2] [3])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_25 [i_5] [i_4 + 3] [i_0 - 1] [i_4 - 1] [i_4 - 1] [i_0 + 2] [i_0 - 1]))))));
                        var_25 = ((/* implicit */unsigned short) var_2);
                        var_26 = ((/* implicit */int) arr_25 [i_0] [i_3] [i_3] [i_5] [i_7] [(unsigned short)7] [(short)7]);
                    }
                    for (unsigned short i_8 = 1; i_8 < 10; i_8 += 4) 
                    {
                        arr_29 [i_0] [i_3] [i_0] [i_4 - 1] [i_5] [i_5] = ((/* implicit */short) min((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) var_10)) ? (arr_5 [i_0 - 1]) : (arr_2 [i_8 - 1] [i_0 + 2])))));
                        var_27 = ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
                    {
                        var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 2] [i_4 - 2])) ? (8545025248651502256LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)142)) ? (arr_11 [(_Bool)0] [i_0 - 1] [i_4 - 1]) : (933269133)))) : (min((((/* implicit */unsigned int) arr_11 [i_0] [i_0 + 2] [i_4 - 2])), (arr_21 [i_0 + 1] [i_0 - 1] [i_4 + 2] [i_5] [i_0 - 1]))));
                        arr_32 [i_0 + 2] [i_0 + 2] [i_5] [i_0 + 2] [i_5] [i_9] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_2 [i_3] [i_4 + 1])) ? (((((/* implicit */_Bool) arr_15 [i_4] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) (unsigned short)58726)) : ((-2147483647 - 1)))) : (((/* implicit */int) arr_10 [i_4 - 2] [i_5] [i_4 - 2])))), (min((((((/* implicit */int) (unsigned short)58726)) / (((/* implicit */int) (short)-2707)))), ((-(((/* implicit */int) (signed char)6))))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
                    {
                        arr_36 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_5] [i_5] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 274877902848ULL)) ? (var_12) : (arr_15 [i_4 + 4] [i_10] [i_4])))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_10)) ? (-1606151429) : (((/* implicit */int) (unsigned char)244))))))) : (max((min((arr_15 [i_0 + 2] [i_0 + 2] [i_10]), (((/* implicit */long long int) arr_18 [i_3] [i_3] [(short)6] [i_5] [(short)6] [i_3])))), (((/* implicit */long long int) ((short) var_15)))))));
                        var_29 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-31342)) : (((/* implicit */int) arr_24 [i_0] [i_3] [i_4 - 1] [i_4] [0ULL] [i_0]))))) && (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_31 [i_4] [i_4] [i_4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31328))) : (max((8064327621213843756ULL), (((/* implicit */unsigned long long int) var_6))))));
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) 2147483632))));
                    }
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (signed char)-44))))) | ((~(var_15)))))))))));
                    arr_40 [i_0 + 2] [i_0 + 2] [i_0 + 2] = ((/* implicit */signed char) ((min((arr_21 [i_0 - 1] [i_0 - 1] [i_4 + 3] [i_4] [i_0]), (((/* implicit */unsigned int) arr_31 [i_4] [i_0 - 1] [i_4 - 1])))) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-2712)))));
                    arr_41 [i_0 + 2] = var_6;
                }
            }
            for (unsigned short i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                arr_44 [i_0 + 2] [i_0 + 2] [1U] = ((/* implicit */unsigned char) ((int) (-(((((/* implicit */_Bool) var_1)) ? (arr_6 [i_0 + 1] [i_3] [i_12]) : (arr_19 [2ULL] [i_3] [i_12]))))));
                arr_45 [i_0 + 2] [i_3] [i_3] [i_3] = ((/* implicit */int) ((unsigned int) (~(4194240U))));
            }
            var_32 = ((/* implicit */unsigned long long int) arr_24 [i_0] [i_0 + 1] [i_0] [(unsigned short)6] [(unsigned short)6] [i_3]);
            arr_46 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (var_2) : (((/* implicit */unsigned int) var_7))))), (((((/* implicit */_Bool) arr_5 [i_0 + 2])) ? (arr_5 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_0 - 1] [(unsigned char)10])))))));
        }
        /* vectorizable */
        for (unsigned int i_13 = 2; i_13 < 9; i_13 += 2) 
        {
            arr_49 [i_0] [i_13 + 3] [i_13 + 3] = ((/* implicit */long long int) ((arr_33 [i_13 + 3] [i_13] [i_13] [i_13] [i_0 + 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_13] [i_0 - 1] [i_13]))))))));
            arr_50 [3ULL] = ((/* implicit */unsigned short) (signed char)47);
            var_33 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((306041593) ^ (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((unsigned short) arr_33 [i_0] [i_0] [i_0] [i_0] [i_13 + 1]))) : (((/* implicit */int) (signed char)(-127 - 1)))));
        }
        for (unsigned short i_14 = 2; i_14 < 10; i_14 += 3) 
        {
            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) & (((/* implicit */int) arr_25 [i_14] [i_14] [i_14] [i_14] [(short)4] [i_0] [(_Bool)1]))))) ? (((/* implicit */long long int) arr_3 [i_0])) : (max((((/* implicit */long long int) arr_10 [i_0 + 1] [i_14 - 2] [i_14 + 2])), (((((/* implicit */_Bool) (signed char)-9)) ? (arr_17 [8] [i_14] [i_14 + 1] [8] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))))));
            var_35 = ((/* implicit */unsigned int) (-(min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) (short)2696)) ? (arr_14 [i_14] [i_0] [i_0] [i_0]) : (((/* implicit */int) (unsigned char)41))))))));
        }
        for (signed char i_15 = 0; i_15 < 12; i_15 += 4) 
        {
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_15 [i_0] [i_0 - 1] [i_0 - 1]), (arr_15 [i_0] [i_0 + 2] [i_0 + 1])))) || (((/* implicit */_Bool) min((arr_15 [i_0] [i_0 + 2] [i_0 - 1]), ((-9223372036854775807LL - 1LL)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_2) ^ (var_14)))) ? (((((/* implicit */_Bool) arr_51 [2U])) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (unsigned char)243)))) : (((/* implicit */int) var_10))));
                var_38 = ((/* implicit */unsigned long long int) ((arr_34 [i_0 + 1] [i_0 + 1] [i_0 + 2]) + ((+(-2076699510)))));
            }
        }
        var_39 = ((/* implicit */unsigned int) (short)32767);
        var_40 &= (!(((/* implicit */_Bool) min((arr_48 [i_0 + 1] [4LL]), (((/* implicit */unsigned short) arr_25 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 2]))))));
        var_41 = ((/* implicit */int) ((((/* implicit */long long int) max((arr_54 [i_0 + 2] [i_0 - 1]), (((/* implicit */int) arr_37 [i_0 - 1]))))) > (min((((/* implicit */long long int) arr_54 [i_0 + 2] [i_0 + 1])), (6574866425346496007LL)))));
    }
    for (unsigned short i_17 = 0; i_17 < 24; i_17 += 2) 
    {
        var_42 = ((/* implicit */unsigned int) (short)-2707);
        arr_62 [i_17] [i_17] |= ((/* implicit */short) (+((+(((/* implicit */int) (short)32767))))));
    }
}
