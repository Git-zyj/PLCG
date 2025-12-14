/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139368
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
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_14) ? (var_10) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)99))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) var_16);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (short i_3 = 2; i_3 < 8; i_3 += 3) 
                {
                    {
                        arr_12 [i_1] [i_3] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_7))))))));
                        var_19 = ((/* implicit */short) ((unsigned int) var_4));
                        var_20 = ((/* implicit */_Bool) (-(max((var_9), (min((var_8), (((/* implicit */unsigned int) (signed char)-71))))))));
                    }
                } 
            } 
            var_21 -= ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) var_10)))));
            var_22 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(var_10)))) ? (4294967267U) : ((+(53U))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (max((((/* implicit */unsigned int) var_11)), (var_8))) : ((~(var_8)))))));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) * ((+(min((var_5), (((/* implicit */long long int) var_1))))))));
                arr_15 [i_0] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 4294967295U)) ? (var_16) : (((var_15) ^ (var_10))))) + (max((var_0), (var_9)))));
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) max((((var_14) ? (2706336951U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((signed char) max((var_10), (var_10))))))))));
                var_25 = ((/* implicit */unsigned int) max((((/* implicit */signed char) var_7)), (((signed char) (~(1588630345U))))));
                var_26 = ((var_14) ? (((((/* implicit */_Bool) var_8)) ? (var_10) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -2336396077762602963LL)))))));
            }
            for (signed char i_5 = 1; i_5 < 8; i_5 += 1) 
            {
                var_27 += ((/* implicit */short) (+(min((((/* implicit */unsigned int) var_14)), (var_16)))));
                var_28 = ((((((/* implicit */_Bool) max((var_3), (((/* implicit */signed char) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (unsigned char)60)))))) : (3304711209U))) + (min((2520255835U), (((/* implicit */unsigned int) (signed char)-56)))));
                var_29 = var_14;
                arr_18 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_8);
            }
            arr_19 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) var_9)), (var_5)))));
        }
        for (unsigned int i_6 = 1; i_6 < 7; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_7 = 3; i_7 < 8; i_7 += 3) 
            {
                arr_25 [i_0] [i_6] [i_6] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)32767))));
                var_30 *= ((/* implicit */short) var_7);
                /* LoopSeq 2 */
                for (signed char i_8 = 1; i_8 < 9; i_8 += 3) 
                {
                    arr_28 [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) % (((/* implicit */int) var_3))));
                    arr_29 [i_8] [i_6] [i_6] = ((/* implicit */signed char) ((unsigned int) var_12));
                    var_31 = ((/* implicit */unsigned int) ((signed char) var_8));
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) var_13))));
                }
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((unsigned int) var_1)))));
                    var_34 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)0))));
                }
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) 1588630345U)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_5))) : (((/* implicit */long long int) (~(var_0))))));
            }
            for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((((((/* implicit */int) (short)-3115)) + (2147483647))) >> (((/* implicit */int) var_1)))) % (((/* implicit */int) ((((/* implicit */_Bool) (short)32763)) && (((/* implicit */_Bool) (signed char)-38))))))))));
                arr_36 [i_6] [i_6] [i_10] [i_6] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((2706336951U), (var_13)))) ? (4294967295U) : (4294967267U))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)37)) - (34))))))));
                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (~(((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) (unsigned char)242)) >> (((((/* implicit */int) (unsigned char)210)) - (204))))) : (((/* implicit */int) var_2)))))))));
            }
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) var_9))));
                var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((unsigned int) var_3)))));
            }
            /* vectorizable */
            for (signed char i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 10; i_13 += 4) 
                {
                    for (unsigned int i_14 = 3; i_14 < 9; i_14 += 4) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
                            var_41 = ((/* implicit */unsigned int) min((var_41), ((~(((((/* implicit */_Bool) var_10)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned char i_15 = 0; i_15 < 10; i_15 += 3) 
                {
                    var_42 = ((/* implicit */signed char) (+((-(var_0)))));
                    var_43 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_4))));
                }
                for (unsigned int i_16 = 2; i_16 < 9; i_16 += 1) 
                {
                    var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */long long int) var_0))));
                    var_45 = ((/* implicit */unsigned int) ((short) var_5));
                }
                for (signed char i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    var_46 = ((/* implicit */_Bool) (+(var_5)));
                    var_47 = (+(2706336937U));
                    var_48 = ((/* implicit */signed char) (unsigned char)1);
                    var_49 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_8) : (var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((var_9) ^ (var_10))));
                    arr_57 [i_0] [i_6] [i_6] [i_6] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_16))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_18 = 0; i_18 < 10; i_18 += 3) 
                {
                    var_50 = ((/* implicit */_Bool) var_5);
                    arr_60 [i_18] [i_6] [i_6] [i_0] = ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4236594991U))) : ((+(var_10))));
                    /* LoopSeq 2 */
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        var_51 = (+(((var_14) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
                        var_52 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (var_5) : (((/* implicit */long long int) var_9))));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_53 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3245401605U)) ? (((/* implicit */int) ((var_9) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50)))))) : ((~(((/* implicit */int) (_Bool)1))))));
                        arr_65 [i_6] = ((/* implicit */signed char) ((2336396077762602962LL) < (((/* implicit */long long int) var_8))));
                        var_54 = ((signed char) 1134225738U);
                        var_55 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14))))) : (var_9));
                    }
                    arr_66 [i_6] [i_6] = (~(3245401605U));
                    arr_67 [i_0] [i_6] [i_0] [i_0] [i_0] = ((/* implicit */short) 4294967267U);
                }
                for (signed char i_21 = 1; i_21 < 7; i_21 += 4) 
                {
                    var_56 = ((var_9) - (var_9));
                    var_57 = ((/* implicit */unsigned int) max((var_57), (((/* implicit */unsigned int) (+(((/* implicit */int) ((var_13) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))));
                    /* LoopSeq 2 */
                    for (signed char i_22 = 0; i_22 < 10; i_22 += 1) 
                    {
                        var_58 ^= ((/* implicit */_Bool) ((((var_15) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) >> (((((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) - (2130413378U)))));
                        var_59 = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) (short)(-32767 - 1))))));
                    }
                    for (unsigned int i_23 = 2; i_23 < 8; i_23 += 3) 
                    {
                        arr_75 [i_6] [i_0] [i_12] [i_6] [i_6] = ((/* implicit */unsigned char) var_8);
                        var_60 = (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_9))));
                    }
                    arr_76 [i_0] [i_6] [i_12] [i_12] [i_12] [i_21] = var_10;
                }
            }
            for (signed char i_24 = 1; i_24 < 8; i_24 += 1) 
            {
                var_61 = ((/* implicit */signed char) (((-(14U))) % ((~(max((((/* implicit */unsigned int) var_2)), (var_13)))))));
                var_62 ^= ((/* implicit */signed char) 2997469906U);
                /* LoopSeq 1 */
                for (signed char i_25 = 0; i_25 < 10; i_25 += 4) 
                {
                    arr_82 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((min((var_16), (((/* implicit */unsigned int) var_6)))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) var_14))))))))));
                    var_63 = ((/* implicit */signed char) max((max((((var_12) | (var_0))), (((((/* implicit */_Bool) var_0)) ? (var_12) : (var_12))))), (max((min((var_8), (((/* implicit */unsigned int) (short)-22627)))), (min((((/* implicit */unsigned int) (unsigned char)244)), (var_16)))))));
                }
            }
        }
    }
    var_64 = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))) : (var_16));
}
