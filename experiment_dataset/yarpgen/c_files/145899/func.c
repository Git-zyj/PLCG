/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145899
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
    var_17 = ((/* implicit */short) var_0);
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) min((min((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) var_0)))), (min((((/* implicit */unsigned long long int) (unsigned short)26257)), (140737488355327ULL))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_19 *= ((/* implicit */int) var_14);
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_7))));
        var_21 = ((/* implicit */unsigned short) ((_Bool) var_15));
    }
    for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned long long int) min((var_16), (((/* implicit */unsigned short) var_3))))))));
        var_23 = ((/* implicit */unsigned short) (-(140737488355331ULL)));
        var_24 = ((/* implicit */signed char) var_11);
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_4 = 4; i_4 < 15; i_4 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (~(var_6))))));
                        var_26 -= ((/* implicit */int) ((short) (unsigned char)56));
                    }
                    for (unsigned char i_5 = 2; i_5 < 14; i_5 += 4) 
                    {
                        var_27 *= ((/* implicit */unsigned short) ((_Bool) ((unsigned short) min((((/* implicit */unsigned short) var_14)), (var_1)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            var_28 -= var_0;
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((unsigned char) var_14)))));
                        }
                        for (unsigned char i_7 = 1; i_7 < 12; i_7 += 2) 
                        {
                            arr_20 [i_2] [i_3] [i_3] [i_2] [i_2] [i_5 + 1] = ((/* implicit */short) var_14);
                            var_30 *= (~(4271845789755128516ULL));
                            var_31 *= ((/* implicit */unsigned short) var_3);
                        }
                    }
                    for (unsigned char i_8 = 2; i_8 < 13; i_8 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) var_14))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            var_33 *= ((/* implicit */int) var_14);
                            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (~(((/* implicit */int) var_16)))))));
                            arr_26 [i_1] [i_1 + 3] [i_1 + 3] [i_3] [i_1 + 3] [i_8] |= var_3;
                            var_35 *= ((/* implicit */signed char) (-(var_13)));
                            var_36 ^= ((long long int) 21ULL);
                        }
                        arr_27 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((_Bool) ((unsigned short) (~(((/* implicit */int) var_1))))));
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) (-(51843118141399125ULL))))));
                    }
                    var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((signed char) ((unsigned short) max((var_11), (((/* implicit */unsigned char) var_4)))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) min((min((((/* implicit */unsigned long long int) 2147483628)), (140737488355346ULL))), (((/* implicit */unsigned long long int) var_13)))))));
                        /* LoopSeq 4 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_40 -= ((/* implicit */unsigned int) var_15);
                            arr_33 [i_2] [i_2] [i_3] [i_10] [(unsigned char)12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), (min((var_1), (((/* implicit */unsigned short) var_15)))))))));
                            var_41 -= ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (((unsigned short) var_13)))))));
                            var_42 |= ((/* implicit */unsigned long long int) ((unsigned short) ((_Bool) max((((/* implicit */unsigned short) (unsigned char)230)), ((unsigned short)33003)))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 2) /* same iter space */
                        {
                            var_43 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (var_16))))));
                            var_44 = ((/* implicit */unsigned char) max((var_44), (var_9)));
                        }
                        /* vectorizable */
                        for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) /* same iter space */
                        {
                            var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) var_5))));
                            var_46 *= ((/* implicit */int) var_8);
                        }
                        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 2) /* same iter space */
                        {
                            var_47 *= (-(max((((/* implicit */int) var_8)), (var_7))));
                            var_48 *= ((/* implicit */unsigned long long int) (+(((unsigned int) ((int) var_11)))));
                            arr_40 [i_14] [i_10] [i_1 + 3] [i_2 - 1] [i_14] &= ((/* implicit */short) max((max((min((var_0), (((/* implicit */unsigned short) var_8)))), (((/* implicit */unsigned short) var_14)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10)))))));
                            arr_41 [i_2] [i_2] [i_3] = ((/* implicit */long long int) var_3);
                            arr_42 [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((signed char) 18446744073709551597ULL));
                        }
                        var_49 ^= ((/* implicit */short) min(((unsigned short)48760), (((/* implicit */unsigned short) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (unsigned short i_15 = 2; i_15 < 15; i_15 += 3) 
                    {
                        var_50 &= ((/* implicit */unsigned long long int) ((long long int) var_13));
                        arr_46 [i_2] [i_1] [i_1] [i_1 + 1] [i_1] = ((/* implicit */unsigned short) var_11);
                    }
                    var_51 ^= max((min((var_7), (((/* implicit */int) var_4)))), (((int) (_Bool)1)));
                }
            } 
        } 
        var_52 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) var_9)))), (var_14)))), (max((min((((/* implicit */unsigned long long int) -1LL)), (18446744073709551597ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_3)), (var_12))))))));
    }
    /* vectorizable */
    for (unsigned short i_16 = 4; i_16 < 17; i_16 += 2) 
    {
        arr_50 [i_16 - 2] = ((/* implicit */_Bool) ((short) var_1));
        /* LoopNest 3 */
        for (short i_17 = 0; i_17 < 20; i_17 += 3) 
        {
            for (unsigned short i_18 = 0; i_18 < 20; i_18 += 4) 
            {
                for (unsigned char i_19 = 1; i_19 < 19; i_19 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_20 = 0; i_20 < 20; i_20 += 4) 
                        {
                            arr_62 [i_16 + 1] [i_17] [i_17] [i_19] [i_16 + 1] = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_12))))));
                            var_53 |= var_16;
                            arr_63 [i_16] [i_17] [i_18] [i_19 + 1] [i_17] = ((/* implicit */long long int) ((int) var_12));
                            var_54 *= ((/* implicit */signed char) ((long long int) ((unsigned short) var_1)));
                            arr_64 [i_16] [i_16] [i_16] [i_17] [i_16] = var_4;
                        }
                        for (int i_21 = 3; i_21 < 19; i_21 += 1) 
                        {
                            var_55 *= ((/* implicit */short) var_10);
                            arr_68 [i_16] [i_16] [i_17] [i_18] [i_18] [i_16] [i_21] |= ((/* implicit */unsigned long long int) ((int) (unsigned char)36));
                            var_56 -= ((/* implicit */unsigned short) ((short) var_2));
                        }
                        var_57 = ((/* implicit */unsigned char) ((_Bool) (unsigned short)14613));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_22 = 0; i_22 < 10; i_22 += 4) 
    {
        var_58 = ((/* implicit */long long int) max((var_58), (var_5)));
        arr_72 [i_22] = ((/* implicit */signed char) min(((unsigned char)230), (((/* implicit */unsigned char) (signed char)54))));
        var_59 = ((/* implicit */unsigned short) var_4);
    }
}
