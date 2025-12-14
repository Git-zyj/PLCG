/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116787
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
    var_14 = ((/* implicit */short) var_9);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                var_15 = ((/* implicit */short) var_4);
                arr_10 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1])) - (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 1]))));
                arr_11 [i_1] [i_1] [i_2] = (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_9 [i_0] [1U] [i_0])) : (((/* implicit */int) var_1)))));
            }
            arr_12 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3875271540U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_3 [i_0])))) ? (((/* implicit */int) arr_8 [i_1] [i_1] [(unsigned short)4])) : ((-(((/* implicit */int) (short)-32753))))));
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65024)) ? (((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)512)))) : (((/* implicit */int) (unsigned short)65028)))))));
        }
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            arr_17 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) (-(arr_1 [i_3])));
            var_17 = ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0]))))) - (((2147481600U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)513))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            /* LoopSeq 3 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                arr_26 [i_5] [i_4] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_5 + 1] [i_5 + 1] [i_5])) ? (((/* implicit */int) arr_5 [i_5 + 1] [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) arr_22 [i_5 + 1] [i_5 + 1] [i_5 + 1])))) >> ((((-(((/* implicit */int) arr_22 [i_5 + 1] [i_5 + 1] [i_5])))) - (26716)))));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0]))))) ? (var_5) : (((/* implicit */long long int) (-(((((/* implicit */int) var_8)) * (((/* implicit */int) arr_15 [i_5 + 1] [i_0])))))))));
                arr_27 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32754)) ? (((/* implicit */int) (short)-32727)) : (((/* implicit */int) (unsigned short)508))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_25 [i_0] [i_4]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32760)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_4] [i_4] [i_5])) : (-174424513)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_16 [i_0])), (var_0)))) : ((-(arr_23 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) + (((/* implicit */int) arr_4 [i_4])))))));
            }
            for (short i_6 = 3; i_6 < 18; i_6 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_6 [i_0] [i_0]))));
                arr_32 [i_0] [i_0] [i_4] [i_6] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [5U])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2578460918U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32756))) : (arr_23 [i_6])))) : (((unsigned long long int) arr_8 [i_6] [i_4] [i_4])))) / (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_9 [i_0] [i_4] [i_6])))), (((((/* implicit */int) arr_29 [i_6])) * (((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))))))));
            }
            for (short i_7 = 3; i_7 < 18; i_7 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (int i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */_Bool) var_4);
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) var_13))))) ? (arr_21 [i_7] [i_7 - 1] [i_7 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_7 + 1] [i_4] [i_7 + 1])))))) ? ((+((-(arr_18 [i_7]))))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) arr_0 [12LL])) : (3581113888U))))))));
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_7]))))) ? ((-((~(arr_24 [i_8]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_8] [i_4] [i_7])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_8])) : (((/* implicit */int) var_2))))) : (((3581113888U) >> (((((/* implicit */int) (unsigned short)508)) - (494)))))))));
                    var_24 = max(((-(min((var_10), (((/* implicit */int) var_1)))))), ((~(((/* implicit */int) var_6)))));
                }
                for (int i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
                {
                    var_25 -= ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_4] [i_7 - 1]))))) ? (((/* implicit */int) arr_28 [i_0] [i_7] [i_0])) : ((+(arr_19 [i_0] [i_4]))));
                    arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) max((arr_13 [i_7 + 1] [i_7 + 2]), (((/* implicit */unsigned int) var_10)))));
                    var_26 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) var_6)) : (arr_19 [i_4] [i_0])))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_20 [i_4] [(_Bool)1])))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                }
                for (int i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (-755812342) : (((/* implicit */int) var_9)))), ((-(((/* implicit */int) (short)32760))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-18583))) / (arr_36 [i_7 + 1] [i_7 - 3] [i_7 - 2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)533)) / (((/* implicit */int) (_Bool)1))))) ? (arr_35 [i_0] [i_4] [i_7 - 2] [i_10]) : (((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_46 [i_7] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_7] [i_10])))))))))))));
                    arr_49 [i_0] [i_4] [i_7] [i_4] &= ((/* implicit */signed char) (~(((/* implicit */int) min((var_2), (arr_9 [i_7 - 3] [i_7 - 1] [i_7 + 1]))))));
                }
                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (~(min((((/* implicit */int) min(((short)18583), (arr_37 [i_0] [i_0] [i_0] [i_4] [i_7 - 3] [i_7])))), (-923894865))))))));
            }
            var_29 = ((/* implicit */int) min((var_29), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_33 [i_4] [i_0])) : (((/* implicit */int) arr_33 [i_0] [i_4]))))) ? ((-(((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) min((arr_4 [i_4]), (arr_4 [i_0]))))))));
            /* LoopSeq 1 */
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                arr_53 [i_11] [i_4] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_40 [i_11] [i_11] [i_11] [i_11])))) ? (min((((((/* implicit */_Bool) arr_5 [0ULL] [i_4] [i_11])) ? (arr_44 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_4] [i_11]))))), (((/* implicit */unsigned int) arr_31 [i_0] [i_4])))) : ((~(var_3)))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */short) arr_16 [i_0]);
                            var_31 *= ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)30737));
                            var_32 ^= ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_24 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_0] [i_11] [(_Bool)1] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_0] [i_4] [i_0] [i_0]))) : (arr_47 [i_0] [i_4] [i_4] [i_12])))) : (min((((/* implicit */long long int) var_4)), (arr_39 [i_0] [i_0] [i_11] [i_11]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-28608)) ? (((/* implicit */int) (short)-32748)) : (((/* implicit */int) (short)-18583)))))));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 3 */
        for (unsigned short i_14 = 2; i_14 < 19; i_14 += 2) 
        {
            arr_63 [i_0] [i_0] = ((/* implicit */signed char) (+(((arr_15 [i_0] [i_14 + 1]) ? (((/* implicit */int) arr_59 [i_14 + 1])) : (((/* implicit */int) var_1))))));
            var_33 *= ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) 2578460927U)))), ((!(((/* implicit */_Bool) var_3))))));
            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_14] [1U] [i_14])) ? (((/* implicit */int) (short)-32755)) : (arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_0] [i_14])) ? (var_0) : (((/* implicit */int) arr_6 [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_14 - 1]))) : (var_3)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_14 + 1] [i_14]))) % (arr_46 [i_14 - 1] [i_14 + 1]))) : (min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (short)32726)) ? (375005225U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28608))))))))))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 1) 
        {
            var_35 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (arr_25 [i_15] [i_0])))))) ? (arr_39 [i_15] [i_15] [10ULL] [i_15]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_3)))) ? (((((/* implicit */_Bool) 1227389437U)) ? (var_10) : (((/* implicit */int) arr_16 [i_15])))) : (arr_30 [i_0] [i_0]))))));
            arr_66 [(unsigned short)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [(unsigned short)19] [(unsigned short)19])) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32760))) - (arr_13 [i_0] [i_15])))) ? ((+(((/* implicit */int) (unsigned short)50867)))) : ((~(((/* implicit */int) (short)18603)))))) : ((~(((/* implicit */int) arr_2 [i_15]))))));
            arr_67 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_42 [i_0] [i_15] [(unsigned short)2] [i_0] [i_0]);
        }
        for (unsigned short i_16 = 1; i_16 < 17; i_16 += 3) 
        {
            var_36 = ((/* implicit */unsigned int) (+((+(((((/* implicit */_Bool) arr_4 [i_0])) ? (12264026441793477624ULL) : (((/* implicit */unsigned long long int) arr_19 [i_0] [i_16 + 3]))))))));
            var_37 = ((/* implicit */int) max((var_37), ((+(((/* implicit */int) var_6))))));
            var_38 = ((/* implicit */short) ((int) ((((/* implicit */int) ((arr_24 [4]) == (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) & (((int) arr_24 [i_0])))));
            arr_70 [i_0] = min((((((/* implicit */_Bool) arr_48 [i_16] [i_16 + 1] [i_16 + 2] [i_16 - 1])) ? (((/* implicit */int) ((unsigned short) 923894861))) : (((/* implicit */int) arr_6 [i_16] [i_16])))), (((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */int) arr_7 [i_0])))));
        }
    }
    for (long long int i_17 = 0; i_17 < 20; i_17 += 2) 
    {
        arr_73 [i_17] = ((/* implicit */unsigned short) ((int) var_7));
        /* LoopNest 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (unsigned char i_19 = 3; i_19 < 18; i_19 += 3) 
            {
                {
                    arr_81 [i_17] [i_18] [i_19] = ((/* implicit */_Bool) (-((+(((((/* implicit */_Bool) arr_8 [i_17] [i_18] [i_19 + 2])) ? (((/* implicit */unsigned int) arr_74 [(short)13] [i_18])) : (arr_24 [i_19])))))));
                    var_39 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_5 [i_19 - 1] [i_19 + 2] [i_19 + 1])))), (((/* implicit */int) min((arr_5 [i_19 - 1] [i_19] [i_19 + 1]), (arr_5 [i_19 - 1] [i_19] [i_19 + 1]))))));
                    var_40 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_33 [i_19 - 3] [i_17])) : (((/* implicit */int) arr_33 [0U] [i_17]))))));
                    var_41 = ((/* implicit */unsigned long long int) arr_4 [i_17]);
                }
            } 
        } 
        arr_82 [i_17] = ((/* implicit */unsigned short) max((var_3), (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_17] [i_17]))) : (2578460918U))) : (arr_13 [i_17] [i_17])))));
        arr_83 [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_54 [i_17] [i_17] [i_17] [i_17] [(_Bool)1])) ? (((/* implicit */long long int) min((((/* implicit */int) var_9)), (var_10)))) : (var_5))) : (((/* implicit */long long int) var_10))));
        var_42 += ((/* implicit */unsigned long long int) ((((var_4) << (((((/* implicit */int) arr_28 [i_17] [i_17] [i_17])) - (50204))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_17] [i_17] [i_17])) ? (((/* implicit */int) arr_14 [i_17] [i_17] [i_17])) : (((/* implicit */int) arr_28 [i_17] [i_17] [i_17])))))));
    }
}
