/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110557
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
    var_11 += ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) -6789081525462524163LL)) ? (((/* implicit */unsigned long long int) 4294967286U)) : (4677703222321275612ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((3695911882513493032ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))) > (max((((/* implicit */unsigned long long int) ((_Bool) var_9))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (13769040851388276003ULL)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_12 &= ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_3 = 3; i_3 < 19; i_3 += 3) 
                {
                    arr_10 [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (((!(((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) 3695911882513493032ULL))))) >> (((((/* implicit */int) ((signed char) var_8))) + (75)))));
                    var_13 |= ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (arr_6 [i_0] [i_0] [(unsigned char)19] [i_0])))), ((-(17128377903263142118ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3] [3ULL] [i_3 - 2] [i_3])) ? (((/* implicit */int) arr_5 [i_3] [i_3] [i_3 + 2] [i_3 - 2])) : (((/* implicit */int) arr_5 [i_3 + 2] [i_3 + 2] [i_3 - 2] [i_3])))))));
                    arr_11 [i_0] [i_0] [i_2] [i_3 - 3] [i_3] = ((((/* implicit */_Bool) ((signed char) var_8))) ? (((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) && (((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) var_1))))))))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) arr_9 [i_3]))));
                    arr_12 [i_3] = ((/* implicit */short) ((unsigned char) arr_2 [16ULL] [i_1 + 1]));
                }
                var_15 = ((/* implicit */long long int) arr_4 [(short)12] [i_1]);
                arr_13 [(unsigned char)18] [(unsigned char)18] [(unsigned char)18] = ((/* implicit */long long int) (~(min((((/* implicit */int) ((signed char) 4677703222321275600ULL))), ((~(((/* implicit */int) var_10))))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 1489840074U);
                        arr_25 [i_4] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (1601676827699654338ULL))));
                        arr_26 [i_0] [i_1] [i_6] = ((/* implicit */unsigned int) (((~(9223372036854775805LL))) - (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 3695911882513493027ULL))))));
                    }
                    for (unsigned int i_7 = 3; i_7 < 18; i_7 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_0] [i_7] [i_7 - 1] [i_5 - 1] [i_7 + 3])) & (((/* implicit */int) arr_28 [i_0] [i_7] [4ULL] [(signed char)7] [4ULL]))));
                        arr_30 [i_7] [i_5 - 2] [i_7] [i_7] [1U] [i_0] = ((/* implicit */unsigned char) arr_27 [i_0] [i_0] [(unsigned char)7]);
                        var_17 *= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)32767)) : (((((/* implicit */int) (_Bool)0)) << (((4139888733989417594ULL) - (4139888733989417590ULL)))))));
                    }
                    for (unsigned int i_8 = 3; i_8 < 18; i_8 += 3) /* same iter space */
                    {
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_28 [i_0] [i_0] [i_0] [i_5] [i_8]))));
                        var_19 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (13769040851388276003ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) 3642056253U))))))));
                    }
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned int) (~(arr_7 [i_0] [i_1 + 1] [i_0] [i_5 - 3])))))));
                    var_21 ^= (-(var_4));
                }
                var_22 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)1))));
            }
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                arr_36 [i_0] [i_9 - 1] = ((/* implicit */signed char) ((unsigned short) arr_19 [(_Bool)1] [i_1] [i_1 - 2] [i_1] [i_1 - 2] [i_1]));
                var_23 = var_7;
            }
            /* LoopSeq 1 */
            for (signed char i_10 = 0; i_10 < 21; i_10 += 1) 
            {
                arr_41 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_7);
                /* LoopSeq 3 */
                for (signed char i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
                {
                    arr_44 [i_0] [i_10] [i_11] = ((/* implicit */signed char) var_1);
                    var_24 = ((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) arr_43 [i_0] [(unsigned char)0] [i_0]))), (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((unsigned long long int) arr_42 [i_0] [i_0] [i_10]))));
                        arr_48 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 2078310292057331298LL))))) == (((/* implicit */int) arr_46 [i_0] [i_1] [i_0] [i_12] [i_12]))));
                        arr_49 [i_0] [i_12] [i_10] [i_12] = (-((((!(((/* implicit */_Bool) 9223372036854775805LL)))) ? (2509836549U) : (var_4))));
                        arr_50 [i_0] [i_0] [i_1 + 1] [i_10] [i_10] [i_12] [i_12] = (i_12 % 2 == zero) ? (((/* implicit */unsigned char) min((((/* implicit */unsigned int) (((~(((/* implicit */int) arr_39 [i_0] [i_1] [i_10])))) << ((((~(((/* implicit */int) arr_46 [i_1 - 1] [i_12] [i_10] [i_12] [i_0])))) + (264)))))), (((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)242))))) % (min((1785130745U), (((/* implicit */unsigned int) var_1))))))))) : (((/* implicit */unsigned char) min((((/* implicit */unsigned int) (((~(((/* implicit */int) arr_39 [i_0] [i_1] [i_10])))) << ((((((~(((/* implicit */int) arr_46 [i_1 - 1] [i_12] [i_10] [i_12] [i_0])))) + (264))) - (196)))))), (((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)242))))) % (min((1785130745U), (((/* implicit */unsigned int) var_1)))))))));
                    }
                }
                for (signed char i_13 = 0; i_13 < 21; i_13 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)232))));
                    arr_55 [i_0] [i_0] [i_10] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (var_4)))) ^ (((min((((/* implicit */long long int) var_9)), (arr_31 [i_13] [i_10] [i_0] [i_1] [i_0]))) / (((/* implicit */long long int) (-(arr_18 [i_0] [i_1] [i_0] [20LL]))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 0; i_14 < 21; i_14 += 1) 
                    {
                        var_27 = min((((/* implicit */long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [6LL] [i_10] [14ULL])))), (((/* implicit */int) var_5))))), (((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 106102348551509875ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1)))))) : (9113329466496513121LL))));
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-19705)))))));
                        arr_59 [i_0] [i_1 - 1] [i_10] [12U] [i_14] = ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_0))))))) % ((-(arr_27 [i_0] [i_10] [8LL]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 1; i_15 < 18; i_15 += 3) 
                    {
                        var_29 = ((/* implicit */_Bool) max(((unsigned char)62), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)59)) > (((/* implicit */int) (signed char)114)))))));
                        arr_62 [i_0] [i_0] [i_0] [i_13] [i_15 + 2] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) ((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (((3695911882513493032ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) ^ (((unsigned long long int) min((((/* implicit */unsigned int) var_10)), (var_3))))));
                        arr_63 [i_0] [7LL] [i_0] [i_0] = ((/* implicit */_Bool) arr_43 [i_0] [i_0] [(unsigned char)2]);
                    }
                }
                /* vectorizable */
                for (signed char i_16 = 0; i_16 < 21; i_16 += 4) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_9)))) | (((/* implicit */int) arr_34 [i_1 - 2] [i_1 + 1])))))));
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) var_3))));
                }
            }
        }
        /* vectorizable */
        for (unsigned short i_17 = 2; i_17 < 20; i_17 += 3) /* same iter space */
        {
            arr_68 [i_17] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)50))) % (3700109548U)));
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_42 [i_0] [i_0] [i_17]))))) == (((arr_61 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [7LL]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_54 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_57 [i_0] [i_0])) : (((((((/* implicit */int) var_8)) + (2147483647))) << (((((/* implicit */int) arr_56 [i_0] [i_0] [i_0] [i_0] [i_18] [i_18] [i_18])) - (127)))))))) ? ((~(((arr_64 [i_0] [i_0] [i_0] [i_0] [i_18] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_7 [i_0] [i_18] [i_0] [i_18]))))));
            arr_71 [i_0] = arr_61 [(_Bool)1] [i_0] [i_0] [i_0] [i_0];
        }
    }
}
