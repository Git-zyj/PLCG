/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181375
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
    var_18 = ((unsigned long long int) (~(((var_14) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) ((arr_1 [i_0] [i_0]) != (((unsigned int) var_13))));
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_14)))) || (((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1]))));
            /* LoopSeq 4 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                var_21 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) % (var_17))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15699))));
                var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : ((-(var_5)))));
            }
            for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((var_2) >> (((((((/* implicit */int) arr_7 [i_0] [i_0] [i_3] [i_0])) & (((/* implicit */int) (unsigned char)120)))) - (98)))))));
                var_24 = ((/* implicit */unsigned short) (unsigned char)205);
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                {
                    for (unsigned short i_5 = 2; i_5 < 19; i_5 += 4) 
                    {
                        {
                            arr_15 [i_1] [i_1 - 1] [i_5] [i_1 - 1] [6U] &= ((/* implicit */unsigned long long int) var_1);
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((var_4) > (var_0))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_6 = 4; i_6 < 18; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        {
                            arr_21 [i_1] [i_0] [i_1 - 3] [i_1 + 1] [i_3 + 2] [i_6 - 3] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (arr_10 [i_6 - 1] [i_6 - 1] [i_1]) : (arr_10 [i_6 + 1] [i_6] [i_1])));
                            var_26 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)52893)) : (((/* implicit */int) (unsigned short)52893)))) != (((/* implicit */int) arr_5 [i_6]))));
                            var_27 = ((/* implicit */unsigned short) ((unsigned char) ((13191322092488904870ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
                            var_28 = ((/* implicit */unsigned char) var_9);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        {
                            arr_27 [i_0] [i_1] [i_3] [i_8] [i_8] [i_9] [i_9] = ((/* implicit */long long int) ((5326880928933584775ULL) >> (((((/* implicit */int) (unsigned char)136)) - (91)))));
                            arr_28 [i_1] [(unsigned short)5] [i_1] [i_3] [i_3] [(unsigned char)0] [i_9] = ((/* implicit */unsigned int) var_13);
                            var_29 = (+((~(arr_25 [i_1] [i_1] [16U] [i_0] [i_9]))));
                            var_30 = ((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 2] [i_3] [i_8])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_10 = 3; i_10 < 20; i_10 += 4) 
            {
                arr_33 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24))) + (var_0))));
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_10 - 2] [i_1 - 2] [i_1 - 2])) || (((/* implicit */_Bool) arr_7 [(unsigned short)5] [i_10 + 1] [i_1 - 2] [i_1 - 2]))));
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((unsigned long long int) arr_36 [i_0] [i_1 - 2] [20U] [i_11] [i_12] [i_11])) << ((((+(((/* implicit */int) arr_13 [i_0] [i_1 - 2] [(unsigned short)8] [i_11] [i_12] [i_11] [i_11])))) - (14229))))))));
                        }
                    } 
                } 
            }
            for (long long int i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                arr_42 [i_0] [i_1] [i_1 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_1] [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1])) ? (var_14) : (arr_25 [i_1] [i_1 - 1] [i_1] [i_1 - 3] [i_1 + 1])));
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    for (unsigned short i_15 = 2; i_15 < 19; i_15 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_13 [i_0] [i_1 - 1] [i_0] [i_14] [i_1 - 1] [(unsigned char)6] [i_14])) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                            var_34 = ((/* implicit */long long int) var_5);
                        }
                    } 
                } 
            }
        }
        for (unsigned short i_16 = 2; i_16 < 18; i_16 += 3) 
        {
            var_35 -= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_0]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) 6976848614036681857LL))) <= ((-(((/* implicit */int) arr_34 [i_0]))))));
            /* LoopNest 3 */
            for (unsigned char i_17 = 2; i_17 < 18; i_17 += 4) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 4) 
                {
                    for (unsigned short i_19 = 0; i_19 < 21; i_19 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) arr_6 [i_18] [i_16] [i_16 + 1])) : (((/* implicit */int) var_6))))));
                            var_38 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)181))));
                            var_39 = ((((/* implicit */_Bool) ((unsigned long long int) 2472012490338113339LL))) ? ((-(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_17 + 3] [i_17] [i_17] [i_17 + 1] [i_16 + 1] [i_16 + 1] [i_16 + 1]))));
                            var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_46 [i_0] [i_16] [i_17] [(unsigned short)10] [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (17231466433363038110ULL))))))));
                            var_41 &= ((/* implicit */unsigned long long int) ((long long int) (+(923468056U))));
                        }
                    } 
                } 
            } 
            var_42 = ((unsigned short) arr_12 [i_0] [i_0] [i_16] [i_16 - 2] [i_16] [i_16] [i_16]);
        }
        /* LoopNest 3 */
        for (unsigned char i_20 = 0; i_20 < 21; i_20 += 3) 
        {
            for (long long int i_21 = 0; i_21 < 21; i_21 += 3) 
            {
                for (unsigned short i_22 = 0; i_22 < 21; i_22 += 3) 
                {
                    {
                        var_43 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_22]))));
                        var_44 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)24)) : (((/* implicit */int) var_8)))) > (((/* implicit */int) ((var_12) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16384))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_23 = 0; i_23 < 11; i_23 += 4) 
    {
        var_45 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_61 [i_23]))) && (((/* implicit */_Bool) ((arr_25 [i_23] [(unsigned char)8] [i_23] [i_23] [12LL]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12643)))))))));
        arr_72 [i_23] = ((/* implicit */unsigned char) (unsigned short)52906);
    }
    /* vectorizable */
    for (unsigned short i_24 = 0; i_24 < 21; i_24 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_25 = 0; i_25 < 21; i_25 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_26 = 1; i_26 < 20; i_26 += 4) 
            {
                for (unsigned char i_27 = 0; i_27 < 21; i_27 += 4) 
                {
                    {
                        var_46 = ((/* implicit */unsigned char) (-(var_2)));
                        /* LoopSeq 3 */
                        for (unsigned short i_28 = 0; i_28 < 21; i_28 += 4) /* same iter space */
                        {
                            arr_87 [i_25] [i_25] [i_25] [i_27] [i_27] [i_27] = ((((var_17) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12670))))) >> ((((~(((/* implicit */int) var_1)))) + (34916))));
                            var_47 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_15)) % (((/* implicit */int) var_6))))) ^ (arr_22 [i_24] [i_25] [i_26 - 1] [i_27] [i_27] [i_28])));
                            arr_88 [i_25] [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_9)))))) / (arr_19 [(unsigned short)7] [i_28] [i_24] [i_27] [i_26 - 1])));
                        }
                        for (unsigned short i_29 = 0; i_29 < 21; i_29 += 4) /* same iter space */
                        {
                            var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_24] [i_24] [i_26 + 1])))))) | (var_17))))));
                            var_49 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_3))))));
                            arr_91 [i_25] [i_27] [i_27] [i_26] [i_25] [i_25] = ((/* implicit */long long int) ((unsigned short) var_14));
                        }
                        for (unsigned short i_30 = 0; i_30 < 21; i_30 += 4) /* same iter space */
                        {
                            var_50 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_47 [i_24] [i_26] [i_27]))));
                            arr_94 [8U] [i_25] [i_26] [20U] [i_25] [i_24] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_67 [i_24] [(unsigned short)12] [i_27] [i_30]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_25] [i_25]))) + (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4))))));
                        }
                    }
                } 
            } 
            var_51 = ((/* implicit */unsigned char) arr_11 [i_24] [i_25] [i_25] [i_24]);
        }
        for (unsigned long long int i_31 = 0; i_31 < 21; i_31 += 4) 
        {
            var_52 = ((/* implicit */unsigned char) arr_35 [i_24] [i_24] [i_31]);
            var_53 = ((/* implicit */unsigned long long int) ((var_16) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1))))));
        }
        var_54 = ((/* implicit */unsigned long long int) var_5);
        /* LoopNest 2 */
        for (unsigned short i_32 = 0; i_32 < 21; i_32 += 3) 
        {
            for (unsigned char i_33 = 0; i_33 < 21; i_33 += 4) 
            {
                {
                    var_55 |= ((/* implicit */long long int) (unsigned short)31824);
                    var_56 = ((/* implicit */long long int) var_10);
                }
            } 
        } 
        var_57 &= ((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_24] [i_24] [i_24] [(unsigned short)5])) * (((/* implicit */int) arr_31 [i_24] [i_24] [i_24] [i_24]))));
    }
    var_58 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned long long int) var_9)), (var_2))))) ? (var_12) : (((/* implicit */unsigned long long int) var_10))));
}
