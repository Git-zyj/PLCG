/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101976
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
    var_12 = ((/* implicit */signed char) var_6);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_13 ^= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)60))))));
                    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)205)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [(short)4] [i_1] = (~(((((/* implicit */_Bool) 15392559394499256512ULL)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (unsigned char)179)))));
                        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1])) ? (max((((/* implicit */unsigned long long int) arr_1 [i_3])), (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)3242)))))))) ? (((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)96))))) / ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_11 [i_0] [i_0] [i_1] [i_2] [i_2]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (unsigned char)195))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        arr_16 [i_1] = ((/* implicit */unsigned long long int) (~(arr_7 [i_1] [i_1 + 1])));
                        /* LoopSeq 2 */
                        for (int i_5 = 1; i_5 < 13; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5 + 2] [i_4] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1 - 3]))) : (((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                            var_17 = ((/* implicit */short) arr_3 [i_1] [i_1 - 2] [i_1 + 1]);
                        }
                        for (unsigned long long int i_6 = 3; i_6 < 14; i_6 += 3) 
                        {
                            arr_22 [i_0] [i_1 + 1] [i_2] [i_1] [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)196))));
                            var_18 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1896)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8192))) : (13874909241568309795ULL)));
                        }
                        /* LoopSeq 4 */
                        for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) var_9);
                            arr_26 [i_0] [i_2] [i_4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_5))) ? (arr_24 [11ULL] [i_0] [i_1] [i_1] [i_4] [11ULL]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_5)))))));
                            var_20 = (+(((/* implicit */int) arr_23 [i_2 - 1] [i_2] [i_2 - 1] [i_1] [i_1 - 1])));
                            var_21 = ((/* implicit */short) var_9);
                            arr_27 [i_4] [i_4] [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) / (((/* implicit */int) arr_5 [i_2 - 1] [i_1 - 1]))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            var_22 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)183)))))));
                            arr_30 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))) / (7993654914484383949LL))))));
                            var_24 = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_9 [i_1 + 1] [i_2] [i_4] [13LL]))) == ((-(((/* implicit */int) var_11))))));
                        }
                        for (short i_9 = 3; i_9 < 15; i_9 += 3) 
                        {
                            arr_34 [4U] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                            var_25 = ((/* implicit */int) var_2);
                        }
                        for (signed char i_10 = 0; i_10 < 16; i_10 += 1) 
                        {
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_24 [i_10] [i_4] [i_4] [i_1] [i_1] [i_0]))));
                            arr_38 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_10] [i_10] [i_10] [i_10] [i_10] [(unsigned short)15])) ? (arr_6 [i_0] [(unsigned char)0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [i_1 - 3] [i_4] [i_4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))) : ((~(arr_6 [i_1] [i_4] [i_2] [i_1])))));
                            arr_39 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)60))))));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_11 = 0; i_11 < 23; i_11 += 1) 
    {
        var_27 = ((/* implicit */unsigned long long int) var_11);
        arr_42 [i_11] |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) (signed char)3))));
        var_28 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_41 [i_11])))) ? (var_3) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_40 [i_11])))))));
        arr_43 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-4))))) ? (((/* implicit */int) ((unsigned char) arr_40 [13ULL]))) : (((/* implicit */int) arr_41 [i_11]))))) ? (((/* implicit */int) arr_40 [i_11])) : ((+(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))))));
    }
    /* vectorizable */
    for (unsigned char i_12 = 3; i_12 < 12; i_12 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_13 = 0; i_13 < 14; i_13 += 1) 
        {
            for (unsigned short i_14 = 1; i_14 < 13; i_14 += 1) 
            {
                for (unsigned short i_15 = 0; i_15 < 14; i_15 += 2) 
                {
                    {
                        var_29 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_5))))) - (arr_6 [0U] [i_13] [i_13] [i_15])));
                        var_30 = ((/* implicit */signed char) (~(arr_19 [i_12 - 3] [i_12] [i_12])));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_16 = 2; i_16 < 10; i_16 += 1) 
        {
            var_31 = ((/* implicit */unsigned short) arr_37 [i_12] [i_12 - 2] [i_12] [i_12]);
            /* LoopNest 3 */
            for (signed char i_17 = 2; i_17 < 11; i_17 += 2) 
            {
                for (unsigned long long int i_18 = 3; i_18 < 13; i_18 += 3) 
                {
                    for (short i_19 = 1; i_19 < 13; i_19 += 3) 
                    {
                        {
                            arr_68 [i_12] [(short)13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1159122338422903227ULL))));
                            var_32 = ((/* implicit */unsigned short) (+(arr_32 [i_12] [i_18 - 1] [i_16 + 1] [i_18 - 1] [i_16 + 1])));
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_50 [i_12] [i_18] [i_17] [i_12])) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)61)) || (((/* implicit */_Bool) 18446744073709551611ULL)))))));
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_17 [i_12] [i_12] [i_19] [i_18] [(short)0] [i_18] [i_12])))))));
                            var_35 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_12] [i_12] [i_17] [i_18 - 3] [i_12 + 1])) ? (((/* implicit */int) arr_15 [i_12] [i_18] [i_17] [i_18 - 3])) : (((/* implicit */int) arr_36 [i_12 + 1] [i_16] [i_17] [i_18 - 3] [i_19] [i_18 - 3] [i_17 + 1]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_20 = 0; i_20 < 14; i_20 += 1) 
            {
                for (unsigned short i_21 = 0; i_21 < 14; i_21 += 3) 
                {
                    {
                        var_36 += ((/* implicit */unsigned short) (+((~(((/* implicit */int) (short)27101))))));
                        var_37 = ((/* implicit */unsigned short) var_8);
                        arr_74 [i_16] [i_12 - 1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_21] &= ((/* implicit */long long int) ((1190285730U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)82)))));
                        var_38 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [(unsigned short)6])) ? (arr_44 [(_Bool)1]) : (arr_44 [10U])));
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_12 + 1])) + (var_10)));
                    }
                } 
            } 
            var_40 += ((/* implicit */_Bool) arr_36 [i_12] [i_12 - 3] [i_12 + 1] [i_12] [i_12 - 3] [i_12] [i_16]);
            var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) (-(((/* implicit */int) (unsigned char)51)))))));
        }
    }
}
