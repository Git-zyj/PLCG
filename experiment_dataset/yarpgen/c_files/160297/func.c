/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160297
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) min((10419024912245705239ULL), (10419024912245705239ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) : (var_13)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            arr_13 [i_2 + 1] [i_4] [i_2] [i_1] [i_4] &= ((/* implicit */short) (+(((/* implicit */int) ((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197))))))));
                            arr_14 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_1);
                        }
                        var_21 = ((((/* implicit */_Bool) arr_3 [i_2] [i_1])) ? (var_0) : (((((/* implicit */_Bool) 1619078487)) ? (((/* implicit */int) var_6)) : (arr_9 [i_0] [i_0] [i_2] [i_0] [i_2]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_5 = 1; i_5 < 9; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    {
                        arr_21 [9] [i_1] [i_5 + 2] [i_6] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_5 - 1] [i_5 + 1]))));
                        arr_22 [i_6] [i_5] [(unsigned short)12] [i_0] = ((/* implicit */short) ((unsigned long long int) 947103345));
                        arr_23 [i_6] [i_5] [i_1] [2U] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_6 [(signed char)8] [i_1] [i_6])))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_5))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned short) ((int) arr_6 [i_1] [3] [i_0]));
            /* LoopNest 2 */
            for (short i_7 = 1; i_7 < 9; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (arr_17 [i_7] [i_7 + 2] [i_7 + 4]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_10)) : (var_16))))));
                        arr_29 [i_0] [(_Bool)1] [i_7 + 4] [10] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 10419024912245705239ULL)) ? (2177046194U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11)))));
                        var_24 = ((/* implicit */short) var_2);
                        arr_30 [i_8] [i_1] [i_7 + 1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_7 - 1] [i_8])) == (((/* implicit */int) var_12)))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                for (unsigned char i_11 = 1; i_11 < 12; i_11 += 2) 
                {
                    {
                        var_25 = ((unsigned int) (unsigned short)0);
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_9] [i_11 - 1] [i_11] [i_11 - 1])) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) arr_26 [i_0] [i_11 - 1] [i_11 + 1] [i_11 - 1])))))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (arr_25 [i_0] [i_0] [i_10] [6ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_9] [i_10] [i_10] [i_10] [i_11])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((_Bool) -628104016)))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 1; i_12 < 12; i_12 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12] [i_12] [i_12])) ? (var_9) : (((/* implicit */int) arr_10 [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_13] [i_12])))))));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17404170112933216553ULL)) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (signed char)3))));
                }
                for (signed char i_14 = 2; i_14 < 12; i_14 += 2) 
                {
                    arr_45 [i_12] [i_0] [i_0] [11U] = ((/* implicit */signed char) 10555365810830351605ULL);
                    var_30 = ((/* implicit */signed char) ((582464370) & (((/* implicit */int) arr_16 [i_12 + 1] [i_12] [i_12] [i_12 - 1]))));
                }
                var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) arr_4 [i_9])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))) : ((+(((/* implicit */int) (signed char)-13))))));
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 13; i_15 += 4) 
                {
                    for (unsigned char i_16 = 0; i_16 < 13; i_16 += 4) 
                    {
                        {
                            arr_50 [6LL] [i_9] [i_9] [i_15] [i_16] [i_12] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)122))));
                            arr_51 [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12817984416143172915ULL)) ? (((/* implicit */long long int) var_15)) : (arr_8 [i_0] [i_12 - 1] [i_12] [i_16])));
                            arr_52 [i_0] [i_0] [i_0] [i_12 - 1] [i_12] [i_15] [i_12] = ((/* implicit */unsigned char) arr_0 [i_12 + 1]);
                            var_32 = ((/* implicit */unsigned long long int) ((signed char) arr_11 [i_0] [i_12] [i_12] [i_12 - 1] [i_12] [i_15] [i_12]));
                        }
                    } 
                } 
            }
        }
        arr_53 [7ULL] = ((/* implicit */unsigned short) ((long long int) ((short) var_17)));
        /* LoopSeq 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_18 = 0; i_18 < 13; i_18 += 2) 
            {
                for (long long int i_19 = 0; i_19 < 13; i_19 += 3) 
                {
                    {
                        arr_61 [i_18] [i_18] [i_18] [i_19] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_17])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_55 [i_0] [i_18]))));
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (-(var_15))))));
                        arr_62 [i_0] [i_0] [i_0] [i_19] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-14089))));
                    }
                } 
            } 
            arr_63 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) ((_Bool) arr_57 [i_0] [i_17] [i_0] [i_17]));
            /* LoopNest 3 */
            for (long long int i_20 = 0; i_20 < 13; i_20 += 2) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (unsigned long long int i_22 = 2; i_22 < 10; i_22 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */_Bool) arr_27 [i_0] [i_17] [i_20] [i_21] [i_22] [i_22]);
                            var_35 += ((/* implicit */unsigned int) var_17);
                            var_36 = ((/* implicit */unsigned long long int) var_0);
                            var_37 += ((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_22 + 1] [i_22 - 1] [i_22 + 3]))));
                            arr_70 [i_17] [i_0] = ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
            } 
            arr_71 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_9))))));
            var_38 &= ((/* implicit */signed char) ((_Bool) arr_56 [i_0] [i_0] [i_0]));
        }
        for (unsigned char i_23 = 0; i_23 < 13; i_23 += 2) 
        {
            arr_76 [i_0] [i_23] &= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_8))))));
            arr_77 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)140))) : (arr_20 [i_0] [i_0] [i_0] [i_0])));
        }
        var_39 = ((/* implicit */_Bool) (-(13931532134678491232ULL)));
        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((1559653228U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74)))))) ? (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_68 [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) (~(((/* implicit */int) var_19)))))));
}
