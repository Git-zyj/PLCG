/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13466
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
    for (int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-126)) ^ (((/* implicit */int) (short)7))))))) && (((/* implicit */_Bool) arr_0 [i_0])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(2047U)));
            var_11 = ((/* implicit */int) ((520093696U) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_1)) <= (-8646457686197164903LL)))))));
        }
        arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) * (((int) var_3))));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (unsigned char i_4 = 2; i_4 < 18; i_4 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            var_12 = ((/* implicit */unsigned short) arr_11 [i_4 - 2] [i_4 - 1] [i_4] [i_4] [i_4 + 2] [i_0 + 1]);
                            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_4 - 2])) != (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_4 - 2])))))));
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)70)) ^ (((/* implicit */int) arr_3 [i_0 - 1] [i_4 + 1] [i_4 + 1]))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            arr_17 [i_0 - 3] [i_2] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (short)32512)))));
                            var_15 = (-(var_3));
                        }
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (unsigned char)105))));
                        arr_18 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [19ULL] [i_2] [i_0 + 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) 947647234U))) - (-163915700)))) : (((unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_3])) != (((/* implicit */int) (short)(-32767 - 1))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_7 = 1; i_7 < 19; i_7 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_8 = 1; i_8 < 18; i_8 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) ((min((min((87113324U), (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_8])))), (((/* implicit */unsigned int) arr_12 [i_0] [i_2] [i_7 - 1])))) != (((/* implicit */unsigned int) (-(((/* implicit */int) arr_28 [i_8 - 1] [i_8 + 2] [i_8] [i_9] [i_9] [i_9] [11])))))));
                        arr_29 [i_0] [i_0] [i_0] [i_8] [i_8] [(unsigned short)19] [i_8] = ((/* implicit */unsigned char) ((int) (!(arr_7 [i_7 + 1]))));
                        arr_30 [i_0] [i_0] [i_2] [i_7] [i_8] [i_0] [i_0] = ((/* implicit */unsigned short) var_6);
                    }
                    arr_31 [i_0] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) (signed char)21)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_8] [i_7] [i_0]))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_26 [i_0] [i_2]) : (((/* implicit */unsigned long long int) var_4))))));
                }
                /* vectorizable */
                for (short i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    arr_34 [i_0] [i_2] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967292U)) && (((/* implicit */_Bool) (~(18342465751928497456ULL))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 3; i_11 < 17; i_11 += 2) 
                    {
                        var_18 &= ((/* implicit */unsigned char) ((unsigned int) var_4));
                        var_19 ^= (+(var_9));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_10] [14] [i_2])) || (((/* implicit */_Bool) arr_12 [i_0] [i_10] [i_7])))))));
                    }
                }
                for (unsigned int i_12 = 2; i_12 < 18; i_12 += 1) 
                {
                    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_19 [i_0] [12] [(unsigned short)19] [i_0])) + (2147483647))) >> (((max((max((((/* implicit */int) var_8)), (var_4))), (((/* implicit */int) ((signed char) var_5))))) - (54307)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        arr_42 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0)))))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)145)) ? (1194620420U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4)))))) ^ (arr_37 [(signed char)5] [i_12 - 2] [i_7 - 1])));
                        var_23 = ((/* implicit */signed char) ((((_Bool) (short)32752)) && (((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0] [i_0] [3U] [i_0] [i_0] [i_0 + 1])) >> (((-11LL) + (41LL))))))));
                        var_24 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 17665908746937635274ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_2)))))));
                        arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0] = ((/* implicit */unsigned int) (signed char)-58);
                    }
                    arr_44 [16LL] [i_2] [i_7] [i_12] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_32 [(short)2]) ? (4294967282U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) (signed char)-121)) : ((+(((/* implicit */int) (signed char)-109)))))) - (((((/* implicit */int) arr_8 [i_0] [i_7 - 1] [i_0])) + (((/* implicit */int) var_0))))));
                }
                /* vectorizable */
                for (short i_14 = 1; i_14 < 18; i_14 += 1) 
                {
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((unsigned int) var_8))) - (((((/* implicit */_Bool) -337496108)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8404747667624794128LL)))));
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) 421665628))));
                }
                var_27 = ((/* implicit */unsigned short) 3768219509U);
                var_28 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_2] [i_0]);
                /* LoopSeq 3 */
                for (short i_15 = 0; i_15 < 20; i_15 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        arr_55 [i_0] [i_2] [i_0] [i_0] [i_16] [i_2] [i_2] = ((/* implicit */unsigned int) ((((min((((/* implicit */unsigned long long int) (signed char)-66)), (3494852170303746854ULL))) << (((/* implicit */int) ((var_6) > (((/* implicit */unsigned long long int) 33554431))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -251905573))))))));
                        var_29 = ((/* implicit */unsigned char) (short)-16003);
                    }
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_21 [i_0 + 1] [i_0 - 3])))) && (((max((((/* implicit */unsigned long long int) (signed char)10)), (3ULL))) > (((/* implicit */unsigned long long int) ((var_9) - (((/* implicit */long long int) 4294967295U)))))))));
                }
                for (unsigned char i_17 = 2; i_17 < 19; i_17 += 2) 
                {
                    arr_59 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((3777246154U) >> ((((((_Bool)1) ? (((/* implicit */int) arr_47 [i_0])) : (((/* implicit */int) arr_41 [i_17 - 1] [i_17 - 2] [19] [12] [i_17] [i_17 - 2] [i_17 + 1])))) + (59)))))) : (((/* implicit */_Bool) ((3777246154U) >> ((((((((_Bool)1) ? (((/* implicit */int) arr_47 [i_0])) : (((/* implicit */int) arr_41 [i_17 - 1] [i_17 - 2] [19] [12] [i_17] [i_17 - 2] [i_17 + 1])))) + (59))) - (58))))));
                    var_31 -= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_17]))))) * ((((+(((/* implicit */int) (unsigned short)0)))) ^ ((~(((/* implicit */int) (unsigned char)122))))))));
                    var_32 = 1929211304U;
                }
                for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 3) 
                {
                    var_33 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)54)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93))) | (8ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) - (arr_14 [i_0] [i_2] [i_0])))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (short)32748)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 1) 
                    {
                        var_34 ^= ((/* implicit */unsigned char) var_2);
                        var_35 = ((/* implicit */int) max((var_35), (336960781)));
                    }
                }
            }
            var_36 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 7854407899568280113ULL)) ? (1427208050) : (((/* implicit */int) arr_1 [i_0 - 2]))))));
        }
        for (signed char i_20 = 1; i_20 < 18; i_20 += 4) 
        {
            arr_68 [12U] |= ((/* implicit */unsigned int) 8);
            arr_69 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9087741071055897219ULL))));
            /* LoopNest 3 */
            for (unsigned int i_21 = 0; i_21 < 20; i_21 += 1) 
            {
                for (unsigned char i_22 = 0; i_22 < 20; i_22 += 1) 
                {
                    for (unsigned long long int i_23 = 0; i_23 < 20; i_23 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((((var_5) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65514))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_0 - 2] [i_0 - 2] [i_20] [(signed char)0] [i_20] [i_20] [i_20 + 2]))))) : ((-(((/* implicit */int) arr_54 [i_0 - 2] [i_0 - 2] [i_20] [(unsigned char)12] [12ULL] [i_20] [i_20 + 2])))))))));
                            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) arr_48 [i_23] [i_23] [i_21] [i_22]))));
                        }
                    } 
                } 
            } 
            arr_77 [i_0 + 1] [i_0] [i_20] = ((/* implicit */signed char) var_8);
        }
    }
    var_39 = ((/* implicit */unsigned char) var_8);
}
