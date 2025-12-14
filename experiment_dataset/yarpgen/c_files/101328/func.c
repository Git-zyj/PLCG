/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101328
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) 4163248484U)) : (8354606050939803935ULL)));
                    var_19 = ((/* implicit */int) (+(((((/* implicit */_Bool) 1229777674U)) ? (arr_3 [3U] [i_1 - 1]) : (((/* implicit */long long int) 4163248484U))))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */_Bool) (short)-7438)) ? (var_11) : (((/* implicit */long long int) 4163248484U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [(signed char)6])) : (arr_4 [i_0] [3U] [i_1]))))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)4150)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7457))) : (arr_5 [i_0])))));
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            arr_14 [i_0] [i_0] [i_0] = (-(((((/* implicit */_Bool) (signed char)0)) ? (131718794U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)21550))))));
            var_21 = ((/* implicit */unsigned int) min((var_21), (((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (4163248484U)))));
        }
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            var_22 = arr_5 [i_4];
            /* LoopSeq 2 */
            for (signed char i_5 = 1; i_5 < 10; i_5 += 3) 
            {
                var_23 = ((/* implicit */signed char) 4163248462U);
                arr_21 [i_5] = 908957634U;
            }
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_9 [i_6] [i_6] [2U] [(unsigned char)2])) ? (0ULL) : (((/* implicit */unsigned long long int) 2486144651U)))) >> ((((~(arr_1 [(short)3] [(short)3]))) - (1258945604U))))))));
                arr_25 [i_4] = (~(((/* implicit */int) arr_23 [i_0])));
                arr_26 [i_0] [i_4] [i_6] [4U] = ((/* implicit */unsigned int) (+(arr_6 [i_4])));
                arr_27 [i_0] [i_4] [7] [10U] = ((/* implicit */long long int) var_13);
            }
        }
    }
    for (unsigned int i_7 = 1; i_7 < 20; i_7 += 3) 
    {
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (-((-(max((-2108738268), (((/* implicit */int) (short)-18699)))))))))));
        arr_30 [i_7] [i_7] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) 1728596061U)), (18446744073709551615ULL)));
    }
    for (unsigned int i_8 = 1; i_8 < 8; i_8 += 2) 
    {
        arr_34 [i_8] = ((/* implicit */signed char) max((259806691472867586LL), (((/* implicit */long long int) (+(((/* implicit */int) (short)-8467)))))));
        /* LoopNest 3 */
        for (short i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                for (int i_11 = 3; i_11 < 9; i_11 += 1) 
                {
                    {
                        arr_41 [i_10] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)-21252)) : (((/* implicit */int) var_7)))))))), ((unsigned char)180)));
                        arr_42 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) max(((short)4138), (((/* implicit */short) (signed char)-1)))))))) : ((~(min((0U), (2032869799U)))))));
                        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */int) (signed char)0)) - (1278945967))))))));
                    }
                } 
            } 
        } 
        var_27 += max((((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_8] [i_8] [i_8 + 4]))))), (min((arr_16 [i_8 - 1] [i_8] [i_8 + 4]), (arr_16 [(unsigned char)7] [(unsigned char)7] [i_8 + 4]))));
    }
    var_28 = ((/* implicit */short) ((int) 547555111265486871ULL));
    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (min(((~(((/* implicit */int) var_1)))), (var_10))) : (((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
    /* LoopSeq 4 */
    for (unsigned int i_12 = 1; i_12 < 11; i_12 += 3) 
    {
        var_30 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_43 [i_12 + 1] [i_12 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0)))) : (2417169928U))) + (((/* implicit */unsigned int) min((min((((/* implicit */int) (signed char)-11)), (var_14))), (arr_44 [i_12] [i_12]))))));
        arr_46 [i_12] = ((/* implicit */int) 114688U);
        arr_47 [8LL] |= ((/* implicit */unsigned char) arr_29 [(unsigned char)10]);
        /* LoopSeq 3 */
        for (long long int i_13 = 3; i_13 < 13; i_13 += 2) /* same iter space */
        {
            var_31 = ((/* implicit */short) (+((~(((/* implicit */int) arr_45 [i_13 - 2] [i_12 - 1]))))));
            var_32 = ((/* implicit */signed char) 17899188962444064744ULL);
        }
        for (long long int i_14 = 3; i_14 < 13; i_14 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_15 = 2; i_15 < 12; i_15 += 2) 
            {
                for (short i_16 = 1; i_16 < 12; i_16 += 2) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 4) 
                    {
                        {
                            var_33 ^= ((/* implicit */unsigned char) arr_56 [i_12] [i_12] [i_12 + 2] [i_12] [8U]);
                            var_34 *= ((/* implicit */int) max((((/* implicit */unsigned int) (((+(((/* implicit */int) arr_54 [i_12])))) > (((/* implicit */int) max(((signed char)-11), ((signed char)(-127 - 1)))))))), ((~((~(4294967295U)))))));
                            arr_62 [i_12] [i_14] [7U] [(signed char)14] [i_14] [i_14] [i_16] = ((unsigned int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4138))) * (11382785817765838617ULL))));
                            arr_63 [i_14] [i_16] [11U] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_54 [i_12]))))) ? (arr_60 [i_16] [(unsigned char)13] [3U] [(signed char)2] [1U]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)0)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-109), ((signed char)-34))))) : (max((min((547555111265486871ULL), (((/* implicit */unsigned long long int) arr_50 [i_15])))), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_50 [9ULL])), (var_13))))))));
                        }
                    } 
                } 
            } 
            var_35 *= ((/* implicit */unsigned int) (short)4150);
        }
        for (long long int i_18 = 3; i_18 < 13; i_18 += 2) /* same iter space */
        {
            arr_66 [i_18] = ((/* implicit */unsigned char) 18446744073709551612ULL);
            arr_67 [7U] [i_18] = ((/* implicit */unsigned int) arr_64 [i_18] [i_18]);
            arr_68 [i_18] = ((/* implicit */short) (((~(((((/* implicit */_Bool) var_18)) ? (1747974611U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_18]))))))) < (((/* implicit */unsigned int) (+(-679288150))))));
        }
    }
    for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 1) 
    {
        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) min((8807710013439171095LL), (((/* implicit */long long int) ((short) ((((/* implicit */int) var_5)) - (arr_69 [(signed char)8] [(signed char)8]))))))))));
        var_37 = ((((((/* implicit */_Bool) 7063958255943712998ULL)) ? (((/* implicit */long long int) ((arr_69 [(unsigned char)6] [(unsigned char)6]) >> (((arr_69 [12] [i_19]) - (1180211479)))))) : ((~(arr_28 [(unsigned char)0]))))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 2417169945U)) == (arr_28 [(short)16]))))));
    }
    for (unsigned int i_20 = 3; i_20 < 19; i_20 += 2) 
    {
        arr_75 [i_20] = ((/* implicit */signed char) min((min((((/* implicit */long long int) (signed char)10)), (arr_28 [i_20]))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((647284820), (((/* implicit */int) (short)7438))))) ? (((((((/* implicit */int) arr_29 [i_20])) + (2147483647))) >> (((arr_74 [(unsigned char)13] [20U]) + (9033577390351209260LL))))) : ((~(((/* implicit */int) var_13)))))))));
        /* LoopNest 3 */
        for (unsigned int i_21 = 0; i_21 < 22; i_21 += 3) 
        {
            for (int i_22 = 1; i_22 < 21; i_22 += 1) 
            {
                for (long long int i_23 = 1; i_23 < 20; i_23 += 2) 
                {
                    {
                        arr_83 [i_20] [8LL] [20LL] [i_23 - 1] = (((((~(((/* implicit */int) (short)-4340)))) >= ((~(arr_79 [i_21]))))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) (short)7455))))))) : ((+(((/* implicit */int) arr_77 [i_20])))));
                        var_38 = ((/* implicit */short) arr_74 [i_21] [i_21]);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_24 = 1; i_24 < 17; i_24 += 1) 
    {
        var_39 = ((/* implicit */int) ((max((647284820), (((/* implicit */int) arr_76 [i_24 - 1])))) != ((~(((/* implicit */int) var_7))))));
        /* LoopNest 3 */
        for (unsigned long long int i_25 = 0; i_25 < 18; i_25 += 3) 
        {
            for (short i_26 = 0; i_26 < 18; i_26 += 1) 
            {
                for (short i_27 = 1; i_27 < 17; i_27 += 2) 
                {
                    {
                        arr_92 [i_27] [i_25] [i_27] [i_27 + 1] = max((((/* implicit */long long int) ((((1815217031U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-7455))))) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (3898599574U)))))), (min((min((8327327517323797284LL), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) (-(((/* implicit */int) arr_85 [11LL] [4U]))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_28 = 2; i_28 < 14; i_28 += 2) 
                        {
                            var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) max((min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-1))))), (arr_82 [i_28]))), (((/* implicit */unsigned int) (short)7437)))))));
                            var_41 += ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_88 [i_24] [i_24] [16U]))))), (min((((/* implicit */long long int) arr_91 [i_25] [i_28 + 2])), (arr_28 [i_28])))));
                        }
                    }
                } 
            } 
        } 
        arr_96 [i_24] = (~((~(991748672U))));
        var_42 ^= ((/* implicit */long long int) min(((~((~(((/* implicit */int) (short)-7438)))))), (((((/* implicit */_Bool) (short)17960)) ? ((~(-775514735))) : ((~(((/* implicit */int) arr_76 [i_24]))))))));
    }
}
