/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152578
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] = ((_Bool) min(((unsigned short)65521), ((unsigned short)65528)));
        arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_3 [(unsigned char)1] [(unsigned char)1])) + (((/* implicit */int) var_8))))) : (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)14596))))))) ? (((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-2)) ? (1048575U) : (((/* implicit */unsigned int) arr_2 [i_0 + 1]))))) : (((((/* implicit */_Bool) 9223372036854775804LL)) ? (-9223372036854775788LL) : (((/* implicit */long long int) 0U)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775804LL)) && (((/* implicit */_Bool) arr_2 [i_0 + 4]))))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned long long int) arr_0 [i_0 + 3] [i_0 + 2]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (max((((/* implicit */unsigned int) var_9)), (1048568U)))))));
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (max((-5912234485319012304LL), (((/* implicit */long long int) arr_2 [(_Bool)0])))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) 9223372036854775804LL)) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65521)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) arr_2 [i_0]))))) : (((/* implicit */int) arr_1 [i_0])))));
        arr_6 [i_0] = max((((((/* implicit */int) (unsigned short)65529)) * (((/* implicit */int) (!(((/* implicit */_Bool) 823964737))))))), (((/* implicit */int) ((arr_1 [i_0 + 2]) && (((/* implicit */_Bool) min((-7373908023331835936LL), (((/* implicit */long long int) 823964759)))))))));
    }
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775803LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-30))) : (1048571U)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (int i_3 = 3; i_3 < 14; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 4; i_4 < 12; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_5 = 3; i_5 < 14; i_5 += 3) 
                        {
                            arr_19 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)14))));
                            arr_20 [i_1] [i_1] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 339726286)) ? (arr_16 [i_1] [i_1] [i_1] [i_1] [7U]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5 - 3] [i_1] [(unsigned short)9])))))) ? (((/* implicit */int) arr_0 [i_2] [i_4])) : ((+(((/* implicit */int) var_13)))));
                        }
                        var_20 ^= ((/* implicit */unsigned char) var_10);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_6] [4])) << (((4293918736U) - (4293918720U)))))) ? (arr_10 [i_6]) : (((/* implicit */long long int) min(((~(((/* implicit */int) arr_13 [i_6] [i_6] [i_6] [i_6])))), (((/* implicit */int) var_4)))))));
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            arr_26 [i_6] [10U] = ((/* implicit */_Bool) (unsigned short)65498);
            /* LoopSeq 3 */
            for (signed char i_8 = 1; i_8 < 8; i_8 += 3) 
            {
                var_22 = ((/* implicit */long long int) max((max((min((arr_25 [i_6] [i_6]), (var_14))), ((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -925655877)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_8 + 2] [i_6])) / (((/* implicit */int) var_8))))), (((2713317970U) << (0U))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-4))));
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 3; i_10 < 8; i_10 += 3) 
                    {
                        arr_34 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_10 - 3] [i_8 + 1] [i_7] [i_7]))) & (-2878502656792170776LL)));
                        arr_35 [i_6] [i_7] [i_8] = ((/* implicit */int) ((unsigned char) arr_27 [(signed char)9] [(signed char)9] [i_8 + 2] [i_6]));
                        var_24 = ((/* implicit */unsigned char) (signed char)-106);
                    }
                    var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)29)) ? (1949731649655774665LL) : (((/* implicit */long long int) arr_28 [i_6] [i_6] [i_6] [i_6]))));
                }
                for (long long int i_11 = 1; i_11 < 8; i_11 += 1) 
                {
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) min((max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) ((2147483647) < (((/* implicit */int) var_11))))))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6] [i_6] [1] [i_11]))) : (arr_33 [(unsigned char)10] [0U] [i_8 + 2] [i_11] [6] [i_11] [i_6]))))))))));
                    arr_38 [i_6] [i_11 - 1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((18446744073709551615ULL), (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) arr_10 [i_11 + 3])) : (max((1319037085293751509ULL), (((/* implicit */unsigned long long int) (unsigned short)25720)))))), (((((/* implicit */_Bool) arr_25 [i_8 + 2] [i_8 + 1])) ? (arr_25 [i_8 + 3] [i_8 + 2]) : (((/* implicit */unsigned long long int) -1LL))))));
                    var_27 ^= ((/* implicit */unsigned int) var_15);
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_12 = 1; i_12 < 9; i_12 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) ((2878502656792170755LL) + ((-(283726776524341248LL))))))));
                    var_29 = ((/* implicit */_Bool) 3769130904063320056LL);
                }
                for (unsigned long long int i_13 = 1; i_13 < 9; i_13 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */short) (unsigned short)14452);
                    var_31 = ((/* implicit */unsigned short) 2971269432U);
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_32 |= ((/* implicit */unsigned int) arr_14 [i_6] [i_6] [i_6] [i_6]);
                        var_33 -= ((/* implicit */short) min((-3769130904063320034LL), (((/* implicit */long long int) (unsigned short)25442))));
                        arr_46 [i_14] [(signed char)10] [i_8] [i_6] [i_6] [(signed char)3] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40117))) : (0LL)))) ? (min((((/* implicit */long long int) (unsigned short)25443)), (-3769130904063320037LL))) : (-8199970228066991303LL))) < (((/* implicit */long long int) ((((((/* implicit */int) var_4)) * (((/* implicit */int) arr_8 [i_6])))) % ((-(((/* implicit */int) var_11)))))))));
                    }
                    var_34 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) var_2)), (arr_33 [i_6] [6] [6] [6] [6LL] [i_8] [i_13])));
                }
                for (signed char i_15 = 4; i_15 < 8; i_15 += 1) 
                {
                    arr_49 [i_6] [i_7] [i_7] [i_6] [i_15 - 2] = ((/* implicit */_Bool) max((min((max((((/* implicit */unsigned long long int) 526696172)), (67108864ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_48 [i_8 + 3] [i_8 + 2] [i_15 - 1] [i_15 - 4] [i_15 - 2]))))));
                    arr_50 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((int) max(((unsigned short)46583), (((/* implicit */unsigned short) arr_44 [i_6] [5] [i_6] [i_6] [i_6] [i_6] [i_6]))))) * (min(((-(((/* implicit */int) (short)-31173)))), (((((/* implicit */int) (signed char)0)) / (((/* implicit */int) (short)31158))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_16 = 4; i_16 < 9; i_16 += 3) 
                    {
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6] [i_6]))) : (var_14)))) && (((/* implicit */_Bool) var_2))));
                        var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) -8199970228066991304LL))));
                        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_45 [i_6] [i_7] [i_8] [(unsigned char)10] [i_16 - 4]))) ? (((/* implicit */int) (short)-14329)) : (((/* implicit */int) arr_47 [4] [4] [i_15 - 3] [i_15] [i_16 - 3])))))));
                    }
                    arr_54 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) arr_17 [i_8 + 3]))))) || (((/* implicit */_Bool) (-(18446744073642442751ULL))))));
                }
            }
            for (signed char i_17 = 2; i_17 < 10; i_17 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_18 = 2; i_18 < 10; i_18 += 1) 
                {
                    for (unsigned short i_19 = 0; i_19 < 11; i_19 += 3) 
                    {
                        {
                            var_38 ^= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)64)) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_6] [i_6] [i_17] [i_18] [i_19])) || (((/* implicit */_Bool) 18446744073642442763ULL)))))) ^ (((arr_8 [6]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14452))) : (arr_16 [i_19] [i_18] [i_17 - 2] [i_7] [i_6]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_62 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) 3461246242U)) : (6326359633832402918ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)25443)))))))))));
                            var_39 = ((/* implicit */long long int) min((((((((/* implicit */_Bool) -1382338810440617557LL)) ? (6326359633832402918ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6326359633832402917ULL)) ? (-8199970228066991307LL) : (((/* implicit */long long int) arr_53 [i_6] [i_7]))))))), (arr_25 [i_17 - 2] [i_19])));
                            arr_63 [i_6] [i_7] [i_6] [i_18] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-31191)) || (((/* implicit */_Bool) (unsigned short)46583))));
                        }
                    } 
                } 
                var_40 |= ((((/* implicit */_Bool) (short)31213)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), ((short)-31178)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)-31171))))) : (((((/* implicit */_Bool) arr_51 [i_7] [i_17] [i_17] [i_17 + 1] [i_17 + 1] [i_17 - 1] [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775806LL)))))) : (((15661112801110978222ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                arr_64 [(signed char)8] |= ((/* implicit */long long int) (~(18446744073709551615ULL)));
            }
            for (long long int i_20 = 1; i_20 < 8; i_20 += 1) 
            {
                var_41 = ((/* implicit */unsigned int) max((var_41), (((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) (short)-31155)), (arr_40 [i_6] [i_6] [i_6] [i_6] [i_6]))))))) ? (min((((unsigned int) var_14)), (((/* implicit */unsigned int) (unsigned char)47)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)165)))))));
                var_42 -= (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)28)), (1125899906842623LL)))));
            }
            arr_68 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_42 [(signed char)10] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) 1390651722U)) : (18446744073642442741ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6]))) : ((~(var_16)))));
            var_43 = (-(((/* implicit */int) max((var_11), (var_11)))));
        }
        arr_69 [i_6] [2] |= ((/* implicit */unsigned int) ((_Bool) ((_Bool) (unsigned char)35)));
        /* LoopSeq 1 */
        for (unsigned int i_21 = 0; i_21 < 11; i_21 += 3) 
        {
            var_44 += ((((/* implicit */int) (unsigned short)25420)) % ((~(-384315180))));
            var_45 = ((/* implicit */int) arr_0 [i_6] [i_21]);
            arr_73 [i_6] [10] &= ((/* implicit */long long int) max((((/* implicit */int) ((_Bool) (-(18446744073642442730ULL))))), ((+(var_2)))));
            var_46 ^= ((/* implicit */_Bool) ((41426081U) << (((/* implicit */int) (_Bool)1))));
        }
    }
}
