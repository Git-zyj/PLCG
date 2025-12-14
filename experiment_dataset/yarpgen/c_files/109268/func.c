/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109268
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned short) var_8);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) 2097151))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (short)32512))) + (((/* implicit */int) (unsigned short)28949))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_2] = ((/* implicit */int) ((_Bool) max(((~(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0])))), (((/* implicit */int) (unsigned short)50979)))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((((((((/* implicit */int) (short)-32)) + (2147483647))) >> (((/* implicit */int) arr_6 [i_0])))), (((/* implicit */int) arr_0 [i_5]))))), ((~(2172481392U))))))));
                    var_22 ^= ((/* implicit */signed char) ((int) ((((var_10) + (((/* implicit */long long int) var_17)))) / (((/* implicit */long long int) arr_4 [i_0] [i_0])))));
                }
                arr_21 [i_0] [i_1] [i_1] = min((var_6), (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0])));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (arr_4 [i_6] [i_6]) : ((-(((/* implicit */int) (short)-32))))))));
        /* LoopSeq 2 */
        for (int i_7 = 2; i_7 < 16; i_7 += 1) 
        {
            var_24 *= ((/* implicit */short) arr_16 [i_7] [i_7] [i_7] [i_6] [i_7] [i_7 - 2] [i_6]);
            /* LoopNest 3 */
            for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                for (unsigned int i_9 = 2; i_9 < 15; i_9 += 4) 
                {
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        {
                            var_25 &= ((/* implicit */unsigned char) var_11);
                            arr_37 [i_7 - 1] [i_7 - 1] [i_8] &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)38404)) > (((/* implicit */int) (short)-32743))));
                        }
                    } 
                } 
            } 
            arr_38 [i_6] = ((/* implicit */_Bool) ((arr_9 [i_7] [i_7] [i_7] [i_7 + 1]) ? ((~(((/* implicit */int) (_Bool)1)))) : (((arr_9 [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1]) ? (((/* implicit */int) (unsigned short)38404)) : (((/* implicit */int) arr_9 [i_7 - 1] [i_7 - 1] [i_7] [i_7 + 1]))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_36 [i_6] [i_6] [i_7] [i_6] [i_11])) : (((/* implicit */int) (signed char)-17)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_22 [i_7])) : (((/* implicit */int) arr_29 [i_7]))))))));
                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (var_17) : (((/* implicit */unsigned int) 520093696)))))));
                var_28 += ((/* implicit */unsigned long long int) (-(arr_11 [i_7 + 1])));
            }
            for (int i_12 = 3; i_12 < 15; i_12 += 3) 
            {
                var_29 ^= ((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) (-2147483647 - 1))) ? (-520093697) : (((/* implicit */int) (short)32512)))), (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)1)), ((unsigned short)0))))))));
                arr_44 [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_6])) ? (((((/* implicit */int) (unsigned short)36586)) - (((/* implicit */int) (short)-5250)))) : ((-(((/* implicit */int) var_8))))));
                /* LoopNest 2 */
                for (signed char i_13 = 3; i_13 < 17; i_13 += 2) 
                {
                    for (int i_14 = 1; i_14 < 17; i_14 += 2) 
                    {
                        {
                            var_30 ^= ((/* implicit */unsigned char) (((((-(520093674))) + (2147483647))) >> ((((+(((/* implicit */int) (unsigned short)56919)))) - (56909)))));
                            arr_51 [i_6] [i_6] [i_6] [i_13] [i_13] [i_13 + 1] [i_6] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_40 [i_6])), ((~(((/* implicit */int) arr_10 [i_7 - 1] [i_12 - 2] [i_13 - 1]))))));
                            arr_52 [i_7 + 2] [i_13] = (-(((/* implicit */int) arr_36 [i_6] [i_7] [i_12] [i_13] [i_14 + 1])));
                            var_31 = min((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)28)) : (-520093703))), (arr_24 [i_12]));
                            var_32 = ((unsigned short) ((((/* implicit */_Bool) arr_46 [i_7 + 1] [i_13])) ? (arr_46 [i_7 + 2] [i_13]) : (((/* implicit */int) (short)-39))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_15 = 1; i_15 < 17; i_15 += 1) 
            {
                arr_56 [i_6] = ((/* implicit */int) 14448751425986904595ULL);
                /* LoopSeq 1 */
                for (int i_16 = 3; i_16 < 14; i_16 += 2) 
                {
                    arr_59 [i_6] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_16] = ((/* implicit */unsigned int) var_13);
                    arr_60 [i_6] = ((/* implicit */unsigned short) var_17);
                }
            }
        }
        for (short i_17 = 0; i_17 < 18; i_17 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_18 = 0; i_18 < 18; i_18 += 2) 
            {
                for (unsigned int i_19 = 0; i_19 < 18; i_19 += 3) 
                {
                    for (short i_20 = 0; i_20 < 18; i_20 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) 1342990431))));
                            arr_69 [i_17] [i_17] [i_18] [i_19] [i_20] [i_18] = ((/* implicit */short) max((((unsigned int) arr_23 [i_6])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) (unsigned char)255)))))));
                            arr_70 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) max((((/* implicit */int) ((_Bool) max((((/* implicit */unsigned char) var_11)), (arr_8 [i_17] [i_17] [i_17] [i_19]))))), (((((/* implicit */_Bool) arr_46 [i_18] [i_18])) ? (((/* implicit */int) arr_36 [i_6] [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_42 [i_6]))))));
                        }
                    } 
                } 
            } 
            arr_71 [i_6] [i_6] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 520093728))))) : ((+(((/* implicit */int) (_Bool)1))))))));
            /* LoopSeq 2 */
            for (signed char i_21 = 0; i_21 < 18; i_21 += 4) 
            {
                var_34 ^= ((/* implicit */unsigned short) arr_49 [i_6] [i_6] [i_6] [i_6] [i_17] [i_17] [i_6]);
                var_35 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) ((unsigned short) arr_53 [i_6]))))));
            }
            for (short i_22 = 2; i_22 < 15; i_22 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_23 = 0; i_23 < 18; i_23 += 4) 
                {
                    for (unsigned char i_24 = 0; i_24 < 18; i_24 += 4) 
                    {
                        {
                            arr_84 [i_22] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_77 [i_23] [i_22 + 2] [i_22 - 1] [i_22 + 3])) * (((/* implicit */int) arr_77 [i_24] [i_22 + 1] [i_22 - 2] [i_22 - 2])))) / (((/* implicit */int) arr_77 [i_23] [i_22 - 2] [i_22 + 1] [i_22 - 2]))));
                            var_36 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((int) arr_63 [i_22]))) ? (((/* implicit */int) arr_25 [i_22 + 2] [i_22] [i_22 - 2])) : (max((520093702), (((/* implicit */int) (signed char)53)))))), (max(((+(var_6))), (((/* implicit */int) arr_31 [i_22 + 2] [i_22 + 2] [i_22 + 1] [i_17]))))));
                        }
                    } 
                } 
                var_37 &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_6] [i_17] [i_22 + 2] [i_22 + 3]))));
            }
        }
        arr_85 [i_6] = ((int) arr_27 [i_6]);
    }
    for (unsigned int i_25 = 0; i_25 < 18; i_25 += 2) /* same iter space */
    {
        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_86 [i_25] [i_25])))))));
        arr_89 [i_25] [i_25] = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_90 [i_25] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_83 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25] [i_25]))))), ((-(max((((/* implicit */int) arr_1 [i_25] [i_25])), (arr_82 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25])))))));
        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) (-(-2097156))))));
    }
    for (unsigned int i_26 = 0; i_26 < 18; i_26 += 2) /* same iter space */
    {
        var_40 = ((/* implicit */int) arr_7 [i_26]);
        var_41 = ((/* implicit */unsigned short) arr_34 [i_26] [i_26] [i_26] [i_26]);
        /* LoopNest 2 */
        for (signed char i_27 = 1; i_27 < 16; i_27 += 1) 
        {
            for (unsigned short i_28 = 1; i_28 < 17; i_28 += 4) 
            {
                {
                    arr_98 [i_27] [i_27] [i_27] [i_27] = ((/* implicit */signed char) max((((/* implicit */int) arr_57 [i_26] [i_26] [i_26] [i_27] [i_28])), ((+((-(var_6)))))));
                    /* LoopNest 2 */
                    for (short i_29 = 2; i_29 < 16; i_29 += 1) 
                    {
                        for (int i_30 = 3; i_30 < 16; i_30 += 3) 
                        {
                            {
                                arr_103 [i_27] [i_27] [i_27] [i_29] [i_29] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147418112)) ? (((/* implicit */int) arr_3 [i_29])) : (2147483642)))) ? (arr_68 [i_27] [i_27 - 1] [i_27] [i_27 + 2] [i_27 - 1] [i_27]) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))))))));
                                arr_104 [i_27] [i_28 + 1] [i_30] = ((/* implicit */unsigned short) arr_18 [i_26] [i_26]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_31 = 1; i_31 < 14; i_31 += 3) 
                    {
                        for (unsigned int i_32 = 0; i_32 < 18; i_32 += 4) 
                        {
                            {
                                var_42 -= ((/* implicit */_Bool) max((max(((~(((/* implicit */int) arr_8 [i_26] [i_28] [i_26] [i_26])))), (min((var_6), (((/* implicit */int) arr_7 [i_27 + 1])))))), ((~(((int) (_Bool)1))))));
                                var_43 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)33601)) : (2147483647)));
                            }
                        } 
                    } 
                    arr_110 [i_27] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(-2144262335)))))))));
                    arr_111 [i_27] [i_27] [i_27 + 2] [i_28 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(4294967286U)))) ? ((~((-(((/* implicit */int) (unsigned short)0)))))) : (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_86 [i_26] [i_28])))) <= ((-(((/* implicit */int) (signed char)102)))))))));
                }
            } 
        } 
    }
}
