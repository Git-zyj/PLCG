/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115407
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
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0 - 1] [i_0 + 1]))) : (3859852177U)));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 4; i_2 < 10; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_3 = 1; i_3 < 7; i_3 += 2) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)121))) == (2265250561U)));
                    arr_12 [i_0 - 2] [i_3] = ((/* implicit */int) (-(var_10)));
                }
                for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    var_20 = ((/* implicit */int) arr_9 [i_2]);
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 3; i_5 < 10; i_5 += 4) 
                    {
                        arr_17 [(unsigned short)6] [i_1] [i_2 - 2] [i_4] [i_5] |= ((/* implicit */long long int) (short)-32760);
                        arr_18 [i_1] [(signed char)10] [i_4] |= ((/* implicit */unsigned long long int) var_6);
                    }
                }
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_15))));
            }
            var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)24504)) ? (2147483647) : (-842107449)));
        }
        for (unsigned char i_6 = 2; i_6 < 9; i_6 += 1) 
        {
            arr_23 [i_0] = ((/* implicit */short) (+(min((arr_21 [i_6 + 1] [i_0 - 1]), (((/* implicit */int) (short)-11165))))));
            arr_24 [i_0] [2U] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32759)) >> (((((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */int) (unsigned short)12838)) : (((/* implicit */int) (unsigned char)215)))) - (12837)))));
            var_23 -= (signed char)126;
            /* LoopSeq 3 */
            for (unsigned char i_7 = 2; i_7 < 9; i_7 += 2) 
            {
                var_24 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_11 [i_0] [i_0 + 1] [i_0 - 1] [i_6 - 2] [i_7 + 1] [i_7]), (arr_11 [i_0 + 2] [i_0 + 2] [i_0] [i_6 + 1] [i_7 + 1] [i_7 + 2])))) == (((((/* implicit */int) arr_11 [i_0] [i_0 - 2] [i_6 - 2] [i_6 + 2] [i_7 - 2] [i_7])) >> (((var_0) + (5545234511184392630LL)))))));
                var_25 = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) arr_3 [i_0] [i_0])), (2265250570U)))));
            }
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                arr_29 [i_0] [(signed char)6] = ((/* implicit */unsigned short) arr_1 [i_6]);
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) var_8))));
                arr_30 [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_14 [i_0 - 2] [i_0 + 2] [(unsigned char)5])))) == (((((/* implicit */int) arr_14 [i_0] [i_0 - 2] [i_8])) ^ (((/* implicit */int) var_15))))));
            }
            for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    var_27 = ((/* implicit */long long int) ((unsigned short) 2029716747U));
                    var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_6 + 2] [i_10 + 1]))));
                }
                for (short i_11 = 3; i_11 < 7; i_11 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_12 = 2; i_12 < 9; i_12 += 2) 
                    {
                        arr_42 [i_6] [i_6] [i_9] [i_11] [i_12] [i_12] [7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)121)) ? (14752143913321372187ULL) : (((/* implicit */unsigned long long int) 684355458))));
                        arr_43 [i_0 - 2] [i_6 + 2] [(unsigned char)7] [i_11 - 1] [i_0 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6] [i_6 - 1] [i_6])) != (((/* implicit */int) (unsigned short)51737))));
                        arr_44 [(unsigned char)3] [0] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [(signed char)0] [(signed char)0] [(signed char)0] [i_12] [i_12 - 2] [(signed char)10]))));
                        var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2958692528U)) && (((((/* implicit */long long int) ((/* implicit */int) var_15))) < (9223372036854775807LL)))));
                    }
                    for (int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned int) var_1);
                        arr_48 [i_0] [i_0] [i_9] [i_9] [(unsigned char)4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12553798845344766858ULL)) ? (((/* implicit */int) (signed char)-121)) : ((~(((/* implicit */int) (unsigned char)255))))));
                        var_31 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_34 [(unsigned char)0] [i_13] [i_9] [i_11] [i_9]))))));
                        var_32 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)32759))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_14 = 2; i_14 < 10; i_14 += 3) 
                    {
                        var_33 += ((/* implicit */signed char) var_14);
                        var_34 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (-499932995237905649LL))));
                        var_35 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)24504)) >> (((((/* implicit */int) (short)32760)) - (32736)))));
                    }
                    var_36 = ((/* implicit */unsigned int) (((+(9223372036854775807LL))) != ((+(9223372036854775807LL)))));
                }
                var_37 = arr_37 [i_0] [i_9] [i_6] [i_0];
            }
        }
        for (short i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_16 = 3; i_16 < 9; i_16 += 2) 
            {
                for (unsigned int i_17 = 2; i_17 < 10; i_17 += 3) 
                {
                    {
                        var_38 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_56 [i_0 - 2] [i_16] [i_17 - 1])))) & (((((/* implicit */unsigned long long int) arr_56 [i_0 + 2] [i_0 + 2] [i_0 + 1])) * (var_9)))));
                        arr_59 [i_0 + 1] [i_15] [i_16] [i_16] [(signed char)8] [i_17] = ((/* implicit */signed char) var_12);
                    }
                } 
            } 
            var_39 = ((/* implicit */int) (~(1228208883U)));
        }
        for (short i_18 = 0; i_18 < 11; i_18 += 2) /* same iter space */
        {
            var_40 = ((/* implicit */unsigned short) arr_9 [i_0]);
            var_41 = ((/* implicit */int) (~(499932995237905680LL)));
            arr_62 [i_0] [i_18] [i_0] = ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) var_11)) : (-1358903139)))) && (((((/* implicit */_Bool) arr_20 [i_0] [(_Bool)1])) && (((/* implicit */_Bool) -1150670957315917711LL))))))), ((signed char)90)));
        }
        var_42 -= ((/* implicit */_Bool) ((long long int) 2265250561U));
    }
    for (signed char i_19 = 0; i_19 < 14; i_19 += 2) /* same iter space */
    {
        var_43 = ((/* implicit */long long int) 2147483632);
        arr_67 [i_19] [i_19] = ((/* implicit */int) ((var_17) < (((/* implicit */int) (unsigned short)13789))));
    }
    for (signed char i_20 = 0; i_20 < 14; i_20 += 2) /* same iter space */
    {
        arr_71 [i_20] = ((/* implicit */int) (unsigned char)226);
        /* LoopNest 3 */
        for (long long int i_21 = 0; i_21 < 14; i_21 += 2) 
        {
            for (short i_22 = 0; i_22 < 14; i_22 += 3) 
            {
                for (long long int i_23 = 2; i_23 < 12; i_23 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_24 = 1; i_24 < 11; i_24 += 3) 
                        {
                            var_44 = ((/* implicit */signed char) 848623659);
                            var_45 &= ((/* implicit */_Bool) arr_78 [(short)2]);
                            var_46 *= ((((/* implicit */int) ((((/* implicit */int) (short)14774)) != (var_17)))) & (((/* implicit */int) (!(((/* implicit */_Bool) (short)14761))))));
                        }
                        for (int i_25 = 0; i_25 < 14; i_25 += 2) 
                        {
                            var_47 -= ((/* implicit */unsigned short) min((-499932995237905680LL), (((/* implicit */long long int) 101030413U))));
                            var_48 = arr_64 [(unsigned short)10];
                            var_49 |= ((/* implicit */unsigned short) var_5);
                        }
                        for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                        {
                            var_50 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) 101030413U)), (3945868148824951896LL)));
                            var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)200)) ? (var_3) : (((/* implicit */unsigned int) (+(((((/* implicit */int) (short)14761)) & (((/* implicit */int) arr_76 [i_20] [i_26]))))))))))));
                        }
                        var_52 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 2029716735U)), (arr_70 [i_20])));
                        var_53 = ((/* implicit */unsigned int) var_11);
                    }
                } 
            } 
        } 
        arr_92 [i_20] = ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)51745), (((/* implicit */unsigned short) ((signed char) (short)32484)))))) || (var_15)));
    }
    var_54 = var_14;
}
