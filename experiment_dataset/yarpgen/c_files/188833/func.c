/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188833
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
    var_13 &= ((/* implicit */short) (-(0U)));
    var_14 &= ((/* implicit */long long int) var_8);
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((unsigned long long int) var_12)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((unsigned short) arr_1 [i_0] [i_0]);
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(1336229472625211067ULL))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned int) min((((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) max(((signed char)-64), (((/* implicit */signed char) (_Bool)0)))))));
                    arr_11 [(_Bool)1] [i_1 - 3] [(_Bool)1] [i_0] = ((((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_1] [i_2]))) != ((-(min((arr_7 [i_0] [i_0] [i_0]), (arr_7 [(unsigned char)12] [i_0] [i_2]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        arr_14 [i_3] = (~(((/* implicit */int) var_2)));
        /* LoopSeq 3 */
        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
        {
            var_18 |= ((/* implicit */_Bool) arr_6 [i_4]);
            var_19 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) arr_15 [i_4])) % (((/* implicit */int) var_4)))));
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
            {
                arr_21 [i_3 + 1] [i_3] [i_3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) 0)) : (arr_8 [(unsigned char)2] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5] [i_4] [i_3 + 1])))));
                arr_22 [8] [8] [i_5] |= ((/* implicit */unsigned short) ((unsigned long long int) var_3));
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    for (int i_7 = 4; i_7 < 11; i_7 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) ((unsigned int) var_6));
                            var_21 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_27 [i_7] [i_7] [i_7 - 4] [i_7 - 2] [i_7 - 4]))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned short) max((var_23), ((unsigned short)0)));
                var_24 |= (-(((/* implicit */int) ((unsigned short) var_6))));
            }
            var_25 = ((/* implicit */int) var_12);
        }
        for (signed char i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            arr_42 [i_11] [i_11] [i_10] [i_11] = ((/* implicit */unsigned short) ((signed char) arr_27 [i_3 + 1] [i_3 + 1] [i_10] [7] [i_9]));
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) -1576612738))))))));
                        }
                        arr_43 [i_11] = ((/* implicit */unsigned int) ((short) var_3));
                    }
                } 
            } 
            arr_44 [i_3 + 1] [i_3 + 1] = ((/* implicit */signed char) (~(var_8)));
            var_27 = arr_29 [i_3];
        }
        for (signed char i_13 = 0; i_13 < 12; i_13 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned int) arr_2 [i_3 + 1]);
            /* LoopSeq 3 */
            for (signed char i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (short i_15 = 4; i_15 < 9; i_15 += 4) 
                {
                    for (unsigned char i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        {
                            var_29 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-16))))) ? (((/* implicit */int) arr_37 [i_15] [i_13])) : (((int) arr_37 [i_14] [i_14]))));
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((unsigned int) arr_37 [i_13] [i_15 - 2]))));
                            arr_54 [i_3] [i_13] [i_13] [(unsigned short)5] [i_16] = (+(((arr_17 [2U] [2U] [0LL]) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65390))))));
                            arr_55 [i_16] [i_13] [i_16] [8U] [(unsigned short)9] [i_15 + 3] [9] = ((long long int) var_5);
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_49 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_13])) % (((/* implicit */int) arr_46 [i_3]))));
            }
            for (short i_17 = 0; i_17 < 12; i_17 += 4) /* same iter space */
            {
                var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3 + 1]))) : (var_8)));
                var_33 = ((/* implicit */_Bool) arr_13 [i_3]);
                var_34 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_3)) : (var_1)))) ? (((/* implicit */int) arr_27 [i_13] [i_3 + 1] [i_13] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [(unsigned char)1] [(unsigned char)1] [(unsigned char)1] [i_3 + 1] [i_3])))))));
                var_35 = ((/* implicit */unsigned int) arr_28 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3 + 1]);
            }
            for (short i_18 = 0; i_18 < 12; i_18 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_19 = 0; i_19 < 12; i_19 += 2) 
                {
                    arr_65 [1LL] [i_13] [i_18] [i_13] [i_3] [(unsigned char)0] = ((/* implicit */signed char) arr_5 [9ULL]);
                    var_36 = ((arr_47 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))) : (arr_53 [i_3 + 1] [i_3 + 1] [i_3 + 1] [(unsigned short)9] [i_3 + 1] [i_13]));
                }
                var_37 = ((/* implicit */int) min((var_37), (var_11)));
            }
        }
        arr_66 [11] [i_3] = ((/* implicit */int) arr_48 [i_3] [i_3] [i_3 + 1]);
        arr_67 [(unsigned char)8] = ((/* implicit */unsigned int) arr_0 [(unsigned short)2]);
    }
}
