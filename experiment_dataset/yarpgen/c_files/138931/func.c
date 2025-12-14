/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138931
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (signed char i_3 = 1; i_3 < 16; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */signed char) (short)-22822);
                        var_17 = ((/* implicit */unsigned short) (-(max((((unsigned int) (signed char)39)), (((/* implicit */unsigned int) ((signed char) var_2)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (unsigned short i_5 = 2; i_5 < 17; i_5 += 3) 
            {
                {
                    var_18 = max(((unsigned short)0), (((/* implicit */unsigned short) var_5)));
                    var_19 += ((/* implicit */unsigned short) var_10);
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 3; i_6 < 18; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)68)), (((unsigned char) (signed char)68)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 4) 
                        {
                            arr_22 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */int) (signed char)121);
                            var_21 = ((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) (unsigned short)0))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44575))) : (var_4)))) ? (((var_8) ? (var_1) : (((/* implicit */unsigned int) -581961738)))) : (var_6)))) ? (-1742452839) : (((/* implicit */int) (short)-22822))));
                            var_23 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) -1802878985))));
                        }
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 19; i_9 += 3) 
        {
            for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 3; i_11 < 18; i_11 += 2) 
                    {
                        for (short i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (unsigned short)55433))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (((((/* implicit */_Bool) 1742452850)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_1)) : (16288556827128418499ULL)))))));
                                var_25 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((int) -1801303116567165474LL)) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)167)), (var_14))))))) || (((/* implicit */_Bool) ((signed char) ((var_8) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
                                arr_35 [i_12] [i_11] [i_0] [i_9 + 1] [i_0] = ((/* implicit */int) (~(((497499670557820058LL) | (((/* implicit */long long int) 4294967295U))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        for (int i_14 = 0; i_14 < 20; i_14 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) ((var_8) ? (max(((~(1882398788U))), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39)))));
                                var_27 = ((/* implicit */unsigned short) max((var_27), (max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)0)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (unsigned char i_16 = 1; i_16 < 19; i_16 += 2) 
            {
                for (signed char i_17 = 0; i_17 < 20; i_17 += 4) 
                {
                    {
                        var_28 -= ((/* implicit */unsigned short) 0ULL);
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) var_4))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_18 = 0; i_18 < 20; i_18 += 4) 
        {
            for (unsigned int i_19 = 0; i_19 < 20; i_19 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_20 = 0; i_20 < 20; i_20 += 3) 
                    {
                        for (short i_21 = 0; i_21 < 20; i_21 += 2) 
                        {
                            {
                                var_30 &= ((/* implicit */unsigned int) ((_Bool) ((((_Bool) var_13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) (unsigned char)203)))));
                                var_31 = ((/* implicit */_Bool) 763886347);
                                arr_57 [i_0] [i_0] = ((/* implicit */unsigned short) max((((int) (!(var_8)))), (((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) (unsigned short)12726)), (-1448498876035168013LL)))))));
                                var_32 = ((/* implicit */unsigned short) ((int) ((_Bool) var_4)));
                            }
                        } 
                    } 
                    var_33 |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((int) var_9))) / (((long long int) 273409124425324671ULL))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_22 = 0; i_22 < 20; i_22 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_23 = 0; i_23 < 20; i_23 += 4) 
                        {
                            var_34 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((((((/* implicit */_Bool) var_10)) ? (32) : (((/* implicit */int) var_0)))) - (29)))));
                            var_35 = ((/* implicit */unsigned long long int) (signed char)8);
                            var_36 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_4)));
                        }
                        for (short i_24 = 0; i_24 < 20; i_24 += 3) 
                        {
                            var_37 *= ((/* implicit */unsigned int) ((signed char) 7302698291745697991ULL));
                            var_38 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (signed char)7)) ? (var_16) : (var_16))));
                        }
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (signed char)8))) ? (((((/* implicit */_Bool) var_7)) ? (1003576926U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31272))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_0))))));
                        arr_68 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (0) : (((/* implicit */int) (short)-16384))));
                    }
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_25 = 1; i_25 < 12; i_25 += 3) 
    {
        for (int i_26 = 0; i_26 < 13; i_26 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_27 = 0; i_27 < 13; i_27 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        for (unsigned char i_29 = 3; i_29 < 9; i_29 += 4) 
                        {
                            {
                                arr_83 [i_26] [i_26] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8378686767640565074ULL)) ? (((unsigned long long int) var_14)) : (((((((/* implicit */_Bool) -581961738)) || ((_Bool)1))) ? (max((0ULL), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-122)) == (((/* implicit */int) var_2))))))))));
                                var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-24767)) : (((/* implicit */int) var_3))))) ? ((~((~(var_12))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) (_Bool)1))))))));
                                var_41 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned char) (_Bool)1))))))) ? (max((var_4), (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)0)), (2147483627)))))) : (min((4294950912LL), (((/* implicit */long long int) (signed char)84))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_30 = 0; i_30 < 13; i_30 += 3) 
                    {
                        for (signed char i_31 = 3; i_31 < 12; i_31 += 2) 
                        {
                            {
                                var_42 = ((/* implicit */_Bool) min((((/* implicit */int) (signed char)-122)), (((((/* implicit */int) var_14)) % (((/* implicit */int) (signed char)21))))));
                                arr_89 [i_26] [i_25] [i_26] = ((/* implicit */signed char) 2247058383475992330ULL);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_32 = 0; i_32 < 13; i_32 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_33 = 0; i_33 < 13; i_33 += 3) 
                        {
                            var_43 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)58185))))))) ? ((~(((((/* implicit */_Bool) 4724625270078829043ULL)) ? (var_6) : (var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_13)) << (((((/* implicit */int) var_2)) - (25311))))))))));
                            var_44 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 1160813935)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)121))) : (var_12)))))));
                            arr_96 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27] [i_33] &= ((/* implicit */int) (+(((16383LL) >> (((/* implicit */int) var_13))))));
                            var_45 &= ((/* implicit */unsigned long long int) ((max((6507215362455026865LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_16))))))) < (((/* implicit */long long int) ((/* implicit */int) (short)-16384)))));
                            arr_97 [i_25 + 1] [i_25] [i_25 + 1] [i_25 + 1] [i_33] = ((/* implicit */_Bool) (unsigned char)177);
                        }
                        for (unsigned short i_34 = 0; i_34 < 13; i_34 += 3) 
                        {
                            var_46 *= ((/* implicit */unsigned int) ((unsigned long long int) 8406624024122566511ULL));
                            arr_100 [i_34] [i_32] [i_25] [i_25 + 1] [i_25] [i_26] [i_25 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21))) : (10040120049586985105ULL)))) ? ((((_Bool)0) ? (13722118803630722559ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)0))))))))));
                            arr_101 [i_25] [i_25] [i_25] [i_27] [i_32] [i_34] = ((/* implicit */unsigned char) max((var_3), ((signed char)24)));
                        }
                        for (int i_35 = 2; i_35 < 12; i_35 += 3) 
                        {
                            var_47 = ((/* implicit */_Bool) (~(((unsigned int) (short)-32758))));
                            var_48 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-1)) ^ (max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))))));
                        }
                        var_49 = ((/* implicit */long long int) ((unsigned short) 1881985243));
                        var_50 = ((/* implicit */signed char) max((var_2), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) == (max((var_1), (((/* implicit */unsigned int) 0)))))))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned short i_36 = 0; i_36 < 13; i_36 += 1) 
                {
                    for (unsigned long long int i_37 = 0; i_37 < 13; i_37 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (signed char i_38 = 2; i_38 < 12; i_38 += 1) /* same iter space */
                            {
                                var_51 = ((/* implicit */signed char) (+(((4278543154U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10867)))))));
                                arr_113 [i_38 + 1] [i_37] [i_37] [i_37] [i_25] [i_25] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (_Bool)1))))) < (((((/* implicit */_Bool) (unsigned short)53996)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) var_1))))));
                                var_52 = ((/* implicit */unsigned char) min((var_52), (((/* implicit */unsigned char) ((((unsigned long long int) var_16)) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))));
                                arr_114 [i_25] [i_25] [i_36] [i_25] = ((/* implicit */int) ((signed char) ((unsigned int) var_6)));
                                var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-2538)) ? (var_9) : (var_9))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9))))))));
                            }
                            for (signed char i_39 = 2; i_39 < 12; i_39 += 1) /* same iter space */
                            {
                                arr_118 [i_25] [i_37] [i_39 + 1] |= ((/* implicit */short) min((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6566878157269846208LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)60236))))) ? (max((((/* implicit */long long int) (signed char)-106)), (var_4))) : (var_12)))));
                                var_54 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_7))));
                                var_55 = (unsigned short)0;
                                var_56 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)26986))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min(((short)-2181), (((/* implicit */short) var_8)))))));
                                var_57 *= ((/* implicit */signed char) 18446744073709551609ULL);
                            }
                            var_58 = ((/* implicit */int) ((_Bool) (+(((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)150)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_40 = 0; i_40 < 13; i_40 += 1) 
                {
                    for (unsigned long long int i_41 = 0; i_41 < 13; i_41 += 1) 
                    {
                        for (unsigned long long int i_42 = 0; i_42 < 13; i_42 += 2) 
                        {
                            {
                                arr_127 [i_42] [i_25] [i_25] [i_25] = ((/* implicit */long long int) var_11);
                                var_59 = ((/* implicit */unsigned short) min((var_59), (var_2)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
