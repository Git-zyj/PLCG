/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161655
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_0 + 1]))));
        var_10 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0 + 1])) >= (((/* implicit */int) arr_0 [i_0 - 1]))));
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) var_8);
        var_11 = ((/* implicit */unsigned short) arr_0 [i_0 + 2]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_12 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2236317019U)) ? (((/* implicit */int) arr_2 [i_0])) : ((-(((/* implicit */int) (signed char)-113))))));
                    arr_9 [(unsigned short)12] [i_1] = ((/* implicit */unsigned int) arr_7 [i_0 + 1] [i_2 + 1] [i_2 + 3]);
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (2236317019U))))));
                    arr_10 [i_1] = ((((_Bool) var_3)) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) ((short) (short)24162))));
                    var_14 = ((/* implicit */long long int) 4569897749850582487ULL);
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        var_15 += ((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) arr_11 [i_3])) % (13876846323858969128ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */long long int) 2058650276U)) : (64512LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_3]) > (((int) 1838152532U)))))) : (2097151ULL)));
        arr_13 [i_3] [i_3] = ((/* implicit */short) (((((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (2723698592U))) - (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)178)) + (arr_11 [i_3])))))) <= (((/* implicit */unsigned int) arr_11 [i_3]))));
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            arr_17 [i_3] [i_4] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_3]))) | (var_2)))) ? (((/* implicit */int) (unsigned short)16573)) : (((((/* implicit */int) var_3)) ^ (((/* implicit */int) (signed char)67)))));
            /* LoopSeq 4 */
            for (short i_5 = 4; i_5 < 18; i_5 += 2) 
            {
                arr_20 [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_3] [i_4] [i_5 + 2]))))) ? (((int) (signed char)-68)) : (((/* implicit */int) ((_Bool) var_9))))) / ((~(134152192)))));
                /* LoopSeq 2 */
                for (short i_6 = 2; i_6 < 18; i_6 += 4) 
                {
                    var_16 += ((/* implicit */unsigned int) -1742453996);
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((unsigned long long int) arr_22 [i_3] [i_4])))) ? (((((/* implicit */_Bool) -64512LL)) ? (((/* implicit */int) ((unsigned char) (signed char)-113))) : (((/* implicit */int) (signed char)34)))) : ((-(((/* implicit */int) arr_14 [i_5 + 1] [i_6 + 2] [i_6 - 1]))))));
                    var_18 += ((/* implicit */unsigned long long int) -1099158728);
                    var_19 = ((/* implicit */unsigned short) var_8);
                }
                for (int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    var_20 = ((/* implicit */short) 364061349);
                    arr_25 [i_3] [i_4] = ((/* implicit */unsigned int) var_3);
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) -6399430854728827512LL))) / (((/* implicit */int) arr_19 [i_5 - 1]))))) ? (((((_Bool) arr_19 [i_3])) ? (((/* implicit */unsigned long long int) arr_24 [i_3] [i_3])) : ((~(18446744073709551598ULL))))) : (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3] [i_7] [i_4]))) : (var_2))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))))));
                }
            }
            for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                arr_29 [i_3] = ((/* implicit */unsigned char) (unsigned short)48685);
                arr_30 [i_4] [i_8] = ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46))) : (((((1742453996) == (((/* implicit */int) (unsigned short)34581)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_2)))) : (((((/* implicit */_Bool) var_5)) ? (arr_24 [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
            }
            /* vectorizable */
            for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    arr_37 [i_3] = (~(2868472383U));
                    arr_38 [i_3] [i_3] [i_9] [i_3] [i_10] [i_10] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (_Bool)1))));
                    var_22 &= ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) 756439170)) : (var_4)));
                }
                /* LoopNest 2 */
                for (unsigned short i_11 = 1; i_11 < 19; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_11 + 1]))));
                            var_24 = ((/* implicit */signed char) 268435455U);
                        }
                    } 
                } 
                arr_45 [i_3] [i_3] [i_3] [i_9] = ((/* implicit */signed char) var_1);
                arr_46 [i_3] [i_3] [(short)10] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 134152192)) ? (3988088469017077524LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)107)))));
                var_25 -= ((/* implicit */_Bool) -108425342);
            }
            /* vectorizable */
            for (unsigned char i_13 = 0; i_13 < 20; i_13 += 3) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-20124)) ? (((int) (signed char)-124)) : (((((/* implicit */_Bool) (short)-20804)) ? (((/* implicit */int) (short)-20124)) : (((/* implicit */int) (unsigned short)16850))))));
                arr_49 [i_3] [i_3] [i_3] [i_13] = ((/* implicit */unsigned char) (_Bool)1);
                /* LoopNest 2 */
                for (signed char i_14 = 2; i_14 < 19; i_14 += 2) 
                {
                    for (int i_15 = 0; i_15 < 20; i_15 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) arr_32 [i_13] [i_14] [i_15]))));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) 558854593U))));
                            arr_56 [i_3] [i_4] [i_4] [i_13] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) ? (arr_41 [i_14 - 2] [i_14 - 2] [i_14 + 1] [i_14 - 1] [i_14] [i_14 - 1] [i_14]) : (arr_41 [i_14 - 2] [i_14 - 2] [i_14 - 1] [i_14 - 1] [i_14] [i_14 - 1] [i_15])));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2868472364U)));
                        }
                    } 
                } 
            }
            var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_3] [i_3]))) : (var_4))))));
            arr_57 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 281474976710592LL))))));
            /* LoopSeq 1 */
            for (unsigned int i_16 = 0; i_16 < 20; i_16 += 4) 
            {
                arr_62 [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) -281474976710593LL);
                var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((signed char) 281474976710592LL)))));
                /* LoopSeq 2 */
                for (unsigned int i_17 = 0; i_17 < 20; i_17 += 3) 
                {
                    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255)))))));
                    var_33 ^= ((/* implicit */signed char) ((3533744231U) >> (((558854597U) - (558854586U)))));
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) arr_66 [i_3] [i_3] [i_3] [i_3]))))) ? (((/* implicit */int) ((var_8) == (((/* implicit */long long int) 558854593U))))) : (((/* implicit */int) arr_66 [i_3] [i_4] [i_3] [i_17]))));
                    var_35 = ((/* implicit */long long int) max((var_35), (-1LL)));
                    arr_67 [i_4] [i_16] [i_17] = ((/* implicit */signed char) var_8);
                }
                for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                {
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (signed char)16))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)4)) || (((/* implicit */_Bool) (unsigned short)65526))))) : (((/* implicit */int) ((unsigned char) var_6)))));
                    /* LoopSeq 2 */
                    for (long long int i_19 = 0; i_19 < 20; i_19 += 2) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned char) (short)-8450);
                        arr_73 [i_3] [i_3] [i_16] [i_18] [i_19] [(unsigned char)15] = ((/* implicit */unsigned int) ((((((-281474976710570LL) | (((/* implicit */long long int) 3359207681U)))) + (9223372036854775807LL))) >> (((((unsigned long long int) (~(((/* implicit */int) (signed char)-117))))) - (58ULL)))));
                    }
                    for (long long int i_20 = 0; i_20 < 20; i_20 += 2) /* same iter space */
                    {
                        arr_78 [i_18] [i_20] [i_16] [i_18 + 1] [i_20] = ((/* implicit */signed char) 2598037523U);
                        arr_79 [i_3] [(unsigned short)12] [i_16] [i_18 + 1] [i_20] = ((/* implicit */unsigned short) ((((-2087614846) + (2147483647))) >> (((/* implicit */int) arr_19 [i_4]))));
                        arr_80 [i_20] [i_4] [i_4] [i_3] [i_20] = ((/* implicit */unsigned char) var_5);
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) (unsigned char)148))) + (((/* implicit */int) ((short) arr_52 [i_20] [i_20])))));
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)100)) ? (9899479123732869000ULL) : (18446744073709551615ULL))) >> (((arr_76 [i_16] [i_16] [i_18 + 1] [i_18 + 1] [i_18] [i_18 + 1]) - (1018459135)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [(signed char)4] [i_18 + 1] [i_16] [i_18 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_2)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -281474976710593LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)9))))) : (((((/* implicit */_Bool) arr_69 [i_4] [i_16] [i_18 + 1] [i_16])) ? (-1LL) : (((/* implicit */long long int) var_9)))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247)))));
                    }
                    arr_81 [i_4] [i_4] = ((/* implicit */signed char) var_9);
                    arr_82 [i_3] [(unsigned char)12] [i_16] [i_18] = ((/* implicit */signed char) var_2);
                }
            }
        }
        var_40 = ((/* implicit */signed char) (~(arr_54 [2] [2] [i_3] [i_3] [2] [i_3] [i_3])));
    }
    var_41 = ((/* implicit */unsigned long long int) ((_Bool) (+(((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))))))));
    var_42 = ((/* implicit */int) var_2);
}
