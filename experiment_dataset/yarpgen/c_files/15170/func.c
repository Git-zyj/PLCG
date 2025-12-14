/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15170
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
    var_18 = ((/* implicit */unsigned short) var_6);
    var_19 = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_20 -= ((/* implicit */short) arr_6 [i_0] [(_Bool)1] [i_0] [(_Bool)1]);
                    arr_8 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_1 [14ULL])))))) : (min((var_9), (((/* implicit */long long int) 2147483647)))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            arr_11 [(unsigned short)3] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned char) arr_3 [(_Bool)1]));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
                /* LoopSeq 4 */
                for (int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    var_22 = ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [(unsigned char)17] [(unsigned char)17] [(_Bool)1])) : (((/* implicit */int) (unsigned short)61440)))) > (((/* implicit */int) arr_0 [i_3] [i_3])));
                    arr_17 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [(short)20] [i_3] [i_4])))))));
                    arr_18 [i_4] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_0]))));
                    var_23 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_14))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-7530))));
                        arr_25 [i_0] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
                    }
                    arr_26 [i_6] = ((/* implicit */unsigned char) (+(((int) arr_20 [(unsigned short)7] [i_3] [i_3] [i_4] [i_6] [i_3]))));
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    var_25 = arr_10 [i_8 - 1];
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_1 [i_8 - 1])) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                }
                for (short i_9 = 1; i_9 < 24; i_9 += 4) 
                {
                    arr_32 [i_0] [i_3] [i_4] [i_9] = ((/* implicit */unsigned short) arr_24 [i_0] [i_0] [i_3] [i_4] [i_0]);
                    arr_33 [i_0] [i_0] [i_0] |= ((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))));
                    arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_19 [i_0] [i_3] [i_0] [i_0])) ? (((/* implicit */int) arr_19 [i_0] [i_3] [i_4] [i_9 - 1])) : (((/* implicit */int) arr_19 [(short)4] [i_3] [i_4] [i_9 - 1])));
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        arr_38 [10ULL] [10ULL] [i_3] [i_4] [i_9] [i_10] = ((/* implicit */long long int) arr_15 [i_3] [i_9 + 1] [i_9 - 1] [i_4] [i_3]);
                        arr_39 [i_0] [i_3] [i_3] [(unsigned short)10] [i_10] = (+(arr_4 [i_10]));
                    }
                    for (unsigned int i_11 = 4; i_11 < 22; i_11 += 1) 
                    {
                        arr_42 [i_11] = ((/* implicit */unsigned long long int) 2312337548U);
                        var_27 -= var_6;
                        arr_43 [i_11] [i_4] [i_4] [i_11] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)32753))));
                        var_28 = ((/* implicit */short) (-(536870911U)));
                    }
                    var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                }
                arr_44 [i_4] [(unsigned short)23] [(short)21] [i_3] = ((/* implicit */unsigned short) var_17);
            }
            var_30 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_35 [i_0] [i_3] [i_3] [i_3] [i_0] [i_3] [i_0]))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 3) 
        {
            var_31 = ((/* implicit */int) max((arr_2 [9] [i_12] [9]), (((/* implicit */long long int) (unsigned short)43168))));
            var_32 = ((/* implicit */unsigned long long int) (_Bool)1);
            arr_48 [i_0] [i_12] = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_2)))) + (((((/* implicit */_Bool) (-(var_1)))) ? (arr_46 [i_0] [i_12]) : (((/* implicit */int) arr_15 [20LL] [i_12] [i_12] [i_12] [i_12]))))));
            /* LoopNest 3 */
            for (short i_13 = 1; i_13 < 21; i_13 += 3) 
            {
                for (short i_14 = 0; i_14 < 25; i_14 += 3) 
                {
                    for (short i_15 = 0; i_15 < 25; i_15 += 4) 
                    {
                        {
                            arr_58 [i_13] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_9 [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_1))), (((/* implicit */unsigned long long int) (~(3421658790U))))))) ? (min((max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_12] [i_0])), (arr_55 [i_0] [i_0]))), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned short) var_16))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_37 [i_13] [i_13 + 4] [i_13 + 1] [i_13] [i_13 + 1] [i_13] [23LL])))))));
                            var_33 |= ((/* implicit */_Bool) arr_19 [i_0] [i_15] [i_0] [i_0]);
                            var_34 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                        }
                    } 
                } 
            } 
        }
        var_35 |= ((/* implicit */_Bool) var_10);
    }
    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_17 = 0; i_17 < 22; i_17 += 4) 
        {
            arr_64 [i_16] [i_17] = ((/* implicit */long long int) ((((/* implicit */int) var_11)) >= ((~(((/* implicit */int) arr_52 [i_16] [i_17] [i_16] [(unsigned char)19]))))));
            arr_65 [i_17] [i_17] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)4109)), (arr_3 [i_16])))) ? (((((/* implicit */_Bool) arr_2 [i_16] [i_16] [i_17])) ? (((unsigned long long int) arr_2 [i_16] [i_16] [i_16])) : ((~(var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_16])))));
            arr_66 [i_16] [i_16] [i_17] = (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_2 [i_16] [i_16] [i_16]), (((/* implicit */long long int) arr_30 [(unsigned short)13])))))))) : ((+(((/* implicit */int) ((((/* implicit */int) (signed char)15)) == (1738624248)))))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_18 = 2; i_18 < 21; i_18 += 3) 
        {
            for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 3) 
            {
                for (long long int i_20 = 0; i_20 < 22; i_20 += 2) 
                {
                    {
                        arr_76 [i_16] [i_18] [i_19] [i_20] [(unsigned short)2] [i_20] = ((/* implicit */short) (-(((/* implicit */int) ((min((((/* implicit */unsigned long long int) -4065524237589191945LL)), (15287056927162312897ULL))) <= ((+(5329446673527698236ULL))))))));
                        arr_77 [i_16] [i_18] [i_16] [i_16] = ((/* implicit */unsigned short) max((arr_2 [i_18 - 1] [i_18 - 1] [i_18 + 1]), (((/* implicit */long long int) ((unsigned short) arr_2 [i_18 + 1] [(unsigned short)15] [i_18 - 1])))));
                        var_36 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_20] [i_18 - 2]))) > (var_5))))));
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */long long int) var_10);
    }
    var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))) ? (var_5) : ((+((-(var_10)))))));
}
